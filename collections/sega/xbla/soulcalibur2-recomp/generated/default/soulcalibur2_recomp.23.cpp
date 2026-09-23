#include "soulcalibur2_funcs.23.h"

DEFINE_REX_FUNC(sub_820E0F48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fsubs f12,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f7,f8
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// stfs f1,100(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fneg f0,f2
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fneg f7,f3
	ctx.f7.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f0,140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmsubs f11,f6,f9,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, -ctx.f11.f64)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// fdivs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f13,124(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fdivs f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// stfs f7,164(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f4,192(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f5,196(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f11,200(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x820E1018;
	sub_820E0368(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820ED4D8) {
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
	ctx.lr = 0x820ED4E0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x820ED4E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32170
	r30.s64 = -2108293120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-28236(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// bl 0x82202540
	ctx.lr = 0x820ED500;
	sub_82202540(ctx, base);
	// lwz r11,-28236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -28236);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820ED520;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// lfs f29,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f29.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x82200838
	ctx.lr = 0x820ED53C;
	sub_82200838(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,480
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 480, ctx.xer);
	// ble cr6,0x820ed55c
	if (!ctx.cr6.gt) goto loc_820ED55C;
	// stw r29,44(r31)
	REX_STORE_U32(r31.u32 + 44, r29.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820fed80
	ctx.lr = 0x820ED554;
	sub_820FED80(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// li r28,1
	r28.s64 = 1;
loc_820ED55C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// ble cr6,0x820ed578
	if (!ctx.cr6.gt) goto loc_820ED578;
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x820fed80
	ctx.lr = 0x820ED574;
	sub_820FED80(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
loc_820ED578:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,420
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 420, ctx.xer);
	// ble cr6,0x820ed5a4
	if (!ctx.cr6.gt) goto loc_820ED5A4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x820fed80
	ctx.lr = 0x820ED58C;
	sub_820FED80(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// li r11,240
	ctx.r11.s64 = 240;
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_820ED5A4:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// lbz r11,210(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ed5c4
	if (ctx.cr0.eq) goto loc_820ED5C4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ed5e4
	if (ctx.cr6.eq) goto loc_820ED5E4;
loc_820ED5C4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3906
	ctx.r11.u64 = ctx.r11.u64 | 3906;
	// lbzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820ed5ec
	if (ctx.cr0.eq) goto loc_820ED5EC;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820ed5ec
	if (!ctx.cr6.eq) goto loc_820ED5EC;
loc_820ED5E4:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820ED5EC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,16260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	f31.f64 = double(temp.f32);
	// blt cr6,0x820ed668
	if (ctx.cr6.lt) goto loc_820ED668;
	// bne cr6,0x820ed6d0
	if (!ctx.cr6.eq) goto loc_820ED6D0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x820ed62c
	if (ctx.cr6.eq) goto loc_820ED62C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16620(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x820ED61C;
	sub_82200838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x820ed65c
	goto loc_820ED65C;
loc_820ED62C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x820ed64c
	if (!ctx.cr6.gt) goto loc_820ED64C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_820ED64C:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82200850
	ctx.lr = 0x820ED65C;
	sub_82200850(ctx, base);
loc_820ED65C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820ed6c8
	goto loc_820ED6C8;
loc_820ED668:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x820ed690
	if (ctx.cr6.eq) goto loc_820ED690;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f1,16620(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16620);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200838
	ctx.lr = 0x820ED680;
	sub_82200838(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x820ed6c0
	goto loc_820ED6C0;
loc_820ED690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16812(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16812);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x820ed6b0
	if (!ctx.cr6.gt) goto loc_820ED6B0;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
loc_820ED6B0:
	// stfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82200850
	ctx.lr = 0x820ED6C0;
	sub_82200850(ctx, base);
loc_820ED6C0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16700);
	ctx.f1.f64 = double(temp.f32);
loc_820ED6C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822006f8
	ctx.lr = 0x820ED6D0;
	sub_822006F8(ctx, base);
loc_820ED6D0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f28,2352(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	f28.f64 = double(temp.f32);
	// blt cr6,0x820ed7d0
	if (ctx.cr6.lt) goto loc_820ED7D0;
	// beq cr6,0x820ed7b8
	if (ctx.cr6.eq) goto loc_820ED7B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820ed6f8
	if (ctx.cr6.lt) goto loc_820ED6F8;
	// bne cr6,0x820ed910
	if (!ctx.cr6.eq) goto loc_820ED910;
	// b 0x820ed8f0
	goto loc_820ED8F0;
loc_820ED6F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r11,r11,14228
	ctx.r11.u64 = ctx.r11.u64 | 14228;
	// ori r10,r10,14232
	ctx.r10.u64 = ctx.r10.u64 | 14232;
	// ori r9,r9,14236
	ctx.r9.u64 = ctx.r9.u64 | 14236;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfsx f13,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f10,r29,r9
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	ctx.f11.f64 = double(temp.f32);
loc_820ED724:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// ble cr6,0x820ed740
	if (!ctx.cr6.gt) goto loc_820ED740;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820ED740:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820ed75c
	if (!ctx.cr6.gt) goto loc_820ED75C;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_820ED75C:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820ed778
	if (!ctx.cr6.gt) goto loc_820ED778;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_820ED778:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x820ed790
	if (ctx.cr6.gt) goto loc_820ED790;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820ED790:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ed7a8
	if (ctx.cr6.lt) goto loc_820ED7A8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820ED7A8:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,5732(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f29
	f31.f64 = double(float(ctx.f0.f64 + f29.f64));
	// b 0x820ed8b0
	goto loc_820ED8B0;
loc_820ED7B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10532(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10532);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10536(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10536);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,10540(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10540);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f11.f64 = double(temp.f32);
	// b 0x820ed724
	goto loc_820ED724;
loc_820ED7D0:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f12,10532(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 10532);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lfs f11,10536(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10536);
	ctx.f11.f64 = double(temp.f32);
	// ori r11,r11,14228
	ctx.r11.u64 = ctx.r11.u64 | 14228;
	// lfs f10,10540(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 10540);
	ctx.f10.f64 = double(temp.f32);
	// ori r10,r10,14232
	ctx.r10.u64 = ctx.r10.u64 | 14232;
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// ori r9,r9,14236
	ctx.r9.u64 = ctx.r9.u64 | 14236;
	// lfsx f13,r29,r11
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfsx f13,r29,r10
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f11,16308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16308);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f12,r29,r9
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * f29.f64));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * f29.f64));
	// fsubs f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f31
	ctx.cr6.compare(ctx.f9.f64, f31.f64);
	// ble cr6,0x820ed83c
	if (!ctx.cr6.gt) goto loc_820ED83C;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_820ED83C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820ed858
	if (!ctx.cr6.gt) goto loc_820ED858;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_820ED858:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f10,f0
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, f31.f64);
	// ble cr6,0x820ed874
	if (!ctx.cr6.gt) goto loc_820ED874;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
loc_820ED874:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x820ed884
	if (ctx.cr6.gt) goto loc_820ED884;
	// fmr f0,f28
	ctx.f0.f64 = f28.f64;
loc_820ED884:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f13,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x820ed89c
	if (ctx.cr6.lt) goto loc_820ED89C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820ED89C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,5732(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 5732);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f31,f0,f29,f13
	f31.f64 = double(float(std::fma(ctx.f0.f64, f29.f64, ctx.f13.f64)));
loc_820ED8B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f30,16352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16352);
	f30.f64 = double(temp.f32);
	// bl 0x82200a38
	ctx.lr = 0x820ED8C0;
	sub_82200A38(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f1.f64);
	// ble cr6,0x820ed8cc
	if (!ctx.cr6.gt) goto loc_820ED8CC;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_820ED8CC:
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// ble cr6,0x820ed8d8
	if (!ctx.cr6.gt) goto loc_820ED8D8;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
loc_820ED8D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200800
	ctx.lr = 0x820ED8E4;
	sub_82200800(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x82200808
	ctx.lr = 0x820ED8F0;
	sub_82200808(ctx, base);
loc_820ED8F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	ctx.lr = 0x820ED910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820ED910:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820ed930
	if (ctx.cr6.eq) goto loc_820ED930;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x820ed940
	if (!ctx.cr6.eq) goto loc_820ED940;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,16808(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16808);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820ed938
	goto loc_820ED938;
loc_820ED930:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2388);
	ctx.f1.f64 = double(temp.f32);
loc_820ED938:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82200730
	ctx.lr = 0x820ED940;
	sub_82200730(ctx, base);
loc_820ED940:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200a38
	ctx.lr = 0x820ED948;
	sub_82200A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f1,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 + f28.f64));
	// bl 0x82200818
	ctx.lr = 0x820ED954;
	sub_82200818(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x820ED960;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8210DE18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,23688
	ctx.r10.s64 = ctx.r11.s64 + 23688;
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
loc_8210DE38:
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
	// blt cr6,0x8210de38
	if (ctx.cr6.lt) goto loc_8210DE38;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210EE68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lbz r3,23880(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 23880);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210F4E0) {
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
	ctx.lr = 0x8210F4E8;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,122(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 122);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f29,16032(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16032);
	f29.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f29,80(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f29,84(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,92(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bne 0x8210f6c4
	if (!ctx.cr0.eq) goto loc_8210F6C4;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210f7d8
	if (ctx.cr6.eq) goto loc_8210F7D8;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210f7d8
	if (ctx.cr6.eq) goto loc_8210F7D8;
	// li r29,2
	r29.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// sth r29,208(r3)
	REX_STORE_U16(ctx.r3.u32 + 208, r29.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r30.u32);
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
	ctx.lr = 0x8210F574;
	sub_821AFA50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,112(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f30,116(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lfs f0,15632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r28,r1,136
	r28.s64 = ctx.r1.s64 + 136;
	// lfs f13,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f12.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// lfs f11,16036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16036);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r30.u32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// std r30,0(r28)
	REX_STORE_U64(r28.u32 + 0, r30.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8210f028
	ctx.lr = 0x8210F5E4;
	sub_8210F028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r9,125(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 125);
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,28876(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28876);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// lfs f13,16628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16628);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// ble cr6,0x8210f624
	if (!ctx.cr6.gt) goto loc_8210F624;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,28872(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28872);
	f31.f64 = double(temp.f32);
	// b 0x8210f62c
	goto loc_8210F62C;
loc_8210F624:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,28868(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28868);
	f31.f64 = double(temp.f32);
loc_8210F62C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,28860
	ctx.r6.s64 = ctx.r10.s64 + 28860;
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
	ctx.lr = 0x8210F654;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8210f688
	if (ctx.cr0.eq) goto loc_8210F688;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f5,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16272(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16272);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x821104b0
	ctx.lr = 0x8210F684;
	sub_821104B0(ctx, base);
	// b 0x8210f68c
	goto loc_8210F68C;
loc_8210F688:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8210F68C:
	// stw r3,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,126(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 126);
	// lbz r10,125(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 125);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// bl 0x8210f0a8
	ctx.lr = 0x8210F6AC;
	sub_8210F0A8(ctx, base);
	// stb r29,121(r31)
	REX_STORE_U8(r31.u32 + 121, r29.u8);
	// stb r29,122(r31)
	REX_STORE_U8(r31.u32 + 122, r29.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8210e680
	ctx.lr = 0x8210F6C0;
	sub_8210E680(ctx, base);
	// b 0x8210f7d8
	goto loc_8210F7D8;
loc_8210F6C4:
	// lbz r11,127(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 127);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,42
	ctx.r11.s64 = ctx.r11.s64 + 42;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8210f6e8
	if (!ctx.cr6.eq) goto loc_8210F6E8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8210f7d8
	if (!ctx.cr6.eq) goto loc_8210F7D8;
loc_8210F6E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// sth r11,208(r31)
	REX_STORE_U16(r31.u32 + 208, ctx.r11.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,2024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x8210F714;
	sub_821AFA50(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8210f758
	if (ctx.cr6.eq) goto loc_8210F758;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,64(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lfs f0,68(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stb r9,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
loc_8210F758:
	// lbz r10,122(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 122);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// stb r10,121(r31)
	REX_STORE_U8(r31.u32 + 121, ctx.r10.u8);
	// beq cr6,0x8210f7c4
	if (ctx.cr6.eq) goto loc_8210F7C4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8210f7d8
	if (!ctx.cr6.eq) goto loc_8210F7D8;
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8210e430
	ctx.lr = 0x8210F784;
	sub_8210E430(ctx, base);
	// lbz r10,127(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 127);
	// lha r9,210(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 210));
	// li r8,4
	ctx.r8.s64 = 4;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// rlwinm r10,r9,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// sth r10,210(r31)
	REX_STORE_U16(r31.u32 + 210, ctx.r10.u16);
	// addi r7,r31,136
	ctx.r7.s64 = r31.s64 + 136;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,152
	ctx.r5.s64 = r31.s64 + 152;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x8210f028
	ctx.lr = 0x8210F7BC;
	sub_8210F028(ctx, base);
	// stw r3,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// b 0x8210f7d8
	goto loc_8210F7D8;
loc_8210F7C4:
	// lbz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x8210e3e0
	ctx.lr = 0x8210F7D4;
	sub_8210E3E0(ctx, base);
	// stw r30,104(r31)
	REX_STORE_U32(r31.u32 + 104, r30.u32);
loc_8210F7D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
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

DEFINE_REX_FUNC(sub_82119F90) {
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
	ctx.lr = 0x82119F98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82119fbc
	if (!ctx.cr6.eq) goto loc_82119FBC;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// b 0x82119fc0
	goto loc_82119FC0;
loc_82119FBC:
	// lbz r10,1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
loc_82119FC0:
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82119fd8
	if (!ctx.cr6.eq) goto loc_82119FD8;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// b 0x82119fdc
	goto loc_82119FDC;
loc_82119FD8:
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
loc_82119FDC:
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8211a018
	if (!ctx.cr6.gt) goto loc_8211A018;
	// addi r29,r31,144
	r29.s64 = r31.s64 + 144;
loc_82119FF0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 116);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821188f0
	ctx.lr = 0x8211A004;
	sub_821188F0(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82119ff0
	if (ctx.cr6.lt) goto loc_82119FF0;
loc_8211A018:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,164(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lfs f13,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lfs f12,200(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 200);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,172(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 172);
	// lfs f11,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// fsubs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stfs f0,244(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// stw r10,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// stw r9,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r9.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r8,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r8.u32);
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// addi r5,r31,192
	ctx.r5.s64 = r31.s64 + 192;
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// lfs f1,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x8211A070;
	sub_820E2028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lfs f13,212(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 212);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,128(r31)
	REX_STORE_U32(r31.u32 + 128, r28.u32);
	// lfs f0,16204(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,212(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 212, temp.u32);
	// lwz r11,-7176(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -7176);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// lha r11,64(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 64));
	// beq cr6,0x8211a110
	if (ctx.cr6.eq) goto loc_8211A110;
	// b 0x8211a0c0
	goto loc_8211A0C0;
loc_8211A0A0:
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211A0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lha r11,64(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 64));
loc_8211A0C0:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x8211a0a0
	if (ctx.cr6.lt) goto loc_8211A0A0;
	// b 0x8211a0e4
	goto loc_8211A0E4;
loc_8211A0CC:
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211A0E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211A0E4:
	// lha r11,64(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 64));
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x8211a0cc
	if (ctx.cr6.lt) goto loc_8211A0CC;
	// b 0x8211a118
	goto loc_8211A118;
loc_8211A0F4:
	// stw r28,132(r31)
	REX_STORE_U32(r31.u32 + 132, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211A10C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lha r11,64(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 64));
loc_8211A110:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x8211a0f4
	if (ctx.cr6.lt) goto loc_8211A0F4;
loc_8211A118:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8211FBB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// divw r10,r5,r3
	ctx.r10.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// mullw r11,r10,r3
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	// frsp f10,f0
	ctx.f10.f64 = double(float(ctx.f0.f64));
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// divw r11,r5,r3
	ctx.r11.u64 = uint32_t((ctx.r3.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r3.s32 == -1)) ? ctx.r5.s32 / ctx.r3.s32 : 0);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fdivs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// fdivs f10,f0,f10
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// stfs f0,24(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 24, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f0,40(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 40, temp.u32);
	// stfs f0,56(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 56, temp.u32);
	// rotlwi r11,r5,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// lfs f13,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stfs f13,28(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f13,44(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 44, temp.u32);
	// andc r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// stfs f13,60(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 60, temp.u32);
	// andc r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r10.u64;
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// fmuls f0,f11,f9
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f0,20(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 20, temp.u32);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// fmuls f13,f12,f10
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f13,32(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 32, temp.u32);
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// fadds f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfs f0,36(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 36, temp.u32);
	// stfs f0,52(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 52, temp.u32);
	// fadds f0,f13,f10
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f0,16(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// stfs f0,48(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82124350) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e80
	ctx.lr = 0x82124358;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,11568
	ctx.r11.s64 = ctx.r11.s64 + 11568;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,96
	ctx.r7.s64 = ctx.r11.s64 + 96;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r8,-27708
	ctx.r9.s64 = ctx.r8.s64 + -27708;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// addi r29,r9,16
	r29.s64 = ctx.r9.s64 + 16;
	// stwx r5,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u32);
	// add r30,r10,r7
	r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r8.u32);
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r28,r9,8
	r28.s64 = ctx.r9.s64 + 8;
	// stw r8,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r27,44(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// addi r26,r11,32
	r26.s64 = ctx.r11.s64 + 32;
	// stw r27,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, r27.u32);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// lwz r6,80(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r27,r11,128
	r27.s64 = ctx.r11.s64 + 128;
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// addi r6,r11,176
	ctx.r6.s64 = ctx.r11.s64 + 176;
	// lwz r6,84(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r6,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r6.u32);
	// lwz r6,88(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// stw r6,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r6.u32);
	// lwz r6,92(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stw r6,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
	// lwz r6,128(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r6,132(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// stw r6,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r6,136(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// lwz r6,140(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// stw r6,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r6.u32);
	// lwz r6,176(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// stwx r6,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r6.u32);
	// lwz r10,180(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 180);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,184(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,188(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 188);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// stwx r8,r5,r3
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, ctx.r8.u32);
	// stwx r8,r5,r29
	REX_STORE_U32(ctx.r5.u32 + r29.u32, ctx.r8.u32);
	// stwx r8,r5,r28
	REX_STORE_U32(ctx.r5.u32 + r28.u32, ctx.r8.u32);
	// stwx r8,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u32);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82128568) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f11,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfs f7,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// fmuls f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// fmuls f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x821285a8
	if (ctx.cr6.lt) goto loc_821285A8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821285A8:
	// lfs f11,24(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lfs f10,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f8,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// lfs f6,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f11,f8,f11
	ctx.f11.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// fsubs f10,f6,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f10.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// blt cr6,0x821285e4
	if (ctx.cr6.lt) goto loc_821285E4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821285E4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82128600
	if (ctx.cr6.eq) goto loc_82128600;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82128600:
	// lfs f11,40(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f10,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82128634
	if (ctx.cr6.lt) goto loc_82128634;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82128634:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212A940) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212A948;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,348(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212a980
	if (!ctx.cr6.eq) goto loc_8212A980;
	// lha r3,98(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 98));
	// bl 0x821c9150
	ctx.lr = 0x8212A974;
	sub_821C9150(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8212a984
	if (!ctx.cr0.eq) goto loc_8212A984;
loc_8212A980:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8212A984:
	// lha r10,98(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 98));
	// mulli r11,r11,33
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(33));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r9,10528
	ctx.r10.s64 = ctx.r9.s64 + 10528;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212a9ec
	if (ctx.cr6.eq) goto loc_8212A9EC;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8212a9d4
	goto loc_8212A9D4;
loc_8212A9B8:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bne cr6,0x8212a9d0
	if (!ctx.cr6.eq) goto loc_8212A9D0;
	// lbz r10,1(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x8212a9e4
	if (ctx.cr6.eq) goto loc_8212A9E4;
loc_8212A9D0:
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_8212A9D4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x8212a9b8
	if (!ctx.cr6.eq) goto loc_8212A9B8;
	// b 0x8212a9ec
	goto loc_8212A9EC;
loc_8212A9E4:
	// lha r11,2(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 2));
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8212A9EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8212CB30) {
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
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// addi r11,r10,-23680
	ctx.r11.s64 = ctx.r10.s64 + -23680;
	// mulli r10,r9,304
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(304));
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8212c9a0
	ctx.lr = 0x8212CB78;
	sub_8212C9A0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x8212cbd0
	if (ctx.cr0.lt) goto loc_8212CBD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a940
	ctx.lr = 0x8212CB8C;
	sub_8212A940(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,48(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lbz r11,1827(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1827);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// subf r5,r11,r10
	ctx.r5.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// bne cr6,0x8212cbc0
	if (!ctx.cr6.eq) goto loc_8212CBC0;
	// srawi r11,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 1;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
loc_8212CBC0:
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121d38
	ctx.lr = 0x8212CBD0;
	sub_82121D38(ctx, base);
loc_8212CBD0:
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

DEFINE_REX_FUNC(sub_8212FE30) {
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
	// bl 0x821eb2c0
	ctx.lr = 0x8212FE44;
	sub_821EB2C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r3,r10,-25152
	ctx.r3.s64 = ctx.r10.s64 + -25152;
	// lfd f1,28816(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 28816);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x8212FE64;
	sub_821EACB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821304F8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130538
	if (ctx.cr6.eq) goto loc_82130538;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x8213056c
	if (!ctx.cr6.gt) goto loc_8213056C;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x8213056c
	if (!ctx.cr6.lt) goto loc_8213056C;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mulli r11,r11,81
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(81));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r10,22000
	ctx.r10.s64 = ctx.r10.s64 + 22000;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 + 52;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82130570
	goto loc_82130570;
loc_82130538:
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// ble cr6,0x8213056c
	if (!ctx.cr6.gt) goto loc_8213056C;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x8213056c
	if (!ctx.cr6.lt) goto loc_8213056C;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// mulli r10,r11,22
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(22));
	// addi r11,r9,21824
	ctx.r11.s64 = ctx.r9.s64 + 21824;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r11,r11,56
	ctx.r11.s64 = ctx.r11.s64 + 56;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82130570
	goto loc_82130570;
loc_8213056C:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82130570:
	// cmpwi cr6,r11,-48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -48, ctx.xer);
	// bne cr6,0x8213057c
	if (!ctx.cr6.eq) goto loc_8213057C;
	// b 0x82130408
	sub_82130408(ctx, base);
	return;
loc_8213057C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82130598
	if (ctx.cr6.eq) goto loc_82130598;
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,16256
	ctx.r10.s64 = ctx.r10.s64 + 16256;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
loc_82130598:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82132F78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82132F90:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82132f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82132F90;
	// li r10,58
	ctx.r10.s64 = 58;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,228
	ctx.r11.s64 = ctx.r11.s64 + 228;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82132FB0:
	// stw r9,-228(r11)
	REX_STORE_U32(ctx.r11.u32 + -228, ctx.r9.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82132fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82132FB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821336C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// beq cr6,0x82133730
	if (ctx.cr6.eq) goto loc_82133730;
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
	// beq cr6,0x82133720
	if (ctx.cr6.eq) goto loc_82133720;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82133724
	goto loc_82133724;
loc_82133720:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82133724:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133730
	if (ctx.cr6.eq) goto loc_82133730;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82133730:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82133790
	if (ctx.cr6.eq) goto loc_82133790;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r31
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r31.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82133780
	if (ctx.cr6.eq) goto loc_82133780;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,19(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 19);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82133784
	goto loc_82133784;
loc_82133780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82133784:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82133790
	if (ctx.cr6.eq) goto loc_82133790;
	// li r7,1
	ctx.r7.s64 = 1;
loc_82133790:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821337f0
	if (ctx.cr6.eq) goto loc_821337F0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r31
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r31.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821337e0
	if (ctx.cr6.eq) goto loc_821337E0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x821337e4
	goto loc_821337E4;
loc_821337E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821337E4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821337f0
	if (ctx.cr6.eq) goto loc_821337F0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_821337F0:
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// beq cr6,0x8213384c
	if (ctx.cr6.eq) goto loc_8213384C;
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
	// beq cr6,0x8213383c
	if (ctx.cr6.eq) goto loc_8213383C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x82133840
	goto loc_82133840;
loc_8213383C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82133840:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8213384c
	if (ctx.cr6.eq) goto loc_8213384C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8213384C:
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r11,r6
	ctx.r3.u64 = ctx.r11.u64 | ctx.r6.u64;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213FAA8) {
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
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,256
	ctx.r11.s64 = 256;
	// addi r31,r10,23912
	r31.s64 = ctx.r10.s64 + 23912;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// lfs f2,16624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16624);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,26816(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26816);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821ff668
	ctx.lr = 0x8213FAE0;
	sub_821FF668(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821374a0
	ctx.lr = 0x8213FAE8;
	sub_821374A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8213faf4
	if (ctx.cr0.eq) goto loc_8213FAF4;
	// bl 0x821dde20
	ctx.lr = 0x8213FAF4;
	sub_821DDE20(ctx, base);
loc_8213FAF4:
	// lis r30,-32169
	r30.s64 = -2108227584;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// lwz r31,23876(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 23876);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8213fb1c
	if (ctx.cr6.eq) goto loc_8213FB1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8213FB14;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8213FB1C;
	sub_822C80A8(ctx, base);
loc_8213FB1C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23876(r30)
	REX_STORE_U32(r30.u32 + 23876, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82145410) {
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
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x821425d8
	ctx.lr = 0x82145430;
	sub_821425D8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82145450
	if (ctx.cr6.eq) goto loc_82145450;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82145450
	if (!ctx.cr0.eq) goto loc_82145450;
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_82145450:
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

DEFINE_REX_FUNC(sub_82149370) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-23156
	ctx.r10.s64 = ctx.r10.s64 + -23156;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r11,62(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 62);
	// sth r11,20(r31)
	REX_STORE_U16(r31.u32 + 20, ctx.r11.u16);
	// lbz r11,61(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 61);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// sth r11,22(r31)
	REX_STORE_U16(r31.u32 + 22, ctx.r11.u16);
	// lfs f0,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// lfs f0,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f31,16(r31)
	temp.f32 = float(f31.f64);
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
	// bl 0x820e1850
	ctx.lr = 0x821493F0;
	sub_820E1850(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f31,44(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lbz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 60);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214A7D0) {
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
	ctx.lr = 0x8214A7D8;
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lha r11,22(r3)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 22));
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x820e1d28
	ctx.lr = 0x8214A808;
	sub_820E1D28(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 80);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e1d28
	ctx.lr = 0x8214A820;
	sub_820E1D28(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ba8
	ctx.lr = 0x8214A830;
	sub_820E1BA8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2128
	ctx.lr = 0x8214A838;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2004);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8214a86c
	if (!ctx.cr6.lt) goto loc_8214A86C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
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
	// b 0x8214a878
	goto loc_8214A878;
loc_8214A86C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2290
	ctx.lr = 0x8214A878;
	sub_820E2290(ctx, base);
loc_8214A878:
	// addi r28,r30,48
	r28.s64 = r30.s64 + 48;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214A888;
	sub_820E0AF8(ctx, base);
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214A8A0;
	sub_820E0590(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e0250
	ctx.lr = 0x8214A8AC;
	sub_820E0250(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1ec0
	ctx.lr = 0x8214A8BC;
	sub_820E1EC0(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x8214A8C8;
	sub_820E0130(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8214a8f0
	if (!ctx.cr6.gt) goto loc_8214A8F0;
	// bl 0x820e0028
	ctx.lr = 0x8214A8E8;
	sub_820E0028(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8214a8f8
	goto loc_8214A8F8;
loc_8214A8F0:
	// bl 0x820e0088
	ctx.lr = 0x8214A8F4;
	sub_820E0088(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
loc_8214A8F8:
	// fdivs f2,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0130
	ctx.lr = 0x8214A908;
	sub_820E0130(ctx, base);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e0af8
	ctx.lr = 0x8214A918;
	sub_820E0AF8(ctx, base);
	// lwz r11,88(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 88);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214A930;
	sub_820E0590(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 84);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x8214a748
	ctx.lr = 0x8214A944;
	sub_8214A748(ctx, base);
	// lha r11,20(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 20));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lfs f0,92(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// fmuls f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0ec8
	ctx.lr = 0x8214A968;
	sub_820E0EC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e0af8
	ctx.lr = 0x8214A974;
	sub_820E0AF8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214A984;
	sub_820E0590(ctx, base);
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e0590
	ctx.lr = 0x8214A99C;
	sub_820E0590(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f30,60(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82156DC8) {
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
	ctx.lr = 0x82156DD0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r8,-17824
	ctx.r6.s64 = ctx.r8.s64 + -17824;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stfs f31,128(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f31,132(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82156E1C;
	sub_821F7D50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r10,31764
	r28.s64 = ctx.r10.s64 + 31764;
	// beq 0x82156e38
	if (ctx.cr0.eq) goto loc_82156E38;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x82156e3c
	goto loc_82156E3C;
loc_82156E38:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82156E3C:
	// lis r10,-32175
	ctx.r10.s64 = -2108620800;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// li r29,1
	r29.s64 = 1;
	// li r26,8
	r26.s64 = 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r27,r10,26032
	r27.s64 = ctx.r10.s64 + 26032;
	// beq cr6,0x82156f0c
	if (ctx.cr6.eq) goto loc_82156F0C;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addic. r10,r11,112
	ctx.xer.ca = ctx.r11.u32 > 4294967183;
	ctx.r10.s64 = ctx.r11.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r29,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, r29.u64);
	// sth r29,88(r11)
	REX_STORE_U16(ctx.r11.u32 + 88, r29.u16);
	// stb r29,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r29.u8);
	// bne 0x82156e74
	if (!ctx.cr0.eq) goto loc_82156E74;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
loc_82156E74:
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
	// beq cr6,0x82156e8c
	if (ctx.cr6.eq) goto loc_82156E8C;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stb r30,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r30.u8);
loc_82156E8C:
	// stb r29,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, r29.u8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stb r30,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, r30.u8);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stb r30,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, r30.u8);
	// lfs f13,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,192(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,-24904(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24904);
	ctx.f2.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,-17408(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -17408);
	ctx.f0.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8210ded0
	ctx.lr = 0x82156EF0;
	sub_8210DED0(ctx, base);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// sth r26,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r26.u16);
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
loc_82156F0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-17420
	ctx.r6.s64 = ctx.r11.s64 + -17420;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x82156F30;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82156f40
	if (ctx.cr0.eq) goto loc_82156F40;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// b 0x82156f44
	goto loc_82156F44;
loc_82156F40:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82156F44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r11.u32);
	// beq cr6,0x82157010
	if (ctx.cr6.eq) goto loc_82157010;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r8,7
	ctx.r8.s64 = 7;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// addic. r10,r11,112
	ctx.xer.ca = ctx.r11.u32 > 4294967183;
	ctx.r10.s64 = ctx.r11.s64 + 112;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,448(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 448);
	// std r8,80(r11)
	REX_STORE_U64(ctx.r11.u32 + 80, ctx.r8.u64);
	// sth r29,88(r11)
	REX_STORE_U16(ctx.r11.u32 + 88, r29.u16);
	// stb r29,90(r11)
	REX_STORE_U8(ctx.r11.u32 + 90, r29.u8);
	// bne 0x82156f78
	if (!ctx.cr0.eq) goto loc_82156F78;
	// addi r10,r11,112
	ctx.r10.s64 = ctx.r11.s64 + 112;
loc_82156F78:
	// stw r10,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r27,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, r27.u32);
	// beq cr6,0x82156f90
	if (ctx.cr6.eq) goto loc_82156F90;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// stb r30,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, r30.u8);
loc_82156F90:
	// stb r29,105(r11)
	REX_STORE_U8(ctx.r11.u32 + 105, r29.u8);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r30,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, r30.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stb r30,109(r11)
	REX_STORE_U8(ctx.r11.u32 + 109, r30.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,106(r11)
	REX_STORE_U8(ctx.r11.u32 + 106, r30.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lfs f2,27596(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 27596);
	ctx.f2.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,17124(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x8210ded0
	ctx.lr = 0x82156FF4;
	sub_8210DED0(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// sth r26,18(r11)
	REX_STORE_U16(ctx.r11.u32 + 18, r26.u16);
	// lwz r11,196(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 196);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
loc_82157010:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lbz r10,74(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 74);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stb r10,74(r11)
	REX_STORE_U8(ctx.r11.u32 + 74, ctx.r10.u8);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
	// stb r29,61(r31)
	REX_STORE_U8(r31.u32 + 61, r29.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82161F20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addic. r11,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r11.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// addi r10,r11,6
	ctx.r10.s64 = ctx.r11.s64 + 6;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f0,2020(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfsx f1,r10,r3
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// sld r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// ld r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// bge cr6,0x82161f5c
	if (!ctx.cr6.lt) goto loc_82161F5C;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// b 0x82161f60
	goto loc_82161F60;
loc_82161F5C:
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82161F60:
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82165D48) {
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
	ctx.lr = 0x82165D50;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,5
	ctx.r10.s64 = 5;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r3,1816
	ctx.r11.s64 = ctx.r3.s64 + 1816;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f30,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r10,r10,13364
	ctx.r10.s64 = ctx.r10.s64 + 13364;
loc_82165D88:
	// stfs f31,28(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r30.u32);
	// stfs f30,184(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 184, temp.u32);
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r30.u32);
	// stfs f30,180(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// std r30,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r30.u64);
	// stfsu f30,176(r11)
	ea = 176 + ctx.r11.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82165d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165D88;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r10,2712(r31)
	REX_STORE_U32(r31.u32 + 2712, ctx.r10.u32);
	// addi r8,r31,3600
	ctx.r8.s64 = r31.s64 + 3600;
	// stfs f31,2724(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 2724, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f30,2880(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 2880, temp.u32);
	// stfs f30,2876(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 2876, temp.u32);
	// stw r30,2716(r31)
	REX_STORE_U32(r31.u32 + 2716, r30.u32);
	// stfs f30,2872(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 2872, temp.u32);
	// stw r30,2720(r31)
	REX_STORE_U32(r31.u32 + 2720, r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r8,-72
	ctx.r11.s64 = ctx.r8.s64 + -72;
	// std r30,2728(r31)
	REX_STORE_U64(r31.u32 + 2728, r30.u64);
	// addi r10,r10,-11816
	ctx.r10.s64 = ctx.r10.s64 + -11816;
loc_82165DE4:
	// stfs f31,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r30.u32);
	// stdu r30,88(r11)
	ea = 88 + ctx.r11.u32;
	REX_STORE_U64(ea, r30.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82165de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165DE4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r11,-12720
	ctx.r11.s64 = ctx.r11.s64 + -12720;
	// addi r10,r31,2927
	ctx.r10.s64 = r31.s64 + 2927;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82165E14:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,29(r10)
	REX_STORE_U8(ctx.r10.u32 + 29, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r9,30(r10)
	REX_STORE_U8(ctx.r10.u32 + 30, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// stb r9,31(r10)
	REX_STORE_U8(ctx.r10.u32 + 31, ctx.r9.u8);
	// lbzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r9,32(r10)
	ea = 32 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82165e14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82165E14;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,2944(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 2944, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f31,2952(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 2952, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,4080(r31)
	REX_STORE_U32(r31.u32 + 4080, ctx.r8.u32);
	// addi r29,r31,968
	r29.s64 = r31.s64 + 968;
	// stw r31,3592(r31)
	REX_STORE_U32(r31.u32 + 3592, r31.u32);
	// li r5,960
	ctx.r5.s64 = 960;
	// std r30,3576(r31)
	REX_STORE_U64(r31.u32 + 3576, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,16308(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,28436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28436);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,2924(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 2924, temp.u32);
	// stw r29,3596(r31)
	REX_STORE_U32(r31.u32 + 3596, r29.u32);
	// stfs f13,2928(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 2928, temp.u32);
	// sth r9,2932(r31)
	REX_STORE_U16(r31.u32 + 2932, ctx.r9.u16);
	// stw r30,4072(r31)
	REX_STORE_U32(r31.u32 + 4072, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x82165E88;
	sub_822D5870(ctx, base);
	// li r5,248
	ctx.r5.s64 = 248;
	// stfs f30,964(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 964, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,960(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 960, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x82165EA0;
	sub_822D5870(ctx, base);
	// stfs f31,1216(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1216, temp.u32);
	// stfs f31,1220(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1220, temp.u32);
	// li r5,576
	ctx.r5.s64 = 576;
	// stfs f31,1224(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1224, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f30,1228(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1228, temp.u32);
	// addi r3,r31,1256
	ctx.r3.s64 = r31.s64 + 1256;
	// stfs f31,1232(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1232, temp.u32);
	// stfs f31,1236(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1236, temp.u32);
	// stfs f31,1240(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1240, temp.u32);
	// stfs f30,1244(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 1244, temp.u32);
	// stfs f31,1248(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1248, temp.u32);
	// stfs f31,1252(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 1252, temp.u32);
	// bl 0x822d5870
	ctx.lr = 0x82165ED8;
	sub_822D5870(ctx, base);
	// stw r30,2892(r31)
	REX_STORE_U32(r31.u32 + 2892, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,2896(r31)
	REX_STORE_U32(r31.u32 + 2896, r30.u32);
	// stb r30,2900(r31)
	REX_STORE_U8(r31.u32 + 2900, r30.u8);
	// stw r30,3588(r31)
	REX_STORE_U32(r31.u32 + 3588, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8216D7A8) {
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
	// bl 0x8216ca30
	ctx.lr = 0x8216D7C4;
	sub_8216CA30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// stb r11,89(r31)
	REX_STORE_U8(r31.u32 + 89, ctx.r11.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-8472
	ctx.r6.s64 = ctx.r11.s64 + -8472;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,89
	r30.s64 = r31.s64 + 89;
	// bl 0x821f7d50
	ctx.lr = 0x8216D7F8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8216d808
	if (ctx.cr0.eq) goto loc_8216D808;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821aab38
	ctx.lr = 0x8216D808;
	sub_821AAB38(ctx, base);
loc_8216D808:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8216E828) {
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
	ctx.lr = 0x8216E830;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// li r30,0
	r30.s64 = 0;
loc_8216E84C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b30e0
	ctx.lr = 0x8216E854;
	sub_821B30E0(ctx, base);
	// bl 0x821dcfb8
	ctx.lr = 0x8216E858;
	sub_821DCFB8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8216e864
	if (ctx.cr6.lt) goto loc_8216E864;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_8216E864:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,25
	ctx.cr6.compare<int32_t>(r30.s32, 25, ctx.xer);
	// blt cr6,0x8216e84c
	if (ctx.cr6.lt) goto loc_8216E84C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// ble cr6,0x8216e8cc
	if (!ctx.cr6.gt) goto loc_8216E8CC;
loc_8216E884:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216e558
	ctx.lr = 0x8216E894;
	sub_8216E558(ctx, base);
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8216e8a8
	if (!ctx.cr6.eq) goto loc_8216E8A8;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8216e9d8
	if (ctx.cr6.eq) goto loc_8216E9D8;
loc_8216E8A8:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// stfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x8216e884
	if (ctx.cr6.lt) goto loc_8216E884;
loc_8216E8CC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// lfs f30,2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	f30.f64 = double(temp.f32);
	// beq cr6,0x8216e970
	if (ctx.cr6.eq) goto loc_8216E970;
	// fmr f11,f31
	ctx.f11.f64 = f31.f64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8216e908
	if (!ctx.cr6.gt) goto loc_8216E908;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8216E8F0:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8216e900
	if (!ctx.cr6.lt) goto loc_8216E900;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_8216E900:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8216e8f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E8F0;
loc_8216E908:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f31.f64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x8216e970
	if (!ctx.cr6.gt) goto loc_8216E970;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8216E924:
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8216e93c
	if (!ctx.cr6.lt) goto loc_8216E93C;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8216E93C:
	// lfsu f12,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// bdnz 0x8216e924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E924;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8216e970
	if (!ctx.cr6.gt) goto loc_8216E970;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8216E95C:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8216e95c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E95C;
loc_8216E970:
	// bl 0x821fee88
	ctx.lr = 0x8216E974;
	sub_821FEE88(ctx, base);
	// fmuls f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f30.f64));
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// ble cr6,0x8216e9ac
	if (!ctx.cr6.gt) goto loc_8216E9AC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
loc_8216E98C:
	// lfs f12,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8216e9ac
	if (!ctx.cr6.lt) goto loc_8216E9AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// blt cr6,0x8216e98c
	if (ctx.cr6.lt) goto loc_8216E98C;
loc_8216E9AC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// bne cr6,0x8216e9b8
	if (!ctx.cr6.eq) goto loc_8216E9B8;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
loc_8216E9B8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x821b30e0
	ctx.lr = 0x8216E9C8;
	sub_821B30E0(ctx, base);
loc_8216E9C8:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_8216E9D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8216e9c8
	goto loc_8216E9C8;
}

DEFINE_REX_FUNC(sub_82174F40) {
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
	ctx.lr = 0x82174F48;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f34
	ctx.lr = 0x82174F50;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r5,100(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-24944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24944);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,-6100(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -6100);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f31,31144(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 31144);
	f31.f64 = double(temp.f32);
	// lfs f30,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82174F98;
	sub_820E1B70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-6108
	ctx.r3.s64 = ctx.r10.s64 + -6108;
	// li r4,2
	ctx.r4.s64 = 2;
	// lfd f1,-24880(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -24880);
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82174FC8;
	sub_821EACB0(ctx, base);
	// addi r30,r31,112
	r30.s64 = r31.s64 + 112;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82174FD0:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82174fd0
	if (!ctx.cr6.eq) goto loc_82174FD0;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - r30.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r27,r10,-6124
	r27.s64 = ctx.r10.s64 + -6124;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,-1
	r28.s64 = -1;
	// addi r11,r11,2028
	ctx.r11.s64 = ctx.r11.s64 + 2028;
	// li r29,-256
	r29.s64 = -256;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f27,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f27.f64 = double(temp.f32);
	// beq 0x821750f4
	if (ctx.cr0.eq) goto loc_821750F4;
	// beq cr6,0x82175034
	if (ctx.cr6.eq) goto loc_82175034;
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// or r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 | r29.u64;
	// b 0x82175038
	goto loc_82175038;
loc_82175034:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82175038:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// addi r3,r11,-6140
	ctx.r3.s64 = ctx.r11.s64 + -6140;
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// stfd f2,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821eacb0
	ctx.lr = 0x82175074;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-24284
	ctx.r11.s64 = ctx.r11.s64 + -24284;
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821750a4
	if (ctx.cr6.eq) goto loc_821750A4;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r5,95(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// b 0x821750a8
	goto loc_821750A8;
loc_821750A4:
	// li r5,192
	ctx.r5.s64 = 192;
loc_821750A8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r11,r11,16228
	ctx.r11.s64 = ctx.r11.s64 + 16228;
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f29,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// fadds f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x821750F0;
	sub_821EACB0(ctx, base);
	// b 0x821751f8
	goto loc_821751F8;
loc_821750F4:
	// beq cr6,0x82175114
	if (ctx.cr6.eq) goto loc_82175114;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// or r30,r11,r29
	r30.u64 = ctx.r11.u64 | r29.u64;
	// b 0x82175118
	goto loc_82175118;
loc_82175114:
	// mr r30,r28
	r30.u64 = r28.u64;
loc_82175118:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x821b30e0
	ctx.lr = 0x82175120;
	sub_821B30E0(ctx, base);
	// bl 0x82114c40
	ctx.lr = 0x82175124;
	sub_82114C40(ctx, base);
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.f3.u64);
	// ld r9,64(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 64);
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfd f2,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f2.u64);
	// addi r3,r11,-6156
	ctx.r3.s64 = ctx.r11.s64 + -6156;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eacb0
	ctx.lr = 0x82175164;
	sub_821EACB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-24284
	ctx.r11.s64 = ctx.r11.s64 + -24284;
	// lfs f28,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f28.f64 = double(temp.f32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175194
	if (ctx.cr6.eq) goto loc_82175194;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r30,95(r1)
	r30.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// b 0x82175198
	goto loc_82175198;
loc_82175194:
	// li r30,192
	r30.s64 = 192;
loc_82175198:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// bl 0x821b30e0
	ctx.lr = 0x821751A0;
	sub_821B30E0(ctx, base);
	// bl 0x82114c40
	ctx.lr = 0x821751A4;
	sub_82114C40(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,16228
	ctx.r11.s64 = ctx.r11.s64 + 16228;
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f13,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-6172
	ctx.r10.s64 = ctx.r10.s64 + -6172;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f29,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f29.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// fadds f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x821751F8;
	sub_821EACB0(ctx, base);
loc_821751F8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82175220
	if (ctx.cr6.eq) goto loc_82175220;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// or r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 | r29.u64;
	// b 0x82175224
	goto loc_82175224;
loc_82175220:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
loc_82175224:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r10,-8564
	ctx.r3.s64 = ctx.r10.s64 + -8564;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfd f1,26664(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eacb0
	ctx.lr = 0x82175254;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// addi r5,r11,21804
	ctx.r5.s64 = ctx.r11.s64 + 21804;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821eb1a0
	ctx.lr = 0x82175270;
	sub_821EB1A0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,100(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lfs f0,16200(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f13,-23588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23588);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821752A8;
	sub_820E1B70(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821752d0
	if (ctx.cr6.eq) goto loc_821752D0;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r11,95(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// or r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 | r29.u64;
	// b 0x821752d4
	goto loc_821752D4;
loc_821752D0:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_821752D4:
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eacb0
	ctx.lr = 0x82175308;
	sub_821EACB0(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217532c
	if (ctx.cr6.eq) goto loc_8217532C;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 * f28.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lbz r5,95(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 95);
	// b 0x82175330
	goto loc_82175330;
loc_8217532C:
	// li r5,192
	ctx.r5.s64 = 192;
loc_82175330:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// stfd f2,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eacb0
	ctx.lr = 0x8217536C;
	sub_821EACB0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f80
	ctx.lr = 0x82175378;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82182FA8) {
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
	ctx.lr = 0x82182FB0;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r21,0
	r21.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r21,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82182fd8
	if (ctx.cr6.eq) goto loc_82182FD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82183264
	goto loc_82183264;
loc_82182FD8:
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
	// bne 0x82182ff8
	if (!ctx.cr0.eq) goto loc_82182FF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82208828
	ctx.lr = 0x82182FF8;
	sub_82208828(ctx, base);
loc_82182FF8:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// ori r11,r9,4456
	ctx.r11.u64 = ctx.r9.u64 | 4456;
	// addi r9,r28,4
	ctx.r9.s64 = r28.s64 + 4;
	// li r23,1
	r23.s64 = 1;
	// stdx r10,r29,r11
	REX_STORE_U64(r29.u32 + ctx.r11.u32, ctx.r10.u64);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 4);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 16);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// lhz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821831d0
	if (ctx.cr0.eq) goto loc_821831D0;
	// addis r30,r29,4
	r30.s64 = r29.s64 + 262144;
	// lbz r10,30(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 30);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// lwz r26,20(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r30,r30,6012
	r30.s64 = r30.s64 + 6012;
	// ori r9,r9,6016
	ctx.r9.u64 = ctx.r9.u64 | 6016;
	// li r31,0
	r31.s64 = 0;
	// addi r27,r28,31
	r27.s64 = r28.s64 + 31;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stbx r10,r29,r9
	REX_STORE_U8(r29.u32 + ctx.r9.u32, ctx.r10.u8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x8218307c
	if (!ctx.cr6.lt) goto loc_8218307C;
	// lwz r10,20(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 20);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_8218307C:
	// clrlwi. r22,r11,16
	r22.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble 0x821831d0
	if (!ctx.cr0.gt) goto loc_821831D0;
loc_82183084:
	// srawi r10,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r10.s64 = r31.s32 >> 3;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r9.s64 = r31.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subf r10,r10,r31
	ctx.r10.u64 = r31.u64 - ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - r26.u64;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r24,r11,27,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfe. r11,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82183190
	if (ctx.cr0.eq) goto loc_82183190;
	// clrlwi r25,r24,24
	r25.u64 = r24.u32 & 0xFF;
loc_821830D0:
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// srawi r10,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r10.s64 = r31.s32 >> 3;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	ctx.r10.s64 = r31.s32 >> 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + r27.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r31,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82182720
	ctx.lr = 0x82183110;
	sub_82182720(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82183158
	if (ctx.cr6.eq) goto loc_82183158;
	// srawi r11,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 3;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 3;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// slw r10,r23,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x8218314c
	if (ctx.cr6.eq) goto loc_8218314C;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x82183154
	goto loc_82183154;
loc_8218314C:
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82183154:
	// stb r10,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r10.u8);
loc_82183158:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r9,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// slw r11,r23,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r23.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821830d0
	if (!ctx.cr0.eq) goto loc_821830D0;
loc_82183190:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821831c4
	if (ctx.cr0.eq) goto loc_821831C4;
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821831B4;
	sub_822D4FA0(ctx, base);
	// addis r3,r29,4
	ctx.r3.s64 = r29.s64 + 262144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// bl 0x82182a60
	ctx.lr = 0x821831C4;
	sub_82182A60(ctx, base);
loc_821831C4:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(r31.s32, r22.s32, ctx.xer);
	// blt cr6,0x82183084
	if (ctx.cr6.lt) goto loc_82183084;
loc_821831D0:
	// addis r31,r29,4
	r31.s64 = r29.s64 + 262144;
	// addi r31,r31,4464
	r31.s64 = r31.s64 + 4464;
loc_821831D8:
	// lwz r10,1536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r11,1540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82183204
	if (ctx.cr6.eq) goto loc_82183204;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 24);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ori r21,r21,1
	r21.u64 = r21.u64 | 1;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// blt cr6,0x82183208
	if (ctx.cr6.lt) goto loc_82183208;
loc_82183204:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82183208:
	// clrlwi. r9,r21,31
	ctx.r9.u64 = r21.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82183218
	if (ctx.cr0.eq) goto loc_82183218;
	// rlwinm r21,r21,0,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFFFE;
loc_82183218:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82183260
	if (ctx.cr0.eq) goto loc_82183260;
	// mulli r11,r10,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// addis r3,r29,4
	ctx.r3.s64 = r29.s64 + 262144;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// addi r3,r3,6060
	ctx.r3.s64 = ctx.r3.s64 + 6060;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x822d4fa0
	ctx.lr = 0x82183238;
	sub_822D4FA0(ctx, base);
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1536);
	// lwz r10,1540(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821831d8
	if (ctx.cr6.eq) goto loc_821831D8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,1544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,1536(r31)
	REX_STORE_U32(r31.u32 + 1536, ctx.r11.u32);
	// b 0x821831d8
	goto loc_821831D8;
loc_82183260:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82183264:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8218F668) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8218F670;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r11,13128
	r29.s64 = ctx.r11.s64 + 13128;
	// addi r11,r10,2664
	ctx.r11.s64 = ctx.r10.s64 + 2664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r31,1834(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 1834);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x8218f6a4
	if (ctx.cr6.lt) goto loc_8218F6A4;
	// cmplwi cr6,r31,7
	ctx.cr6.compare<uint32_t>(r31.u32, 7, ctx.xer);
	// bne cr6,0x8218f6a8
	if (!ctx.cr6.eq) goto loc_8218F6A8;
loc_8218F6A4:
	// li r31,2
	r31.s64 = 2;
loc_8218F6A8:
	// lis r11,-32178
	ctx.r11.s64 = -2108817408;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r11,2824
	ctx.r4.s64 = ctx.r11.s64 + 2824;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e6b50
	ctx.lr = 0x8218F6BC;
	sub_820E6B50(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stb r11,1812(r29)
	REX_STORE_U8(r29.u32 + 1812, ctx.r11.u8);
	// stw r31,344(r10)
	REX_STORE_U32(ctx.r10.u32 + 344, r31.u32);
	// beq cr6,0x8218f6dc
	if (ctx.cr6.eq) goto loc_8218F6DC;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
loc_8218F6DC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,80(r30)
	REX_STORE_U32(r30.u32 + 80, r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,84(r30)
	REX_STORE_U32(r30.u32 + 84, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218f500
	ctx.lr = 0x8218F6F4;
	sub_8218F500(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82191CE0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,432
	ctx.r9.s64 = ctx.r10.s64 + 432;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2960(r9)
	REX_STORE_U32(ctx.r9.u32 + 2960, ctx.r11.u32);
	// stw r10,2964(r9)
	REX_STORE_U32(ctx.r9.u32 + 2964, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191F40) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,30852(r10)
	REX_STORE_U32(ctx.r10.u32 + 30852, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192960) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// addi r11,r5,-2
	ctx.r11.s64 = ctx.r5.s64 + -2;
	// stb r6,152(r3)
	REX_STORE_U8(ctx.r3.u32 + 152, ctx.r6.u8);
	// addi r10,r10,3636
	ctx.r10.s64 = ctx.r10.s64 + 3636;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bgt cr6,0x82192af4
	if (ctx.cr6.gt) goto loc_82192AF4;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,3608
	ctx.r12.s64 = ctx.r12.s64 + 3608;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// nop 
	// addi r12,r12,10684
	ctx.r12.s64 = ctx.r12.s64 + 10684;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821929BC;
	case 1:
		goto loc_821929C8;
	case 2:
		goto loc_821929C8;
	case 3:
		goto loc_821929D4;
	case 4:
		goto loc_821929E0;
	case 5:
		goto loc_82192AB8;
	case 6:
		goto loc_82192A10;
	case 7:
		goto loc_821929EC;
	case 8:
		goto loc_821929F8;
	case 9:
		goto loc_82192A34;
	case 10:
		goto loc_82192A40;
	case 11:
		goto loc_82192A1C;
	case 12:
		goto loc_82192A28;
	case 13:
		goto loc_82192A04;
	case 14:
		goto loc_82192A4C;
	case 15:
		goto loc_82192A58;
	case 16:
		goto loc_82192A70;
	case 17:
		goto loc_82192A64;
	case 18:
		goto loc_82192A7C;
	case 19:
		goto loc_82192A88;
	case 20:
		goto loc_82192A94;
	case 21:
		goto loc_82192AA0;
	case 22:
		goto loc_82192AAC;
	case 23:
		goto loc_82192AC4;
	case 24:
		goto loc_82192AD0;
	case 25:
		goto loc_82192ADC;
	case 26:
		goto loc_82192AE8;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821929BC:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,69
	ctx.r3.u64 = ctx.r3.u64 | 69;
	// b 0x82192afc
	goto loc_82192AFC;
loc_821929C8:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,71
	ctx.r3.u64 = ctx.r3.u64 | 71;
	// b 0x82192afc
	goto loc_82192AFC;
loc_821929D4:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,70
	ctx.r3.u64 = ctx.r3.u64 | 70;
	// b 0x82192afc
	goto loc_82192AFC;
loc_821929E0:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,95
	ctx.r3.u64 = ctx.r3.u64 | 95;
	// b 0x82192afc
	goto loc_82192AFC;
loc_821929EC:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,59
	ctx.r3.u64 = ctx.r3.u64 | 59;
	// b 0x82192afc
	goto loc_82192AFC;
loc_821929F8:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,191
	ctx.r3.u64 = ctx.r3.u64 | 191;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A04:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,65
	ctx.r3.u64 = ctx.r3.u64 | 65;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A10:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,51
	ctx.r3.u64 = ctx.r3.u64 | 51;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A1C:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,164
	ctx.r3.u64 = ctx.r3.u64 | 164;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A28:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,63
	ctx.r3.u64 = ctx.r3.u64 | 63;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A34:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,72
	ctx.r3.u64 = ctx.r3.u64 | 72;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A40:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,73
	ctx.r3.u64 = ctx.r3.u64 | 73;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A4C:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,106
	ctx.r3.u64 = ctx.r3.u64 | 106;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A58:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,107
	ctx.r3.u64 = ctx.r3.u64 | 107;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A64:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,108
	ctx.r3.u64 = ctx.r3.u64 | 108;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A70:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A7C:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,161
	ctx.r3.u64 = ctx.r3.u64 | 161;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A88:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,78
	ctx.r3.u64 = ctx.r3.u64 | 78;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192A94:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,79
	ctx.r3.u64 = ctx.r3.u64 | 79;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AA0:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,158
	ctx.r3.u64 = ctx.r3.u64 | 158;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AAC:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AB8:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,96
	ctx.r3.u64 = ctx.r3.u64 | 96;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AC4:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,181
	ctx.r3.u64 = ctx.r3.u64 | 181;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AD0:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,180
	ctx.r3.u64 = ctx.r3.u64 | 180;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192ADC:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AE8:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,129
	ctx.r3.u64 = ctx.r3.u64 | 129;
	// b 0x82192afc
	goto loc_82192AFC;
loc_82192AF4:
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// ori r3,r3,57
	ctx.r3.u64 = ctx.r3.u64 | 57;
loc_82192AFC:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82192B0C;
	sub_820E68B8(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_8219B1F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8219B1F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6240
	ctx.r11.s64 = ctx.r11.s64 + 6240;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x821aff90
	ctx.lr = 0x8219B21C;
	sub_821AFF90(ctx, base);
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
	ctx.lr = 0x8219B238;
	sub_8219A078(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,27
	ctx.r3.s64 = 27;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x82102738
	ctx.lr = 0x8219B248;
	sub_82102738(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82106460
	ctx.lr = 0x8219B250;
	sub_82106460(ctx, base);
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8219b278
	if (ctx.cr0.lt) goto loc_8219B278;
	// stw r3,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// stw r29,96(r31)
	REX_STORE_U32(r31.u32 + 96, r29.u32);
	// beq cr6,0x8219b280
	if (ctx.cr6.eq) goto loc_8219B280;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x8219b280
	goto loc_8219B280;
loc_8219B278:
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
loc_8219B280:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8219CA28) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10148);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,10152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10152);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,1136(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,1140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,1144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,1136(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,1140(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,1144(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e1bf0
	ctx.lr = 0x8219CA9C;
	sub_820E1BF0(ctx, base);
	// lwz r11,10148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// lwz r10,10152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10152);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,1392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,1396(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,1400(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lfs f0,1392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1392);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,1396(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1396);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,1400(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1400);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x820e1bf0
	ctx.lr = 0x8219CAEC;
	sub_820E1BF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e20b0
	ctx.lr = 0x8219CB04;
	sub_820E20B0(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// stfs f31,140(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r31,16
	r31.s64 = 16;
	// addi r30,r11,5880
	r30.s64 = ctx.r11.s64 + 5880;
loc_8219CB18:
	// bl 0x821feec8
	ctx.lr = 0x8219CB1C;
	sub_821FEEC8(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e20b0
	ctx.lr = 0x8219CB2C;
	sub_820E20B0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8219c888
	ctx.lr = 0x8219CB48;
	sub_8219C888(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bgt 0x8219cb18
	if (ctx.cr0.gt) goto loc_8219CB18;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

DEFINE_REX_FUNC(sub_821A29A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// beq cr6,0x821a2a24
	if (ctx.cr6.eq) goto loc_821A2A24;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x821a2a14
	if (ctx.cr6.eq) goto loc_821A2A14;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x821a29f8
	if (ctx.cr6.eq) goto loc_821A29F8;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x821a2a34
	if (!ctx.cr6.eq) goto loc_821A2A34;
	// lwz r3,28(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// b 0x821a2a18
	goto loc_821A2A18;
loc_821A29F8:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x821a3a30
	ctx.lr = 0x821A2A04;
	sub_821A3A30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// b 0x821a2a34
	goto loc_821A2A34;
loc_821A2A14:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_821A2A18:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a3a30
	ctx.lr = 0x821A2A20;
	sub_821A3A30(ctx, base);
	// b 0x821a2a34
	goto loc_821A2A34;
loc_821A2A24:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x821a3a30
	ctx.lr = 0x821A2A30;
	sub_821A3A30(ctx, base);
	// stfs f31,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
loc_821A2A34:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
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

DEFINE_REX_FUNC(sub_821A4D68) {
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
	ctx.lr = 0x821A4D70;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f38
	ctx.lr = 0x821A4D78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// fmr f28,f2
	f28.f64 = ctx.f2.f64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,14388
	ctx.r10.s64 = ctx.r10.s64 + 14388;
	// extsh r28,r6
	r28.s64 = ctx.r6.s16;
	// addi r29,r3,48
	r29.s64 = ctx.r3.s64 + 48;
	// cmpwi cr6,r28,255
	ctx.cr6.compare<int32_t>(r28.s32, 255, ctx.xer);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x821a4dc0
	if (!ctx.cr6.eq) goto loc_821A4DC0;
	// lha r10,88(r4)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 88));
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// addi r9,r9,14256
	ctx.r9.s64 = ctx.r9.s64 + 14256;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r10,r9
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	f31.f64 = double(temp.f32);
	// b 0x821a4df4
	goto loc_821A4DF4;
loc_821A4DC0:
	// cmpwi cr6,r28,192
	ctx.cr6.compare<int32_t>(r28.s32, 192, ctx.xer);
	// bge cr6,0x821a4dec
	if (!ctx.cr6.lt) goto loc_821A4DEC;
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,16220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x821a4df4
	goto loc_821A4DF4;
loc_821A4DEC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,2024(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f31.f64 = double(temp.f32);
loc_821A4DF4:
	// addi r31,r11,-8
	r31.s64 = ctx.r11.s64 + -8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,4
	r30.s64 = 4;
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_821A4E04:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r28,192
	ctx.cr6.compare<int32_t>(r28.s32, 192, ctx.xer);
	// fmuls f4,f0,f28
	ctx.f4.f64 = double(float(ctx.f0.f64 * f28.f64));
	// beq cr6,0x821a4e28
	if (ctx.cr6.eq) goto loc_821A4E28;
	// cmpwi cr6,r28,193
	ctx.cr6.compare<int32_t>(r28.s32, 193, ctx.xer);
	// beq cr6,0x821a4e28
	if (ctx.cr6.eq) goto loc_821A4E28;
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * f29.f64));
	// b 0x821a4e2c
	goto loc_821A4E2C;
loc_821A4E28:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
loc_821A4E2C:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x821a4e3c
	if (ctx.cr6.lt) goto loc_821A4E3C;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// b 0x821a4e40
	goto loc_821A4E40;
loc_821A4E3C:
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
loc_821A4E40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfsu f3,16(r31)
	ctx.fpscr.disableFlushMode();
	ea = 16 + r31.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f3.f64 = double(temp.f32);
	r31.u32 = ea;
	// bl 0x82202a80
	ctx.lr = 0x821A4E4C;
	sub_82202A80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// bne 0x821a4e04
	if (!ctx.cr0.eq) goto loc_821A4E04;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f84
	ctx.lr = 0x821A4E64;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A90D8) {
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
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// bl 0x821a9d58
	ctx.lr = 0x821A90F4;
	sub_821A9D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a9104
	if (ctx.cr0.eq) goto loc_821A9104;
	// li r11,1167
	ctx.r11.s64 = 1167;
	// stw r11,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r11.u32);
loc_821A9104:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x821a914c
	if (ctx.cr6.eq) goto loc_821A914C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82208d78
	ctx.lr = 0x821A9120;
	sub_82208D78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821a9184
	if (!ctx.cr0.eq) goto loc_821A9184;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a9160
	if (ctx.cr6.lt) goto loc_821A9160;
	// bne cr6,0x821a914c
	if (!ctx.cr6.eq) goto loc_821A914C;
loc_821A9138:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,156(r31)
	REX_STORE_U8(r31.u32 + 156, ctx.r11.u8);
loc_821A9144:
	// stb r11,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r11.u8);
	// stw r10,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_821A914C:
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
loc_821A9160:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stb r10,88(r31)
	REX_STORE_U8(r31.u32 + 88, ctx.r10.u8);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// andi. r11,r11,11
	ctx.r11.u64 = ctx.r11.u64 & 11;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// b 0x821a914c
	goto loc_821A914C;
loc_821A9184:
	// cmplwi cr6,r3,1223
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1223, ctx.xer);
	// beq cr6,0x821a9138
	if (ctx.cr6.eq) goto loc_821A9138;
	// cmplwi cr6,r3,1627
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1627, ctx.xer);
	// beq cr6,0x821a9138
	if (ctx.cr6.eq) goto loc_821A9138;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x821a9144
	goto loc_821A9144;
}

DEFINE_REX_FUNC(sub_821AB3E0) {
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
	ctx.lr = 0x821AB3E8;
	// stfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f30.u64);
	// stfd f31,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82187b58
	ctx.lr = 0x821AB3FC;
	sub_82187B58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r18,0
	r18.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bne cr6,0x821ab414
	if (!ctx.cr6.eq) goto loc_821AB414;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_821AB414:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82188070
	ctx.lr = 0x821AB41C;
	sub_82188070(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,31868
	r31.s64 = ctx.r11.s64 + 31868;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// stw r10,28(r30)
	REX_STORE_U32(r30.u32 + 28, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// ori r8,r10,3696
	ctx.r8.u64 = ctx.r10.u64 | 3696;
	// addi r28,r11,-7072
	r28.s64 = ctx.r11.s64 + -7072;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r11.u32);
	// lbz r11,26(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// stb r18,92(r30)
	REX_STORE_U8(r30.u32 + 92, r18.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,220(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lbz r11,26(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r20,r11,r28
	r20.u64 = ctx.r11.u64 + r28.u64;
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r10,r10,r20
	ctx.r10.u64 = r20.u64 - ctx.r10.u64;
	// rlwinm. r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,92(r30)
	REX_STORE_U8(r30.u32 + 92, ctx.r11.u8);
	// lfs f0,16360(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16360);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28452(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28452);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x821ab528
	if (ctx.cr0.eq) goto loc_821AB528;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,3652
	ctx.r11.u64 = ctx.r11.u64 | 3652;
	// ori r10,r10,7348
	ctx.r10.u64 = ctx.r10.u64 | 7348;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// lfs f12,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f10,112(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fnmsubs f11,f11,f0,f13
	ctx.f11.f64 = double(float(-std::fma(ctx.f11.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fnmsubs f0,f10,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f11
	ctx.f13.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r22,116(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,108(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x821ab5c0
	goto loc_821AB5C0;
loc_821AB528:
	// lbz r11,26(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ab57c
	if (!ctx.cr0.eq) goto loc_821AB57C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r11,r11,7348
	ctx.r11.u64 = ctx.r11.u64 | 7348;
	// ori r10,r10,3652
	ctx.r10.u64 = ctx.r10.u64 | 3652;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r23,116(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// neg r22,r23
	r22.s64 = static_cast<int64_t>(-r23.u64);
	// b 0x821ab5c0
	goto loc_821AB5C0;
loc_821AB57C:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,3652
	ctx.r11.u64 = ctx.r11.u64 | 3652;
	// ori r10,r10,7348
	ctx.r10.u64 = ctx.r10.u64 | 7348;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + ctx.r10.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r22,116(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// neg r23,r22
	r23.s64 = static_cast<int64_t>(-r22.u64);
loc_821AB5C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82187bd8
	ctx.lr = 0x821AB5C8;
	sub_82187BD8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r19,r23
	r19.u64 = r23.u64;
	// bne 0x821ab5d8
	if (!ctx.cr0.eq) goto loc_821AB5D8;
	// mr r19,r22
	r19.u64 = r22.u64;
loc_821AB5D8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ab720
	if (ctx.cr6.eq) goto loc_821AB720;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r21,-32165
	r21.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f30,-8500(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8500);
	f30.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f31,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f30,132(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lwz r3,-32480(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + -32480);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x821AB630;
	sub_821F7D50(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r26,r11,-8304
	r26.s64 = ctx.r11.s64 + -8304;
	// addi r25,r10,29368
	r25.s64 = ctx.r10.s64 + 29368;
	// beq 0x821ab690
	if (ctx.cr0.eq) goto loc_821AB690;
	// lbz r11,26(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 324);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r17,r11
	r17.s64 = ctx.r11.s8;
	// bl 0x821af9d8
	ctx.lr = 0x821AB664;
	sub_821AF9D8(ctx, base);
	// cntlzw r10,r17
	ctx.r10.u64 = r17.u32 == 0 ? 32 : __builtin_clz(r17.u32);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,3644
	ctx.r6.s64 = ctx.r11.s64 + 3644;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// bl 0x82196170
	ctx.lr = 0x821AB690;
	sub_82196170(ctx, base);
loc_821AB690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f30,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f31,136(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + -32480);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f0,27752(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27752);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821AB6C8;
	sub_821F7D50(ctx, base);
	// mr. r24,r3
	r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq 0x821ab71c
	if (ctx.cr0.eq) goto loc_821AB71C;
	// lbz r11,26(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 26);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,324(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 324);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r4,1
	ctx.r4.s64 = 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x821af9d8
	ctx.lr = 0x821AB6F4;
	sub_821AF9D8(ctx, base);
	// addis r11,r28,2
	ctx.r11.s64 = r28.s64 + 131072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r11,7340
	ctx.r6.s64 = ctx.r11.s64 + 7340;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// bl 0x82196170
	ctx.lr = 0x821AB71C;
	sub_82196170(ctx, base);
loc_821AB71C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_821AB720:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x821ab730
	if (!ctx.cr6.eq) goto loc_821AB730;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ab73c
	if (!ctx.cr6.eq) goto loc_821AB73C;
loc_821AB730:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82116e50
	ctx.lr = 0x821AB738;
	sub_82116E50(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
loc_821AB73C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x821ab7cc
	if (!ctx.cr6.eq) goto loc_821AB7CC;
	// lbz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821ab7bc
	if (ctx.cr0.eq) goto loc_821AB7BC;
	// beq cr6,0x821ab764
	if (ctx.cr6.eq) goto loc_821AB764;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_821AB764:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e2db8
	ctx.lr = 0x821AB76C;
	sub_821E2DB8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e34e0
	ctx.lr = 0x821AB778;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,8112
	ctx.r11.s64 = ctx.r11.s64 + 8112;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AB78C;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e2e48
	ctx.lr = 0x821AB794;
	sub_821E2E48(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x821AB7A0;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,8120
	ctx.r11.s64 = ctx.r11.s64 + 8120;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AB7B4;
	sub_821E2FD0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// b 0x821ab7cc
	goto loc_821AB7CC;
loc_821AB7BC:
	// beq cr6,0x821ab7e4
	if (ctx.cr6.eq) goto loc_821AB7E4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_821AB7CC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ab7e4
	if (ctx.cr6.eq) goto loc_821AB7E4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// b 0x821ab7e8
	goto loc_821AB7E8;
loc_821AB7E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_821AB7E8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// ori r10,r10,34463
	ctx.r10.u64 = ctx.r10.u64 | 34463;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ab800
	if (ctx.cr6.lt) goto loc_821AB800;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_821AB800:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,16959
	ctx.r10.u64 = ctx.r10.u64 | 16959;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ab818
	if (ctx.cr6.lt) goto loc_821AB818;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_821AB818:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x821ab828
	if (ctx.cr6.gt) goto loc_821AB828;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// stw r18,12(r31)
	REX_STORE_U32(r31.u32 + 12, r18.u32);
loc_821AB828:
	// stw r11,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,112(r30)
	REX_STORE_U32(r30.u32 + 112, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,116(r30)
	REX_STORE_U32(r30.u32 + 116, ctx.r11.u32);
	// bl 0x821e2f00
	ctx.lr = 0x821AB844;
	sub_821E2F00(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e34e0
	ctx.lr = 0x821AB850;
	sub_821E34E0(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821e34e0
	ctx.lr = 0x821AB860;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,8128
	ctx.r11.s64 = ctx.r11.s64 + 8128;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821AB874;
	sub_821E2FD0(ctx, base);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// stw r18,120(r30)
	REX_STORE_U32(r30.u32 + 120, r18.u32);
	// stw r18,88(r30)
	REX_STORE_U32(r30.u32 + 88, r18.u32);
	// stb r18,-11708(r10)
	REX_STORE_U8(ctx.r10.u32 + -11708, r18.u8);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-144(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f31,-136(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_821C4F80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,896
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(896));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,7224
	ctx.r11.s64 = ctx.r11.s64 + 7224;
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821C4FAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821c4fc0
	if (ctx.cr6.eq) goto loc_821C4FC0;
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
loc_821C4FC0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821c4fac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C4FAC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5800) {
	REX_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// sth r9,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, ctx.r9.u16);
	// addi r11,r11,-9448
	ctx.r11.s64 = ctx.r11.s64 + -9448;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821C5818:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c582c
	if (!ctx.cr6.eq) goto loc_821C582C;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_821C582C:
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// bdnz 0x821c5818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C5818;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C5AF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,10528(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10528);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r3,10516
	ctx.r11.s64 = ctx.r3.s64 + 10516;
	// lfs f12,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,10484(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10484);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r3,10484
	ctx.r10.s64 = ctx.r3.s64 + 10484;
	// fsubs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f9,10488(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10488);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,10492(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f10,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfs f11,10484(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 10484, temp.u32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fmadds f11,f11,f0,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f11,10488(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 10488, temp.u32);
	// lfs f11,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f8.f64));
	// fmadds f0,f11,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f0,10492(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// lfs f11,10492(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10492);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10484(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10484);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fsubs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// fmuls f11,f10,f10
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmadds f0,f0,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f11.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfs f12,12(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8560) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821C8568;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r3,6272
	r29.s64 = ctx.r3.s64 + 6272;
loc_821C8578:
	// not r11,r30
	ctx.r11.u64 = ~r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8215bc08
	ctx.lr = 0x821C858C;
	sub_8215BC08(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r30,r30,31,17,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFF;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(r31.s32, 15, ctx.xer);
	// ble cr6,0x821c8578
	if (!ctx.cr6.gt) goto loc_821C8578;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821C8D68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r10,r11,432
	ctx.r10.s64 = ctx.r11.s64 + 432;
	// li r3,0
	ctx.r3.s64 = 0;
	// lha r11,30(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821c8d9c
	if (ctx.cr6.lt) goto loc_821C8D9C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821c8dcc
	if (!ctx.cr6.gt) goto loc_821C8DCC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821c8db8
	if (ctx.cr6.eq) goto loc_821C8DB8;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821c8dcc
	if (ctx.cr6.eq) goto loc_821C8DCC;
loc_821C8D9C:
	// lhz r11,88(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x821c8db0
	if (ctx.cr6.eq) goto loc_821C8DB0;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821C8DB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821C8DB8:
	// lbz r11,6(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c8d9c
	if (ctx.cr0.eq) goto loc_821C8D9C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821C8DCC:
	// lwz r11,5464(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c8de4
	if (!ctx.cr6.eq) goto loc_821C8DE4;
	// lwz r11,500(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 500);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821c8d9c
	if (!ctx.cr6.eq) goto loc_821C8D9C;
loc_821C8DE4:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA6F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821CA700;
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
	// li r29,0
	r29.s64 = 0;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 40);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821ca7b0
	if (ctx.cr6.eq) goto loc_821CA7B0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821ca76c
	if (ctx.cr6.eq) goto loc_821CA76C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x821ca9c8
	if (!ctx.cr6.eq) goto loc_821CA9C8;
	// lha r11,30(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821ca9c8
	if (ctx.cr6.lt) goto loc_821CA9C8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821ca81c
	if (!ctx.cr6.gt) goto loc_821CA81C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821ca75c
	if (ctx.cr6.eq) goto loc_821CA75C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821ca81c
	if (ctx.cr6.eq) goto loc_821CA81C;
	// b 0x821ca9c8
	goto loc_821CA9C8;
loc_821CA75C:
	// lwz r11,220(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ca9c8
	if (!ctx.cr6.eq) goto loc_821CA9C8;
	// b 0x821ca81c
	goto loc_821CA81C;
loc_821CA76C:
	// lwz r11,5464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 5464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ca7b0
	if (!ctx.cr6.eq) goto loc_821CA7B0;
	// lwz r11,872(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 872);
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5472);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,5468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ca7b0
	if (ctx.cr0.eq) goto loc_821CA7B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2870
	ctx.lr = 0x821CA7A4;
	sub_821C2870(ctx, base);
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,5468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
loc_821CA7B0:
	// lhz r11,10(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ca81c
	if (ctx.cr0.eq) goto loc_821CA81C;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// addi r10,r9,23240
	ctx.r10.s64 = ctx.r9.s64 + 23240;
	// mulli r7,r8,284
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(284));
	// lwz r11,23240(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 23240);
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwzx r10,r7,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ca81c
	if (ctx.cr0.eq) goto loc_821CA81C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lwz r11,1852(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1852);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821ca81c
	if (!ctx.cr0.eq) goto loc_821CA81C;
	// lbz r11,7(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 7);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r11,13
	ctx.r4.s64 = ctx.r11.s64 + 13;
	// bl 0x8218cea0
	ctx.lr = 0x821CA81C;
	sub_8218CEA0(ctx, base);
loc_821CA81C:
	// lwz r10,5464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 5464);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821ca988
	if (ctx.cr6.eq) goto loc_821CA988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5468(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,5484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 5484);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f10,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,28724(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28724);
	ctx.f11.f64 = double(temp.f32);
	// bge cr6,0x821ca86c
	if (!ctx.cr6.lt) goto loc_821CA86C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stfs f0,5484(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
	// lwz r11,5792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 5792);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r29,r11,2
	r29.s64 = ctx.r11.s64 + 2;
	// b 0x821ca8cc
	goto loc_821CA8CC;
loc_821CA86C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821ca8cc
	if (!ctx.cr6.gt) goto loc_821CA8CC;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ca8bc
	if (ctx.cr6.eq) goto loc_821CA8BC;
	// lhz r11,30(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 30);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x821ca8a4
	if (!ctx.cr6.eq) goto loc_821CA8A4;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821ca8a4
	if (ctx.cr6.lt) goto loc_821CA8A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f13.f64 = double(temp.f32);
	// b 0x821ca8c4
	goto loc_821CA8C4;
loc_821CA8A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f13,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821ca8c4
	if (ctx.cr6.eq) goto loc_821CA8C4;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x821ca8c4
	goto loc_821CA8C4;
loc_821CA8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,31216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31216);
	ctx.f13.f64 = double(temp.f32);
loc_821CA8C4:
	// fadds f13,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,5484(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
loc_821CA8CC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821ca8dc
	if (ctx.cr6.lt) goto loc_821CA8DC;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x821ca8e0
	goto loc_821CA8E0;
loc_821CA8DC:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821CA8E0:
	// lfs f0,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5484);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,5468(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bgt cr6,0x821ca8f4
	if (ctx.cr6.gt) goto loc_821CA8F4;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_821CA8F4:
	// stfs f0,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x821ca904
	if (ctx.cr6.lt) goto loc_821CA904;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
loc_821CA904:
	// stfs f0,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5484, temp.u32);
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// bgt cr6,0x821ca938
	if (ctx.cr6.gt) goto loc_821CA938;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12388(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12388);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// lhz r11,74(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca988
	if (!ctx.cr0.eq) goto loc_821CA988;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ca988
	if (!ctx.cr6.eq) goto loc_821CA988;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821ca984
	goto loc_821CA984;
loc_821CA938:
	// lhz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 256);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ca988
	if (ctx.cr0.eq) goto loc_821CA988;
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bne cr6,0x821ca988
	if (!ctx.cr6.eq) goto loc_821CA988;
	// lfs f0,5476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5476);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821ca988
	if (ctx.cr6.gt) goto loc_821CA988;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16796(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16796);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,5468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 5468, temp.u32);
	// lhz r11,74(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ca988
	if (!ctx.cr0.eq) goto loc_821CA988;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ca988
	if (!ctx.cr6.eq) goto loc_821CA988;
	// li r11,7
	ctx.r11.s64 = 7;
loc_821CA984:
	// stw r11,5464(r31)
	REX_STORE_U32(r31.u32 + 5464, ctx.r11.u32);
loc_821CA988:
	// lhz r11,308(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 308);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ca9c8
	if (ctx.cr0.eq) goto loc_821CA9C8;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,5484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 5484);
	ctx.f13.f64 = double(temp.f32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r8,r11,62
	ctx.r8.s64 = ctx.r11.s64 + 62;
	// lwz r11,-9828(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -9828);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,9892(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9892);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x821e6008
	ctx.lr = 0x821CA9C8;
	sub_821E6008(ctx, base);
loc_821CA9C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821D8DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lfs f0,16648(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16592(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16592);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// stfs f0,16648(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 16648, temp.u32);
	// stfs f13,16592(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 16592, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DACA0) {
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
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r11,4384
	ctx.r11.s64 = ctx.r11.s64 + 4384;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DACC4:
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x821dacc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DACC4;
	// li r10,99
	ctx.r10.s64 = 99;
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DACE0:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x821dace0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DACE0;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r11,-7192
	ctx.r3.s64 = ctx.r11.s64 + -7192;
	// bl 0x821d9090
	ctx.lr = 0x821DACF4;
	sub_821D9090(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r11,-7072
	ctx.r3.s64 = ctx.r11.s64 + -7072;
	// bl 0x821d9090
	ctx.lr = 0x821DAD00;
	sub_821D9090(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DCE68) {
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
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x821dcee0
	if (ctx.cr6.eq) goto loc_821DCEE0;
	// cmpwi cr6,r3,24
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 24, ctx.xer);
	// beq cr6,0x821dcee0
	if (ctx.cr6.eq) goto loc_821DCEE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821c7f28
	ctx.lr = 0x821DCEA4;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821dcee0
	if (ctx.cr0.eq) goto loc_821DCEE0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// blt cr6,0x821dcee0
	if (ctx.cr6.lt) goto loc_821DCEE0;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(r30.s32, 12, ctx.xer);
	// bge cr6,0x821dcee0
	if (!ctx.cr6.lt) goto loc_821DCEE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b3110
	ctx.lr = 0x821DCEC4;
	sub_821B3110(ctx, base);
	// cmpwi cr6,r31,20
	ctx.cr6.compare<int32_t>(r31.s32, 20, ctx.xer);
	// bne cr6,0x821dced0
	if (!ctx.cr6.eq) goto loc_821DCED0;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
loc_821DCED0:
	// mulli r11,r3,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,86
	ctx.r3.s64 = ctx.r11.s64 + 86;
	// b 0x821dcee4
	goto loc_821DCEE4;
loc_821DCEE0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821DCEE4:
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

DEFINE_REX_FUNC(sub_821DF2F0) {
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
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r30,r11,432
	r30.s64 = ctx.r11.s64 + 432;
	// addi r31,r10,-5790
	r31.s64 = ctx.r10.s64 + -5790;
	// li r10,1
	ctx.r10.s64 = 1;
	// lhz r11,426(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 426);
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821df37c
	if (ctx.cr0.eq) goto loc_821DF37C;
	// lbz r11,2971(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2971);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821df37c
	if (!ctx.cr0.eq) goto loc_821DF37C;
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-12784
	ctx.r6.s64 = ctx.r11.s64 + -12784;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821DF360;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821df374
	if (ctx.cr0.eq) goto loc_821DF374;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a9a18
	ctx.lr = 0x821DF374;
	sub_821A9A18(ctx, base);
loc_821DF374:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,426(r30)
	REX_STORE_U16(r30.u32 + 426, ctx.r11.u16);
loc_821DF37C:
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

DEFINE_REX_FUNC(sub_821E15B0) {
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
	ctx.lr = 0x821E15B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lwz r31,-32480(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lwz r11,2548(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 2548);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e1858
	if (ctx.cr6.eq) goto loc_821E1858;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e17b8
	if (ctx.cr6.lt) goto loc_821E17B8;
	// beq cr6,0x821e1710
	if (ctx.cr6.eq) goto loc_821E1710;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821e184c
	if (!ctx.cr6.lt) goto loc_821E184C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821e16f0
	if (ctx.cr6.lt) goto loc_821E16F0;
	// beq cr6,0x821e16e0
	if (ctx.cr6.eq) goto loc_821E16E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821e165c
	if (ctx.cr6.lt) goto loc_821E165C;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lwz r11,-5420(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -5420);
	// beq cr6,0x821e164c
	if (ctx.cr6.eq) goto loc_821E164C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e16f8
	if (ctx.cr6.eq) goto loc_821E16F8;
loc_821E1628:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lfs f1,20484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,828(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 828);
	// bl 0x821eb660
	ctx.lr = 0x821E1640;
	sub_821EB660(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r11.u16);
	// b 0x821e16f8
	goto loc_821E16F8;
loc_821E164C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e1628
	if (!ctx.cr6.eq) goto loc_821E1628;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821e16d8
	goto loc_821E16D8;
loc_821E165C:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e16d4
	if (!ctx.cr6.eq) goto loc_821E16D4;
	// bl 0x821e0020
	ctx.lr = 0x821E166C;
	sub_821E0020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e16c8
	if (ctx.cr0.eq) goto loc_821E16C8;
	// bl 0x820eded0
	ctx.lr = 0x821E1678;
	sub_820EDED0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e168c
	if (!ctx.cr0.eq) goto loc_821E168C;
	// lhz r11,30(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 30);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x821e16c8
	if (!ctx.cr6.eq) goto loc_821E16C8;
loc_821E168C:
	// bl 0x821d7d10
	ctx.lr = 0x821E1690;
	sub_821D7D10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e16c8
	if (ctx.cr0.eq) goto loc_821E16C8;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,-7072
	ctx.r8.s64 = ctx.r11.s64 + -7072;
	// lis r7,-32166
	ctx.r7.s64 = -2108030976;
	// ori r10,r10,14184
	ctx.r10.u64 = ctx.r10.u64 | 14184;
	// li r11,3
	ctx.r11.s64 = 3;
	// lfs f0,2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10488(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 10488, temp.u32);
	// stw r11,5588(r7)
	REX_STORE_U32(ctx.r7.u32 + 5588, ctx.r11.u32);
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// b 0x821e16f8
	goto loc_821E16F8;
loc_821E16C8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x821e16d8
	goto loc_821E16D8;
loc_821E16D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821E16D8:
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// b 0x821e16f8
	goto loc_821E16F8;
loc_821E16E0:
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,5588(r10)
	REX_STORE_U32(ctx.r10.u32 + 5588, ctx.r11.u32);
	// b 0x821e16f8
	goto loc_821E16F8;
loc_821E16F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,1824(r28)
	REX_STORE_U8(r28.u32 + 1824, ctx.r11.u8);
loc_821E16F8:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e184c
	if (ctx.cr6.eq) goto loc_821E184C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,1824(r28)
	REX_STORE_U8(r28.u32 + 1824, ctx.r11.u8);
	// b 0x821e184c
	goto loc_821E184C;
loc_821E1710:
	// lhz r11,10(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 10);
	// li r31,246
	r31.s64 = 246;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e1730
	if (ctx.cr0.eq) goto loc_821E1730;
	// bl 0x82136518
	ctx.lr = 0x821E1724;
	sub_82136518(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821e1730
	if (ctx.cr0.eq) goto loc_821E1730;
	// li r31,600
	r31.s64 = 600;
loc_821E1730:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// blt cr6,0x821e184c
	if (ctx.cr6.lt) goto loc_821E184C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// lha r11,20(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 20));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821e184c
	if (ctx.cr6.lt) goto loc_821E184C;
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e184c
	if (!ctx.cr6.eq) goto loc_821E184C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-7072
	ctx.r11.s64 = ctx.r11.s64 + -7072;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e1784
	if (ctx.cr6.eq) goto loc_821E1784;
	// lwz r10,19676(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 19676);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x821e184c
	if (ctx.cr6.lt) goto loc_821E184C;
loc_821E1784:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3812
	ctx.r10.u64 = ctx.r10.u64 | 3812;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821e17ac
	if (ctx.cr6.eq) goto loc_821E17AC;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,23372
	ctx.r10.u64 = ctx.r10.u64 | 23372;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821e184c
	if (ctx.cr6.lt) goto loc_821E184C;
loc_821E17AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x821e17d4
	goto loc_821E17D4;
loc_821E17B8:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e17e0
	if (ctx.cr6.eq) goto loc_821E17E0;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// bne cr6,0x821e184c
	if (!ctx.cr6.eq) goto loc_821E184C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
loc_821E17D4:
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// b 0x821e184c
	goto loc_821E184C;
loc_821E17E0:
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// lis r10,-32214
	ctx.r10.s64 = -2111176704;
	// lis r7,-32226
	ctx.r7.s64 = -2111963136;
	// addi r6,r8,15592
	ctx.r6.s64 = ctx.r8.s64 + 15592;
	// addi r9,r11,4688
	ctx.r9.s64 = ctx.r11.s64 + 4688;
	// addi r8,r10,-22768
	ctx.r8.s64 = ctx.r10.s64 + -22768;
	// addi r7,r7,4480
	ctx.r7.s64 = ctx.r7.s64 + 4480;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821E1810;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e1828
	if (ctx.cr0.eq) goto loc_821E1828;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x821e182c
	goto loc_821E182C;
loc_821E1828:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E182C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r3,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r3.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821e184c
	if (ctx.cr6.eq) goto loc_821E184C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82117ad0
	ctx.lr = 0x821E184C;
	sub_82117AD0(ctx, base);
loc_821E184C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
loc_821E1858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821EB1A0) {
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
	ctx.lr = 0x821EB1A8;
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r5,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r5.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-528
	r28.s64 = ctx.r11.s64 + -528;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r1,280
	ctx.r11.s64 = ctx.r1.s64 + 280;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x822d4fa0
	ctx.lr = 0x821EB1F4;
	sub_822D4FA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821eaa48
	ctx.lr = 0x821EB204;
	sub_821EAA48(ctx, base);
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f12,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,96
	ctx.r5.s64 = 96;
	// lfs f13,20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x821EB23C;
	sub_822D4FA0(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10016
	ctx.r10.s64 = ctx.r10.s64 + 10016;
	// stw r11,384(r10)
	REX_STORE_U32(ctx.r10.u32 + 384, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821ED2D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fadds f13,f1,f3
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// addi r11,r11,-32032
	ctx.r11.s64 = ctx.r11.s64 + -32032;
	// lfs f1,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lhz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 24);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// bge cr6,0x821ed314
	if (!ctx.cr6.lt) goto loc_821ED314;
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821ED314:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x821ed324
	if (!ctx.cr6.gt) goto loc_821ED324;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_821ED324:
	// lhz r11,26(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 26);
	// fadds f0,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fcmpu cr6,f2,f1
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// bge cr6,0x821ed34c
	if (!ctx.cr6.lt) goto loc_821ED34C;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_821ED34C:
	// fcmpu cr6,f2,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x821ed35c
	if (!ctx.cr6.gt) goto loc_821ED35C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
loc_821ED35C:
	// fmuls f1,f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f4.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12196);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,32064(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32064);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f1.f64)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F0E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm. r8,r11,0,21,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f12,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x821f0e2c
	if (ctx.cr0.eq) goto loc_821F0E2C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821f0e30
	goto loc_821F0E30;
loc_821F0E2C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821F0E30:
	// stfs f13,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f0e44
	if (ctx.cr0.eq) goto loc_821F0E44;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821f0e48
	goto loc_821F0E48;
loc_821F0E44:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821F0E48:
	// stfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f0e5c
	if (ctx.cr0.eq) goto loc_821F0E5C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821f0e60
	goto loc_821F0E60;
loc_821F0E5C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821F0E60:
	// stfs f13,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// rlwinm. r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f0e74
	if (ctx.cr0.eq) goto loc_821F0E74;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821f0e78
	goto loc_821F0E78;
loc_821F0E74:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821F0E78:
	// stfs f13,60(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821f0e8c
	if (ctx.cr0.eq) goto loc_821F0E8C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x821f0e90
	goto loc_821F0E90;
loc_821F0E8C:
	// fmr f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f0.f64;
loc_821F0E90:
	// stfs f13,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f0ea0
	if (ctx.cr0.eq) goto loc_821F0EA0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_821F0EA0:
	// stfs f0,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 88, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F3FC8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F43E8) {
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
	ctx.lr = 0x821F43F0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821f458c
	if (ctx.cr6.eq) goto loc_821F458C;
	// lwz r26,4(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b41b0
	ctx.lr = 0x821F4410;
	sub_822B41B0(ctx, base);
	// lwz r28,24(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x821f4420
	if (!ctx.cr6.eq) goto loc_821F4420;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821F4420:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822aac90
	ctx.lr = 0x821F4428;
	sub_822AAC90(ctx, base);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r10,-32032
	r29.s64 = ctx.r10.s64 + -32032;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,32(r29)
	REX_STORE_U8(r29.u32 + 32, ctx.r11.u8);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r31.s64 = ctx.r11.s32 >> 2;
	// mulli r5,r31,3
	ctx.r5.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(3));
	// bl 0x821f2bf0
	ctx.lr = 0x821F445C;
	sub_821F2BF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821f4524
	if (ctx.cr6.eq) goto loc_821F4524;
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,16(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 16);
loc_821F4470:
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821F4484:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rotlwi r11,r11,6
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 6);
	// mulli r10,r10,56
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
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
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lfs f0,44(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lfs f0,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lfs f0,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// bdnz 0x821f4484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F4484;
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// bne 0x821f4470
	if (!ctx.cr0.eq) goto loc_821F4470;
loc_821F4524:
	// lbz r11,148(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 148);
	// lis r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,40960
	ctx.r5.u64 = ctx.r5.u64 | 40960;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f4548
	if (ctx.cr0.eq) goto loc_821F4548;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r5,r5,40976
	ctx.r5.u64 = ctx.r5.u64 | 40976;
loc_821F4548:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F4560;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821f2c50
	ctx.lr = 0x821F4580;
	sub_821F2C50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,32(r29)
	REX_STORE_U8(r29.u32 + 32, ctx.r11.u8);
	// b 0x821f45b4
	goto loc_821F45B4;
loc_821F458C:
	// lwz r31,4(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b50b8
	ctx.lr = 0x821F4598;
	sub_822B50B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f45b4
	if (ctx.cr0.eq) goto loc_821F45B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b68f0
	ctx.lr = 0x821F45AC;
	sub_822B68F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b4080
	ctx.lr = 0x821F45B4;
	sub_822B4080(ctx, base);
loc_821F45B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821FEB38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821FEB40;
	// li r11,4
	ctx.r11.s64 = 4;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// lis r9,32737
	ctx.r9.s64 = 2145452032;
	// ori r31,r10,65535
	r31.u64 = ctx.r10.u64 | 65535;
	// ori r3,r9,31447
	ctx.r3.u64 = ctx.r9.u64 | 31447;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,10424
	ctx.r11.s64 = ctx.r11.s64 + 10424;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r30,16(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821FEB78:
	// li r9,11714
	ctx.r9.s64 = 11714;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// lis r29,0
	r29.s64 = 0;
	// divw r9,r4,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r4.s32 / ctx.r9.s32 : 0);
	// ori r7,r7,52254
	ctx.r7.u64 = ctx.r7.u64 | 52254;
	// ori r29,r29,33921
	r29.u64 = r29.u64 | 33921;
	// lis r28,0
	r28.s64 = 0;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r31
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// divw r4,r6,r29
	ctx.r4.u64 = uint32_t((r29.s32 && !(ctx.r6.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r6.s32 / r29.s32 : 0);
	// ori r29,r28,63308
	r29.u64 = r28.u64 | 63308;
	// subf. r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r7,r4,r31
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(r31.s32);
	// mullw r4,r6,r29
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r29.s32);
	// subf r7,r7,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r7.u64;
	// bge 0x821febbc
	if (!ctx.cr0.lt) goto loc_821FEBBC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
loc_821FEBBC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x821febc8
	if (!ctx.cr6.lt) goto loc_821FEBC8;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + r31.u64;
loc_821FEBC8:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// subf. r8,r9,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bge 0x821febe8
	if (!ctx.cr0.lt) goto loc_821FEBE8;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_821FEBE8:
	// li r9,3976
	ctx.r9.s64 = 3976;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// divw r9,r5,r9
	ctx.r9.u64 = uint32_t((ctx.r9.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r5.s32 / ctx.r9.s32 : 0);
	// ori r7,r7,15320
	ctx.r7.u64 = ctx.r7.u64 | 15320;
	// li r29,24919
	r29.s64 = 24919;
	// lis r28,1
	r28.s64 = 65536;
	// mullw r7,r5,r7
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r9,r3
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r3.s32);
	// divw r5,r10,r29
	ctx.r5.u64 = uint32_t((r29.s32 && !(ctx.r10.s32 == INT32_MIN && r29.s32 == -1)) ? ctx.r10.s32 / r29.s32 : 0);
	// ori r29,r28,20562
	r29.u64 = r28.u64 | 20562;
	// subf. r9,r9,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mullw r7,r5,r3
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// mullw r5,r10,r29
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// subf r7,r7,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r7.u64;
	// bge 0x821fec28
	if (!ctx.cr0.lt) goto loc_821FEC28;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
loc_821FEC28:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge cr6,0x821fec34
	if (!ctx.cr6.lt) goto loc_821FEC34;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_821FEC34:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// subf. r10,r9,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r5,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r5.u32);
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r30.u32);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// bge 0x821fec58
	if (!ctx.cr0.lt) goto loc_821FEC58;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_821FEC58:
	// bdnz 0x821feb78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FEB78;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// subf r11,r10,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r10.u64;
	// bge cr6,0x821fec78
	if (!ctx.cr6.lt) goto loc_821FEC78;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// b 0x821fec80
	goto loc_821FEC80;
loc_821FEC78:
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r3,r11,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
loc_821FEC80:
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82203958) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822039e4
	if (ctx.cr6.eq) goto loc_822039E4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bgt 0x822039a8
	if (ctx.cr0.gt) goto loc_822039A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822039A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822039ac
	goto loc_822039AC;
loc_822039A8:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_822039AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822039d4
	if (ctx.cr0.eq) goto loc_822039D4;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822039d4
	if (ctx.cr6.eq) goto loc_822039D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822039D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822039D4:
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
loc_822039E4:
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

DEFINE_REX_FUNC(sub_82206008) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mulli r10,r4,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// addi r11,r11,30736
	ctx.r11.s64 = ctx.r11.s64 + 30736;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bne cr6,0x8220602c
	if (!ctx.cr6.eq) goto loc_8220602C;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_8220602C:
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,36(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82206888) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-11816
	ctx.r11.s64 = ctx.r11.s64 + -11816;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82207D70) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207e14
	if (ctx.cr6.eq) goto loc_82207E14;
	// bl 0x82207000
	ctx.lr = 0x82207DCC;
	sub_82207000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82207e00
	if (!ctx.cr0.gt) goto loc_82207E00;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r30,-36
	ctx.r11.s64 = r30.s64 + -36;
loc_82207DDC:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,40(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsu f0,40(r11)
	ea = 40 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82207ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82207DDC;
loc_82207E00:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// b 0x82207e18
	goto loc_82207E18;
loc_82207E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82207E18:
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

DEFINE_REX_FUNC(sub_8220A5F0) {
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
	// bl 0x8220bf90
	ctx.lr = 0x8220A600;
	sub_8220BF90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220B590) {
	REX_FUNC_PROLOGUE();
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
	PPCVRegister v64{};
	PPCVRegister v65{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// stvlx128 v64,r1,r6
	ea = ctx.r1.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v64.u8[15 - i]);
	// stvlx128 v65,r1,r7
	ea = ctx.r1.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// li r0,0
	ctx.r0.s64 = 0;
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
	// li r31,512
	r31.s64 = 512;
	// dcbt r4,r0
	// lvx128 v65,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x8220ba14
	if (ctx.cr6.lt) goto loc_8220BA14;
	// li r0,128
	ctx.r0.s64 = 128;
	// dcbt r4,r0
	// li r0,256
	ctx.r0.s64 = 256;
	// dcbt r4,r0
	// li r0,384
	ctx.r0.s64 = 384;
	// dcbt r4,r0
	// li r0,512
	ctx.r0.s64 = 512;
	// dcbt r4,r0
	// li r0,640
	ctx.r0.s64 = 640;
	// dcbt r4,r0
	// li r0,768
	ctx.r0.s64 = 768;
	// dcbt r4,r0
	// li r0,896
	ctx.r0.s64 = 896;
	// dcbt r4,r0
loc_8220B61C:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x8220b62c
	if (ctx.cr6.lt) goto loc_8220B62C;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_8220B62C:
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
	// xor r30,r30,r30
	r30.u64 = r30.u64 ^ r30.u64;
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
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
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
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
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
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r30,r30,128
	r30.s64 = r30.s64 + 128;
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
	// lvx128 v64,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbzl r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v9,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v10,v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v11,v11,v12,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v12,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v13,v13,v14,v0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v14,v14,v15,v0
	simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v15,v15,v16,v0
	simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v8,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvlx128 v9,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvlx128 v15,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v16,v16,v17,v0
	simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v17,v17,v18,v0
	simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v18,v18,v19,v0
	simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v19,v19,v20,v0
	simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v20,v20,v21,v0
	simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v21,v21,v22,v0
	simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v22,v22,v23,v0
	simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v23,v23,v24,v0
	simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v16,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvlx128 v17,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvlx128 v18,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v18.u8[15 - i]);
	// stvlx128 v19,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v19.u8[15 - i]);
	// stvlx128 v20,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v20.u8[15 - i]);
	// stvlx128 v21,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v21.u8[15 - i]);
	// stvlx128 v22,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v22.u8[15 - i]);
	// stvlx128 v23,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v23.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v24,v24,v25,v0
	simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v25,v25,v26,v0
	simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v26,v26,v27,v0
	simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v27,v27,v28,v0
	simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v28,v28,v29,v0
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v29,v29,v30,v0
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v30,v30,v31,v0
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v31,v31,v32,v0
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v24,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v24.u8[15 - i]);
	// stvlx128 v25,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v25.u8[15 - i]);
	// stvlx128 v26,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v26.u8[15 - i]);
	// stvlx128 v27,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v27.u8[15 - i]);
	// stvlx128 v28,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v28.u8[15 - i]);
	// stvlx128 v29,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v29.u8[15 - i]);
	// stvlx128 v30,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v30.u8[15 - i]);
	// stvlx128 v31,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v31.u8[15 - i]);
	// dcbf r0,r3
	// dcbzl r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v32,v32,v33,v0
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v33,v33,v34,v0
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v34,v34,v35,v0
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v35,v35,v36,v0
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v36,v36,v37,v0
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v37,v37,v38,v0
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v38,v38,v39,v0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v39,v39,v40,v0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v32,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// stvlx128 v33,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v40,v40,v41,v0
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v41,v41,v42,v0
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v42,v42,v43,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v43,v43,v44,v0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v44,v44,v45,v0
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v45,v45,v46,v0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v46,v46,v47,v0
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v47,v47,v48,v0
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v40,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// stvlx128 v41,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v48,v48,v49,v0
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v49,v49,v50,v0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v50,v50,v51,v0
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v51,v51,v52,v0
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v52,v52,v53,v0
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v53,v53,v54,v0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v54,v54,v55,v0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v55,v55,v56,v0
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v48,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// stvlx128 v49,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// vperm128 v56,v56,v57,v0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v57,v57,v58,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v58,v58,v59,v0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v59,v59,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v62,v62,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v63,v63,v64,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)v64.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v56,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// stvlx128 v57,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vor128 v65,v64,v64
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_load_si128((simde__m128i*)v64.u8));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x8220b61c
	if (!ctx.cr6.lt) goto loc_8220B61C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8220ba14
	if (!ctx.cr6.eq) goto loc_8220BA14;
	// b 0x8220ba94
	goto loc_8220BA94;
loc_8220BA14:
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
	// vperm128 v65,v65,v1,v0
	simde_mm_store_si128((simde__m128i*)v65.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvlx128 v65,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v65.u8[15 - i]);
	// stvlx128 v1,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// vor128 v65,v8,v8
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// dcbf r0,r3
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x8220ba14
	if (ctx.cr6.gt) goto loc_8220BA14;
loc_8220BA94:
	// li r6,-32
	ctx.r6.s64 = -32;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v64,r1,r6
	ea = (ctx.r1.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v65,r1,r7
	ea = (ctx.r1.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82240568) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822415c8
	ctx.lr = 0x82240584;
	sub_822415C8(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = r31.s64 + 640;
	// bl 0x82241358
	ctx.lr = 0x8224058C;
	sub_82241358(ctx, base);
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

DEFINE_REX_FUNC(sub_82243490) {
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
	ctx.lr = 0x82243498;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x822434bc
	if (!ctx.cr6.eq) goto loc_822434BC;
	// li r28,1
	r28.s64 = 1;
loc_822434BC:
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82243bb0
	ctx.lr = 0x822434E0;
	sub_82243BB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82243ba4
	if (!ctx.cr6.eq) goto loc_82243BA4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,16
	r24.s64 = 16;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r10.u32);
	// ble cr6,0x82243598
	if (!ctx.cr6.gt) goto loc_82243598;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224350C:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82243534
	if (!ctx.cr6.eq) goto loc_82243534;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r8,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r8.u32);
loc_82243534:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r7.u32);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bdnz 0x8224350c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224350C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82243220
	ctx.lr = 0x82243568;
	sub_82243220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82243ba4
	if (!ctx.cr6.eq) goto loc_82243BA4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// beq cr6,0x82243580
	if (ctx.cr6.eq) goto loc_82243580;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x822435a0
	if (!ctx.cr6.eq) goto loc_822435A0;
loc_82243580:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822435a4
	if (ctx.cr6.eq) goto loc_822435A4;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
loc_82243598:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x822435a4
	goto loc_822435A4;
loc_822435A0:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822435A4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82243c60
	ctx.lr = 0x822435B8;
	sub_82243C60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82243ba4
	if (!ctx.cr6.eq) goto loc_82243BA4;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,256
	r25.s64 = r31.s64 + 256;
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r8,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r8.u64;
	// lwz r11,-12608(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -12608);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mullw r23,r11,r26
	r23.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// bl 0x82242648
	ctx.lr = 0x82243604;
	sub_82242648(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82243668
	if (!ctx.cr6.gt) goto loc_82243668;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82243618:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82243640
	if (!ctx.cr6.eq) goto loc_82243640;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r7,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r7.u32);
loc_82243640:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// stw r11,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r11.u32);
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82243618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243618;
loc_82243668:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
	// addi r29,r31,64
	r29.s64 = r31.s64 + 64;
	// subf r4,r9,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r4,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r4.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82244348
	ctx.lr = 0x82243690;
	sub_82244348(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x822436b8
	if (!ctx.cr6.gt) goto loc_822436B8;
	// addi r10,r27,-4
	ctx.r10.s64 = r27.s64 + -4;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_822436A0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r9.u32);
	// bdnz 0x822436a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822436A0;
loc_822436B8:
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822429c0
	ctx.lr = 0x822436D4;
	sub_822429C0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224374c
	if (!ctx.cr6.gt) goto loc_8224374C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822436E8:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82243710
	if (!ctx.cr6.eq) goto loc_82243710;
	// lwz r11,328(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	REX_STORE_U32(r31.u32 + 324, r24.u32);
	// stw r7,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r7.u32);
loc_82243710:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 324);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82243738
	if (!ctx.cr6.eq) goto loc_82243738;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82243738:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822436e8
	if (ctx.cr6.lt) goto loc_822436E8;
	// b 0x82243768
	goto loc_82243768;
loc_8224374C:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82243768
	if (!ctx.cr6.lt) goto loc_82243768;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82243768
	if (!ctx.cr6.lt) goto loc_82243768;
	// li r6,2
	ctx.r6.s64 = 2;
loc_82243768:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8224383c
	if (!ctx.cr6.gt) goto loc_8224383C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8224378C:
	// lwz r11,-8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x822437a0
	if (ctx.cr6.gt) goto loc_822437A0;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x822437a4
	if (!ctx.cr6.lt) goto loc_822437A4;
loc_822437A0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_822437A4:
	// lwz r11,-4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x822437b8
	if (ctx.cr6.gt) goto loc_822437B8;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x822437bc
	if (!ctx.cr6.lt) goto loc_822437BC;
loc_822437B8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_822437BC:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x822437d0
	if (ctx.cr6.gt) goto loc_822437D0;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x822437d4
	if (!ctx.cr6.lt) goto loc_822437D4;
loc_822437D0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_822437D4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x822437e8
	if (ctx.cr6.gt) goto loc_822437E8;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x822437ec
	if (!ctx.cr6.lt) goto loc_822437EC;
loc_822437E8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_822437EC:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82243800
	if (ctx.cr6.gt) goto loc_82243800;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82243804
	if (!ctx.cr6.lt) goto loc_82243804;
loc_82243800:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82243804:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82243818
	if (ctx.cr6.gt) goto loc_82243818;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x8224381c
	if (!ctx.cr6.lt) goto loc_8224381C;
loc_82243818:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_8224381C:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82243830
	if (ctx.cr6.gt) goto loc_82243830;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82243834
	if (!ctx.cr6.lt) goto loc_82243834;
loc_82243830:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82243834:
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bdnz 0x8224378c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224378C;
loc_8224383C:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82243b58
	if (!ctx.cr6.gt) goto loc_82243B58;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stw r9,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r9.u32);
	// lhz r4,-2(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// and r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ctx.r8.u64;
	// bne cr6,0x82243a14
	if (!ctx.cr6.eq) goto loc_82243A14;
	// addi r11,r30,2
	ctx.r11.s64 = r30.s64 + 2;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r5,2(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 2);
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 4);
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lhz r5,6(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 6);
	// rotlwi r4,r3,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 8);
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// lhz r29,10(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + 10);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 12);
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// lhz r28,14(r30)
	r28.u64 = REX_LOAD_U16(r30.u32 + 14);
	// rotlwi r3,r3,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 16);
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// lhz r27,18(r30)
	r27.u64 = REX_LOAD_U16(r30.u32 + 18);
	// rotlwi r29,r29,5
	r29.u64 = __builtin_rotateleft32(r29.u32, 5);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 20);
	// xor r3,r29,r3
	ctx.r3.u64 = r29.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// lhz r26,22(r30)
	r26.u64 = REX_LOAD_U16(r30.u32 + 22);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r29,24(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + 24);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// lhz r25,26(r30)
	r25.u64 = REX_LOAD_U16(r30.u32 + 26);
	// rotlwi r28,r28,7
	r28.u64 = __builtin_rotateleft32(r28.u32, 7);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 28);
	// xor r9,r28,r9
	ctx.r9.u64 = r28.u64 ^ ctx.r9.u64;
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// lhz r4,30(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 30);
	// rotlwi r28,r27,9
	r28.u64 = __builtin_rotateleft32(r27.u32, 9);
	// rotlwi r9,r5,10
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 10);
	// xor r5,r28,r11
	ctx.r5.u64 = r28.u64 ^ ctx.r11.u64;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rotlwi r11,r26,11
	ctx.r11.u64 = __builtin_rotateleft32(r26.u32, 11);
	// rotlwi r5,r29,12
	ctx.r5.u64 = __builtin_rotateleft32(r29.u32, 12);
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// rotlwi r10,r25,13
	ctx.r10.u64 = __builtin_rotateleft32(r25.u32, 13);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// rotlwi r5,r3,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 14);
	// lhz r3,32(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r4,34(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 34);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// stw r11,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r11.u32);
	// lhz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 36);
	// rotlwi r9,r4,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// lhz r3,38(r30)
	ctx.r3.u64 = REX_LOAD_U16(r30.u32 + 38);
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// xor r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// andc r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r10.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// b 0x82243a74
	goto loc_82243A74;
loc_82243A14:
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x82243a58
	if (!ctx.cr0.gt) goto loc_82243A58;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82243A28:
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r5.u32);
	// slw r3,r4,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// bdnz 0x82243a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243A28;
loc_82243A58:
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r5.u32);
	// andc r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_82243A74:
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r5,r10,-16672
	ctx.r5.s64 = ctx.r10.s64 + -16672;
	// xor r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r11,-16672(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -16672);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// and r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ctx.r4.u64;
	// xor r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// xor r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r4,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// srawi r5,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// xor r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// xor r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r9,r7,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82243b58
	if (ctx.cr0.eq) goto loc_82243B58;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
loc_82243B58:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82243b84
	if (ctx.cr6.eq) goto loc_82243B84;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x82243b84
	if (!ctx.cr6.gt) goto loc_82243B84;
	// addi r11,r22,-4
	ctx.r11.s64 = r22.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82243b84
	if (ctx.cr6.eq) goto loc_82243B84;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_82243B7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82243b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82243B7C;
loc_82243B84:
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r23,r10
	ctx.r9.u64 = ctx.r10.u64 - r23.u64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82243BA0;
	sub_822D5870(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82243BA4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8225DF00) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8225DF08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// bl 0x8225ddf0
	ctx.lr = 0x8225DF24;
	sub_8225DDF0(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225de30
	ctx.lr = 0x8225DF34;
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

DEFINE_REX_FUNC(sub_8225E730) {
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
	// li r4,2021
	ctx.r4.s64 = 2021;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E758;
	sub_8225DA70(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E764;
	sub_8227C2B8(ctx, base);
	// stb r30,4(r31)
	REX_STORE_U8(r31.u32 + 4, r30.u8);
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

DEFINE_REX_FUNC(sub_8225F5B0) {
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
	// lfs f13,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,24(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,28(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x8225f604
	if (!ctx.cr6.lt) goto loc_8225F604;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8225f6bc
	goto loc_8225F6BC;
loc_8225F604:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82291328
	ctx.lr = 0x8225F610;
	sub_82291328(ctx, base);
	// lfs f10,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f11,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f7,f9,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f10.f64));
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f11.f64));
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f5,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// fsubs f3,f5,f11
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f11.f64));
	// fsubs f2,f4,f10
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f10.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f12.f64)));
	// fmadds f7,f3,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f7.f64)));
	// fmadds f6,f2,f13,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f2.f64, ctx.f13.f64, ctx.f6.f64)));
	// fdivs f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 / ctx.f12.f64));
	// fdivs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f6.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// fadds f11,f10,f7
	ctx.f11.f64 = double(float(ctx.f10.f64 + ctx.f7.f64));
	// fsubs f12,f5,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fsubs f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// fsubs f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsubs f11,f9,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f12,f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f10,f0,f0
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f0,f11,f11,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f11.f64, ctx.f12.f64)));
	// fmadds f13,f13,f13,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f10.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x8225f6ac
	if (ctx.cr6.gt) goto loc_8225F6AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8225F6AC:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// li r3,1
	ctx.r3.s64 = 1;
	// blt cr6,0x8225f6bc
	if (ctx.cr6.lt) goto loc_8225F6BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225F6BC:
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

DEFINE_REX_FUNC(sub_822680F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82268100;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r29,0
	r29.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// lwz r10,-2144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r29.u32);
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82268168
	if (ctx.cr6.eq) goto loc_82268168;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8226814C:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8226824c
	if (ctx.cr6.eq) goto loc_8226824C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// b 0x82268288
	goto loc_82268288;
loc_82268168:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268184
	if (ctx.cr6.eq) goto loc_82268184;
	// bl 0x82288ee8
	ctx.lr = 0x82268180;
	sub_82288EE8(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_82268184:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x822681e8
	if (!ctx.cr6.eq) goto loc_822681E8;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8226814c
	if (ctx.cr6.eq) goto loc_8226814C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822635f0
	ctx.lr = 0x822681AC;
	sub_822635F0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822681c4
	if (!ctx.cr0.lt) goto loc_822681C4;
loc_822681B4:
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822d7b58
	ctx.lr = 0x822681BC;
	sub_822D7B58(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82268294
	goto loc_82268294;
loc_822681C4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8228ab40
	ctx.lr = 0x822681D0;
	sub_8228AB40(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x822681DC;
	sub_82255B70(ctx, base);
loc_822681DC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8226814c
	if (!ctx.cr6.lt) goto loc_8226814C;
	// b 0x822681b4
	goto loc_822681B4;
loc_822681E8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82268218
	if (ctx.cr6.eq) goto loc_82268218;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82268218
	if (ctx.cr6.eq) goto loc_82268218;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8226814c
	if (!ctx.cr6.eq) goto loc_8226814C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x8228aaa0
	ctx.lr = 0x8226820C;
	sub_8228AAA0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x8226814c
	if (!ctx.cr0.lt) goto loc_8226814C;
	// b 0x822681b4
	goto loc_822681B4;
loc_82268218:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8226814c
	if (ctx.cr6.lt) goto loc_8226814C;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82268240
	if (ctx.cr0.eq) goto loc_82268240;
	// bl 0x8228ad58
	ctx.lr = 0x8226823C;
	sub_8228AD58(ctx, base);
	// b 0x82268244
	goto loc_82268244;
loc_82268240:
	// bl 0x8228aca0
	ctx.lr = 0x82268244;
	sub_8228ACA0(ctx, base);
loc_82268244:
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x822681dc
	goto loc_822681DC;
loc_8226824C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82267e18
	ctx.lr = 0x82268260;
	sub_82267E18(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82268274
	if (ctx.cr6.eq) goto loc_82268274;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82288e58
	ctx.lr = 0x82268274;
	sub_82288E58(ctx, base);
loc_82268274:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
loc_82268288:
	// lwz r3,160(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x822d7b58
	ctx.lr = 0x82268290;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82268294:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822703F8) {
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
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8226cba0
	ctx.lr = 0x82270434;
	sub_8226CBA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82274FA8) {
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
	ctx.lr = 0x82274FB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822750f0
	if (ctx.cr6.eq) goto loc_822750F0;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225ee88
	ctx.lr = 0x82274FDC;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822750f0
	if (ctx.cr0.eq) goto loc_822750F0;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82274ff8
	if (!ctx.cr6.eq) goto loc_82274FF8;
	// li r28,0
	r28.s64 = 0;
	// b 0x82275000
	goto loc_82275000;
loc_82274FF8:
	// bl 0x822d6a10
	ctx.lr = 0x82274FFC;
	sub_822D6A10(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82275000:
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// add r30,r28,r26
	r30.u64 = r28.u64 + r26.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8227501c
	if (!ctx.cr6.gt) goto loc_8227501C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x822750f8
	goto loc_822750F8;
loc_8227501C:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bgt cr6,0x82275060
	if (ctx.cr6.gt) goto loc_82275060;
	// addi r29,r30,50
	r29.s64 = r30.s64 + 50;
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b88
	ctx.lr = 0x82275038;
	sub_82255B88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227504c
	if (!ctx.cr0.eq) goto loc_8227504C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822750f8
	goto loc_822750F8;
loc_8227504C:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,140(r31)
	REX_STORE_U32(r31.u32 + 140, r29.u32);
	// sthx r10,r11,r3
	REX_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u16);
loc_82275060:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(r30.u32, r27.u32, ctx.xer);
	// ble cr6,0x82275094
	if (!ctx.cr6.gt) goto loc_82275094;
	// subf r9,r27,r30
	ctx.r9.u64 = r30.u64 - r27.u64;
	// subf r11,r26,r30
	ctx.r11.u64 = r30.u64 - r26.u64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8227507C:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lhzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sthx r8,r10,r9
	REX_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// bdnz 0x8227507c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8227507C;
loc_82275094:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822750bc
	if (ctx.cr6.eq) goto loc_822750BC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// addi r10,r25,-2
	ctx.r10.s64 = r25.s64 + -2;
loc_822750A8:
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// sthx r9,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x822750a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822750A8;
loc_822750BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225d318
	ctx.lr = 0x822750C4;
	sub_8225D318(ctx, base);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822750e4
	if (ctx.cr6.gt) goto loc_822750E4;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82270c70
	ctx.lr = 0x822750E4;
	sub_82270C70(ctx, base);
loc_822750E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x822750EC;
	sub_8226B6F8(ctx, base);
	// b 0x822750f8
	goto loc_822750F8;
loc_822750F0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_822750F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82278A70) {
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
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// bl 0x82255b70
	ctx.lr = 0x82278A8C;
	sub_82255B70(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82255b70
	ctx.lr = 0x82278A94;
	sub_82255B70(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x82255b70
	ctx.lr = 0x82278A9C;
	sub_82255B70(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82278aac
	if (ctx.cr6.eq) goto loc_82278AAC;
	// bl 0x82255b70
	ctx.lr = 0x82278AAC;
	sub_82255B70(ctx, base);
loc_82278AAC:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82278abc
	if (ctx.cr6.eq) goto loc_82278ABC;
	// bl 0x82255b70
	ctx.lr = 0x82278ABC;
	sub_82255B70(ctx, base);
loc_82278ABC:
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

DEFINE_REX_FUNC(sub_8227A7D0) {
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
	// li r4,2038
	ctx.r4.s64 = 2038;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// bl 0x8225da70
	ctx.lr = 0x8227A7EC;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8227A7F8;
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

DEFINE_REX_FUNC(sub_8227AC70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227AC78;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227acd4
	if (ctx.cr6.eq) goto loc_8227ACD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8227acc8
	if (!ctx.cr6.gt) goto loc_8227ACC8;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_8227ACA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x8224e998
	ctx.lr = 0x8227ACB4;
	sub_8224E998(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8227aca4
	if (ctx.cr6.lt) goto loc_8227ACA4;
loc_8227ACC8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x8227ACD0;
	sub_82255B70(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(r31.u32 + 0, r28.u32);
loc_8227ACD4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227ace8
	if (ctx.cr6.eq) goto loc_8227ACE8;
	// bl 0x82255b70
	ctx.lr = 0x8227ACE4;
	sub_82255B70(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(r31.u32 + 4, r28.u32);
loc_8227ACE8:
	// stw r28,8(r31)
	REX_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r28,12(r31)
	REX_STORE_U32(r31.u32 + 12, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227C510) {
	REX_FUNC_PROLOGUE();
	// b 0x8227c388
	sub_8227C388(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227C6C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227C6C8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227c6f0
	if (!ctx.cr0.eq) goto loc_8227C6F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227c7b4
	goto loc_8227C7B4;
loc_8227C6F0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8227acf8
	ctx.lr = 0x8227C6F8;
	sub_8227ACF8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224a0a0
	ctx.lr = 0x8227C70C;
	sub_8224A0A0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// blt 0x8227c7ac
	if (ctx.cr0.lt) goto loc_8227C7AC;
	// li r30,0
	r30.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8227b360
	ctx.lr = 0x8227C72C;
	sub_8227B360(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227c790
	if (ctx.cr0.lt) goto loc_8227C790;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x82246a38
	ctx.lr = 0x8227C740;
	sub_82246A38(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8227c790
	if (ctx.cr0.lt) goto loc_8227C790;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x8227C750;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227c768
	if (ctx.cr0.eq) goto loc_8227C768;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8227c4b8
	ctx.lr = 0x8227C764;
	sub_8227C4B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8227C768:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8227c77c
	if (!ctx.cr6.eq) goto loc_8227C77C;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8227c790
	goto loc_8227C790;
loc_8227C77C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8227c190
	ctx.lr = 0x8227C788;
	sub_8227C190(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8227c7a8
	if (!ctx.cr0.lt) goto loc_8227C7A8;
loc_8227C790:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227C798;
	sub_82255B70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x8227C7A0;
	sub_82255B70(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82255b70
	ctx.lr = 0x8227C7A8;
	sub_82255B70(ctx, base);
loc_8227C7A8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_8227C7AC:
	// bl 0x8227b2c8
	ctx.lr = 0x8227C7B0;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8227C7B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227EB20) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227eb4c
	if (ctx.cr6.lt) goto loc_8227EB4C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8227EB4C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8227eba8
	if (ctx.cr6.eq) goto loc_8227EBA8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// bl 0x82209bf0
	ctx.lr = 0x8227EB64;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227eb84
	if (!ctx.cr0.eq) goto loc_8227EB84;
	// bl 0x822098c8
	ctx.lr = 0x8227EB70;
	sub_822098C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8227ebb4
	if (!ctx.cr0.gt) goto loc_8227EBB4;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8227ebb4
	goto loc_8227EBB4;
loc_8227EB84:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x8227ebb0
	goto loc_8227EBB0;
loc_8227EBA8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8227EBB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227EBB4:
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

DEFINE_REX_FUNC(sub_82280DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stb r11,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// li r7,146
	ctx.r7.s64 = 146;
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r3,r11,-6904
	ctx.r3.s64 = ctx.r11.s64 + -6904;
loc_82280DDC:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82280e1c
	if (ctx.cr6.eq) goto loc_82280E1C;
	// bge cr6,0x82280e04
	if (!ctx.cr6.lt) goto loc_82280E04;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// b 0x82280e10
	goto loc_82280E10;
loc_82280E04:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82280e10
	if (!ctx.cr6.gt) goto loc_82280E10;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_82280E10:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82280ddc
	if (!ctx.cr6.gt) goto loc_82280DDC;
	// blr 
	return;
loc_82280E1C:
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// stb r10,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82284A10) {
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
	ctx.lr = 0x82284A18;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82284a50
	if (!ctx.cr6.eq) goto loc_82284A50;
loc_82284A44:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82284b3c
	goto loc_82284B3C;
loc_82284A50:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82284a44
	if (ctx.cr6.eq) goto loc_82284A44;
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(r25.s32, -1, ctx.xer);
	// blt cr6,0x82284a44
	if (ctx.cr6.lt) goto loc_82284A44;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82284a44
	if (ctx.cr6.eq) goto loc_82284A44;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x82284a80
	if (!ctx.cr6.eq) goto loc_82284A80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82284b3c
	goto loc_82284B3C;
loc_82284A80:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,30464
	r29.s64 = ctx.r11.s64 + 30464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x82284A90;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82288590
	ctx.lr = 0x82284A94;
	sub_82288590(ctx, base);
	// stw r3,16(r28)
	REX_STORE_U32(r28.u32 + 16, ctx.r3.u32);
	// rlwinm. r11,r30,0,10,15
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3F0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f12,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// bne 0x82284afc
	if (!ctx.cr0.eq) goto loc_82284AFC;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-6908(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6908);
	// or r30,r11,r30
	r30.u64 = ctx.r11.u64 | r30.u64;
loc_82284AFC:
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cntlzw r8,r23
	ctx.r8.u64 = r23.u32 == 0 ? 32 : __builtin_clz(r23.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82284670
	ctx.lr = 0x82284B2C;
	sub_82284670(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x82284B38;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82284B3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822889E8) {
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
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r3,31380(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31380);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82288a18
	if (ctx.cr6.eq) goto loc_82288A18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82288A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82288A18:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,31380(r31)
	REX_STORE_U32(r31.u32 + 31380, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822893F8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31368(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31368);
	// rlwinm r3,r11,0,30,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289780) {
	REX_FUNC_PROLOGUE();
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82289E58) {
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
	ctx.lr = 0x82289E60;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82289fe8
	if (ctx.cr6.eq) goto loc_82289FE8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x82289fe8
	if (ctx.cr6.lt) goto loc_82289FE8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289f34
	if (ctx.cr6.eq) goto loc_82289F34;
	// li r3,148
	ctx.r3.s64 = 148;
	// bl 0x82255b48
	ctx.lr = 0x82289E98;
	sub_82255B48(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82289eb0
	if (ctx.cr0.eq) goto loc_82289EB0;
	// bl 0x82293718
	ctx.lr = 0x82289EA8;
	sub_82293718(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82289eb4
	goto loc_82289EB4;
loc_82289EB0:
	// mr r31,r28
	r31.u64 = r28.u64;
loc_82289EB4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82289ec8
	if (!ctx.cr6.eq) goto loc_82289EC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82289ff0
	goto loc_82289FF0;
loc_82289EC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289EDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82289f0c
	if (!ctx.cr6.eq) goto loc_82289F0C;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,87
	r30.u64 = r30.u64 | 87;
loc_82289EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82289ff0
	goto loc_82289FF0;
loc_82289F0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x82293868
	ctx.lr = 0x82289F18;
	sub_82293868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82289f28
	if (!ctx.cr0.lt) goto loc_82289F28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82289ef0
	goto loc_82289EF0;
loc_82289F28:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r29)
	REX_STORE_U32(r29.u32 + 28, ctx.r11.u32);
	// b 0x82289f60
	goto loc_82289F60;
loc_82289F34:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82289fe8
	if (ctx.cr6.eq) goto loc_82289FE8;
	// li r28,0
	r28.s64 = 0;
	// stw r28,28(r29)
	REX_STORE_U32(r29.u32 + 28, r28.u32);
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289F60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289F60:
	// stw r27,20(r29)
	REX_STORE_U32(r29.u32 + 20, r27.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r11.u32);
	// bl 0x82281c78
	ctx.lr = 0x82289F70;
	sub_82281C78(ctx, base);
	// mr. r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x82289f88
	if (!ctx.cr0.lt) goto loc_82289F88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82288a38
	ctx.lr = 0x82289F80;
	sub_82288A38(ctx, base);
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// b 0x82289ef0
	goto loc_82289EF0;
loc_82289F88:
	// lwz r4,24(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r4.u32);
	// beq cr6,0x82289fb8
	if (ctx.cr6.eq) goto loc_82289FB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228cb68
	ctx.lr = 0x82289FA0;
	sub_8228CB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82289fb8
	if (!ctx.cr0.lt) goto loc_82289FB8;
	// stw r28,16(r29)
	REX_STORE_U32(r29.u32 + 16, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// b 0x82289ef0
	goto loc_82289EF0;
loc_82289FB8:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82289fd4
	if (ctx.cr6.eq) goto loc_82289FD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289FD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289FD4:
	// stw r31,8(r29)
	REX_STORE_U32(r29.u32 + 8, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// b 0x82289ff0
	goto loc_82289FF0;
loc_82289FE8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82289FF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82291210) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,16
	ctx.r9.s64 = 16;
	// lvlx128 v63,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,32
	ctx.r10.s64 = 32;
	// lvlx128 v62,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,48
	ctx.r11.s64 = 48;
	// li r8,64
	ctx.r8.s64 = 64;
	// lvrx128 v61,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v63,v63,v61
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvrx128 v60,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v61,r9,r4
	temp.u32 = ctx.r9.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v61,v60
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvrx128 v59,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v58,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v58
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vor128 v60,v60,v59
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvlx128 v58,r11,r4
	temp.u32 = ctx.r11.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltw128 v57,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vor128 v59,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vspltw128 v58,v61,0
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xFF));
	// lvrx128 v55,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltw128 v3,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v3.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v56,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvlx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v2,v57,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v2.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v0,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vspltw128 v57,v59,0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xFF));
	// vmulfp128 v31,v58,v62
	simde_mm_store_ps(v31.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v1,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// lvrx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmulfp128 v29,v56,v62
	simde_mm_store_ps(v29.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v30,v60,1
	simde_mm_store_si128((simde__m128i*)v30.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xAA));
	// vspltw128 v28,v59,1
	simde_mm_store_si128((simde__m128i*)v28.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// lvlx128 v56,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v27,v57,v62
	simde_mm_store_ps(v27.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vor128 v13,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// vspltw128 v4,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// lvrx128 v62,r8,r5
	temp.u32 = ctx.r8.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vspltw128 v5,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// lvlx128 v58,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v6,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x55));
	// vor128 v12,v58,v62
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vspltw128 v7,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vspltw128 v8,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v9,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vmaddfp v3,v3,v0,v2
	simde_mm_store_ps(ctx.v3.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v3.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vspltw128 v10,v60,3
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0x0));
	// vmaddfp v2,v1,v0,v31
	simde_mm_store_ps(ctx.v2.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v31.f32)));
	// vspltw128 v11,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmaddfp v1,v30,v0,v29
	simde_mm_store_ps(ctx.v1.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v30.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v29.f32)));
	// vmaddfp v0,v28,v0,v27
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(v28.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(v27.f32)));
	// vmaddfp v4,v4,v13,v3
	simde_mm_store_ps(ctx.v4.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vmaddfp v5,v5,v13,v2
	simde_mm_store_ps(ctx.v5.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v2.f32)));
	// vmaddfp v6,v6,v13,v1
	simde_mm_store_ps(ctx.v6.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v7,v13,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v8,v8,v12,v4
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v9,v9,v12,v5
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v5.f32)));
	// vmaddfp v13,v10,v12,v6
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v11,v12,v0
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvlx v8,0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// stvrx v8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// stvlx v9,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// stvlx v13,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvrx v13,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// stvlx v0,r3,r11
	ea = ctx.r3.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r3,r8
	ea = ctx.r3.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229ECB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229ECE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229ea28
	ctx.lr = 0x8229ECF0;
	sub_8229EA28(ctx, base);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 72);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,64(r10)
	REX_STORE_U32(ctx.r10.u32 + 64, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8229FB08) {
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
	ctx.lr = 0x8229FB10;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8229fb78
	goto loc_8229FB78;
loc_8229FB38:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bctrl 
	ctx.lr = 0x8229FB50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229fb5c
	if (ctx.cr0.eq) goto loc_8229FB5C;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_8229FB5C:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// mr r30,r31
	r30.u64 = r31.u64;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_8229FB78:
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(r31.s32, r28.s32, ctx.xer);
	// blt cr6,0x8229fb38
	if (ctx.cr6.lt) goto loc_8229FB38;
	// bne cr6,0x8229fb9c
	if (!ctx.cr6.eq) goto loc_8229FB9C;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r30,r28,-1
	r30.s64 = r28.s64 + -1;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + r29.u32, ctx.r11.u32);
loc_8229FB9C:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229f840
	ctx.lr = 0x8229FBB4;
	sub_8229F840(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822A33C8) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x822A33D0;
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r26,8(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,288(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lwz r23,16(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 16);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,292(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,296(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,300(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// beq cr6,0x822a3434
	if (ctx.cr6.eq) goto loc_822A3434;
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x822a3434
	if (!ctx.cr6.eq) goto loc_822A3434;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82220368
	ctx.lr = 0x822A3434;
	sub_82220368(ctx, base);
loc_822A3434:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822a351c
	if (ctx.cr6.eq) goto loc_822A351C;
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// li r25,4
	r25.s64 = 4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822a3458
	if (ctx.cr6.eq) goto loc_822A3458;
	// li r25,20
	r25.s64 = 20;
loc_822A3458:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a34e4
	if (ctx.cr6.eq) goto loc_822A34E4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a351c
	if (!ctx.cr6.gt) goto loc_822A351C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822A3478:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lfs f31,304(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 304);
	f31.f64 = double(temp.f32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r27,r11,20
	r27.s64 = ctx.r11.s64 + 20;
	// bl 0x8229d670
	ctx.lr = 0x822A3490;
	sub_8229D670(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82232580
	ctx.lr = 0x822A34C8;
	sub_82232580(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a3478
	if (ctx.cr6.lt) goto loc_822A3478;
	// b 0x822a351c
	goto loc_822A351C;
loc_822A34E4:
	// lfs f31,304(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 304);
	f31.f64 = double(temp.f32);
	// bl 0x8229d670
	ctx.lr = 0x822A34EC;
	sub_8229D670(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82232580
	ctx.lr = 0x822A351C;
	sub_82232580(ctx, base);
loc_822A351C:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a364c
	if (ctx.cr6.eq) goto loc_822A364C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229e9f8
	ctx.lr = 0x822A3530;
	sub_8229E9F8(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x822a3540
	if (ctx.cr6.eq) goto loc_822A3540;
	// mr r24,r30
	r24.u64 = r30.u64;
	// b 0x822a3554
	goto loc_822A3554;
loc_822A3540:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r24,4
	r24.s64 = 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a3554
	if (ctx.cr6.eq) goto loc_822A3554;
	// li r24,20
	r24.s64 = 20;
loc_822A3554:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a35f8
	if (ctx.cr6.eq) goto loc_822A35F8;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822a364c
	if (!ctx.cr6.gt) goto loc_822A364C;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_822A3574:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r25,r30
	r25.u64 = r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822a358c
	if (ctx.cr6.eq) goto loc_822A358C;
	// lbz r25,145(r31)
	r25.u64 = REX_LOAD_U8(r31.u32 + 145);
loc_822A358C:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,304(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 304);
	f31.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// addi r27,r11,20
	r27.s64 = ctx.r11.s64 + 20;
	// bl 0x8229d670
	ctx.lr = 0x822A35A4;
	sub_8229D670(ctx, base);
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82232580
	ctx.lr = 0x822A35DC;
	sub_82232580(ctx, base);
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,16
	r29.s64 = r29.s64 + 16;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a3574
	if (ctx.cr6.lt) goto loc_822A3574;
	// b 0x822a364c
	goto loc_822A364C;
loc_822A35F8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822a3610
	if (ctx.cr6.eq) goto loc_822A3610;
	// lbz r29,145(r31)
	r29.u64 = REX_LOAD_U8(r31.u32 + 145);
loc_822A3610:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f31,304(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r26.u32 + 304);
	f31.f64 = double(temp.f32);
	// bl 0x8229d670
	ctx.lr = 0x822A361C;
	sub_8229D670(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82232580
	ctx.lr = 0x822A364C;
	sub_82232580(ctx, base);
loc_822A364C:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a36a8
	if (ctx.cr6.eq) goto loc_822A36A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82220b40
	ctx.lr = 0x822A3680;
	sub_82220B40(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822a36a8
	if (!ctx.cr6.eq) goto loc_822A36A8;
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x822a36a8
	if (ctx.cr6.gt) goto loc_822A36A8;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82217c00
	ctx.lr = 0x822A36A8;
	sub_82217C00(ctx, base);
loc_822A36A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r6,180(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lwz r5,152(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822a27d8
	ctx.lr = 0x822A36BC;
	sub_822A27D8(ctx, base);
	// stw r30,184(r26)
	REX_STORE_U32(r26.u32 + 184, r30.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822a9958
	ctx.lr = 0x822A36CC;
	sub_822A9958(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,136(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r5,132(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822a11e8
	ctx.lr = 0x822A36E8;
	sub_822A11E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,176(r31)
	REX_STORE_U8(r31.u32 + 176, r30.u8);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_822AE710) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822AE718;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,112(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r3,112
	r29.s64 = ctx.r3.s64 + 112;
	// b 0x822ae750
	goto loc_822AE750;
loc_822AE72C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ae74c
	if (ctx.cr6.eq) goto loc_822AE74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822AE74C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822AE74C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE750:
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae72c
	if (!ctx.cr6.eq) goto loc_822AE72C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE770;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822B1358) {
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
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x822d6450
	ctx.lr = 0x822B1384;
	sub_822D6450(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// addi r4,r30,64
	ctx.r4.s64 = r30.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x822b0f90
	ctx.lr = 0x822B13A8;
	sub_822B0F90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// bl 0x822b0ff0
	ctx.lr = 0x822B13B4;
	sub_822B0FF0(ctx, base);
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822b10a0
	ctx.lr = 0x822B13C0;
	sub_822B10A0(ctx, base);
	// lfs f0,608(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 608);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,608(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 608, temp.u32);
	// addi r4,r30,512
	ctx.r4.s64 = r30.s64 + 512;
	// lfs f0,612(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 612);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,612(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 612, temp.u32);
	// lfs f0,616(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 616);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,616(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 616, temp.u32);
	// lfs f0,620(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,620(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 620, temp.u32);
	// lfs f0,624(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 624);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 624, temp.u32);
	// lfs f0,628(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 628);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,628(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 628, temp.u32);
	// lfs f0,632(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 632);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,632(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 632, temp.u32);
	// lfs f0,636(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,636(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 636, temp.u32);
	// lfs f0,640(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,640(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 640, temp.u32);
	// lfs f0,644(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 644);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,644(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 644, temp.u32);
	// lfs f0,648(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 648, temp.u32);
	// lfs f0,652(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 652);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,652(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 652, temp.u32);
	// lfs f0,656(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 656);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,656(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 656, temp.u32);
	// lfs f0,660(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 660);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,660(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 660, temp.u32);
	// lfs f0,664(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 664);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,664(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 664, temp.u32);
	// lfs f0,668(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 668);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,668(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 668, temp.u32);
	// bl 0x822b0eb0
	ctx.lr = 0x822B1448;
	sub_822B0EB0(ctx, base);
	// addi r4,r30,672
	ctx.r4.s64 = r30.s64 + 672;
	// bl 0x822b0e48
	ctx.lr = 0x822B1450;
	sub_822B0E48(ctx, base);
	// addi r4,r30,688
	ctx.r4.s64 = r30.s64 + 688;
	// addi r3,r31,688
	ctx.r3.s64 = r31.s64 + 688;
	// bl 0x821f3f40
	ctx.lr = 0x822B145C;
	sub_821F3F40(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	// bl 0x822b1128
	ctx.lr = 0x822B146C;
	sub_822B1128(ctx, base);
	// lfs f0,816(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 816);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,816(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 816, temp.u32);
	// lfs f0,544(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 544);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 544, temp.u32);
	// lfs f0,548(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 548);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 548, temp.u32);
	// lfs f0,552(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 552);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,552(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 552, temp.u32);
	// lfs f0,556(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 556);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,556(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 556, temp.u32);
	// lfs f0,560(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 560, temp.u32);
	// lfs f0,564(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 564);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,564(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 564, temp.u32);
	// lfs f0,568(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 568);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,568(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 568, temp.u32);
	// lfs f0,572(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 572);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 572, temp.u32);
	// lfs f0,576(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,576(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 576, temp.u32);
	// lfs f0,580(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 580);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,580(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 580, temp.u32);
	// lfs f0,584(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,584(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 584, temp.u32);
	// lfs f0,588(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 588);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,588(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 588, temp.u32);
	// lwz r11,592(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 592);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r11,592(r31)
	REX_STORE_U32(r31.u32 + 592, ctx.r11.u32);
	// stw r10,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822BA5C8) {
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
	ctx.lr = 0x822BA5D0;
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r31,8(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x822ba6f4
	if (ctx.cr6.eq) goto loc_822BA6F4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f31,1104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1104);
	f31.f64 = double(temp.f32);
	// lwz r4,36(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 36);
	// lfs f30,1108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1108);
	f30.f64 = double(temp.f32);
	// lfs f29,1112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1112);
	f29.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// bl 0x822b1280
	ctx.lr = 0x822BA614;
	sub_822B1280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f0,f31
	f31.f64 = double(float(ctx.f0.f64 - f31.f64));
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f13,f30
	f30.f64 = double(float(ctx.f13.f64 - f30.f64));
	// lfs f2,26820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26820);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f29,f0,f29
	f29.f64 = double(float(ctx.f0.f64 - f29.f64));
	// lfs f1,24112(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822aa020
	ctx.lr = 0x822BA648;
	sub_822AA020(ctx, base);
	// fmuls f13,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f30.f64 * f30.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,1152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 1152);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// li r28,0
	r28.s64 = 0;
	// lfs f0,24108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24108);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// fmadds f13,f29,f29,f13
	ctx.f13.f64 = double(float(std::fma(f29.f64, f29.f64, ctx.f13.f64)));
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmadds f13,f31,f31,f13
	ctx.f13.f64 = double(float(std::fma(f31.f64, f31.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// beq 0x822ba6f4
	if (ctx.cr0.eq) goto loc_822BA6F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_822BA698:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi. r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// bne 0x822ba6c8
	if (!ctx.cr0.eq) goto loc_822BA6C8;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// beq cr6,0x822ba6bc
	if (ctx.cr6.eq) goto loc_822BA6BC;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x822ba6c0
	if (!ctx.cr6.lt) goto loc_822BA6C0;
loc_822BA6BC:
	// li r29,1
	r29.s64 = 1;
loc_822BA6C0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x822ba6cc
	goto loc_822BA6CC;
loc_822BA6C8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822BA6CC:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822b1188
	ctx.lr = 0x822BA6D4;
	sub_822B1188(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822ba698
	if (ctx.cr6.lt) goto loc_822BA698;
loc_822BA6F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_822C4DA0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82216020
	sub_82216020(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C52D8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r31,16(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82212778
	ctx.lr = 0x822C5304;
	sub_82212778(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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
	ctx.lr = 0x822C5320;
	sub_822125D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822125d0
	ctx.lr = 0x822C533C;
	sub_822125D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x822125d0
	ctx.lr = 0x822C5358;
	sub_822125D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x822125d0
	ctx.lr = 0x822C5374;
	sub_822125D0(ctx, base);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822125d0
	ctx.lr = 0x822C5390;
	sub_822125D0(ctx, base);
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

DEFINE_REX_FUNC(sub_822C6140) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,2956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C64E8) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x822C6510;
	sub_822A9AA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C6528;
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

DEFINE_REX_FUNC(sub_822C6DE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r11,2956(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2956);
	// lwz r4,100(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822C7FF8) {
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
	// lwz r10,31772(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 31772);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c8024
	if (ctx.cr6.eq) goto loc_822C8024;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C8020;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822c8028
	goto loc_822C8028;
loc_822C8024:
	// bl 0x822d8e68
	ctx.lr = 0x822C8028;
	sub_822D8E68(ctx, base);
loc_822C8028:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822c8058
	if (!ctx.cr6.eq) goto loc_822C8058;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,25736
	ctx.r11.s64 = ctx.r11.s64 + 25736;
	// addi r10,r10,-4172
	ctx.r10.s64 = ctx.r10.s64 + -4172;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,16596
	ctx.r4.s64 = ctx.r11.s64 + 16596;
	// bl 0x822d8f10
	ctx.lr = 0x822C8058;
	sub_822D8F10(ctx, base);
loc_822C8058:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C91B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822C91C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c91c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C91C4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9A68) {
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
	ctx.lr = 0x822C9A98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r31,78(r31)
	r31.u64 = REX_LOAD_U8(r31.u32 + 78);
	// bctrl 
	ctx.lr = 0x822C9AB0;
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

DEFINE_REX_FUNC(sub_822CB150) {
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
	// lwz r11,160(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cb190
	if (ctx.cr6.eq) goto loc_822CB190;
	// bl 0x82211430
	ctx.lr = 0x822CB178;
	sub_82211430(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// stw r3,240(r31)
	REX_STORE_U32(r31.u32 + 240, ctx.r3.u32);
	// lbz r10,246(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 246);
	// stb r10,232(r31)
	REX_STORE_U8(r31.u32 + 232, ctx.r10.u8);
	// lwz r11,368(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 368);
	// stw r11,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r11.u32);
loc_822CB190:
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

DEFINE_REX_FUNC(sub_822CC518) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f13,-30112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30112);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,16308(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f11,25976(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 25976);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16360(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16360);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lfs f9,16232(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16232);
	ctx.f9.f64 = double(temp.f32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f8,1992(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 1992);
	ctx.f8.f64 = double(temp.f32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stw r10,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f11,36(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f10,40(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f9,44(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f8,48(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CDCF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// bl 0x822c80d0
	ctx.lr = 0x822CDD18;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cdd68
	if (ctx.cr0.eq) goto loc_822CDD68;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	REX_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
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
loc_822CDD68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-4172
	ctx.r11.s64 = ctx.r11.s64 + -4172;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82184290
	ctx.lr = 0x822CDD80;
	sub_82184290(ctx, base);
}

DEFINE_REX_FUNC(sub_822D08B8) {
	REX_FUNC_PROLOGUE();
	// lbz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,80
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 80, ctx.xer);
	// bne cr6,0x822d0904
	if (!ctx.cr6.eq) goto loc_822D0904;
	// lbz r10,1(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,65
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65, ctx.xer);
	// bne cr6,0x822d0904
	if (!ctx.cr6.eq) goto loc_822D0904;
	// lbz r10,2(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 2);
	// cmplwi cr6,r10,83
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 83, ctx.xer);
	// bne cr6,0x822d0904
	if (!ctx.cr6.eq) goto loc_822D0904;
	// lbz r10,3(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 3);
	// cmplwi cr6,r10,68
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 68, ctx.xer);
	// bne cr6,0x822d0904
	if (!ctx.cr6.eq) goto loc_822D0904;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
loc_822D0904:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D1480) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D1488;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4600);
	// addi r29,r3,4600
	r29.s64 = ctx.r3.s64 + 4600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D14AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x822d14bc
	if (!ctx.cr6.gt) goto loc_822D14BC;
	// li r31,0
	r31.s64 = 0;
	// b 0x822d14c8
	goto loc_822D14C8;
loc_822D14BC:
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r31,4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822D14C8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D14DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D2430) {
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
	ctx.lr = 0x822D2438;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(r29.u32, 4, ctx.xer);
	// blt cr6,0x822d245c
	if (ctx.cr6.lt) goto loc_822D245C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d2498
	goto loc_822D2498;
loc_822D245C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2474;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r29,19
	ctx.r11.s64 = r29.s64 + 19;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + r31.u32, temp.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822D2498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D4118) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D4120;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d3628
	ctx.lr = 0x822D412C;
	sub_822D3628(ctx, base);
	// addi r3,r31,4600
	ctx.r3.s64 = r31.s64 + 4600;
	// bl 0x822c8908
	ctx.lr = 0x822D4134;
	sub_822C8908(ctx, base);
	// addi r30,r31,4592
	r30.s64 = r31.s64 + 4592;
	// li r29,3
	r29.s64 = 3;
loc_822D413C:
	// addi r30,r30,-28
	r30.s64 = r30.s64 + -28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d37b0
	ctx.lr = 0x822D4150;
	sub_822D37B0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822d413c
	if (!ctx.cr0.lt) goto loc_822D413C;
	// addi r30,r31,4480
	r30.s64 = r31.s64 + 4480;
	// li r29,15
	r29.s64 = 15;
loc_822D4160:
	// addi r30,r30,-264
	r30.s64 = r30.s64 + -264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d2628
	ctx.lr = 0x822D416C;
	sub_822D2628(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge 0x822d4160
	if (!ctx.cr0.lt) goto loc_822D4160;
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// li r30,31
	r30.s64 = 31;
loc_822D417C:
	// addi r31,r31,-8
	r31.s64 = r31.s64 + -8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d35d0
	ctx.lr = 0x822D4188;
	sub_822D35D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822d417c
	if (!ctx.cr0.lt) goto loc_822D417C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savefpr_18) {
	REX_FUNC_PROLOGUE();
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
	// stfd f18,-112(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D6180) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// b 0x822dbb00
	sub_822DBB00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6420) {
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
	// bl 0x822db888
	ctx.lr = 0x822D6438;
	sub_822DB888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822db858
	ctx.lr = 0x822D6440;
	sub_822DB858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822d6228
	ctx.lr = 0x822D644C;
	sub_822D6228(ctx, base);
}

DEFINE_REX_FUNC(sub_822D6EA0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r3,-2160(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -2160);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D7298) {
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
	ctx.lr = 0x822D72A0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822d72d4
	if (!ctx.cr6.eq) goto loc_822D72D4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d72d4
	if (ctx.cr6.eq) goto loc_822D72D4;
loc_822D72BC:
	// bl 0x822db6c0
	ctx.lr = 0x822D72C0;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D72CC;
	sub_822D6910(ctx, base);
loc_822D72CC:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x822d4ec0
	return;
loc_822D72D4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x822d72bc
	if (ctx.cr6.eq) goto loc_822D72BC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x822d72bc
	if (ctx.cr6.eq) goto loc_822D72BC;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x822d72cc
	if (ctx.cr6.lt) goto loc_822D72CC;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r22,0
	r22.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// add r28,r11,r3
	r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r23,r10,-4
	r23.s64 = ctx.r10.s64 + -4;
	// addi r24,r9,-4
	r24.s64 = ctx.r9.s64 + -4;
loc_822D7310:
	// subf r11,r26,r28
	ctx.r11.u64 = r28.u64 - r26.u64;
	// twllei r27,0
	if (r27.s32 == 0 || r27.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r11,r27
	ctx.r11.u64 = uint32_t(r27.u32 ? ctx.r11.u32 / r27.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x822d73c4
	if (ctx.cr6.gt) goto loc_822D73C4;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(r28.u32, r26.u32, ctx.xer);
	// ble cr6,0x822d73a8
	if (!ctx.cr6.gt) goto loc_822D73A8;
	// add r28,r26,r27
	r28.u64 = r26.u64 + r27.u64;
loc_822D7338:
	// mr r29,r26
	r29.u64 = r26.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(r28.u32, r30.u32, ctx.xer);
	// bgt cr6,0x822d7370
	if (ctx.cr6.gt) goto loc_822D7370;
loc_822D7348:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822D7358;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d7364
	if (!ctx.cr6.gt) goto loc_822D7364;
	// mr r29,r31
	r29.u64 = r31.u64;
loc_822D7364:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// ble cr6,0x822d7348
	if (!ctx.cr6.gt) goto loc_822D7348;
loc_822D7370:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// beq cr6,0x822d739c
	if (ctx.cr6.eq) goto loc_822D739C;
	// subf r10,r30,r29
	ctx.r10.u64 = r29.u64 - r30.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822D7384:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822d7384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7384;
loc_822D739C:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// bgt cr6,0x822d7338
	if (ctx.cr6.gt) goto loc_822D7338;
loc_822D73A8:
	// addic. r22,r22,-1
	ctx.xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	ctx.cr0.compare<int32_t>(r22.s32, 0, ctx.xer);
	// addi r24,r24,-4
	r24.s64 = r24.s64 + -4;
	// addi r23,r23,-4
	r23.s64 = r23.s64 + -4;
	// blt 0x822d72cc
	if (ctx.cr0.lt) goto loc_822D72CC;
	// lwz r26,4(r24)
	r26.u64 = REX_LOAD_U32(r24.u32 + 4);
	// lwz r28,4(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 4);
	// b 0x822d7310
	goto loc_822D7310;
loc_822D73C4:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r27.s32);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x822D73E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d7414
	if (!ctx.cr6.gt) goto loc_822D7414;
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(r26.u32, r29.u32, ctx.xer);
	// beq cr6,0x822d7414
	if (ctx.cr6.eq) goto loc_822D7414;
	// subf r10,r29,r26
	ctx.r10.u64 = r26.u64 - r29.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822D73FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822d73fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D73FC;
loc_822D7414:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x822D7424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d7458
	if (!ctx.cr6.gt) goto loc_822D7458;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(r26.u32, r28.u32, ctx.xer);
	// beq cr6,0x822d7458
	if (ctx.cr6.eq) goto loc_822D7458;
	// subf r10,r28,r26
	ctx.r10.u64 = r26.u64 - r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822D7440:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822d7440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7440;
loc_822D7458:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bctrl 
	ctx.lr = 0x822D7468;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d749c
	if (!ctx.cr6.gt) goto loc_822D749C;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// beq cr6,0x822d749c
	if (ctx.cr6.eq) goto loc_822D749C;
	// subf r10,r28,r29
	ctx.r10.u64 = r29.u64 - r28.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822D7484:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822d7484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7484;
loc_822D749C:
	// mr r31,r26
	r31.u64 = r26.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_822D74A4:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// ble cr6,0x822d74d8
	if (!ctx.cr6.gt) goto loc_822D74D8;
loc_822D74AC:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// bge cr6,0x822d74d8
	if (!ctx.cr6.lt) goto loc_822D74D8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822D74C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d74ac
	if (!ctx.cr6.gt) goto loc_822D74AC;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(r29.u32, r31.u32, ctx.xer);
	// bgt cr6,0x822d74fc
	if (ctx.cr6.gt) goto loc_822D74FC;
loc_822D74D8:
	// add r31,r31,r27
	r31.u64 = r31.u64 + r27.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bgt cr6,0x822d74fc
	if (ctx.cr6.gt) goto loc_822D74FC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822D74F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822d74d8
	if (!ctx.cr6.gt) goto loc_822D74D8;
loc_822D74FC:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x822d7520
	if (!ctx.cr6.gt) goto loc_822D7520;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x822D7518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x822d74fc
	if (ctx.cr6.gt) goto loc_822D74FC;
loc_822D7520:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bgt cr6,0x822d7560
	if (ctx.cr6.gt) goto loc_822D7560;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// beq cr6,0x822d7550
	if (ctx.cr6.eq) goto loc_822D7550;
	// subf r10,r30,r31
	ctx.r10.u64 = r31.u64 - r30.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
loc_822D7538:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x822d7538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D7538;
loc_822D7550:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x822d74a4
	if (!ctx.cr6.eq) goto loc_822D74A4;
	// mr r29,r31
	r29.u64 = r31.u64;
	// b 0x822d74a4
	goto loc_822D74A4;
loc_822D7560:
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d7598
	if (!ctx.cr6.lt) goto loc_822D7598;
loc_822D756C:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(r30.u32, r29.u32, ctx.xer);
	// ble cr6,0x822d7598
	if (!ctx.cr6.gt) goto loc_822D7598;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x822D7588;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d756c
	if (ctx.cr6.eq) goto loc_822D756C;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// blt cr6,0x822d75bc
	if (ctx.cr6.lt) goto loc_822D75BC;
loc_822D7598:
	// subf r30,r27,r30
	r30.u64 = r30.u64 - r27.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(r30.u32, r26.u32, ctx.xer);
	// ble cr6,0x822d75bc
	if (!ctx.cr6.gt) goto loc_822D75BC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x822D75B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822d7598
	if (ctx.cr6.eq) goto loc_822D7598;
loc_822D75BC:
	// subf r11,r31,r28
	ctx.r11.u64 = r28.u64 - r31.u64;
	// subf r10,r26,r30
	ctx.r10.u64 = r30.u64 - r26.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822d75f8
	if (ctx.cr6.lt) goto loc_822D75F8;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d75e8
	if (!ctx.cr6.lt) goto loc_822D75E8;
	// stw r26,4(r24)
	REX_STORE_U32(r24.u32 + 4, r26.u32);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stw r30,4(r23)
	REX_STORE_U32(r23.u32 + 4, r30.u32);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
loc_822D75E8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x822d73a8
	if (!ctx.cr6.lt) goto loc_822D73A8;
	// mr r26,r31
	r26.u64 = r31.u64;
	// b 0x822d7310
	goto loc_822D7310;
loc_822D75F8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(r31.u32, r28.u32, ctx.xer);
	// bge cr6,0x822d760c
	if (!ctx.cr6.lt) goto loc_822D760C;
	// stwu r31,4(r24)
	ea = 4 + r24.u32;
	REX_STORE_U32(ea, r31.u32);
	r24.u32 = ea;
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// stwu r28,4(r23)
	ea = 4 + r23.u32;
	REX_STORE_U32(ea, r28.u32);
	r23.u32 = ea;
loc_822D760C:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(r26.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d73a8
	if (!ctx.cr6.lt) goto loc_822D73A8;
	// mr r28,r30
	r28.u64 = r30.u64;
	// b 0x822d7310
	goto loc_822D7310;
}

DEFINE_REX_FUNC(__restvmx_96) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822DBD34) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r30,r11,-1656
	ctx.r30.s64 = ctx.r11.s64 + -1656;
	// b 0x822dbd60
	goto loc_822DBD60;
loc_822DBD60:
	// lwz r3,80(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x824d437c
	ctx.lr = 0x822DBD68;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DCAB8) {
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
	// rlwinm r3,r11,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DEAA0) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822dead0
	if (ctx.cr0.eq) goto loc_822DEAD0;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822deb14
	if (ctx.cr6.eq) goto loc_822DEB14;
loc_822DEAD0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x822deafc
	if (ctx.cr0.lt) goto loc_822DEAFC;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x822deb04
	goto loc_822DEB04;
loc_822DEAFC:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822da948
	ctx.lr = 0x822DEB04;
	sub_822DA948(ctx, base);
loc_822DEB04:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822deb14
	if (!ctx.cr6.eq) goto loc_822DEB14;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x822deb1c
	goto loc_822DEB1C;
loc_822DEB14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_822DEB1C:
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

DEFINE_REX_FUNC(sub_822E1C78) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x822e1ca4
	if (ctx.cr6.lt) goto loc_822E1CA4;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x822e1ca4
	if (ctx.cr6.gt) goto loc_822E1CA4;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_822E1CA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E42BC) {
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
	// lfd f14,408(r4)
	ctx.fpscr.disableFlushMode();
	f14.u64 = REX_LOAD_U64(ctx.r4.u32 + 408);
	// lfd f15,416(r4)
	f15.u64 = REX_LOAD_U64(ctx.r4.u32 + 416);
	// lfd f16,424(r4)
	f16.u64 = REX_LOAD_U64(ctx.r4.u32 + 424);
	// lfd f17,432(r4)
	f17.u64 = REX_LOAD_U64(ctx.r4.u32 + 432);
	// lfd f18,440(r4)
	f18.u64 = REX_LOAD_U64(ctx.r4.u32 + 440);
	// lfd f19,448(r4)
	f19.u64 = REX_LOAD_U64(ctx.r4.u32 + 448);
	// lfd f20,456(r4)
	f20.u64 = REX_LOAD_U64(ctx.r4.u32 + 456);
	// lfd f21,464(r4)
	f21.u64 = REX_LOAD_U64(ctx.r4.u32 + 464);
	// lfd f22,472(r4)
	f22.u64 = REX_LOAD_U64(ctx.r4.u32 + 472);
	// lfd f23,480(r4)
	f23.u64 = REX_LOAD_U64(ctx.r4.u32 + 480);
	// lfd f24,488(r4)
	f24.u64 = REX_LOAD_U64(ctx.r4.u32 + 488);
	// lfd f25,496(r4)
	f25.u64 = REX_LOAD_U64(ctx.r4.u32 + 496);
	// lfd f26,504(r4)
	f26.u64 = REX_LOAD_U64(ctx.r4.u32 + 504);
	// lfd f27,512(r4)
	f27.u64 = REX_LOAD_U64(ctx.r4.u32 + 512);
	// lfd f28,520(r4)
	f28.u64 = REX_LOAD_U64(ctx.r4.u32 + 520);
	// lfd f29,528(r4)
	f29.u64 = REX_LOAD_U64(ctx.r4.u32 + 528);
	// lfd f30,536(r4)
	f30.u64 = REX_LOAD_U64(ctx.r4.u32 + 536);
	// lfd f31,544(r4)
	f31.u64 = REX_LOAD_U64(ctx.r4.u32 + 544);
	// ld r14,136(r4)
	r14.u64 = REX_LOAD_U64(ctx.r4.u32 + 136);
	// ld r15,144(r4)
	r15.u64 = REX_LOAD_U64(ctx.r4.u32 + 144);
	// ld r16,152(r4)
	r16.u64 = REX_LOAD_U64(ctx.r4.u32 + 152);
	// ld r17,160(r4)
	r17.u64 = REX_LOAD_U64(ctx.r4.u32 + 160);
	// ld r18,168(r4)
	r18.u64 = REX_LOAD_U64(ctx.r4.u32 + 168);
	// ld r19,176(r4)
	r19.u64 = REX_LOAD_U64(ctx.r4.u32 + 176);
	// ld r20,184(r4)
	r20.u64 = REX_LOAD_U64(ctx.r4.u32 + 184);
	// ld r21,192(r4)
	r21.u64 = REX_LOAD_U64(ctx.r4.u32 + 192);
	// ld r22,200(r4)
	r22.u64 = REX_LOAD_U64(ctx.r4.u32 + 200);
	// ld r23,208(r4)
	r23.u64 = REX_LOAD_U64(ctx.r4.u32 + 208);
	// ld r24,216(r4)
	r24.u64 = REX_LOAD_U64(ctx.r4.u32 + 216);
	// ld r25,224(r4)
	r25.u64 = REX_LOAD_U64(ctx.r4.u32 + 224);
	// ld r26,232(r4)
	r26.u64 = REX_LOAD_U64(ctx.r4.u32 + 232);
	// ld r27,240(r4)
	r27.u64 = REX_LOAD_U64(ctx.r4.u32 + 240);
	// ld r28,248(r4)
	r28.u64 = REX_LOAD_U64(ctx.r4.u32 + 248);
	// ld r29,256(r4)
	r29.u64 = REX_LOAD_U64(ctx.r4.u32 + 256);
	// ld r30,264(r4)
	r30.u64 = REX_LOAD_U64(ctx.r4.u32 + 264);
	// ld r31,272(r4)
	r31.u64 = REX_LOAD_U64(ctx.r4.u32 + 272);
	// lfd f0,288(r4)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 288);
	// lwz r5,280(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 280);
	// lwz r6,284(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 284);
	// ld r7,16(r4)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(ctx.f0.u32);
	// mtlr r3
	ctx.lr = ctx.r3.u64;
	// mtcr r5
	ctx.cr0.lt = (ctx.r5.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r5.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r5.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r5.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r5.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r5.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r5.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r5.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r5.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r5.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r5.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r5.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r5.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r5.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r5.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r5.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r5.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r5.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r5.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r5.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r5.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r5.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r5.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r5.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r5.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r5.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r5.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r5.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r5.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r5.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r5.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r5.u32 & 0x1) != 0;
	// mtxer r6
	ctx.xer.so = (ctx.r6.u64 & 0x80000000) != 0;
	ctx.xer.ov = (ctx.r6.u64 & 0x40000000) != 0;
	ctx.xer.ca = (ctx.r6.u64 & 0x20000000) != 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r2,40(r4)
	ctx.r2.u64 = REX_LOAD_U64(ctx.r4.u32 + 40);
	// ld r1,32(r4)
	ctx.r1.u64 = REX_LOAD_U64(ctx.r4.u32 + 32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EAC60) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EAD40) {
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
	ctx.lr = 0x822EAD48;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// addi r31,r1,-2000
	r31.s64 = ctx.r1.s64 + -2000;
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r27,r3,136
	r27.s64 = ctx.r3.s64 + 136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200a10
	ctx.lr = 0x822EAD64;
	sub_82200A10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// std r11,528(r30)
	REX_STORE_U64(r30.u32 + 528, ctx.r11.u64);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,500(r30)
	REX_STORE_U32(r30.u32 + 500, ctx.r10.u32);
	// stw r11,536(r30)
	REX_STORE_U32(r30.u32 + 536, ctx.r11.u32);
	// stw r11,540(r30)
	REX_STORE_U32(r30.u32 + 540, ctx.r11.u32);
	// stw r11,544(r30)
	REX_STORE_U32(r30.u32 + 544, ctx.r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,56(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EAD9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x822eadf0
	if (ctx.cr6.lt) goto loc_822EADF0;
	// lwz r11,548(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 548);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,9
	ctx.r4.s64 = 9;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r3,r30,520
	ctx.r3.s64 = r30.s64 + 520;
	// bl 0x822f12c8
	ctx.lr = 0x822EADD0;
	sub_822F12C8(ctx, base);
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ori r29,r9,65535
	r29.u64 = ctx.r9.u64 | 65535;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	r28.u64 = ctx.r6.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x822eadf8
	goto loc_822EADF8;
loc_822EADF0:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r29,r11,65535
	r29.u64 = ctx.r11.u64 | 65535;
loc_822EADF8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x822eaf44
	if (ctx.cr6.lt) goto loc_822EAF44;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// bl 0x822f0388
	ctx.lr = 0x822EAE0C;
	sub_822F0388(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	r28.u64 = ctx.r9.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x822eaf44
	if (ctx.cr6.lt) goto loc_822EAF44;
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// lwz r4,508(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 520);
	// bl 0x822f1510
	ctx.lr = 0x822EAE38;
	sub_822F1510(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r29
	r28.u64 = ctx.r9.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x822eaf44
	if (ctx.cr6.lt) goto loc_822EAF44;
	// li r5,1016
	ctx.r5.s64 = 1016;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,928
	ctx.r3.s64 = r31.s64 + 928;
	// bl 0x822d5870
	ctx.lr = 0x822EAE64;
	sub_822D5870(ctx, base);
	// lwz r11,508(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 508);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r4,r31,928
	ctx.r4.s64 = r31.s64 + 928;
	// sth r11,928(r31)
	REX_STORE_U16(r31.u32 + 928, ctx.r11.u16);
	// addi r3,r30,520
	ctx.r3.s64 = r30.s64 + 520;
	// stw r10,932(r31)
	REX_STORE_U32(r31.u32 + 932, ctx.r10.u32);
	// bl 0x822f17e0
	ctx.lr = 0x822EAE80;
	sub_822F17E0(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r6,r29
	r28.u64 = ctx.r6.u64 & r29.u64;
	// stw r28,80(r31)
	REX_STORE_U32(r31.u32 + 80, r28.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x822eaf44
	if (ctx.cr6.lt) goto loc_822EAF44;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EAEB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822EAECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r6,44(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822EAEE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x822e8d40
	ctx.lr = 0x822EAEF0;
	sub_822E8D40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// bl 0x822e8d48
	ctx.lr = 0x822EAEFC;
	sub_822E8D48(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// bl 0x822e8d50
	ctx.lr = 0x822EAF08;
	sub_822E8D50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,144(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mullw r11,r5,r4
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r4,r11,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x822e8d58
	ctx.lr = 0x822EAF20;
	sub_822E8D58(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822eaf38
	if (ctx.cr6.eq) goto loc_822EAF38;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_822EAF38:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200758
	ctx.lr = 0x822EAF44;
	sub_82200758(ctx, base);
loc_822EAF44:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822eaf60
	goto loc_822EAF60;
loc_822EAF60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,2000
	ctx.r1.s64 = r31.s64 + 2000;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822F4DF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822F4F58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,244(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 244);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F4F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822f4ff0
	if (!ctx.cr6.eq) goto loc_822F4FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,248(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 248);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822f4ff0
	if (!ctx.cr6.eq) goto loc_822F4FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,276(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F4FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,280(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 280);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F4FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// b 0x822f4ff8
	goto loc_822F4FF8;
loc_822F4FF0:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_822F4FF8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F500C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822F9260) {
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
	ctx.lr = 0x822F9268;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822f90c8
	ctx.lr = 0x822F92B4;
	sub_822F90C8(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822f92f8
	if (ctx.cr6.eq) goto loc_822F92F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f90c8
	ctx.lr = 0x822F92F8;
	sub_822F90C8(ctx, base);
loc_822F92F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822FB1E0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r4,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB700) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822FB708;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x822d5870
	ctx.lr = 0x822FB72C;
	sub_822D5870(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = r30.s64 + -1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822fb73c
	if (!ctx.cr6.gt) goto loc_822FB73C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_822FB73C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8247c5e8
	ctx.lr = 0x822FB74C;
	sub_8247C5E8(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r29
	REX_STORE_U16(ctx.r11.u32 + r29.u32, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822FF9F8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822ffa54
	if (!ctx.cr6.eq) goto loc_822FFA54;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// beq cr6,0x822ffa30
	if (ctx.cr6.eq) goto loc_822FFA30;
	// cmplwi cr6,r10,20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 20, ctx.xer);
	// beq cr6,0x822ffa30
	if (ctx.cr6.eq) goto loc_822FFA30;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// beq cr6,0x822ffa30
	if (ctx.cr6.eq) goto loc_822FFA30;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822ffa84
	if (!ctx.cr6.eq) goto loc_822FFA84;
loc_822FFA30:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x822ffa74
	if (ctx.cr6.eq) goto loc_822FFA74;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x822ffa74
	if (ctx.cr6.eq) goto loc_822FFA74;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x822ffa74
	if (ctx.cr6.eq) goto loc_822FFA74;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	return;
loc_822FFA54:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822ffa84
	if (!ctx.cr6.eq) goto loc_822FFA84;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x822ffa84
	if (!ctx.cr6.eq) goto loc_822FFA84;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x822ffa84
	if (!ctx.cr6.eq) goto loc_822FFA84;
loc_822FFA74:
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_822FFA84:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82303028) {
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
	ctx.lr = 0x82303030;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r28,56(r5)
	r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823031c8
	if (!ctx.cr6.gt) goto loc_823031C8;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// sraw r30,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	r30.s64 = ctx.r11.s32 >> temp.u32;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(r30.s32, r26.s32, ctx.xer);
	// blt cr6,0x82303078
	if (ctx.cr6.lt) goto loc_82303078;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82303078:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230308C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823031d0
	if (ctx.cr6.lt) goto loc_823031D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82303154
	if (!ctx.cr6.lt) goto loc_82303154;
loc_823030BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_823030CC:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x823030e4
	if (ctx.cr6.eq) goto loc_823030E4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_823030E4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r28.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82303100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823031d0
	if (ctx.cr6.lt) goto loc_823031D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x82303144
	if (!ctx.cr6.lt) goto loc_82303144;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823030cc
	goto loc_823030CC;
loc_82303144:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// blt cr6,0x823030bc
	if (ctx.cr6.lt) goto loc_823030BC;
loc_82303154:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bge cr6,0x823031b4
	if (!ctx.cr6.lt) goto loc_823031B4;
loc_82303160:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823031d0
	if (ctx.cr6.lt) goto loc_823031D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r9.u16);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r26.s32, ctx.xer);
	// blt cr6,0x82303160
	if (ctx.cr6.lt) goto loc_82303160;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// blt cr6,0x82303160
	if (ctx.cr6.lt) goto loc_82303160;
loc_823031B4:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x823031d0
	if (!ctx.cr6.gt) goto loc_823031D0;
loc_823031C8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_823031D0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r26.s32, ctx.xer);
	// bne cr6,0x823031f0
	if (!ctx.cr6.eq) goto loc_823031F0;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// sth r11,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
loc_823031F0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r29)
	REX_STORE_U16(r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8230C848) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8230C850;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8230c880
	if (!ctx.cr6.eq) goto loc_8230C880;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addi r31,r4,8
	r31.s64 = ctx.r4.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c880
	if (ctx.cr6.eq) goto loc_8230C880;
	// addi r5,r11,20
	ctx.r5.s64 = ctx.r11.s64 + 20;
	// b 0x8230c89c
	goto loc_8230C89C;
loc_8230C880:
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230c8b8
	if (!ctx.cr6.eq) goto loc_8230C8B8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r31,r30,8
	r31.s64 = r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c8b8
	if (ctx.cr6.eq) goto loc_8230C8B8;
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
loc_8230C89C:
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230C8A8;
	sub_822F94E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230C8B8;
	sub_822F94E8(ctx, base);
loc_8230C8B8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// addi r31,r30,28
	r31.s64 = r30.s64 + 28;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230c8f4
	if (ctx.cr6.eq) goto loc_8230C8F4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230c8e4
	if (ctx.cr6.eq) goto loc_8230C8E4;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// bl 0x822f94e8
	ctx.lr = 0x8230C8E4;
	sub_822F94E8(ctx, base);
loc_8230C8E4:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,224(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 224);
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x822f94e8
	ctx.lr = 0x8230C8F4;
	sub_822F94E8(ctx, base);
loc_8230C8F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82310470) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823104ec
	if (ctx.cr6.eq) goto loc_823104EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r11,-24664
	ctx.r4.s64 = ctx.r11.s64 + -24664;
	// bl 0x822f93f8
	ctx.lr = 0x823104A8;
	sub_822F93F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823104ec
	if (!ctx.cr6.eq) goto loc_823104EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,-26244
	ctx.r4.s64 = ctx.r11.s64 + -26244;
	// bl 0x822f93f8
	ctx.lr = 0x823104C0;
	sub_822F93F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823104ec
	if (!ctx.cr6.eq) goto loc_823104EC;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r4,r11,-24668
	ctx.r4.s64 = ctx.r11.s64 + -24668;
	// bl 0x822f93f8
	ctx.lr = 0x823104D8;
	sub_822F93F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823104ec
	if (!ctx.cr6.eq) goto loc_823104EC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
	// b 0x8231054c
	goto loc_8231054C;
loc_823104EC:
	// lis r11,-32208
	ctx.r11.s64 = -2110783488;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// lis r9,-32207
	ctx.r9.s64 = -2110717952;
	// lis r8,-32207
	ctx.r8.s64 = -2110717952;
	// addi r4,r11,26800
	ctx.r4.s64 = ctx.r11.s64 + 26800;
	// lis r7,-32207
	ctx.r7.s64 = -2110717952;
	// addi r11,r10,-11864
	ctx.r11.s64 = ctx.r10.s64 + -11864;
	// stw r4,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r4.u32);
	// lis r6,-32208
	ctx.r6.s64 = -2110783488;
	// addi r10,r9,-224
	ctx.r10.s64 = ctx.r9.s64 + -224;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lis r5,-32208
	ctx.r5.s64 = -2110783488;
	// addi r9,r8,-11288
	ctx.r9.s64 = ctx.r8.s64 + -11288;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// addi r8,r7,-10880
	ctx.r8.s64 = ctx.r7.s64 + -10880;
	// addi r7,r6,29408
	ctx.r7.s64 = ctx.r6.s64 + 29408;
	// stw r9,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// addi r6,r5,29856
	ctx.r6.s64 = ctx.r5.s64 + 29856;
	// stw r8,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r6.u32);
	// stw r5,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r5.u32);
loc_8231054C:
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

DEFINE_REX_FUNC(sub_823112B8) {
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
	ctx.lr = 0x823112C0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,44(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r29,0
	r29.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// ld r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U64(r26.u32 + 64);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// ble cr6,0x823112fc
	if (!ctx.cr6.gt) goto loc_823112FC;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823112FC:
	// lwz r9,16(r26)
	ctx.r9.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82311320
	if (ctx.cr6.eq) goto loc_82311320;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82311320:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// bge cr6,0x82311348
	if (!ctx.cr6.lt) goto loc_82311348;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,212
	ctx.r3.u64 = ctx.r3.u64 | 212;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_82311348:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 72);
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x822f9490
	ctx.lr = 0x8231135C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823113c0
	if (ctx.cr6.lt) goto loc_823113C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r29.u64);
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, r29.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, r30.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r28.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r11.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823132b0
	ctx.lr = 0x823113A4;
	sub_823132B0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823113c0
	if (ctx.cr6.lt) goto loc_823113C0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_823113C0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823113dc
	if (ctx.cr6.eq) goto loc_823113DC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,72(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 72);
	// li r4,29
	ctx.r4.s64 = 29;
	// bl 0x822f94e8
	ctx.lr = 0x823113DC;
	sub_822F94E8(ctx, base);
loc_823113DC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82313E68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82313e7c
	if (!ctx.cr6.gt) goto loc_82313E7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
loc_82313E7C:
	// b 0x82313378
	sub_82313378(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82313F40) {
	REX_FUNC_PROLOGUE();
	// b 0x82313e80
	sub_82313E80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314088) {
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
	ctx.lr = 0x82314090;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// stw r4,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r4.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
loc_823140B8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,72(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 72);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82313ad8
	ctx.lr = 0x823140CC;
	sub_82313AD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823141a0
	if (ctx.cr6.lt) goto loc_823141A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82314168
	if (ctx.cr6.eq) goto loc_82314168;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82314104
	if (!ctx.cr6.eq) goto loc_82314104;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82313660
	ctx.lr = 0x823140FC;
	sub_82313660(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823141a0
	if (ctx.cr6.lt) goto loc_823141A0;
loc_82314104:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 72);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 68);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r4,r7,r9
	ctx.r4.u64 = ctx.r7.u64 + ctx.r9.u64;
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82314134
	if (ctx.cr6.lt) goto loc_82314134;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x82314144
	goto loc_82314144;
loc_82314134:
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82314144:
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// std r11,72(r31)
	REX_STORE_U64(r31.u32 + 72, ctx.r11.u64);
	// beq 0x82314168
	if (ctx.cr0.eq) goto loc_82314168;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x823140b8
	if (!ctx.cr6.gt) goto loc_823140B8;
loc_82314168:
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82314190
	if (ctx.cr6.eq) goto loc_82314190;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82313e80
	ctx.lr = 0x8231417C;
	sub_82313E80(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
loc_82314190:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r11.u64);
loc_823141A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8231AC80) {
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
	ctx.lr = 0x8231AC88;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r30,-5
	r30.s64 = -5;
	// addi r29,r11,-30400
	r29.s64 = ctx.r11.s64 + -30400;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f31,-6032(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
loc_8231ACAC:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x822d5b48
	ctx.lr = 0x8231ACC4;
	sub_822D5B48(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231acac
	if (ctx.cr6.lt) goto loc_8231ACAC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,80
	r31.s64 = r29.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,16260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	f30.f64 = double(temp.f32);
loc_8231ACF0:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x822d5b48
	ctx.lr = 0x8231AD10;
	sub_822D5B48(ctx, base);
	// addi r11,r29,80
	ctx.r11.s64 = r29.s64 + 80;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8231acf0
	if (ctx.cr6.lt) goto loc_8231ACF0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82322750) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823227cc
	if (!ctx.cr6.eq) goto loc_823227CC;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8232279c
	if (!ctx.cr6.eq) goto loc_8232279C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-7680
	ctx.r8.s64 = ctx.r11.s64 + -7680;
	// addi r7,r10,5264
	ctx.r7.s64 = ctx.r10.s64 + 5264;
	// addi r6,r9,6136
	ctx.r6.s64 = ctx.r9.s64 + 6136;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_8232279C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-15120
	ctx.r8.s64 = ctx.r11.s64 + -15120;
	// addi r7,r10,3360
	ctx.r7.s64 = ctx.r10.s64 + 3360;
	// addi r6,r9,4312
	ctx.r6.s64 = ctx.r9.s64 + 4312;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,70
	ctx.r5.s64 = 70;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_823227CC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82322840
	if (!ctx.cr6.eq) goto loc_82322840;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82322810
	if (!ctx.cr6.eq) goto loc_82322810;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,512
	ctx.r8.s64 = ctx.r11.s64 + 512;
	// addi r7,r10,19296
	ctx.r7.s64 = ctx.r10.s64 + 19296;
	// addi r6,r9,20408
	ctx.r6.s64 = ctx.r9.s64 + 20408;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_82322810:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-1976
	ctx.r8.s64 = ctx.r11.s64 + -1976;
	// addi r7,r10,16640
	ctx.r7.s64 = ctx.r10.s64 + 16640;
	// addi r6,r9,17968
	ctx.r6.s64 = ctx.r9.s64 + 17968;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_82322840:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82322884
	if (!ctx.cr6.eq) goto loc_82322884;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-5984
	ctx.r8.s64 = ctx.r11.s64 + -5984;
	// addi r7,r10,12352
	ctx.r7.s64 = ctx.r10.s64 + 12352;
	// addi r6,r9,14496
	ctx.r6.s64 = ctx.r9.s64 + 14496;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,180
	ctx.r5.s64 = 180;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
loc_82322884:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r8,r11,-13376
	ctx.r8.s64 = ctx.r11.s64 + -13376;
	// addi r7,r10,7008
	ctx.r7.s64 = ctx.r10.s64 + 7008;
	// addi r6,r9,9680
	ctx.r6.s64 = ctx.r9.s64 + 9680;
	// stw r8,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// li r5,340
	ctx.r5.s64 = 340;
	// stw r7,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r7.u32);
	// stw r6,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r6.u32);
	// sth r5,314(r3)
	REX_STORE_U16(ctx.r3.u32 + 314, ctx.r5.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82326750) {
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
	ctx.lr = 0x82326758;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r30.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// bl 0x822f9490
	ctx.lr = 0x82326794;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82326a94
	if (ctx.cr6.lt) goto loc_82326A94;
	// li r5,4240
	ctx.r5.s64 = 4240;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x823267AC;
	sub_822D5870(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r27,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, r27.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, r30.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r30.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,16(r7)
	REX_STORE_U32(ctx.r7.u32 + 16, r30.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r30.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,68(r5)
	REX_STORE_U32(ctx.r5.u32 + 68, r30.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,112(r4)
	REX_STORE_U32(ctx.r4.u32 + 112, r30.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,4224(r3)
	REX_STORE_U32(ctx.r3.u32 + 4224, r30.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,8(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + 16);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r7,40(r6)
	REX_STORE_U16(ctx.r6.u32 + 40, ctx.r7.u16);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r4,18(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 18);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// sth r4,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, ctx.r4.u16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,44(r9)
	REX_STORE_U32(ctx.r9.u32 + 44, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,24(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,48(r6)
	REX_STORE_U32(ctx.r6.u32 + 48, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, ctx.r10.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r7,36(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r7,60(r6)
	REX_STORE_U32(ctx.r6.u32 + 60, ctx.r7.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r4,40(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r10,92(r9)
	REX_STORE_U32(ctx.r9.u32 + 92, ctx.r10.u32);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,96(r8)
	REX_STORE_U32(ctx.r8.u32 + 96, r29.u32);
	// lwz r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r30,80(r7)
	REX_STORE_U32(ctx.r7.u32 + 80, r30.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r5,48(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82326930
	if (ctx.cr6.eq) goto loc_82326930;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r6,r10,84
	ctx.r6.s64 = ctx.r10.s64 + 84;
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// bl 0x822f9490
	ctx.lr = 0x82326900;
	sub_822F9490(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82326a94
	if (ctx.cr6.lt) goto loc_82326A94;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 48);
	// lwz r3,84(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r4,52(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x822d4fa0
	ctx.lr = 0x82326920;
	sub_822D4FA0(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r8,112(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lhz r7,48(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 48);
	// sth r7,88(r8)
	REX_STORE_U16(ctx.r8.u32 + 88, ctx.r7.u16);
loc_82326930:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,22358
	ctx.r10.s64 = 1465253888;
	// ori r9,r10,17201
	ctx.r9.u64 = ctx.r10.u64 | 17201;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22081
	ctx.r8.u64 = ctx.r9.u64 | 22081;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22067
	ctx.r8.u64 = ctx.r9.u64 | 22067;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22066
	ctx.r8.u64 = ctx.r9.u64 | 22066;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22358
	ctx.r9.s64 = 1465253888;
	// ori r8,r9,20530
	ctx.r8.u64 = ctx.r9.u64 | 20530;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22096
	ctx.r8.u64 = ctx.r9.u64 | 22096;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,22349
	ctx.r9.s64 = 1464664064;
	// ori r8,r9,22098
	ctx.r8.u64 = ctx.r9.u64 | 22098;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x823269b8
	if (ctx.cr6.eq) goto loc_823269B8;
	// lis r9,19792
	ctx.r9.s64 = 1297088512;
	// ori r8,r9,13395
	ctx.r8.u64 = ctx.r9.u64 | 13395;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823269c4
	if (!ctx.cr6.eq) goto loc_823269C4;
loc_823269B8:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_823269C4:
	// stw r11,32(r26)
	REX_STORE_U32(r26.u32 + 32, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r26,36
	ctx.r4.s64 = r26.s64 + 36;
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lfs f1,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// lwz r7,84(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// std r11,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lhz r7,48(r6)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r6.u32 + 48);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x823334c0
	ctx.lr = 0x82326A1C;
	sub_823334C0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// bl 0x82326008
	ctx.lr = 0x82326A24;
	sub_82326008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82326a94
	if (ctx.cr6.lt) goto loc_82326A94;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82326a4c
	if (ctx.cr6.eq) goto loc_82326A4C;
	// addi r3,r11,68
	ctx.r3.s64 = ctx.r11.s64 + 68;
	// bl 0x82333800
	ctx.lr = 0x82326A44;
	sub_82333800(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82326A4C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r30.u32);
	// bl 0x82326008
	ctx.lr = 0x82326A58;
	sub_82326008(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82326a94
	if (ctx.cr6.lt) goto loc_82326A94;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r10,26368
	ctx.r4.s64 = ctx.r10.s64 + 26368;
	// stw r25,4228(r11)
	REX_STORE_U32(ctx.r11.u32 + 4228, r25.u32);
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r5,4232
	ctx.r6.s64 = ctx.r5.s64 + 4232;
	// bl 0x822f8fe8
	ctx.lr = 0x82326A80;
	sub_822F8FE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82326a94
	if (ctx.cr6.lt) goto loc_82326A94;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,4232(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4232);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
loc_82326A94:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82337D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82337D78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337d9c
	if (ctx.cr6.eq) goto loc_82337D9C;
	// add r30,r11,r4
	r30.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82337D9C:
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82337e1c
	if (!ctx.cr6.gt) goto loc_82337E1C;
loc_82337DAC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82337df4
	if (ctx.cr6.gt) goto loc_82337DF4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x82337e44
	if (ctx.cr6.gt) goto loc_82337E44;
	// subfic r8,r10,40
	ctx.xer.ca = ctx.r10.u32 <= 40;
	ctx.r8.u64 = static_cast<uint64_t>(40) - ctx.r10.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r10,8
	ctx.r6.s64 = ctx.r10.s64 + 8;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// sld r10,r7,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// b 0x82337e0c
	goto loc_82337E0C;
loc_82337DF4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82337e1c
	if (!ctx.cr6.eq) goto loc_82337E1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x82337E08;
	sub_82337BD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_82337E0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82337dac
	if (ctx.cr6.gt) goto loc_82337DAC;
loc_82337E1C:
	// subfic r11,r30,64
	ctx.xer.ca = r30.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - r30.u64;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// li r10,-1
	ctx.r10.s64 = -1;
	// rotlwi r11,r8,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_82337E44:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82337e1c
	if (!ctx.cr6.gt) goto loc_82337E1C;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// subfic r7,r30,32
	ctx.xer.ca = r30.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - r30.u64;
	// clrlwi r4,r9,24
	ctx.r4.u64 = ctx.r9.u32 & 0xFF;
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// srd r11,r8,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r4.u8 & 0x7F));
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// srd r11,r3,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (ctx.r5.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// srw r9,r10,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r29.u8 & 0x3F));
	// and r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 & ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8233FEB8) {
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
	// li r11,-5
	ctx.r11.s64 = -5;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233fee8
	if (ctx.cr6.lt) goto loc_8233FEE8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8233ff48
	goto loc_8233FF48;
loc_8233FEE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824d438c
	ctx.lr = 0x8233FEF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8233ff38
	if (!ctx.cr6.lt) goto loc_8233FF38;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233d448
	ctx.lr = 0x8233FF0C;
	sub_8233D448(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ff30
	if (ctx.cr6.eq) goto loc_8233FF30;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bl 0x824d438c
	ctx.lr = 0x8233FF24;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233FF2C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8233ff3c
	goto loc_8233FF3C;
loc_8233FF30:
	// li r30,0
	r30.s64 = 0;
	// b 0x8233ff3c
	goto loc_8233FF3C;
loc_8233FF38:
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8233FF3C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x824d437c
	ctx.lr = 0x8233FF44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8233FF48:
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

DEFINE_REX_FUNC(sub_823474C0) {
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
	ctx.lr = 0x823474C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r26,0
	r26.s64 = 0;
	// lwz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r25,2
	r25.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x8234759c
	if (!ctx.cr6.eq) goto loc_8234759C;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// bge cr6,0x8234755c
	if (!ctx.cr6.lt) goto loc_8234755C;
loc_82347504:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234755c
	if (ctx.cr6.eq) goto loc_8234755C;
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
	// bge 0x8234754c
	if (!ctx.cr0.lt) goto loc_8234754C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234754C;
	sub_823380C8(ctx, base);
loc_8234754C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82347504
	if (ctx.cr6.gt) goto loc_82347504;
loc_8234755C:
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
	// bge 0x82347594
	if (!ctx.cr0.lt) goto loc_82347594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347594;
	sub_823380C8(ctx, base);
loc_82347594:
	// stw r30,452(r28)
	REX_STORE_U32(r28.u32 + 452, r30.u32);
	// b 0x8234767c
	goto loc_8234767C;
loc_8234759C:
	// mr r30,r25
	r30.u64 = r25.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82347600
	if (!ctx.cr6.lt) goto loc_82347600;
loc_823475A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347600
	if (ctx.cr6.eq) goto loc_82347600;
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
	// bge 0x823475f0
	if (!ctx.cr0.lt) goto loc_823475F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823475F0;
	sub_823380C8(ctx, base);
loc_823475F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823475a8
	if (ctx.cr6.gt) goto loc_823475A8;
loc_82347600:
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
	// bge 0x82347638
	if (!ctx.cr0.lt) goto loc_82347638;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347638;
	sub_823380C8(ctx, base);
loc_82347638:
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r27,452(r28)
	REX_STORE_U32(r28.u32 + 452, r27.u32);
	// bne cr6,0x82347650
	if (!ctx.cr6.eq) goto loc_82347650;
	// stw r26,452(r28)
	REX_STORE_U32(r28.u32 + 452, r26.u32);
	// b 0x8234767c
	goto loc_8234767C;
loc_82347650:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x82347660
	if (!ctx.cr6.eq) goto loc_82347660;
	// stw r26,4000(r28)
	REX_STORE_U32(r28.u32 + 4000, r26.u32);
	// b 0x82347674
	goto loc_82347674;
loc_82347660:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82347670
	if (!ctx.cr6.eq) goto loc_82347670;
	// stw r27,4000(r28)
	REX_STORE_U32(r28.u32 + 4000, r27.u32);
	// b 0x82347674
	goto loc_82347674;
loc_82347670:
	// stw r25,4000(r28)
	REX_STORE_U32(r28.u32 + 4000, r25.u32);
loc_82347674:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823425b0
	ctx.lr = 0x8234767C;
	sub_823425B0(ctx, base);
loc_8234767C:
	// lwz r11,444(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347adc
	if (ctx.cr6.eq) goto loc_82347ADC;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r11,248(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 248);
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bgt cr6,0x82347804
	if (ctx.cr6.gt) goto loc_82347804;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82347708
	if (!ctx.cr6.lt) goto loc_82347708;
loc_823476B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347708
	if (ctx.cr6.eq) goto loc_82347708;
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
	// bge 0x823476f8
	if (!ctx.cr0.lt) goto loc_823476F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823476F8;
	sub_823380C8(ctx, base);
loc_823476F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823476b0
	if (ctx.cr6.gt) goto loc_823476B0;
loc_82347708:
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
	// bge 0x82347740
	if (!ctx.cr0.lt) goto loc_82347740;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347740;
	sub_823380C8(ctx, base);
loc_82347740:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82347ad4
	if (ctx.cr6.eq) goto loc_82347AD4;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823477bc
	if (!ctx.cr6.lt) goto loc_823477BC;
loc_82347764:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823477bc
	if (ctx.cr6.eq) goto loc_823477BC;
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
	// bge 0x823477ac
	if (!ctx.cr0.lt) goto loc_823477AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823477AC;
	sub_823380C8(ctx, base);
loc_823477AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82347764
	if (ctx.cr6.gt) goto loc_82347764;
loc_823477BC:
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
	// bge 0x823477f4
	if (!ctx.cr0.lt) goto loc_823477F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823477F4;
	sub_823380C8(ctx, base);
loc_823477F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823478b0
	if (!ctx.cr6.eq) goto loc_823478B0;
	// addi r11,r28,2172
	ctx.r11.s64 = r28.s64 + 2172;
	// b 0x82347ad8
	goto loc_82347AD8;
loc_82347804:
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x82347974
	if (ctx.cr6.gt) goto loc_82347974;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82347870
	if (!ctx.cr6.lt) goto loc_82347870;
loc_82347818:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347870
	if (ctx.cr6.eq) goto loc_82347870;
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
	// bge 0x82347860
	if (!ctx.cr0.lt) goto loc_82347860;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347860;
	sub_823380C8(ctx, base);
loc_82347860:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82347818
	if (ctx.cr6.gt) goto loc_82347818;
loc_82347870:
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
	// bge 0x823478a8
	if (!ctx.cr0.lt) goto loc_823478A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823478A8;
	sub_823380C8(ctx, base);
loc_823478A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x823478b8
	if (!ctx.cr6.eq) goto loc_823478B8;
loc_823478B0:
	// addi r11,r28,2160
	ctx.r11.s64 = r28.s64 + 2160;
	// b 0x82347ad8
	goto loc_82347AD8;
loc_823478B8:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234792c
	if (!ctx.cr6.lt) goto loc_8234792C;
loc_823478D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234792c
	if (ctx.cr6.eq) goto loc_8234792C;
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
	// bge 0x8234791c
	if (!ctx.cr0.lt) goto loc_8234791C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234791C;
	sub_823380C8(ctx, base);
loc_8234791C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823478d4
	if (ctx.cr6.gt) goto loc_823478D4;
loc_8234792C:
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
	// bge 0x82347964
	if (!ctx.cr0.lt) goto loc_82347964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347964;
	sub_823380C8(ctx, base);
loc_82347964:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82347ad4
	if (ctx.cr6.eq) goto loc_82347AD4;
	// addi r11,r28,2172
	ctx.r11.s64 = r28.s64 + 2172;
	// b 0x82347ad8
	goto loc_82347AD8;
loc_82347974:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823479d4
	if (!ctx.cr6.lt) goto loc_823479D4;
loc_8234797C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823479d4
	if (ctx.cr6.eq) goto loc_823479D4;
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
	// bge 0x823479c4
	if (!ctx.cr0.lt) goto loc_823479C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823479C4;
	sub_823380C8(ctx, base);
loc_823479C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234797c
	if (ctx.cr6.gt) goto loc_8234797C;
loc_823479D4:
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
	// bge 0x82347a0c
	if (!ctx.cr0.lt) goto loc_82347A0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347A0C;
	sub_823380C8(ctx, base);
loc_82347A0C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x82347a1c
	if (!ctx.cr6.eq) goto loc_82347A1C;
	// addi r11,r28,2172
	ctx.r11.s64 = r28.s64 + 2172;
	// b 0x82347ad8
	goto loc_82347AD8;
loc_82347A1C:
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82347a90
	if (!ctx.cr6.lt) goto loc_82347A90;
loc_82347A38:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347a90
	if (ctx.cr6.eq) goto loc_82347A90;
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
	// bge 0x82347a80
	if (!ctx.cr0.lt) goto loc_82347A80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347A80;
	sub_823380C8(ctx, base);
loc_82347A80:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82347a38
	if (ctx.cr6.gt) goto loc_82347A38;
loc_82347A90:
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
	// bge 0x82347ac8
	if (!ctx.cr0.lt) goto loc_82347AC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347AC8;
	sub_823380C8(ctx, base);
loc_82347AC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// addi r11,r28,2160
	ctx.r11.s64 = r28.s64 + 2160;
	// beq cr6,0x82347ad8
	if (ctx.cr6.eq) goto loc_82347AD8;
loc_82347AD4:
	// addi r11,r28,2148
	ctx.r11.s64 = r28.s64 + 2148;
loc_82347AD8:
	// stw r11,2144(r28)
	REX_STORE_U32(r28.u32 + 2144, ctx.r11.u32);
loc_82347ADC:
	// lwz r11,3944(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 3944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347b98
	if (ctx.cr6.eq) goto loc_82347B98;
	// lwz r31,84(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 84);
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82347b5c
	if (!ctx.cr6.lt) goto loc_82347B5C;
loc_82347B04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82347b5c
	if (ctx.cr6.eq) goto loc_82347B5C;
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
	// bge 0x82347b4c
	if (!ctx.cr0.lt) goto loc_82347B4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347B4C;
	sub_823380C8(ctx, base);
loc_82347B4C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82347b04
	if (ctx.cr6.gt) goto loc_82347B04;
loc_82347B5C:
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
	// bge 0x82347b94
	if (!ctx.cr0.lt) goto loc_82347B94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82347B94;
	sub_823380C8(ctx, base);
loc_82347B94:
	// stw r30,456(r28)
	REX_STORE_U32(r28.u32 + 456, r30.u32);
loc_82347B98:
	// lwz r11,440(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 440);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82347c60
	if (ctx.cr6.eq) goto loc_82347C60;
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
	// bge 0x82347bcc
	if (!ctx.cr0.lt) goto loc_82347BCC;
	// bl 0x823380c8
	ctx.lr = 0x82347BCC;
	sub_823380C8(ctx, base);
loc_82347BCC:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// bne cr6,0x82347c5c
	if (!ctx.cr6.eq) goto loc_82347C5C;
	// lwz r3,84(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 84);
	// stw r26,332(r28)
	REX_STORE_U32(r28.u32 + 332, r26.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r9,r10,1,62
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r9.u64);
	// rldicl r31,r10,1,63
	r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x82347c00
	if (!ctx.cr0.lt) goto loc_82347C00;
	// bl 0x823380c8
	ctx.lr = 0x82347C00;
	sub_823380C8(ctx, base);
loc_82347C00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82347c14
	if (!ctx.cr6.eq) goto loc_82347C14;
	// stw r26,340(r28)
	REX_STORE_U32(r28.u32 + 340, r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82347C14:
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
	// bge 0x82347c3c
	if (!ctx.cr0.lt) goto loc_82347C3C;
	// bl 0x823380c8
	ctx.lr = 0x82347C3C;
	sub_823380C8(ctx, base);
loc_82347C3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82347c50
	if (!ctx.cr6.eq) goto loc_82347C50;
	// stw r27,340(r28)
	REX_STORE_U32(r28.u32 + 340, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82347C50:
	// stw r25,340(r28)
	REX_STORE_U32(r28.u32 + 340, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82347C5C:
	// stw r27,332(r28)
	REX_STORE_U32(r28.u32 + 332, r27.u32);
loc_82347C60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8236A888) {
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
	ctx.lr = 0x8236A890;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8236acc8
	if (ctx.cr6.eq) goto loc_8236ACC8;
	// lwz r31,304(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8236acc8
	if (ctx.cr6.eq) goto loc_8236ACC8;
	// bl 0x82369fe0
	ctx.lr = 0x8236A8B0;
	sub_82369FE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8236ab64
	if (!ctx.cr6.eq) goto loc_8236AB64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r7,22857
	r30.u64 = ctx.r7.u64 | 22857;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r22,0
	r22.s64 = 0;
	// lwz r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// li r23,0
	r23.s64 = 0;
	// li r20,0
	r20.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r21,0
	r21.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x8236a9f4
	if (ctx.cr6.eq) goto loc_8236A9F4;
	// lis r30,12338
	r30.s64 = 808583168;
	// ori r30,r30,13385
	r30.u64 = r30.u64 | 13385;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x8236a9f4
	if (ctx.cr6.eq) goto loc_8236A9F4;
	// lis r30,12849
	r30.s64 = 842072064;
	// ori r30,r30,22105
	r30.u64 = r30.u64 | 22105;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// beq cr6,0x8236a9f4
	if (ctx.cr6.eq) goto loc_8236A9F4;
	// lis r30,12593
	r30.s64 = 825294848;
	// ori r30,r30,13392
	r30.u64 = r30.u64 | 13392;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r30.s32, ctx.xer);
	// bne cr6,0x8236aac0
	if (!ctx.cr6.eq) goto loc_8236AAC0;
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r23.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r20,r23
	r20.u64 = r23.u64;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r27.s64 = temp.s64;
	// mr r21,r27
	r21.u64 = r27.u64;
	// mr r19,r27
	r19.u64 = r27.u64;
	// bne cr6,0x8236a9b0
	if (!ctx.cr6.eq) goto loc_8236A9B0;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 2;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r5,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 2;
	// mullw r3,r6,r11
	ctx.r3.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// add r30,r8,r9
	r30.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r9,r3,r7
	ctx.r9.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r30,r6
	ctx.r7.u64 = r30.u64 + ctx.r6.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// b 0x8236aac0
	goto loc_8236AAC0;
loc_8236A9B0:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addze r9,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r30.s64 = temp.s64;
	// mullw r6,r8,r10
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r8,r11
	r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// add r8,r30,r9
	ctx.r8.u64 = r30.u64 + ctx.r9.u64;
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r29,r5
	ctx.r9.u64 = r29.u64 + ctx.r5.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// b 0x8236aabc
	goto loc_8236AABC;
loc_8236A9F4:
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,12(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r9,40(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	r23.s64 = temp.s64;
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r20,r23
	r20.u64 = r23.u64;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r27.s64 = temp.s64;
	// srawi r7,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r7.s64 = r27.s32 >> 1;
	// addze r21,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r21.s64 = temp.s64;
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r19,r21
	r19.u64 = r21.u64;
	// add r30,r7,r9
	r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bne cr6,0x8236aa80
	if (!ctx.cr6.eq) goto loc_8236AA80;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r3.s64 = r30.s32 >> 2;
	// mullw r30,r5,r11
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r9,r30,r6
	ctx.r9.u64 = r30.u64 + ctx.r6.u64;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x8236aabc
	goto loc_8236AABC;
loc_8236AA80:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 1;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r3.s64 = r30.s32 >> 2;
	// addi r30,r5,1
	r30.s64 = ctx.r5.s64 + 1;
	// addze r5,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mullw r30,r30,r11
	r30.s64 = int64_t(r30.s32) * int64_t(ctx.r11.s32);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r30,r8
	ctx.r9.u64 = r30.u64 + ctx.r8.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_8236AABC:
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
loc_8236AAC0:
	// add r30,r9,r4
	r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r28,r7,r4
	r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r25,r6,r4
	r25.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r26,r11,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r10,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x8236ab00
	if (!ctx.cr6.gt) goto loc_8236AB00;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8236AAE0:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x8236AAF0;
	sub_822091C8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r30,r26,r30
	r30.u64 = r26.u64 + r30.u64;
	// add r31,r22,r31
	r31.u64 = r22.u64 + r31.u64;
	// bne 0x8236aae0
	if (!ctx.cr0.eq) goto loc_8236AAE0;
loc_8236AB00:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x8236ab2c
	if (!ctx.cr6.gt) goto loc_8236AB2C;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_8236AB0C:
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x8236AB1C;
	sub_822091C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r28,r24,r28
	r28.u64 = r24.u64 + r28.u64;
	// add r31,r23,r31
	r31.u64 = r23.u64 + r31.u64;
	// bne 0x8236ab0c
	if (!ctx.cr0.eq) goto loc_8236AB0C;
loc_8236AB2C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// ble cr6,0x8236acbc
	if (!ctx.cr6.gt) goto loc_8236ACBC;
	// mr r30,r19
	r30.u64 = r19.u64;
loc_8236AB38:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822091c8
	ctx.lr = 0x8236AB48;
	sub_822091C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r25,r24,r25
	r25.u64 = r24.u64 + r25.u64;
	// add r31,r20,r31
	r31.u64 = r20.u64 + r31.u64;
	// bne 0x8236ab38
	if (!ctx.cr0.eq) goto loc_8236AB38;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8236AB64:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8236acc8
	if (!ctx.cr6.eq) goto loc_8236ACC8;
	// lwz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r29,r31
	r29.u64 = r31.u64;
	// lwz r10,36(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,12(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r9,16(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lhz r11,14(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r31,16(r7)
	r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r30,r10,31
	r30.s64 = ctx.r10.s64 + 31;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r30,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// rlwinm r30,r10,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r3.s64 = r30.s32 >> 3;
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r28.s64 = temp.s64;
	// srawi r3,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	r30.s64 = temp.s64;
	// bgt cr6,0x8236abd8
	if (ctx.cr6.gt) goto loc_8236ABD8;
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x8236abd8
	if (!ctx.cr6.gt) goto loc_8236ABD8;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8236ABD8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8236ac3c
	if (!ctx.cr6.eq) goto loc_8236AC3C;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236ac04
	if (!ctx.cr6.eq) goto loc_8236AC04;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// b 0x8236ac8c
	goto loc_8236AC8C;
loc_8236AC04:
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r11
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// subf r5,r5,r8
	ctx.r5.u64 = ctx.r8.u64 - ctx.r5.u64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8236ac90
	goto loc_8236AC90;
loc_8236AC3C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x8236ac58
	if (!ctx.cr6.eq) goto loc_8236AC58;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mullw r6,r7,r11
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// b 0x8236ac80
	goto loc_8236AC80;
loc_8236AC58:
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,4(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.u64 = static_cast<uint64_t>(1) - ctx.r6.u64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r5,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r5.u64;
	// mullw r6,r3,r11
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_8236AC80:
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r11,r5,r10
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
loc_8236AC8C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8236AC90:
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x8236acbc
	if (!ctx.cr6.gt) goto loc_8236ACBC;
loc_8236AC9C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822091c8
	ctx.lr = 0x8236ACAC;
	sub_822091C8(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// add r31,r27,r31
	r31.u64 = r27.u64 + r31.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// bne 0x8236ac9c
	if (!ctx.cr0.eq) goto loc_8236AC9C;
loc_8236ACBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
loc_8236ACC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8237EC68) {
	REX_FUNC_PROLOGUE();
	// lwz r9,136(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8237ecb0
	if (!ctx.cr6.eq) goto loc_8237ECB0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8237eccc
	if (ctx.cr6.eq) goto loc_8237ECCC;
	// srawi r8,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 1;
	// lwz r7,21968(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 21968);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8237eccc
	if (!ctx.cr6.eq) goto loc_8237ECCC;
loc_8237ECB0:
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwz r8,1776(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// bne cr6,0x8237eccc
	if (!ctx.cr6.eq) goto loc_8237ECCC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8237ECCC:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,1776(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1776);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82381770) {
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
	ctx.lr = 0x82381778;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r6,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r6.u32);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r7,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// stw r9,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// addi r15,r4,14
	r15.s64 = ctx.r4.s64 + 14;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823817bc
	if (!ctx.cr6.eq) goto loc_823817BC;
	// lwz r11,21940(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21940);
	// li r14,1
	r14.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823817c0
	if (ctx.cr6.eq) goto loc_823817C0;
loc_823817BC:
	// li r14,0
	r14.s64 = 0;
loc_823817C0:
	// lbz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U8(r18.u32 + 4);
	// lwz r10,6608(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 6608);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r7,396(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 396);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r11,r10
	r17.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x8238180c
	if (ctx.cr6.eq) goto loc_8238180C;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// rlwinm r11,r11,10,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3;
	// addi r10,r11,735
	ctx.r10.s64 = ctx.r11.s64 + 735;
	// addi r9,r11,738
	ctx.r9.s64 = ctx.r11.s64 + 738;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + r31.u64;
	// add r22,r11,r31
	r22.u64 = ctx.r11.u64 + r31.u64;
	// stw r7,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// b 0x82381818
	goto loc_82381818;
loc_8238180C:
	// addi r11,r31,2916
	ctx.r11.s64 = r31.s64 + 2916;
	// addi r22,r31,2928
	r22.s64 = r31.s64 + 2928;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82381818:
	// li r25,0
	r25.s64 = 0;
	// rlwinm r21,r8,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r16,1,0,30
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// li r24,8
	r24.s64 = 8;
loc_82381828:
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// clrlwi r23,r25,31
	r23.u64 = r25.u32 & 0x1;
	// lwz r10,464(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 464);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lbzx r27,r25,r15
	r27.u64 = REX_LOAD_U8(r25.u32 + r15.u32);
	// add r29,r20,r23
	r29.u64 = r20.u64 + r23.u64;
	// lwz r30,1772(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// add r8,r11,r21
	ctx.r8.u64 = ctx.r11.u64 + r21.u64;
	// li r26,0
	r26.s64 = 0;
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823818cc
	if (ctx.cr6.eq) goto loc_823818CC;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e4c8
	ctx.lr = 0x82381894;
	sub_8237E4C8(ctx, base);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// bl 0x8239ca98
	ctx.lr = 0x823818C8;
	sub_8239CA98(ctx, base);
	// b 0x82381918
	goto loc_82381918;
loc_823818CC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x8237e1f8
	ctx.lr = 0x823818D8;
	sub_8237E1F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823818e4
	if (ctx.cr6.eq) goto loc_823818E4;
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
loc_823818E4:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// bl 0x8239ca98
	ctx.lr = 0x82381918;
	sub_8239CA98(ctx, base);
loc_82381918:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82382080
	if (!ctx.cr6.eq) goto loc_82382080;
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82381ad0
	if (ctx.cr6.eq) goto loc_82381AD0;
	// rlwinm r11,r25,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x2;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r6,r11,754
	ctx.r6.s64 = ctx.r11.s64 + 754;
	// rlwinm r7,r29,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r9,r29,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r30,-2
	ctx.r6.s64 = r30.s64 + -2;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82381964:
	// lhzu r7,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381964;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r30,14
	ctx.r5.s64 = r30.s64 + 14;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_82381990:
	// lhzu r8,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x82381990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381990;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,30
	ctx.r5.s64 = r30.s64 + 30;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_823819C0:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x823819c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823819C0;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,46
	ctx.r5.s64 = r30.s64 + 46;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_823819F4:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x823819f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823819F4;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r5,r30,62
	ctx.r5.s64 = r30.s64 + 62;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r7,-2
	ctx.r8.s64 = ctx.r7.s64 + -2;
loc_82381A24:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381A24;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r5,r30,78
	ctx.r5.s64 = r30.s64 + 78;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82381A58:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381a58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381A58;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r5,r30,94
	ctx.r5.s64 = r30.s64 + 94;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82381A90:
	// lhzu r7,2(r5)
	ea = 2 + ctx.r5.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381A90;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82381AC4:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82381ac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381AC4;
loc_82381AD0:
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwz r6,204(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// lwz r7,264(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82381AF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r10,r25,r18
	ctx.r10.u64 = r25.u64 + r18.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// li r23,0
	r23.s64 = 0;
	// stb r23,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, r23.u8);
	// beq cr6,0x82381b0c
	if (ctx.cr6.eq) goto loc_82381B0C;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// b 0x82381b10
	goto loc_82381B10;
loc_82381B0C:
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_82381B10:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// add r19,r11,r19
	r19.u64 = ctx.r11.u64 + r19.u64;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(r25.s32, 4, ctx.xer);
	// blt cr6,0x82381828
	if (ctx.cr6.lt) goto loc_82381828;
	// lwz r26,388(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// lwz r10,468(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 468);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + r16.u64;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82381bac
	if (ctx.cr6.eq) goto loc_82381BAC;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8237eb60
	ctx.lr = 0x82381B6C;
	sub_8237EB60(ctx, base);
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r6,4(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// lwz r30,1772(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x8239ca98
	ctx.lr = 0x82381BA8;
	sub_8239CA98(ctx, base);
	// b 0x82381bfc
	goto loc_82381BFC;
loc_82381BAC:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x8237e5d0
	ctx.lr = 0x82381BB4;
	sub_8237E5D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82381bc0
	if (ctx.cr6.eq) goto loc_82381BC0;
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
loc_82381BC0:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r30,1772(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r22,124(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r6,4(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x8239ca98
	ctx.lr = 0x82381BFC;
	sub_8239CA98(ctx, base);
loc_82381BFC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82382080
	if (!ctx.cr6.eq) goto loc_82382080;
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82381da8
	if (ctx.cr6.eq) goto loc_82381DA8;
	// lwz r10,3028(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381C3C:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381C3C;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82381C68:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381c68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381C68;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381C98:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381C98;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82381CCC:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381CCC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381CFC:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381CFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3028(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82381D30:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381D30;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3028(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82381D68:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381d68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381D68;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3028(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3028);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82381D9C:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82381d9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381D9C;
loc_82381DA8:
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,364(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r7,264(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82381DC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r23,12(r18)
	REX_STORE_U8(r18.u32 + 12, r23.u8);
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r11,r9,r26
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + r16.u64;
	// lwz r10,472(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 472);
	// mr r27,r23
	r27.u64 = r23.u64;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82381e54
	if (ctx.cr6.eq) goto loc_82381E54;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// bl 0x8237eb60
	ctx.lr = 0x82381E18;
	sub_8237EB60(ctx, base);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lbz r6,5(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 5);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// lwz r30,1772(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x8239ca98
	ctx.lr = 0x82381E50;
	sub_8239CA98(ctx, base);
	// b 0x82381ea0
	goto loc_82381EA0;
loc_82381E54:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// bl 0x8237e5d0
	ctx.lr = 0x82381E5C;
	sub_8237E5D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82381e68
	if (ctx.cr6.eq) goto loc_82381E68;
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
loc_82381E68:
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r18.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r17,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r24,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r24.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r30,1772(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lbz r6,5(r15)
	ctx.r6.u64 = REX_LOAD_U8(r15.u32 + 5);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// bl 0x8239ca98
	ctx.lr = 0x82381EA0;
	sub_8239CA98(ctx, base);
loc_82381EA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82382080
	if (!ctx.cr6.eq) goto loc_82382080;
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8238204c
	if (ctx.cr6.eq) goto loc_8238204C;
	// lwz r10,3036(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// rlwinm r11,r16,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r6,136(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// addi r7,r30,-2
	ctx.r7.s64 = r30.s64 + -2;
	// rlwinm r11,r6,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r16,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381EE0:
	// lhzu r8,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381ee0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381EE0;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r30,14
	ctx.r6.s64 = r30.s64 + 14;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
loc_82381F0C:
	// lhzu r9,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82381f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381F0C;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,30
	ctx.r6.s64 = r30.s64 + 30;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381F3C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381F3C;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,46
	ctx.r6.s64 = r30.s64 + 46;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82381F70:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381f70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381F70;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r6,r30,62
	ctx.r6.s64 = r30.s64 + 62;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
loc_82381FA0:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381FA0;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,3036(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r6,r30,78
	ctx.r6.s64 = r30.s64 + 78;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_82381FD4:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82381fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82381FD4;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,3036(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r6,r30,94
	ctx.r6.s64 = r30.s64 + 94;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8238200C:
	// lhzu r8,2(r6)
	ea = 2 + ctx.r6.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8238200c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8238200C;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,3036(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3036);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mtctr r24
	ctx.ctr.u64 = r24.u64;
	// subf r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r11.u64;
	// addi r7,r30,110
	ctx.r7.s64 = r30.s64 + 110;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82382040:
	// lhzu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// sthu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82382040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82382040;
loc_8238204C:
	// lwz r11,3188(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3188);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r7,264(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8238206C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(r18.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r23,13(r18)
	REX_STORE_U8(r18.u32 + 13, r23.u8);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r18)
	REX_STORE_U32(r18.u32 + 0, ctx.r9.u32);
loc_82382080:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823A5BE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x823A5BE8;
	// li r8,8
	ctx.r8.s64 = 8;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r10,r4,2
	ctx.r10.s64 = ctx.r4.s64 + 2;
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// addi r27,r7,-2
	r27.s64 = ctx.r7.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r28,255
	r28.s64 = 255;
loc_823A5C08:
	// lhz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lbzx r7,r9,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r27.u32);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// lhz r4,-2(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r31,0(r11)
	r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r29,2(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// extsh r7,r4
	ctx.r7.s64 = ctx.r4.s16;
	// lbz r5,-1(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// extsh r4,r31
	ctx.r4.s64 = r31.s16;
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsh r31,r29
	r31.s64 = r29.s16;
	// add r29,r5,r7
	r29.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r7,r30,r31
	ctx.r7.u64 = r30.u64 + r31.u64;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x823a5c5c
	if (!ctx.cr6.gt) goto loc_823A5C5C;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
loc_823A5C5C:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(r29.u32, 255, ctx.xer);
	// ble cr6,0x823a5c70
	if (!ctx.cr6.gt) goto loc_823A5C70;
	// rlwinm r4,r29,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0x1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// and r29,r4,r28
	r29.u64 = ctx.r4.u64 & r28.u64;
loc_823A5C70:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// ble cr6,0x823a5c84
	if (!ctx.cr6.gt) goto loc_823A5C84;
	// rlwinm r5,r5,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 & r28.u64;
loc_823A5C84:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x823a5c98
	if (!ctx.cr6.gt) goto loc_823A5C98;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
loc_823A5C98:
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r8,-2(r9)
	REX_STORE_U8(ctx.r9.u32 + -2, ctx.r8.u8);
	// stb r5,0(r9)
	REX_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// stb r29,-1(r9)
	REX_STORE_U8(ctx.r9.u32 + -1, r29.u8);
	// lhz r5,6(r11)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// lhz r29,10(r11)
	r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 10);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lbz r31,3(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// lhz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r30,r5
	r30.s64 = ctx.r5.s16;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// extsh r5,r29
	ctx.r5.s64 = r29.s16;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// ble cr6,0x823a5cfc
	if (!ctx.cr6.gt) goto loc_823A5CFC;
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// and r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 & r28.u64;
loc_823A5CFC:
	// cmplwi cr6,r31,255
	ctx.cr6.compare<uint32_t>(r31.u32, 255, ctx.xer);
	// ble cr6,0x823a5d10
	if (!ctx.cr6.gt) goto loc_823A5D10;
	// rlwinm r5,r31,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r31,r5,r28
	r31.u64 = ctx.r5.u64 & r28.u64;
loc_823A5D10:
	// cmplwi cr6,r4,255
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 255, ctx.xer);
	// ble cr6,0x823a5d24
	if (!ctx.cr6.gt) goto loc_823A5D24;
	// rlwinm r5,r4,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// and r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 & r28.u64;
loc_823A5D24:
	// cmplwi cr6,r7,255
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 255, ctx.xer);
	// ble cr6,0x823a5d38
	if (!ctx.cr6.gt) goto loc_823A5D38;
	// rlwinm r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 & r28.u64;
loc_823A5D38:
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r5,r31,24
	ctx.r5.u64 = r31.u32 & 0xFF;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// stb r8,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r5,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r5.u8);
	// stb r4,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stb r3,5(r9)
	REX_STORE_U8(ctx.r9.u32 + 5, ctx.r3.u8);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x823a5c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823A5C08;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823AC430) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mullw. r3,r5,r6
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// blelr 
	if (!ctx.cr0.gt) return;
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
loc_823AC444:
	// lbzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blt cr6,0x823ac444
	if (ctx.cr6.lt) goto loc_823AC444;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ACEC8) {
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
	ctx.lr = 0x823ACED0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f28
	ctx.lr = 0x823ACED8;
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// stw r10,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r10.u32);
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// stw r6,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r6.u32);
	// mr r21,r10
	r21.u64 = ctx.r10.u64;
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f12,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// stw r5,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r5.u32);
	// stw r9,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r9.u32);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// lfd f31,-9408(r9)
	f31.u64 = REX_LOAD_U64(ctx.r9.u32 + -9408);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmul f27,f10,f31
	f27.f64 = ctx.f10.f64 * f31.f64;
	// lwz r8,476(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// std r5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// lis r3,-32251
	ctx.r3.s64 = -2113601536;
	// fsub f26,f11,f27
	f26.f64 = ctx.f11.f64 - f27.f64;
	// lfd f0,-9400(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + -9400);
	// fmul f9,f30,f0
	ctx.f9.f64 = f30.f64 * ctx.f0.f64;
	// srawi r18,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r18.s64 = r22.s32 >> 1;
	// srawi r19,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r19.s64 = ctx.r4.s32 >> 1;
	// fsub f8,f26,f27
	ctx.f8.f64 = f26.f64 - f27.f64;
	// fsub f7,f8,f9
	ctx.f7.f64 = ctx.f8.f64 - ctx.f9.f64;
	// fadd f6,f8,f9
	ctx.f6.f64 = ctx.f8.f64 + ctx.f9.f64;
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r14,132(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r15,132(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(r14.s32, 0, ctx.xer);
	// bge cr6,0x823acf94
	if (!ctx.cr6.lt) goto loc_823ACF94;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
loc_823ACF94:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bge cr6,0x823acfa0
	if (!ctx.cr6.lt) goto loc_823ACFA0;
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
loc_823ACFA0:
	// lwz r25,452(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823ad044
	if (!ctx.cr6.gt) goto loc_823AD044;
	// addi r27,r14,1
	r27.s64 = r14.s64 + 1;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r25
	r29.u64 = r25.u64;
	// subf r28,r15,r22
	r28.u64 = r22.u64 - r15.u64;
	// subf r26,r25,r23
	r26.u64 = r23.u64 - r25.u64;
loc_823ACFC4:
	// add r11,r27,r31
	ctx.r11.u64 = r27.u64 + r31.u64;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(r22.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823acfd4
	if (!ctx.cr6.lt) goto loc_823ACFD4;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823ACFD4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823acfec
	if (!ctx.cr6.gt) goto loc_823ACFEC;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r26,r29
	ctx.r4.u64 = r26.u64 + r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ACFEC;
	sub_822D4FA0(ctx, base);
loc_823ACFEC:
	// cmpw cr6,r22,r28
	ctx.cr6.compare<int32_t>(r22.s32, r28.s32, ctx.xer);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// blt cr6,0x823acffc
	if (ctx.cr6.lt) goto loc_823ACFFC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_823ACFFC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823ad028
	if (!ctx.cr6.gt) goto loc_823AD028;
	// add r11,r31,r15
	ctx.r11.u64 = r31.u64 + r15.u64;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addme r8,r9
	temp.u8 = (ctx.r9.u32 + 0xFFFFFFFFu < ctx.r9.u32) | (ctx.r9.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r9.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + r24.u64;
	// add r3,r11,r25
	ctx.r3.u64 = ctx.r11.u64 + r25.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD028;
	sub_822D4FA0(ctx, base);
loc_823AD028:
	// lwz r4,396(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// add r30,r30,r22
	r30.u64 = r30.u64 + r22.u64;
	// add r29,r29,r22
	r29.u64 = r29.u64 + r22.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x823acfc4
	if (ctx.cr6.lt) goto loc_823ACFC4;
loc_823AD044:
	// lwz r17,460(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823ad120
	if (!ctx.cr6.gt) goto loc_823AD120;
	// mr r28,r15
	r28.u64 = r15.u64;
	// subf r27,r15,r14
	r27.u64 = r14.u64 - r15.u64;
loc_823AD05C:
	// add r11,r27,r28
	ctx.r11.u64 = r27.u64 + r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x823ad074
	if (ctx.cr6.lt) goto loc_823AD074;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_823AD074:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823ad0ac
	if (!ctx.cr6.gt) goto loc_823AD0AC;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r18
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD098;
	sub_822D4FA0(ctx, base);
	// lwz r9,468(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r20
	ctx.r4.u64 = r31.u64 + r20.u64;
	// add r3,r31,r9
	ctx.r3.u64 = r31.u64 + ctx.r9.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD0AC;
	sub_822D4FA0(ctx, base);
loc_823AD0AC:
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subf r30,r11,r18
	r30.u64 = r18.u64 - ctx.r11.u64;
	// cmpw cr6,r30,r18
	ctx.cr6.compare<int32_t>(r30.s32, r18.s32, ctx.xer);
	// blt cr6,0x823ad0c0
	if (ctx.cr6.lt) goto loc_823AD0C0;
	// mr r30,r18
	r30.u64 = r18.u64;
loc_823AD0C0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823ad10c
	if (!ctx.cr6.gt) goto loc_823AD10C;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addme r7,r8
	temp.u8 = (ctx.r8.u32 + 0xFFFFFFFFu < ctx.r8.u32) | (ctx.r8.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r8.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// srawi r6,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r6.s64 = r29.s32 >> 1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mullw r10,r6,r18
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(r18.s32);
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r31,r9
	ctx.r4.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD0F8;
	sub_822D4FA0(ctx, base);
	// lwz r3,468(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r21
	ctx.r4.u64 = r31.u64 + r21.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AD10C;
	sub_822D4FA0(ctx, base);
loc_823AD10C:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823ad05c
	if (ctx.cr6.lt) goto loc_823AD05C;
loc_823AD120:
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// subf r9,r23,r25
	ctx.r9.u64 = r25.u64 - r23.u64;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r8,r10,32768
	ctx.r8.u64 = ctx.r10.u64 ^ 2147483648;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addc r5,r7,r8
	ctx.xer.ca = ctx.r7.u32 + ctx.r8.u32 < ctx.r7.u32;
	ctx.r5.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r6,r23,r24
	ctx.r6.u64 = r24.u64 - r23.u64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r16,r18,1
	r16.s64 = r18.s64 + 1;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// and r28,r3,r11
	r28.u64 = ctx.r3.u64 & ctx.r11.u64;
	// lfd f28,4000(r10)
	ctx.fpscr.disableFlushMode();
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// subf r21,r28,r22
	r21.u64 = r22.u64 - r28.u64;
	// lfd f25,-9416(r11)
	f25.u64 = REX_LOAD_U64(ctx.r11.u32 + -9416);
loc_823AD164:
	// cmpw cr6,r15,r22
	ctx.cr6.compare<int32_t>(r15.s32, r22.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = r15.u64;
	// blt cr6,0x823ad174
	if (ctx.cr6.lt) goto loc_823AD174;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823AD174:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ad324
	if (!ctx.cr6.lt) goto loc_823AD324;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 - f26.f64;
	// fadd f11,f12,f27
	ctx.f11.f64 = ctx.f12.f64 + f27.f64;
	// fmul f29,f11,f31
	f29.f64 = ctx.f11.f64 * f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = f29.f64 / f30.f64;
	// bl 0x822d6768
	ctx.lr = 0x823AD1A0;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// lwz r9,396(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f30.f64, -f29.f64);
	// subfic r11,r22,1
	ctx.xer.ca = r22.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - r22.u64;
	// cmpw cr6,r21,r9
	ctx.cr6.compare<int32_t>(r21.s32, ctx.r9.s32, ctx.xer);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f30.f64, -f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f31.f64, f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f31.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f5.u64);
	// lwz r30,124(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.f4.u64);
	// lwz r29,124(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r5,r11,r23
	ctx.r5.u64 = ctx.r11.u64 + r23.u64;
	// add r4,r10,r23
	ctx.r4.u64 = ctx.r10.u64 + r23.u64;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
	// blt cr6,0x823ad1fc
	if (ctx.cr6.lt) goto loc_823AD1FC;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_823AD1FC:
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r6,r28,r23
	ctx.r6.u64 = r28.u64 + r23.u64;
	// subf r10,r29,r22
	ctx.r10.u64 = r22.u64 - r29.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r9,r30,r22
	ctx.r9.u64 = r22.u64 - r30.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// subf r11,r28,r9
	ctx.r11.u64 = ctx.r9.u64 - r28.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823ac460
	ctx.lr = 0x823AD240;
	sub_823AC460(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ad318
	if (!ctx.cr6.eq) goto loc_823AD318;
	// srawi r31,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	r31.s64 = r28.s32 >> 1;
	// lwz r9,436(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// srawi r30,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r30.s64 = r30.s32 >> 1;
	// srawi r29,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r29.s64 = r29.s32 >> 1;
	// subfic r11,r18,1
	ctx.xer.ca = r18.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - r18.u64;
	// subf r27,r31,r18
	r27.u64 = r18.u64 - r31.u64;
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r25,r11,r31
	r25.u64 = ctx.r11.u64 + r31.u64;
	// lwz r11,412(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// add r26,r10,r31
	r26.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r25,r11
	ctx.r5.u64 = r25.u64 + ctx.r11.u64;
	// add r4,r26,r11
	ctx.r4.u64 = r26.u64 + ctx.r11.u64;
	// add r6,r31,r11
	ctx.r6.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r31,r17
	ctx.r3.u64 = r31.u64 + r17.u64;
	// add r7,r31,r9
	ctx.r7.u64 = r31.u64 + ctx.r9.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(r27.s32, r19.s32, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// blt cr6,0x823ad29c
	if (ctx.cr6.lt) goto loc_823AD29C;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
loc_823AD29C:
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// subf r10,r30,r18
	ctx.r10.u64 = r18.u64 - r30.u64;
	// subf r9,r29,r18
	ctx.r9.u64 = r18.u64 - r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// subf r23,r31,r10
	r23.u64 = ctx.r10.u64 - r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// subf r24,r31,r9
	r24.u64 = ctx.r9.u64 - r31.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// bl 0x823ac460
	ctx.lr = 0x823AD2CC;
	sub_823AC460(ctx, base);
	// lwz r8,468(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r7,444(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// add r4,r26,r20
	ctx.r4.u64 = r26.u64 + r20.u64;
	// add r3,r31,r8
	ctx.r3.u64 = r31.u64 + ctx.r8.u64;
	// add r5,r25,r20
	ctx.r5.u64 = r25.u64 + r20.u64;
	// add r6,r31,r20
	ctx.r6.u64 = r31.u64 + r20.u64;
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// cmpw cr6,r27,r19
	ctx.cr6.compare<int32_t>(r27.s32, r19.s32, ctx.xer);
	// blt cr6,0x823ad2f4
	if (ctx.cr6.lt) goto loc_823AD2F4;
	// mr r27,r19
	r27.u64 = r19.u64;
loc_823AD2F4:
	// stw r24,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// bl 0x823ac460
	ctx.lr = 0x823AD314;
	sub_823AC460(ctx, base);
	// lwz r23,404(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
loc_823AD318:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// b 0x823ad164
	goto loc_823AD164;
loc_823AD324:
	// subfic r28,r15,1
	ctx.xer.ca = r15.u32 <= 1;
	r28.u64 = static_cast<uint64_t>(1) - r15.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bgt cr6,0x823ad334
	if (ctx.cr6.gt) goto loc_823AD334;
	// li r28,1
	r28.s64 = 1;
loc_823AD334:
	// lwz r15,404(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mullw r11,r28,r22
	ctx.r11.s64 = int64_t(r28.s32) * int64_t(r22.s32);
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// add r24,r11,r15
	r24.u64 = ctx.r11.u64 + r15.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// neg r19,r14
	r19.s64 = static_cast<int64_t>(-r14.u64);
	// lwz r14,396(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r21,r28,r14
	r21.u64 = r14.u64 - r28.u64;
	// lfd f24,31912(r11)
	ctx.fpscr.disableFlushMode();
	f24.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
loc_823AD358:
	// cmpw cr6,r19,r14
	ctx.cr6.compare<int32_t>(r19.s32, r14.s32, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// blt cr6,0x823ad368
	if (ctx.cr6.lt) goto loc_823AD368;
	// mr r11,r14
	ctx.r11.u64 = r14.u64;
loc_823AD368:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823ad57c
	if (!ctx.cr6.lt) goto loc_823AD57C;
	// extsw r11,r28
	ctx.r11.s64 = r28.s32;
	// std r11,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fadd f12,f13,f26
	ctx.f12.f64 = ctx.f13.f64 + f26.f64;
	// fsub f11,f27,f12
	ctx.f11.f64 = f27.f64 - ctx.f12.f64;
	// fmul f29,f11,f31
	f29.f64 = ctx.f11.f64 * f31.f64;
	// fdiv f1,f29,f30
	ctx.f1.f64 = f29.f64 / f30.f64;
	// bl 0x822d6768
	ctx.lr = 0x823AD394;
	sub_822D6768(ctx, base);
	// fsub f10,f25,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = f25.f64 - ctx.f1.f64;
	// cmpw cr6,r22,r21
	ctx.cr6.compare<int32_t>(r22.s32, r21.s32, ctx.xer);
	// fmsub f9,f1,f30,f29
	ctx.f9.f64 = std::fma(ctx.f1.f64, f30.f64, -f29.f64);
	// fmsub f8,f10,f30,f29
	ctx.f8.f64 = std::fma(ctx.f10.f64, f30.f64, -f29.f64);
	// fmadd f7,f9,f31,f28
	ctx.f7.f64 = std::fma(ctx.f9.f64, f31.f64, f28.f64);
	// fmadd f6,f8,f31,f28
	ctx.f6.f64 = std::fma(ctx.f8.f64, f31.f64, f28.f64);
	// fctiwz f5,f7
	ctx.f5.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f5,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f5.u64);
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r29,r31
	r29.s64 = static_cast<int64_t>(-r31.u64);
	// fctiwz f4,f6
	ctx.f4.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f4,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.f4.u64);
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// neg r27,r30
	r27.s64 = static_cast<int64_t>(-r30.u64);
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r22.s32);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + r23.u64;
	// mullw r11,r29,r22
	ctx.r11.s64 = int64_t(r29.s32) * int64_t(r22.s32);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + r23.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r5,r11,r15
	ctx.r5.u64 = ctx.r11.u64 + r15.u64;
	// add r4,r10,r15
	ctx.r4.u64 = ctx.r10.u64 + r15.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// blt cr6,0x823ad3f8
	if (ctx.cr6.lt) goto loc_823AD3F8;
	// mr r11,r21
	ctx.r11.u64 = r21.u64;
loc_823AD3F8:
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r7,r27,r22
	ctx.r7.u64 = r27.u64 + r22.u64;
	// subf r6,r28,r30
	ctx.r6.u64 = r30.u64 - r28.u64;
	// lwz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r29,r22
	ctx.r11.u64 = r29.u64 + r22.u64;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r22,1
	ctx.r8.s64 = r22.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r10,r28,r31
	ctx.r10.u64 = r31.u64 - r28.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r24,r9
	ctx.r7.u64 = r24.u64 + ctx.r9.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// add r3,r24,r3
	ctx.r3.u64 = r24.u64 + ctx.r3.u64;
	// bl 0x823ac460
	ctx.lr = 0x823AD438;
	sub_823AC460(ctx, base);
	// clrlwi r10,r28,31
	ctx.r10.u64 = r28.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ad568
	if (!ctx.cr6.eq) goto loc_823AD568;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// subfic r10,r18,1
	ctx.xer.ca = r18.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - r18.u64;
	// srawi r8,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r8.s64 = r31.s32 >> 1;
	// srawi r7,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r7.s64 = r30.s32 >> 1;
	// mullw r11,r11,r18
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r18.s32);
	// mullw r9,r7,r10
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// li r26,0
	r26.s64 = 0;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x823ad568
	if (!ctx.cr6.gt) goto loc_823AD568;
	// add r8,r10,r20
	ctx.r8.u64 = ctx.r10.u64 + r20.u64;
	// lwz r10,444(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r4,468(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// subf r25,r29,r27
	r25.u64 = r27.u64 - r29.u64;
	// lwz r6,436(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// add r5,r29,r28
	ctx.r5.u64 = r29.u64 + r28.u64;
	// subf r29,r31,r30
	r29.u64 = r30.u64 - r31.u64;
	// lwz r7,412(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// subf r27,r31,r28
	r27.u64 = r28.u64 - r31.u64;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// stw r4,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r4.u32);
	// subf r31,r20,r6
	r31.u64 = ctx.r6.u64 - r20.u64;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// subf r4,r20,r7
	ctx.r4.u64 = ctx.r7.u64 - r20.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r30,r17,r7
	r30.u64 = ctx.r7.u64 - r17.u64;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + r17.u64;
	// add r9,r9,r20
	ctx.r9.u64 = ctx.r9.u64 + r20.u64;
	// subf r3,r17,r20
	ctx.r3.u64 = r20.u64 - r17.u64;
	// subf r7,r17,r6
	ctx.r7.u64 = ctx.r6.u64 - r17.u64;
loc_823AD4C8:
	// add r6,r27,r10
	ctx.r6.u64 = r27.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r14
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r14.s32, ctx.xer);
	// bge cr6,0x823ad568
	if (!ctx.cr6.lt) goto loc_823AD568;
	// add r6,r29,r10
	ctx.r6.u64 = r29.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r22
	ctx.cr6.compare<int32_t>(ctx.r6.s32, r22.s32, ctx.xer);
	// bge cr6,0x823ad4f8
	if (!ctx.cr6.lt) goto loc_823AD4F8;
	// add. r6,r25,r5
	ctx.r6.u64 = r25.u64 + ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt 0x823ad4f8
	if (ctx.cr0.lt) goto loc_823AD4F8;
	// lbzx r6,r4,r9
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x823ad544
	goto loc_823AD544;
loc_823AD4F8:
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// bge cr6,0x823ad534
	if (!ctx.cr6.lt) goto loc_823AD534;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x823ad534
	if (ctx.cr6.lt) goto loc_823AD534;
	// fcmpu cr6,f29,f24
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, f24.f64);
	// blt cr6,0x823ad520
	if (ctx.cr6.lt) goto loc_823AD520;
	// lbzx r6,r4,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// b 0x823ad544
	goto loc_823AD544;
loc_823AD520:
	// add r6,r3,r11
	ctx.r6.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lbzx r6,r6,r4
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r4.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// b 0x823ad544
	goto loc_823AD544;
loc_823AD534:
	// add r6,r3,r31
	ctx.r6.u64 = ctx.r3.u64 + r31.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// lbzx r6,r30,r11
	ctx.r6.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
loc_823AD544:
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// stbx r6,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 + r16.u64;
	// add r8,r8,r16
	ctx.r8.u64 = ctx.r8.u64 + r16.u64;
	// add r9,r9,r16
	ctx.r9.u64 = ctx.r9.u64 + r16.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// cmpw cr6,r26,r22
	ctx.cr6.compare<int32_t>(r26.s32, r22.s32, ctx.xer);
	// blt cr6,0x823ad4c8
	if (ctx.cr6.lt) goto loc_823AD4C8;
loc_823AD568:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// add r23,r23,r22
	r23.u64 = r23.u64 + r22.u64;
	// add r24,r24,r22
	r24.u64 = r24.u64 + r22.u64;
	// addi r21,r21,-1
	r21.s64 = r21.s64 + -1;
	// b 0x823ad358
	goto loc_823AD358;
loc_823AD57C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f74
	ctx.lr = 0x823AD588;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823C7320) {
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
	ctx.lr = 0x823C7328;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,996(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 996);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// stw r9,964(r1)
	REX_STORE_U32(ctx.r1.u32 + 964, ctx.r9.u32);
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r6,940(r1)
	REX_STORE_U32(ctx.r1.u32 + 940, ctx.r6.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// vspltisb v13,0
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_set1_epi8(char(0x0)));
	// mullw r29,r31,r18
	r29.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// vspltish v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x2)));
	// vspltish v0,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x3)));
	// stw r5,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r5.u32);
	// add r30,r9,r4
	r30.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r19,r11,r4
	r19.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r26,r4,r8
	r26.u64 = ctx.r4.u64 + ctx.r8.u64;
	// stw r30,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r9,r6,0,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r29,r3
	r27.u64 = r29.u64 + ctx.r3.u64;
	// add r3,r5,r7
	ctx.r3.u64 = ctx.r5.u64 + ctx.r7.u64;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r31,16
	r31.s64 = 16;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r22,1
	r22.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823c74b4
	if (!ctx.cr6.gt) goto loc_823C74B4;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r8,r27,1
	ctx.r8.s64 = r27.s64 + 1;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r9,r5,32
	ctx.r9.s64 = ctx.r5.s64 + 32;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// mr r21,r31
	r21.u64 = r31.u64;
	// rlwinm r7,r28,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r28,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r22,r7,1
	r22.s64 = ctx.r7.s64 + 1;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
loc_823C73D4:
	// addi r28,r8,-1
	r28.s64 = ctx.r8.s64 + -1;
	// lvrx128 v63,r21,r8
	temp.u32 = r21.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r9,-32
	r24.s64 = ctx.r9.s64 + -32;
	// vor128 v9,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// addi r23,r9,-16
	r23.s64 = ctx.r9.s64 + -16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvrx128 v61,r31,r28
	temp.u32 = r31.u32 + r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v60,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// vmrglb v9,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r28,r9,16
	r28.s64 = ctx.r9.s64 + 16;
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v8,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrglb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v2,v6,v10
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v1,v5,v9
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v8,v2
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v30,v4,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v3,v7
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v28,v3,v5
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v27,v4,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v26,v30,v10
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v25,v29,v9
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v24,v7,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v23,v28,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v22,v23
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vpkshus v10,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vpkshus v8,v18,v19
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v11,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v10,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrghb v17,v7,v9
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v16,v7,v9
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v15,v11,v10
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v14,v11,v10
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// stvlx v17,0,r24
	ea = r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v17.u8[15 - i]);
	// stvrx v17,r24,r31
	ea = r24.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v17.u8[i]);
	// stvlx v16,0,r23
	ea = r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v16.u8[15 - i]);
	// stvrx v16,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v16.u8[i]);
	// stvlx v15,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v15.u8[15 - i]);
	// stvrx v15,r9,r31
	ea = ctx.r9.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v15.u8[i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvlx v14,0,r28
	ea = r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, v14.u8[15 - i]);
	// stvrx v14,r28,r31
	ea = r28.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, v14.u8[i]);
	// bdnz 0x823c73d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C73D4;
loc_823C74B4:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c7548
	if (!ctx.cr6.lt) goto loc_823C7548;
	// subf r8,r11,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r9,r22,r27
	ctx.r9.u64 = r22.u64 + r27.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r22,r5,1
	r22.s64 = ctx.r5.s64 + 1;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r21,r5,2
	r21.s64 = ctx.r5.s64 + 2;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r20,r5,3
	r20.s64 = ctx.r5.s64 + 3;
	// addi r24,r9,-1
	r24.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823C74E4:
	// lbzx r17,r7,r27
	r17.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzu r28,1(r24)
	ea = 1 + r24.u32;
	r28.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// rotlwi r23,r17,1
	r23.u64 = __builtin_rotateleft32(r17.u32, 1);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// rotlwi r28,r28,1
	r28.u64 = __builtin_rotateleft32(r28.u32, 1);
	// add r23,r17,r23
	r23.u64 = r17.u64 + r23.u64;
	// stbx r17,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, r17.u8);
	// add r28,r8,r28
	r28.u64 = ctx.r8.u64 + r28.u64;
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// add r23,r23,r8
	r23.u64 = r23.u64 + ctx.r8.u64;
	// add r8,r8,r17
	ctx.r8.u64 = ctx.r8.u64 + r17.u64;
	// add r9,r28,r9
	ctx.r9.u64 = r28.u64 + ctx.r9.u64;
	// srawi r28,r23,2
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x3) != 0);
	r28.s64 = r23.s32 >> 2;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r28,r22,r11
	REX_STORE_U8(r22.u32 + ctx.r11.u32, r28.u8);
	// stbx r8,r11,r21
	REX_STORE_U8(ctx.r11.u32 + r21.u32, ctx.r8.u8);
	// mr r23,r17
	r23.u64 = r17.u64;
	// stbx r9,r11,r20
	REX_STORE_U8(ctx.r11.u32 + r20.u32, ctx.r9.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c74e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C74E4;
loc_823C7548:
	// lbzx r7,r7,r27
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r27.u32);
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r8,980(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 980);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r27,r27,r18
	r27.u64 = r27.u64 + r18.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// stw r27,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r27.u32);
	// stbx r7,r11,r5
	REX_STORE_U8(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u8);
	// stb r7,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, ctx.r7.u8);
	// stb r7,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, ctx.r7.u8);
	// stb r7,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, ctx.r7.u8);
	// bge cr6,0x823c82ac
	if (!ctx.cr6.lt) goto loc_823C82AC;
	// subf r11,r8,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r28,r19,2
	r28.s64 = r19.s64 + 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r5,r30,r19
	ctx.r5.u64 = r19.u64 - r30.u64;
	// stw r28,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, r28.u32);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,72(r1)
	REX_STORE_U32(ctx.r1.u32 + 72, ctx.r10.u32);
loc_823C759C:
	// rlwinm r10,r6,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// li r24,0
	r24.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c7e84
	if (!ctx.cr6.gt) goto loc_823C7E84;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r11,r5,r30
	ctx.r11.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// subf r8,r3,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// subf r7,r26,r11
	ctx.r7.u64 = ctx.r11.u64 - r26.u64;
	// stw r8,64(r1)
	REX_STORE_U32(ctx.r1.u32 + 64, ctx.r8.u32);
	// rlwinm r24,r9,4,0,27
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r6,r30,r11
	ctx.r6.u64 = ctx.r11.u64 - r30.u64;
	// stw r7,40(r1)
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r7.u32);
	// subf r15,r29,r11
	r15.u64 = ctx.r11.u64 - r29.u64;
	// addi r11,r24,1
	ctx.r11.s64 = r24.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r6,48(r1)
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r6.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// addi r4,r27,1
	ctx.r4.s64 = r27.s64 + 1;
	// addi r7,r26,16
	ctx.r7.s64 = r26.s64 + 16;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// subf r19,r29,r3
	r19.u64 = ctx.r3.u64 - r29.u64;
	// subf r18,r29,r25
	r18.u64 = r25.u64 - r29.u64;
	// subf r17,r29,r26
	r17.u64 = r26.u64 - r29.u64;
	// subf r16,r29,r30
	r16.u64 = r30.u64 - r29.u64;
	// subf r14,r3,r25
	r14.u64 = r25.u64 - ctx.r3.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
loc_823C761C:
	// addi r23,r4,-1
	r23.s64 = ctx.r4.s64 + -1;
	// lvlx128 v59,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r9,16
	ctx.r9.s64 = 16;
	// vor128 v10,v59,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// addi r22,r10,-32
	r22.s64 = ctx.r10.s64 + -32;
	// addi r21,r10,-16
	r21.s64 = ctx.r10.s64 + -16;
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r20,r8,-48
	r20.s64 = ctx.r8.s64 + -48;
	// lvrx128 v56,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v55,r0,r23
	temp.u32 = r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,560
	ctx.r6.s64 = ctx.r1.s64 + 560;
	// lvrx128 v54,r31,r23
	temp.u32 = r31.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v55,v54
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrglb v7,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r23,r10,16
	r23.s64 = ctx.r10.s64 + 16;
	// lvrx128 v53,r9,r22
	temp.u32 = ctx.r9.u32 + r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v49,r9,r21
	temp.u32 = ctx.r9.u32 + r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v31,v57,v56
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v52,r0,r22
	temp.u32 = r22.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghb v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v51,r0,r21
	temp.u32 = r21.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r31,r23
	temp.u32 = r31.u32 + r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// add r9,r19,r10
	ctx.r9.u64 = r19.u64 + ctx.r10.u64;
	// vaddshs v2,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v48,r0,r23
	temp.u32 = r23.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r23,r8,-32
	r23.s64 = ctx.r8.s64 + -32;
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v1,v3,v7
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v30,v10,v2
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v29,v6,v10
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v5,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v26,v6,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v27,v5,v3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v24,v9,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v28,v7
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v21,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v3,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v1,v51,v49
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// vpkshus v8,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vor128 v30,v48,v50
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// vpkshus v10,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v6,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v16,v13,v3
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v8,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v15,v13,v3
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v14,v13,v1
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v11,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v10,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v9,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrglb v8,v6,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vmrghb v7,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v6,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v4,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v11,0,r20
	ea = r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// vmrglb v3,v13,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v11,r20,r31
	ea = r20.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// vmrglb v11,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v10,0,r23
	ea = r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vmrglb v5,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v26,v7,v7
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrghb v2,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v29,v13,v8
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v24,v6,v6
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v25,v11,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx v10,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vmrglb v28,v13,v1
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v10,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// stvlx v9,r19,r10
	ea = r19.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvrx v9,r9,r31
	ea = ctx.r9.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// addi r9,r1,608
	ctx.r9.s64 = ctx.r1.s64 + 608;
	// stvlx v8,0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// vaddshs v9,v25,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx v8,r8,r31
	ea = ctx.r8.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// vor v1,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// stvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,624
	ctx.r6.s64 = ctx.r1.s64 + 624;
	// vaddshs v17,v26,v10
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v29,v13,v31
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v10,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vmrghb v16,v13,v31
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v8,v24,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v9,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v23,v5,v5
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v27,v13,v30
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v31,v25,v9
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r9,r1,480
	ctx.r9.s64 = ctx.r1.s64 + 480;
	// vor v9,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// vmrghb v15,v13,v30
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v30,v24,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// stvx128 v8,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r28,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, r28.u64);
	// addi r28,r1,496
	r28.s64 = ctx.r1.s64 + 496;
	// vaddshs v8,v23,v5
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// vaddshs v19,v1,v1
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// addi r29,r1,528
	r29.s64 = ctx.r1.s64 + 528;
	// vaddshs v20,v2,v2
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// addi r23,r1,448
	r23.s64 = ctx.r1.s64 + 448;
	// stvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stvx128 v30,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v30,v19,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// stvx128 v17,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v22,v4,v4
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v31,v20,v2
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// std r27,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// stvx128 v30,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v47,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lvx128 v45,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v10,v10
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v13,v22,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// addi r22,r1,544
	r22.s64 = ctx.r1.s64 + 544;
	// vaddshs v21,v3,v3
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvx128 v31,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v31,v28,v28
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)v28.u8));
	// addi r11,r1,720
	ctx.r11.s64 = ctx.r1.s64 + 720;
	// vor v8,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// vaddshs v28,v18,v10
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// std r24,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, r24.u64);
	// addi r21,r1,512
	r21.s64 = ctx.r1.s64 + 512;
	// addi r20,r1,576
	r20.s64 = ctx.r1.s64 + 576;
	// vaddshs v17,v21,v3
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// addi r24,r1,160
	r24.s64 = ctx.r1.s64 + 160;
	// vaddshs v14,v29,v29
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// stvx128 v13,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v30,v16,v16
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddshs v13,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvx128 v28,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// std r19,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r19.u64);
	// stvx128 v17,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v28,v15,v15
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// stvx128 v14,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r19,r1,240
	r19.s64 = ctx.r1.s64 + 240;
	// stvx128 v46,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vaddshs v17,v9,v9
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvx128 v45,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v16,v8,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v15,v31,v31
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// stvx128 v13,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v30,v30
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// vor128 v43,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vaddshs v12,v16,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r22,r1,304
	r22.s64 = ctx.r1.s64 + 304;
	// vaddshs v13,v17,v9
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r23,r1,272
	r23.s64 = ctx.r1.s64 + 272;
	// vor128 v42,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// addi r21,r1,272
	r21.s64 = ctx.r1.s64 + 272;
	// vaddshs v8,v15,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r20,r1,160
	r20.s64 = ctx.r1.s64 + 160;
	// stvx128 v12,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// stvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v38,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// lvx128 v13,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// stvx128 v8,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v39,v27,v27
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_load_si128((simde__m128i*)v27.u8));
	// lvx128 v12,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,368
	r21.s64 = ctx.r1.s64 + 368;
	// lvx128 v10,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v40,v31,v31
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_load_si128((simde__m128i*)v31.u8));
	// lvx128 v8,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,192
	r22.s64 = ctx.r1.s64 + 192;
	// lvx128 v44,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v8,v8,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvx128 v44,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// stvx128 v8,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v28,v28
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// addi r28,r1,208
	r28.s64 = ctx.r1.s64 + 208;
	// stvx128 v31,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// vaddshs v8,v18,v27
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// addi r22,r1,352
	r22.s64 = ctx.r1.s64 + 352;
	// stvx128 v8,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r24,r1,352
	r24.s64 = ctx.r1.s64 + 352;
	// vaddshs v13,v16,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// addi r23,r1,336
	r23.s64 = ctx.r1.s64 + 336;
	// stvx128 v13,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v30,v30
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_load_si128((simde__m128i*)v30.u8));
	// addi r20,r1,336
	r20.s64 = ctx.r1.s64 + 336;
	// vaddshs v30,v14,v30
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// addi r21,r1,256
	r21.s64 = ctx.r1.s64 + 256;
	// addi r27,r1,256
	r27.s64 = ctx.r1.s64 + 256;
	// vaddshs v10,v17,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v12,v15,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r29,r1,384
	r29.s64 = ctx.r1.s64 + 384;
	// vor128 v37,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// lvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,384
	r23.s64 = ctx.r1.s64 + 384;
	// lvx128 v31,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,128
	r20.s64 = ctx.r1.s64 + 128;
	// stvx128 v12,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v30,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,432
	r22.s64 = ctx.r1.s64 + 432;
	// vor128 v36,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_load_si128((simde__m128i*)v29.u8));
	// stvx128 v10,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r23,r1,160
	r23.s64 = ctx.r1.s64 + 160;
	// lvx128 v10,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,128
	r27.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_load_si128((simde__m128i*)v24.u8));
	// vaddshs v9,v9,v29
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// lvx128 v13,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v34,v26,v26
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)v26.u8));
	// addi r21,r1,416
	r21.s64 = ctx.r1.s64 + 416;
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// lvx128 v29,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	r29.s64 = ctx.r1.s64 + 400;
	// lvx128 v24,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,320
	r28.s64 = ctx.r1.s64 + 320;
	// lvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v18,v18,v12
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// vaddshs v15,v15,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// lvx128 v9,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v14,v31
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r9,r1,288
	ctx.r9.s64 = ctx.r1.s64 + 288;
	// vaddshs v16,v16,v8
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// addi r22,r1,448
	r22.s64 = ctx.r1.s64 + 448;
	// vaddshs v7,v18,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r20,r1,512
	r20.s64 = ctx.r1.s64 + 512;
	// vaddshs v9,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// addi r23,r1,480
	r23.s64 = ctx.r1.s64 + 480;
	// stvx128 v31,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v5,v15,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// lvx128 v15,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v6,v16,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsrah v16,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r21,r1,544
	r21.s64 = ctx.r1.s64 + 544;
	// stvx128 v9,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v17,v17,v13
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// lvx128 v7,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v9,v30,v28
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vaddshs v30,v24,v27
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// addi r11,r1,576
	ctx.r11.s64 = ctx.r1.s64 + 576;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v18,r0,r23
	ea = (r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stvx128 v9,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	r29.s64 = ctx.r1.s64 + 400;
	// stvx128 v30,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,160
	r28.s64 = ctx.r1.s64 + 160;
	// addi r27,r1,320
	r27.s64 = ctx.r1.s64 + 320;
	// stw r9,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// vsrah v17,v11,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// subf r9,r30,r25
	ctx.r9.u64 = r25.u64 - r30.u64;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lvx128 v12,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r29,28(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v10,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r6,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r6.u32);
	// vaddshs v11,v14,v15
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vpkshus128 v33,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// lvx128 v16,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r22,r1,608
	r22.s64 = ctx.r1.s64 + 608;
	// lvx128 v15,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,384
	r21.s64 = ctx.r1.s64 + 384;
	// lvx128 v17,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vaddshs v7,v26,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v14,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// lvx128 v9,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r20,r1,560
	r20.s64 = ctx.r1.s64 + 560;
	// lvx128 v8,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r22,28(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v11,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v7,v7,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvlx128 v33,r9,r5
	ea = ctx.r9.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// add r23,r9,r5
	r23.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// vaddshs v10,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// subf r6,r26,r25
	ctx.r6.u64 = r25.u64 - r26.u64;
	// lvx128 v9,r0,r20
	ea = (r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r9,r3,r26
	ctx.r9.u64 = r26.u64 - ctx.r3.u64;
	// vsrah v5,v5,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v6,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r21,r9,r8
	r21.u64 = ctx.r9.u64 + ctx.r8.u64;
	// vsrah v7,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v3,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// stvrx128 v33,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// add r23,r6,r7
	r23.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lvx128 v13,r0,r22
	ea = (r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r22,r26,r30
	r22.u64 = r30.u64 - r26.u64;
	// vsrah v4,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stw r23,32(r1)
	REX_STORE_U32(ctx.r1.u32 + 32, r23.u32);
	// vaddshs v12,v8,v3
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vpkshus128 v32,v6,v5
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// vaddshs v11,v11,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// addi r28,r1,416
	r28.s64 = ctx.r1.s64 + 416;
	// vaddshs v2,v12,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// vaddshs v12,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stw r21,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r21.u32);
	// addi r21,r1,624
	r21.s64 = ctx.r1.s64 + 624;
	// vaddshs v1,v10,v1
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// addi r29,r1,288
	r29.s64 = ctx.r1.s64 + 288;
	// vaddshs v5,v20,v14
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// stvx128 v11,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v11,v23,v18
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// lvx128 v9,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v12,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r28,r1,272
	r28.s64 = ctx.r1.s64 + 272;
	// vaddshs v18,v13,v18
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// addi r27,r1,320
	r27.s64 = ctx.r1.s64 + 320;
	// vsrah v1,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r24,r1,528
	r24.s64 = ctx.r1.s64 + 528;
	// vsrah v2,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lvx128 v13,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r21,r1,224
	r21.s64 = ctx.r1.s64 + 224;
	// addi r19,r1,640
	r19.s64 = ctx.r1.s64 + 640;
	// vaddshs v14,v3,v14
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// lvx128 v31,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,592
	r28.s64 = ctx.r1.s64 + 592;
	// vpkshus128 v62,v2,v1
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v8,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,496
	r27.s64 = ctx.r1.s64 + 496;
	// addi r24,r1,304
	r24.s64 = ctx.r1.s64 + 304;
	// lvx128 v3,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r28,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, r28.u32);
	// addi r21,r1,336
	r21.s64 = ctx.r1.s64 + 336;
	// lwz r20,32(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// vpkshus128 v63,v4,v7
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v7,v22,v16
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v6,v21,v15
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// addi r23,r7,-16
	r23.s64 = ctx.r7.s64 + -16;
	// lvx128 v30,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v4,v19,v17
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vaddshs v16,v9,v16
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// add r22,r22,r7
	r22.u64 = r22.u64 + ctx.r7.u64;
	// vaddshs v17,v8,v17
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v31,v31,v11
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// vsrah v10,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v61,v12,v10
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// lvx128 v10,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// vaddshs v13,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v15,v10,v15
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// lvx128 v1,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,400
	r29.s64 = ctx.r1.s64 + 400;
	// lvx128 v3,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// stvx128 v1,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,432
	r28.s64 = ctx.r1.s64 + 432;
	// lvx128 v1,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v13,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v32,r6,r7
	ea = ctx.r6.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// add r6,r18,r10
	ctx.r6.u64 = r18.u64 + ctx.r10.u64;
	// stvrx128 v32,r20,r31
	ea = r20.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// lvx128 v29,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r19,28(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// lvx128 v12,r0,r21
	ea = (r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// lvx128 v10,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r18,r10
	ea = r18.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// lvx128 v27,r0,r19
	ea = (r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v27,v27,v3
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx128 v63,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// vsrah v15,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r6,r14,r8
	ctx.r6.u64 = r14.u64 + ctx.r8.u64;
	// vsrah v16,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v60,v13,v18
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vsrah v14,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v62,r14,r8
	ea = r14.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vsrah v17,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stw r22,32(r1)
	REX_STORE_U32(ctx.r1.u32 + 32, r22.u32);
	// vaddshs v30,v30,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// lwz r22,48(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// vpkshus128 v59,v16,v15
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v18,v12,v7
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v13,v10,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvrx128 v62,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vaddshs v12,v9,v5
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vpkshus128 v58,v14,v17
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vsrah v10,v29,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r6,r17,r10
	ctx.r6.u64 = r17.u64 + ctx.r10.u64;
	// vsrah v9,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v61,r0,r23
	ea = r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vsrah v16,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v61,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// vsrah v15,v30,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v60,r0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r7,r31
	ea = ctx.r7.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// lwz r23,36(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vpkshus128 v57,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvlx128 v59,r17,r10
	ea = r17.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r6,r31
	ea = ctx.r6.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// vaddshs v8,v8,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vpkshus128 v56,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// stvlx128 v58,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// subf r9,r26,r30
	ctx.r9.u64 = r30.u64 - r26.u64;
	// lwz r6,64(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 64);
	// stvrx128 v58,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v14,v8,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r23,r6,r8
	r23.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r22,r22,r5
	r22.u64 = r22.u64 + ctx.r5.u64;
	// vor128 v26,v34,v34
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// stvlx128 v57,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stw r23,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, r23.u32);
	// stvrx128 v57,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// vor128 v24,v35,v35
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvlx128 v56,r9,r7
	ea = ctx.r9.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// subf r9,r3,r30
	ctx.r9.u64 = r30.u64 - ctx.r3.u64;
	// vpkshus128 v55,v18,v14
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// stw r22,68(r1)
	REX_STORE_U32(ctx.r1.u32 + 68, r22.u32);
	// add r23,r9,r8
	r23.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r22,32(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r20,40(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// vaddshs v14,v23,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stw r23,36(r1)
	REX_STORE_U32(ctx.r1.u32 + 36, r23.u32);
	// vsrah v17,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// add r23,r16,r10
	r23.u64 = r16.u64 + ctx.r10.u64;
	// vaddshs v15,v26,v3
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v11,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// add r21,r15,r10
	r21.u64 = r15.u64 + ctx.r10.u64;
	// vaddshs v16,v25,v2
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r20,r20,r7
	r20.u64 = r20.u64 + ctx.r7.u64;
	// vsrah v13,v12,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v56,r22,r31
	ea = r22.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v56.u8[i]);
	// vor128 v9,v37,v37
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v37.u8));
	// stw r20,56(r1)
	REX_STORE_U32(ctx.r1.u32 + 56, r20.u32);
	// vor128 v10,v38,v38
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v38.u8));
	// stw r21,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, r21.u32);
	// vor128 v31,v40,v40
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_load_si128((simde__m128i*)ctx.v40.u8));
	// stvlx128 v55,r16,r10
	ea = r16.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// vor128 v8,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// lwz r21,48(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
	// lwz r20,40(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// vpkshus128 v54,v13,v17
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v13.s16)));
	// vaddshs v6,v21,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvrx128 v55,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// vaddshs v3,v22,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v9,v16
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v1,v10,v15
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v26,v19,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v20,v5
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v24,v31,v14
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v23,v8,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v29,v36,v36
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// lwz r29,36(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// vor128 v30,v41,v41
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_load_si128((simde__m128i*)ctx.v41.u8));
	// stvlx128 v54,r9,r8
	ea = ctx.r9.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vor128 v27,v39,v39
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_load_si128((simde__m128i*)ctx.v39.u8));
	// lwz r9,68(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 68);
	// vsrah v20,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lwz r23,56(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// vaddshs v22,v29,v6
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// lwz r22,44(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// vaddshs v21,v30,v3
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx128 v54,r29,r31
	ea = r29.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// vsrah v19,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// lwz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// vaddshs v18,v27,v26
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// ld r29,104(r1)
	r29.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// vaddshs v17,v28,v25
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// ld r28,120(r1)
	r28.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// vsrah v16,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r27,176(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// vsrah v15,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v53,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vsrah v14,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r24,144(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// vsrah v11,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// ld r19,96(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// vsrah v10,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vsrah v9,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v52,v15,v16
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vor128 v13,v47,v47
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v47.u8));
	// vpkshus128 v51,v11,v14
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v12,v43,v43
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v43.u8));
	// stvlx128 v53,r21,r5
	ea = r21.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vpkshus128 v50,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// stvrx128 v53,r9,r31
	ea = ctx.r9.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// stvlx128 v52,r20,r7
	ea = r20.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// stvrx128 v52,r23,r31
	ea = r23.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v52.u8[i]);
	// stvlx128 v51,r15,r10
	ea = r15.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v51,r22,r31
	ea = r22.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v50,r6,r8
	ea = ctx.r6.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvrx128 v50,r11,r31
	ea = ctx.r11.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v50.u8[i]);
	// ld r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// bdnz 0x823c761c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C761C;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,940(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// lwz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
loc_823C7E84:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c8198
	if (!ctx.cr6.lt) goto loc_823C8198;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addi r10,r25,2
	ctx.r10.s64 = r25.s64 + 2;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// add r9,r8,r27
	ctx.r9.u64 = ctx.r8.u64 + r27.u64;
	// rlwinm r8,r7,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subf r7,r3,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r3.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// add r4,r7,r30
	ctx.r4.u64 = ctx.r7.u64 + r30.u64;
	// stw r6,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r6.u32);
	// stw r5,44(r1)
	REX_STORE_U32(ctx.r1.u32 + 44, ctx.r5.u32);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// stw r4,64(r1)
	REX_STORE_U32(ctx.r1.u32 + 64, ctx.r4.u32);
	// b 0x823c7ed0
	goto loc_823C7ED0;
loc_823C7ECC:
	// lwz r10,48(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 48);
loc_823C7ED0:
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r8,r29,3
	ctx.r8.s64 = r29.s64 + 3;
	// lbzx r19,r24,r27
	r19.u64 = REX_LOAD_U8(r24.u32 + r27.u32);
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r24,1
	ctx.r6.s64 = r24.s64 + 1;
	// std r31,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, r31.u64);
	// rotlwi r7,r19,1
	ctx.r7.u64 = __builtin_rotateleft32(r19.u32, 1);
	// lwz r21,20(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stw r6,40(r1)
	REX_STORE_U32(ctx.r1.u32 + 40, ctx.r6.u32);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r10,48(r1)
	REX_STORE_U32(ctx.r1.u32 + 48, ctx.r10.u32);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// lbzx r15,r8,r11
	r15.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// subf r8,r3,r29
	ctx.r8.u64 = r29.u64 - ctx.r3.u64;
	// add r6,r19,r7
	ctx.r6.u64 = r19.u64 + ctx.r7.u64;
	// rotlwi r28,r15,3
	r28.u64 = __builtin_rotateleft32(r15.u32, 3);
	// mr r27,r15
	r27.u64 = r15.u64;
	// lbzx r17,r10,r11
	r17.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// addi r10,r29,2
	ctx.r10.s64 = r29.s64 + 2;
	// lbzx r16,r8,r4
	r16.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// rotlwi r24,r17,3
	r24.u64 = __builtin_rotateleft32(r17.u32, 3);
	// rotlwi r7,r16,3
	ctx.r7.u64 = __builtin_rotateleft32(r16.u32, 3);
	// rotlwi r22,r17,2
	r22.u64 = __builtin_rotateleft32(r17.u32, 2);
	// lbzx r14,r10,r11
	r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// stbx r19,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r19.u8);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r19
	ctx.r10.u64 = ctx.r10.u64 + r19.u64;
	// add r26,r9,r19
	r26.u64 = ctx.r9.u64 + r19.u64;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r25,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r25.s64 = ctx.r10.s32 >> 1;
	// subf r9,r16,r7
	ctx.r9.u64 = ctx.r7.u64 - r16.u64;
	// srawi r7,r26,2
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x3) != 0);
	ctx.r7.s64 = r26.s32 >> 2;
	// add r20,r9,r19
	r20.u64 = ctx.r9.u64 + r19.u64;
	// subf r9,r15,r28
	ctx.r9.u64 = r28.u64 - r15.u64;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// add r18,r9,r7
	r18.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// clrlwi r8,r25,16
	ctx.r8.u64 = r25.u32 & 0xFFFF;
	// subf r26,r17,r24
	r26.u64 = r24.u64 - r17.u64;
	// clrlwi r31,r8,24
	r31.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,24(r1)
	REX_STORE_U8(ctx.r1.u32 + 24, ctx.r8.u8);
	// rotlwi r23,r14,3
	r23.u64 = __builtin_rotateleft32(r14.u32, 3);
	// stbx r10,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r9,r3,2
	ctx.r9.s64 = ctx.r3.s64 + 2;
	// subf r24,r14,r23
	r24.u64 = r23.u64 - r14.u64;
	// rotlwi r25,r16,2
	r25.u64 = __builtin_rotateleft32(r16.u32, 2);
	// rlwinm r23,r10,1,15,30
	r23.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// mr r29,r17
	r29.u64 = r17.u64;
	// stbx r31,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r31.u8);
	// add r9,r26,r10
	ctx.r9.u64 = r26.u64 + ctx.r10.u64;
	// add r26,r16,r25
	r26.u64 = r16.u64 + r25.u64;
	// add r31,r24,r8
	r31.u64 = r24.u64 + ctx.r8.u64;
	// stw r9,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// add r25,r17,r22
	r25.u64 = r17.u64 + r22.u64;
	// add r24,r10,r23
	r24.u64 = ctx.r10.u64 + r23.u64;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// add r24,r24,r25
	r24.u64 = r24.u64 + r25.u64;
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// srawi r22,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	r22.s64 = r20.s32 >> 3;
	// lwz r20,28(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// srawi r23,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	r23.s64 = r20.s32 >> 3;
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// subf r9,r3,r25
	ctx.r9.u64 = r25.u64 - ctx.r3.u64;
	// add r6,r26,r6
	ctx.r6.u64 = r26.u64 + ctx.r6.u64;
	// stbx r23,r21,r11
	REX_STORE_U8(r21.u32 + ctx.r11.u32, r23.u8);
	// srawi r26,r31,3
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7) != 0);
	r26.s64 = r31.s32 >> 3;
	// srawi r20,r18,3
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x7) != 0);
	r20.s64 = r18.s32 >> 3;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// srawi r18,r24,3
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	r18.s64 = r24.s32 >> 3;
	// stbx r22,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, r22.u8);
	// mr r24,r26
	r24.u64 = r26.u64;
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r16
	r30.u64 = r16.u64;
	// stb r6,24(r1)
	REX_STORE_U8(ctx.r1.u32 + 24, ctx.r6.u8);
	// mr r28,r14
	r28.u64 = r14.u64;
	// mr r23,r20
	r23.u64 = r20.u64;
	// addi r9,r25,2
	ctx.r9.s64 = r25.s64 + 2;
	// stbx r24,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r24.u8);
	// rlwinm r6,r8,1,15,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFE;
	// lwz r9,44(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 44);
	// rotlwi r24,r14,2
	r24.u64 = __builtin_rotateleft32(r14.u32, 2);
	// add r21,r8,r6
	r21.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r28,16(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// add r22,r14,r24
	r22.u64 = r14.u64 + r24.u64;
	// rlwinm r20,r10,2,14,29
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// rlwinm r6,r10,3,13,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// stw r9,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r9.u32);
	// subf r9,r3,r26
	ctx.r9.u64 = r26.u64 - ctx.r3.u64;
	// lwz r31,28(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 28);
	// rotlwi r24,r16,1
	r24.u64 = __builtin_rotateleft32(r16.u32, 1);
	// stbx r23,r31,r11
	REX_STORE_U8(r31.u32 + ctx.r11.u32, r23.u8);
	// lbz r23,24(r1)
	r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 24);
	// add r16,r16,r24
	r16.u64 = r16.u64 + r24.u64;
	// stbx r23,r9,r4
	REX_STORE_U8(ctx.r9.u32 + ctx.r4.u32, r23.u8);
	// addi r9,r26,1
	ctx.r9.s64 = r26.s64 + 1;
	// add r23,r21,r22
	r23.u64 = r21.u64 + r22.u64;
	// add r21,r10,r20
	r21.u64 = ctx.r10.u64 + r20.u64;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// rotlwi r6,r15,2
	ctx.r6.u64 = __builtin_rotateleft32(r15.u32, 2);
	// stbx r18,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r18.u8);
	// rlwinm r9,r7,1,15,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFE;
	// add r20,r10,r17
	r20.u64 = ctx.r10.u64 + r17.u64;
	// srawi r22,r23,3
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7) != 0);
	r22.s64 = r23.s32 >> 3;
	// addi r10,r26,2
	ctx.r10.s64 = r26.s64 + 2;
	// add r18,r7,r9
	r18.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r15,r6
	ctx.r9.u64 = r15.u64 + ctx.r6.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// rotlwi r22,r19,3
	r22.u64 = __builtin_rotateleft32(r19.u32, 3);
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// add r9,r18,r9
	ctx.r9.u64 = r18.u64 + ctx.r9.u64;
	// subf r5,r5,r22
	ctx.r5.u64 = r22.u64 - ctx.r5.u64;
	// addi r10,r26,3
	ctx.r10.s64 = r26.s64 + 3;
	// rotlwi r23,r19,2
	r23.u64 = __builtin_rotateleft32(r19.u32, 2);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// lwz r30,76(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 76);
	// add r24,r19,r23
	r24.u64 = r19.u64 + r23.u64;
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// subf r10,r3,r30
	ctx.r10.u64 = r30.u64 - ctx.r3.u64;
	// add r6,r16,r24
	ctx.r6.u64 = r16.u64 + r24.u64;
	// rotlwi r19,r17,1
	r19.u64 = __builtin_rotateleft32(r17.u32, 1);
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// add r22,r17,r19
	r22.u64 = r17.u64 + r19.u64;
	// stbx r9,r10,r4
	REX_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u8);
	// rlwinm r6,r8,2,14,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFC;
	// add r29,r21,r22
	r29.u64 = r21.u64 + r22.u64;
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// rotlwi r17,r14,1
	r17.u64 = __builtin_rotateleft32(r14.u32, 1);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r29,r29,3
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	r29.s64 = r29.s32 >> 3;
	// add r9,r14,r17
	ctx.r9.u64 = r14.u64 + r17.u64;
	// rlwinm r22,r8,3,13,28
	r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x7FFF8;
	// stbx r29,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r29.u8);
	// rlwinm r23,r7,2,14,29
	r23.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// rotlwi r15,r15,1
	r15.u64 = __builtin_rotateleft32(r15.u32, 1);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// subf r9,r8,r22
	ctx.r9.u64 = r22.u64 - ctx.r8.u64;
	// add r23,r7,r23
	r23.u64 = ctx.r7.u64 + r23.u64;
	// addi r10,r30,2
	ctx.r10.s64 = r30.s64 + 2;
	// add r24,r27,r15
	r24.u64 = r27.u64 + r15.u64;
	// rlwinm r8,r7,3,13,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x7FFF8;
	// srawi r6,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 3;
	// add r29,r23,r24
	r29.u64 = r23.u64 + r24.u64;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stbx r6,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r6.u8);
	// srawi r29,r29,3
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x7) != 0);
	r29.s64 = r29.s32 >> 3;
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + r14.u64;
	// srawi r7,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 3;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// addi r10,r30,3
	ctx.r10.s64 = r30.s64 + 3;
	// srawi r5,r20,3
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x7) != 0);
	ctx.r5.s64 = r20.s32 >> 3;
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stbx r29,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, r29.u8);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// addi r10,r28,-1
	ctx.r10.s64 = r28.s64 + -1;
	// lwz r6,64(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 64);
	// stbx r9,r28,r11
	REX_STORE_U8(r28.u32 + ctx.r11.u32, ctx.r9.u8);
	// ld r31,96(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r29,52(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r27,60(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 60);
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// lwz r24,40(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// stbx r7,r6,r4
	REX_STORE_U8(ctx.r6.u32 + ctx.r4.u32, ctx.r7.u8);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c7ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C7ECC;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,940(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_823C8198:
	// lbzx r22,r11,r29
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbzx r18,r24,r27
	r18.u64 = REX_LOAD_U8(r24.u32 + r27.u32);
	// add r19,r5,r11
	r19.u64 = ctx.r5.u64 + ctx.r11.u64;
	// rotlwi r23,r22,3
	r23.u64 = __builtin_rotateleft32(r22.u32, 3);
	// lwz r17,72(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 72);
	// rotlwi r7,r18,1
	ctx.r7.u64 = __builtin_rotateleft32(r18.u32, 1);
	// lwz r16,964(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 964);
	// subf r21,r22,r23
	r21.u64 = r23.u64 - r22.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// rotlwi r24,r22,2
	r24.u64 = __builtin_rotateleft32(r22.u32, 2);
	// stbx r18,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r18.u8);
	// rotlwi r22,r22,1
	r22.u64 = __builtin_rotateleft32(r22.u32, 1);
	// add r20,r18,r7
	r20.u64 = r18.u64 + ctx.r7.u64;
	// add r7,r8,r24
	ctx.r7.u64 = ctx.r8.u64 + r24.u64;
	// add r24,r8,r22
	r24.u64 = ctx.r8.u64 + r22.u64;
	// add r22,r21,r18
	r22.u64 = r21.u64 + r18.u64;
	// rotlwi r23,r18,2
	r23.u64 = __builtin_rotateleft32(r18.u32, 2);
	// rotlwi r21,r18,3
	r21.u64 = __builtin_rotateleft32(r18.u32, 3);
	// mr r9,r18
	ctx.r9.u64 = r18.u64;
	// add r23,r18,r23
	r23.u64 = r18.u64 + r23.u64;
	// subf r9,r9,r21
	ctx.r9.u64 = r21.u64 - ctx.r9.u64;
	// add r7,r20,r7
	ctx.r7.u64 = r20.u64 + ctx.r7.u64;
	// add r24,r23,r24
	r24.u64 = r23.u64 + r24.u64;
	// srawi r23,r22,3
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x7) != 0);
	r23.s64 = r22.s32 >> 3;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + r26.u64;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// srawi r24,r24,3
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	r24.s64 = r24.s32 >> 3;
	// clrlwi r23,r23,24
	r23.u64 = r23.u32 & 0xFF;
	// clrlwi r21,r7,24
	r21.u64 = ctx.r7.u32 & 0xFF;
	// add r7,r11,r30
	ctx.r7.u64 = ctx.r11.u64 + r30.u64;
	// stbx r23,r11,r25
	REX_STORE_U8(ctx.r11.u32 + r25.u32, r23.u8);
	// clrlwi r20,r24,24
	r20.u64 = r24.u32 & 0xFF;
	// stb r23,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, r23.u8);
	// srawi r22,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	r22.s64 = ctx.r8.s32 >> 3;
	// stb r23,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, r23.u8);
	// stb r23,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, r23.u8);
	// add r8,r19,r30
	ctx.r8.u64 = r19.u64 + r30.u64;
	// stbx r21,r11,r26
	REX_STORE_U8(ctx.r11.u32 + r26.u32, r21.u8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stb r21,1(r9)
	REX_STORE_U8(ctx.r9.u32 + 1, r21.u8);
	// addic. r24,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r24.s64 = r17.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stb r21,2(r9)
	REX_STORE_U8(ctx.r9.u32 + 2, r21.u8);
	// add r25,r4,r25
	r25.u64 = ctx.r4.u64 + r25.u64;
	// stb r21,3(r9)
	REX_STORE_U8(ctx.r9.u32 + 3, r21.u8);
	// add r26,r4,r26
	r26.u64 = ctx.r4.u64 + r26.u64;
	// stbx r20,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, r20.u8);
	// clrlwi r11,r22,24
	ctx.r11.u64 = r22.u32 & 0xFF;
	// add r30,r4,r30
	r30.u64 = ctx.r4.u64 + r30.u64;
	// stb r20,1(r7)
	REX_STORE_U8(ctx.r7.u32 + 1, r20.u8);
	// add r28,r28,r4
	r28.u64 = r28.u64 + ctx.r4.u64;
	// stb r20,2(r7)
	REX_STORE_U8(ctx.r7.u32 + 2, r20.u8);
	// add r27,r27,r16
	r27.u64 = r27.u64 + r16.u64;
	// stb r20,3(r7)
	REX_STORE_U8(ctx.r7.u32 + 3, r20.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r24,72(r1)
	REX_STORE_U32(ctx.r1.u32 + 72, r24.u32);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// stw r10,52(r1)
	REX_STORE_U32(ctx.r1.u32 + 52, ctx.r10.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// stw r30,76(r1)
	REX_STORE_U32(ctx.r1.u32 + 76, r30.u32);
	// stw r28,16(r1)
	REX_STORE_U32(ctx.r1.u32 + 16, r28.u32);
	// stw r27,60(r1)
	REX_STORE_U32(ctx.r1.u32 + 60, r27.u32);
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// stb r11,1(r8)
	REX_STORE_U8(ctx.r8.u32 + 1, ctx.r11.u8);
	// stb r11,2(r8)
	REX_STORE_U8(ctx.r8.u32 + 2, ctx.r11.u8);
	// stb r11,3(r8)
	REX_STORE_U8(ctx.r8.u32 + 3, ctx.r11.u8);
	// bne 0x823c759c
	if (!ctx.cr0.eq) goto loc_823C759C;
loc_823C82AC:
	// rlwinm r10,r6,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFC0;
	// li r28,0
	r28.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823c8678
	if (!ctx.cr6.gt) goto loc_823C8678;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// rlwinm r11,r11,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3FFFFFF;
	// addi r7,r27,1
	ctx.r7.s64 = r27.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r26,16
	ctx.r8.s64 = r26.s64 + 16;
	// rlwinm r28,r11,4,0,27
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 + 48;
	// addi r10,r29,32
	ctx.r10.s64 = r29.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r23,r29,r3
	r23.u64 = ctx.r3.u64 - r29.u64;
	// subf r22,r29,r25
	r22.u64 = r25.u64 - r29.u64;
	// subf r21,r29,r26
	r21.u64 = r26.u64 - r29.u64;
	// subf r20,r3,r25
	r20.u64 = r25.u64 - ctx.r3.u64;
	// subf r19,r3,r26
	r19.u64 = r26.u64 - ctx.r3.u64;
	// subf r18,r26,r25
	r18.u64 = r25.u64 - r26.u64;
	// addi r16,r28,1
	r16.s64 = r28.s64 + 1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r17,r31
	r17.u64 = r31.u64;
loc_823C8310:
	// addi r4,r7,-1
	ctx.r4.s64 = ctx.r7.s64 + -1;
	// lvlx128 v49,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v48,r31,r7
	temp.u32 = r31.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r10,-32
	ctx.r3.s64 = ctx.r10.s64 + -32;
	// vor128 v10,v49,v48
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// addi r30,r10,-16
	r30.s64 = ctx.r10.s64 + -16;
	// lvlx128 v47,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r9,-48
	r24.s64 = ctx.r9.s64 + -48;
	// lvrx128 v46,r31,r10
	temp.u32 = r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v45,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v2,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvrx128 v44,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor128 v11,v45,v44
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// vmrglb v7,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// lvrx128 v43,r31,r3
	temp.u32 = r31.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v42,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r23
	ctx.r3.u64 = ctx.r10.u64 + r23.u64;
	// vaddshs v4,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvrx128 v41,r17,r30
	temp.u32 = r17.u32 + r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vmrghb v10,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v9,v13,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// lvlx128 v40,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v39,r31,r4
	temp.u32 = r31.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vaddshs v1,v4,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvlx128 v38,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddshs v6,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r9,-32
	ctx.r4.s64 = ctx.r9.s64 + -32;
	// vaddshs v5,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v31,v3,v7
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v30,v10,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v29,v6,v10
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v28,v5,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v27,v6,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v26,v5,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vmrghb v3,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v25,v29,v8
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vmrglb v2,v13,v2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v24,v9,v31
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v23,v28,v7
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsrah v21,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v17,v30,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus v9,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v6,v42,v43
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8)));
	// vor128 v4,v40,v41
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8)));
	// vpkshus v8,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// vor128 v1,v38,v39
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8)));
	// vpkshus v10,v20,v19
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vmrghb v7,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrglb v5,v11,v9
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)));
	// vmrghb v16,v13,v1
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v9,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v8,v10,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)));
	// vmrglb v31,v13,v1
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vor v1,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vmrghb v11,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrglb v10,v7,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vmrghb v9,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrglb v8,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrghb v5,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v6,v13,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vmrglb v4,v13,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v11,0,r24
	ea = r24.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvrx v11,r24,r31
	ea = r24.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v11.u8[i]);
	// vmrghb v15,v13,v11
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvlx v10,0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// vaddshs v30,v7,v7
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vmrglb v14,v13,v11
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v29,v6,v6
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v19,v13,v10
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v28,v5,v5
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v18,v13,v10
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v27,v4,v4
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrghb v17,v13,v9
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v10,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v10.u8[i]);
	// vaddshs v25,v2,v2
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvlx v9,r10,r23
	ea = ctx.r10.u32 + r23.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// vmrglb v16,v13,v9
	simde_mm_store_si128((simde__m128i*)v16.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// stvrx v9,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v9.u8[i]);
	// vaddshs v26,v3,v3
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v9,v29,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vmrghb v10,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v11,v30,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// vaddshs v6,v25,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// stvlx v8,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// vaddshs v7,v26,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// stvrx v8,r9,r31
	ea = ctx.r9.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v8.u8[i]);
	// vaddshs v2,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vmrglb v8,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddshs v3,v30,v11
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// addi r24,r1,640
	r24.s64 = ctx.r1.s64 + 640;
	// vor v11,v15,v15
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)v15.u8));
	// add r4,r8,r18
	ctx.r4.u64 = ctx.r8.u64 + r18.u64;
	// stvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v10,v14,v14
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)v14.u8));
	// vaddshs v29,v29,v2
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v2.s16)));
	// add r3,r10,r22
	ctx.r3.u64 = ctx.r10.u64 + r22.u64;
	// vaddshs v22,v30,v3
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// add r30,r9,r20
	r30.u64 = ctx.r9.u64 + r20.u64;
	// vaddshs v23,v31,v31
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v20,v27,v4
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// stvx128 v8,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v15,v29,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v22,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v23,v31
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vaddshs v24,v1,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v31,v15,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v14,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v21,v28,v5
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v5,v24,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v22,v27,v20
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vpkshus128 v37,v30,v31
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v20,v25,v6
	simde_mm_store_si128((simde__m128i*)v20.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v1,v28,v21
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v21,v26,v7
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v31,v23,v4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v29,v27,v22
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)v22.s16)));
	// vor v9,v19,v19
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)v19.u8));
	// lvx128 v36,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v8,v18,v18
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_load_si128((simde__m128i*)v18.u8));
	// stvlx128 v37,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// vor v7,v17,v17
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)v17.u8));
	// vor v6,v16,v16
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)v16.u8));
	// vaddshs v27,v25,v20
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vaddshs v19,v24,v5
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v28,v28,v1
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v26,v26,v21
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vaddshs v25,v23,v31
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vor128 v5,v36,v36
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v36.u8));
	// vaddshs v23,v29,v8
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v18,v28,v9
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v17,v27,v6
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v16,v26,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v24,v19
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vaddshs v15,v10,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v11,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vor128 v34,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vaddshs v30,v8,v8
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v29,v9,v9
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v28,v6,v6
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vaddshs v27,v7,v7
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// lvx128 v35,r0,r24
	ea = (r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v13,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vor128 v4,v35,v35
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v35.u8));
	// stvrx128 v37,r5,r31
	ea = ctx.r5.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v37.u8[i]);
	// vaddshs v24,v24,v5
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vsrah v23,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v18,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v26,v4,v4
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v25,v25,v4
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v17,v17,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v16,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v15,v15,v10
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v14,v14,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v11,v30,v8
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vpkshus128 v33,v18,v23
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)v18.s16)));
	// vaddshs v10,v29,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vpkshus128 v32,v16,v17
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)v16.s16)));
	// vaddshs v9,v28,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// vaddshs v8,v27,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// vaddshs v7,v2,v15
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)v15.s16)));
	// vaddshs v6,v3,v14
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)v14.s16)));
	// vaddshs v4,v26,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vaddshs v3,v13,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvlx128 v33,r8,r18
	ea = ctx.r8.u32 + r18.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// vaddshs v2,v22,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// stvrx128 v33,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v33.u8[i]);
	// vaddshs v1,v1,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// addi r4,r8,-16
	ctx.r4.s64 = ctx.r8.s64 + -16;
	// vsrah v30,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v32,r10,r22
	ea = ctx.r10.u32 + r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// vsrah v29,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvrx128 v32,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v32.u8[i]);
	// vaddshs v27,v21,v8
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// add r3,r10,r21
	ctx.r3.u64 = ctx.r10.u64 + r21.u64;
	// vaddshs v28,v20,v9
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsrah v26,v7,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v6,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vaddshs v23,v19,v3
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vaddshs v24,v31,v4
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vsrah v22,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v1,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v25,v26
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsrah v20,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v18,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvlx128 v63,r9,r20
	ea = ctx.r9.u32 + r20.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// vsrah v17,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v61,v21,v22
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// stvrx128 v63,r30,r31
	ea = r30.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// add r30,r9,r19
	r30.u64 = ctx.r9.u64 + r19.u64;
	// vpkshus128 v60,v19,v20
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v19.s16)));
	// vor128 v13,v34,v34
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v34.u8));
	// stvlx128 v62,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vpkshus128 v59,v17,v18
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)v17.s16)));
	// stvrx128 v62,r4,r31
	ea = ctx.r4.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r8,r31
	ea = ctx.r8.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvlx128 v60,r10,r21
	ea = ctx.r10.u32 + r21.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvrx128 v60,r3,r31
	ea = ctx.r3.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// stvlx128 v59,r9,r19
	ea = ctx.r9.u32 + r19.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvrx128 v59,r30,r31
	ea = r30.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// bdnz 0x823c8310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C8310;
	// lwz r6,940(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 940);
loc_823C8678:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823c8804
	if (!ctx.cr6.lt) goto loc_823C8804;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// add r10,r16,r27
	ctx.r10.u64 = r16.u64 + r27.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r15,r29,1
	r15.s64 = r29.s64 + 1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r24,r10,-1
	r24.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823C86A0:
	// addi r5,r29,3
	ctx.r5.s64 = r29.s64 + 3;
	// lbzx r6,r28,r27
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + r27.u32);
	// addi r8,r29,2
	ctx.r8.s64 = r29.s64 + 2;
	// lbzu r7,1(r24)
	ea = 1 + r24.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	r24.u32 = ea;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + r25.u64;
	// lbzx r20,r15,r11
	r20.u64 = REX_LOAD_U8(r15.u32 + ctx.r11.u32);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rotlwi r6,r6,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbzx r3,r5,r11
	ctx.r3.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// subf r5,r25,r29
	ctx.r5.u64 = r29.u64 - r25.u64;
	// lbzx r14,r8,r11
	r14.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r31,r5,r9
	r31.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// add r5,r10,r6
	ctx.r5.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r8,r5
	ctx.r6.u64 = ctx.r8.u64 + ctx.r5.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// srawi r23,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r23.s64 = ctx.r4.s32 >> 1;
	// rotlwi r4,r31,3
	ctx.r4.u64 = __builtin_rotateleft32(r31.u32, 3);
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// subf r21,r31,r4
	r21.u64 = ctx.r4.u64 - r31.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// rotlwi r7,r3,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r22,r31,2
	r22.u64 = __builtin_rotateleft32(r31.u32, 2);
	// add r21,r21,r10
	r21.u64 = r21.u64 + ctx.r10.u64;
	// subf r19,r3,r7
	r19.u64 = ctx.r7.u64 - ctx.r3.u64;
	// add r22,r30,r22
	r22.u64 = r30.u64 + r22.u64;
	// rlwinm r10,r8,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1FFFE;
	// rotlwi r30,r3,2
	r30.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// rotlwi r18,r20,3
	r18.u64 = __builtin_rotateleft32(r20.u32, 3);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r19,r19,r8
	r19.u64 = r19.u64 + ctx.r8.u64;
	// add r8,r3,r30
	ctx.r8.u64 = ctx.r3.u64 + r30.u64;
	// clrlwi r6,r6,16
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r16,r20,r18
	r16.u64 = r18.u64 - r20.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r4,r16,r6
	ctx.r4.u64 = r16.u64 + ctx.r6.u64;
	// addi r10,r25,1
	ctx.r10.s64 = r25.s64 + 1;
	// rotlwi r30,r14,3
	r30.u64 = __builtin_rotateleft32(r14.u32, 3);
	// srawi r16,r21,3
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x7) != 0);
	r16.s64 = r21.s32 >> 3;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// clrlwi r7,r23,16
	ctx.r7.u64 = r23.u32 & 0xFFFF;
	// stbx r16,r11,r25
	REX_STORE_U8(ctx.r11.u32 + r25.u32, r16.u8);
	// subf r17,r14,r30
	r17.u64 = r30.u64 - r14.u64;
	// stbx r4,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// addi r10,r25,2
	ctx.r10.s64 = r25.s64 + 2;
	// add r30,r17,r7
	r30.u64 = r17.u64 + ctx.r7.u64;
	// rlwinm r23,r6,1,15,30
	r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1FFFE;
	// srawi r4,r30,3
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7) != 0);
	ctx.r4.s64 = r30.s32 >> 3;
	// mr r31,r20
	r31.u64 = r20.u64;
	// stbx r4,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u8);
	// rotlwi r18,r20,2
	r18.u64 = __builtin_rotateleft32(r20.u32, 2);
	// rlwinm r20,r7,1,15,30
	r20.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1FFFE;
	// addi r10,r25,3
	ctx.r10.s64 = r25.s64 + 3;
	// rotlwi r21,r14,2
	r21.u64 = __builtin_rotateleft32(r14.u32, 2);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// add r23,r6,r23
	r23.u64 = ctx.r6.u64 + r23.u64;
	// add r3,r22,r5
	ctx.r3.u64 = r22.u64 + ctx.r5.u64;
	// add r31,r31,r18
	r31.u64 = r31.u64 + r18.u64;
	// add r7,r7,r20
	ctx.r7.u64 = ctx.r7.u64 + r20.u64;
	// srawi r5,r19,3
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x7) != 0);
	ctx.r5.s64 = r19.s32 >> 3;
	// add r6,r14,r21
	ctx.r6.u64 = r14.u64 + r21.u64;
	// add r4,r23,r31
	ctx.r4.u64 = r23.u64 + r31.u64;
	// stbx r5,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r3,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 3;
	// subf r10,r25,r26
	ctx.r10.u64 = r26.u64 - r25.u64;
	// srawi r6,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 3;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// srawi r5,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 3;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stbx r4,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r4.u8);
	// clrlwi r3,r6,24
	ctx.r3.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r7,r5,24
	ctx.r7.u64 = ctx.r5.u32 & 0xFF;
	// addi r10,r26,1
	ctx.r10.s64 = r26.s64 + 1;
	// stbx r3,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u8);
	// addi r10,r26,2
	ctx.r10.s64 = r26.s64 + 2;
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r10,r26,3
	ctx.r10.s64 = r26.s64 + 3;
	// stbx r7,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823c86a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C86A0;
loc_823C8804:
	// lbzx r6,r11,r29
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// add r10,r11,r25
	ctx.r10.u64 = ctx.r11.u64 + r25.u64;
	// lbzx r5,r28,r27
	ctx.r5.u64 = REX_LOAD_U8(r28.u32 + r27.u32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + r26.u64;
	// rotlwi r4,r6,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// rotlwi r5,r6,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// subf r6,r6,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r6.u64;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r3,r6,r8
	ctx.r3.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// srawi r8,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 3;
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// clrlwi r4,r8,24
	ctx.r4.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r3,r7,24
	ctx.r3.u64 = ctx.r7.u32 & 0xFF;
	// stb r4,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r4.u8);
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// stb r4,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r4.u8);
	// stb r4,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r4.u8);
	// stb r3,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r3.u8);
	// stb r3,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r3,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r3.u8);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82460FB0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,-1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x823cd250
	sub_823CD250(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82462830) {
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
	// lhz r11,110(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 110);
	// lwz r10,92(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// lwz r5,88(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 88);
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mullw r11,r5,r6
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82462878
	if (!ctx.cr6.gt) goto loc_82462878;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r1,82
	ctx.r11.s64 = ctx.r1.s64 + 82;
	// subf r10,r4,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r4.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822d5428
	ctx.lr = 0x82462878;
	sub_822D5428(ctx, base);
loc_82462878:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82464610) {
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
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246464c
	if (ctx.cr6.lt) goto loc_8246464C;
	// cmpwi cr6,r3,192
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 192, ctx.xer);
	// bge cr6,0x8246464c
	if (!ctx.cr6.lt) goto loc_8246464C;
	// lis r11,-32244
	ctx.r11.s64 = -2113142784;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,4712
	ctx.r9.s64 = ctx.r11.s64 + 4712;
	// lfsx f1,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8246464C:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,16260(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,-6032(r10)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + -6032);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82464678;
	sub_822D5B48(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82465A68) {
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
	// bl 0x824658f8
	ctx.lr = 0x82465A8C;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82465a9c
	if (ctx.cr6.lt) goto loc_82465A9C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
loc_82465A9C:
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

DEFINE_REX_FUNC(sub_82466C00) {
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
	ctx.lr = 0x82466C08;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// li r30,-5
	r30.s64 = -5;
	// addi r29,r11,15328
	r29.s64 = ctx.r11.s64 + 15328;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lfd f31,-6032(r11)
	f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -6032);
loc_82466C2C:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82466C48;
	sub_822D5B48(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r29,80
	ctx.r10.s64 = r29.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82466c2c
	if (ctx.cr6.lt) goto loc_82466C2C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,80
	r31.s64 = r29.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,16260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	f30.f64 = double(temp.f32);
loc_82466C74:
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * f30.f64));
	// bl 0x822d5b48
	ctx.lr = 0x82466C94;
	sub_822D5B48(ctx, base);
	// addi r11,r29,80
	ctx.r11.s64 = r29.s64 + 80;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,0(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82466c74
	if (ctx.cr6.lt) goto loc_82466C74;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,160(r29)
	REX_STORE_U32(r29.u32 + 160, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8246C9A8) {
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
	ctx.lr = 0x8246C9B0;
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
	// bgt cr6,0x8246c9e4
	if (ctx.cr6.gt) goto loc_8246C9E4;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8246C9E4:
	// lhz r11,580(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 580);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8246ca2c
	if (!ctx.cr6.eq) goto loc_8246CA2C;
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
	// bl 0x82464610
	ctx.lr = 0x8246CA1C;
	sub_82464610(ctx, base);
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
loc_8246CA2C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x8246ca64
	if (!ctx.cr6.eq) goto loc_8246CA64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246CA4C;
	sub_824658F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246cb78
	if (ctx.cr6.lt) goto loc_8246CB78;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r26,150(r31)
	REX_STORE_U16(r31.u32 + 150, r26.u16);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8246CA64:
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
	// bge cr6,0x8246cb78
	if (!ctx.cr6.lt) goto loc_8246CB78;
	// addi r27,r31,224
	r27.s64 = r31.s64 + 224;
	// li r25,1
	r25.s64 = 1;
loc_8246CA84:
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
	ctx.lr = 0x8246CAB8;
	sub_8246E538(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246cb78
	if (ctx.cr6.lt) goto loc_8246CB78;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246CAD8;
	sub_824658F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246cb78
	if (ctx.cr6.lt) goto loc_8246CB78;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246cafc
	if (!ctx.cr6.eq) goto loc_8246CAFC;
	// stb r26,180(r29)
	REX_STORE_U8(r29.u32 + 180, r26.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8246cb40
	goto loc_8246CB40;
loc_8246CAFC:
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8246cb14
	if (!ctx.cr6.eq) goto loc_8246CB14;
	// stb r25,180(r29)
	REX_STORE_U8(r29.u32 + 180, r25.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8246cb40
	goto loc_8246CB40;
loc_8246CB14:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246CB24;
	sub_824658F8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246cb78
	if (ctx.cr6.lt) goto loc_8246CB78;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// stb r3,180(r29)
	REX_STORE_U8(r29.u32 + 180, ctx.r3.u8);
loc_8246CB40:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82464610
	ctx.lr = 0x8246CB48;
	sub_82464610(ctx, base);
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
	// blt cr6,0x8246ca84
	if (ctx.cr6.lt) goto loc_8246CA84;
loc_8246CB78:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82473330) {
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
	ctx.lr = 0x82473354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247337c
	if (!ctx.cr6.eq) goto loc_8247337C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473028
	ctx.lr = 0x82473370;
	sub_82473028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82473378;
	sub_82473600(ctx, base);
	// b 0x82473390
	goto loc_82473390;
loc_8247337C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82473390:
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

DEFINE_REX_FUNC(sub_82473AB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82473AC0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82475dd8
	ctx.lr = 0x82473ACC;
	sub_82475DD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82473bb4
	if (ctx.cr0.lt) goto loc_82473BB4;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8245c3e0
	ctx.lr = 0x82473AE0;
	sub_8245C3E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x82473AF0;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82473b3c
	if (ctx.cr0.eq) goto loc_82473B3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82472fd0
	ctx.lr = 0x82473B00;
	sub_82472FD0(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// divwu r4,r10,r11
	ctx.r4.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82473B2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// lwz r29,44(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82473b48
	if (!ctx.cr6.eq) goto loc_82473B48;
loc_82473B3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82473bb4
	goto loc_82473BB4;
loc_82473B48:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473B5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 44);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 52);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,60(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 60);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r8,124(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,8(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82473BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82473BB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82475DA8) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82475DD8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r4,r10,-6500
	ctx.r4.s64 = ctx.r10.s64 + -6500;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475E14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82475e54
	if (ctx.cr0.lt) goto loc_82475E54;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// addi r4,r10,11052
	ctx.r4.s64 = ctx.r10.s64 + 11052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82475E3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16386
	ctx.r11.u64 = ctx.r11.u64 | 16386;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82475E54:
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

DEFINE_REX_FUNC(sub_8247B8E8) {
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
	ctx.lr = 0x8247B8F0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8247ba30
	if (!ctx.cr6.eq) goto loc_8247BA30;
loc_8247B91C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247ba08
	if (ctx.cr6.eq) goto loc_8247BA08;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8247B94C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b970
	if (!ctx.cr6.eq) goto loc_8247B970;
	// stdcx. r5,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b94c
	if (!ctx.cr0.eq) goto loc_8247B94C;
	// b 0x8247b978
	goto loc_8247B978;
loc_8247B970:
	// stdcx. r7,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247B978:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b91c
	if (!ctx.cr6.eq) goto loc_8247B91C;
loc_8247B984:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r23,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, r23.u64);
	// addi r7,r31,8
	ctx.r7.s64 = r31.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_8247B9A4:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8247b9a4
	if (!ctx.cr6.eq) goto loc_8247B9A4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x8247bcec
	if (!ctx.cr6.eq) goto loc_8247BCEC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8247B9E4:
	// mfmsr r4
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r4.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bca4
	if (!ctx.cr6.eq) goto loc_8247BCA4;
	// stdcx. r8,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247b9e4
	if (!ctx.cr0.eq) goto loc_8247B9E4;
	// b 0x8247bcac
	goto loc_8247BCAC;
loc_8247BA08:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247ba24
	if (ctx.cr6.eq) goto loc_8247BA24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247abf8
	ctx.lr = 0x8247BA1C;
	sub_8247ABF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b984
	if (!ctx.cr6.eq) goto loc_8247B984;
loc_8247BA24:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
loc_8247BA30:
	// li r30,0
	r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r25,r31,24
	r25.s64 = r31.s64 + 24;
loc_8247BA3C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247ba3c
	if (!ctx.cr0.eq) goto loc_8247BA3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8247bacc
	if (ctx.cr6.lt) goto loc_8247BACC;
loc_8247BA60:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247bacc
	if (ctx.cr6.eq) goto loc_8247BACC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8247BA90:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bab4
	if (!ctx.cr6.eq) goto loc_8247BAB4;
	// stdcx. r5,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247ba90
	if (!ctx.cr0.eq) goto loc_8247BA90;
	// b 0x8247babc
	goto loc_8247BABC;
loc_8247BAB4:
	// stdcx. r7,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BABC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247ba60
	if (!ctx.cr6.eq) goto loc_8247BA60;
	// b 0x8247b984
	goto loc_8247B984;
loc_8247BACC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8247bae8
	if (ctx.cr6.eq) goto loc_8247BAE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8247abf8
	ctx.lr = 0x8247BAE0;
	sub_8247ABF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b984
	if (!ctx.cr6.eq) goto loc_8247B984;
loc_8247BAE8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8247bb90
	if (ctx.cr6.eq) goto loc_8247BB90;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_8247BAF4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8247BAFC:
	// db16cyc 
	std::this_thread::yield();
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8247bafc
	if (!ctx.cr0.lt) goto loc_8247BAFC;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(r30.s32, 511, ctx.xer);
	// bgt cr6,0x8247bb18
	if (ctx.cr6.gt) goto loc_8247BB18;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8247BB18:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8247BB1C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247bb88
	if (ctx.cr6.eq) goto loc_8247BB88;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8247BB4C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bb70
	if (!ctx.cr6.eq) goto loc_8247BB70;
	// stdcx. r5,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bb4c
	if (!ctx.cr0.eq) goto loc_8247BB4C;
	// b 0x8247bb78
	goto loc_8247BB78;
loc_8247BB70:
	// stdcx. r7,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BB78:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bb1c
	if (!ctx.cr6.eq) goto loc_8247BB1C;
	// b 0x8247b984
	goto loc_8247B984;
loc_8247BB88:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8247baf4
	if (!ctx.cr0.eq) goto loc_8247BAF4;
loc_8247BB90:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247b984
	if (!ctx.cr6.eq) goto loc_8247B984;
loc_8247BB98:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x8247bbc8
	if (ctx.cr6.eq) goto loc_8247BBC8;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8247BBA8:
	// db16cyc 
	std::this_thread::yield();
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8247bba8
	if (!ctx.cr0.lt) goto loc_8247BBA8;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(r30.s32, 511, ctx.xer);
	// bgt cr6,0x8247bbc4
	if (ctx.cr6.gt) goto loc_8247BBC4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8247BBC4:
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8247BBC8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8247bbf4
	if (!ctx.cr6.eq) goto loc_8247BBF4;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8247bbe4
	if (!ctx.cr6.eq) goto loc_8247BBE4;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x8247bc0c
	goto loc_8247BC0C;
loc_8247BBE4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8247c598
	ctx.lr = 0x8247BBF0;
	sub_8247C598(ctx, base);
	// b 0x8247bc0c
	goto loc_8247BC0C;
loc_8247BBF4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bctrl 
	ctx.lr = 0x8247BC0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8247BC0C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8247bc80
	if (!ctx.cr6.eq) goto loc_8247BC80;
loc_8247BC14:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8247bb98
	if (ctx.cr6.eq) goto loc_8247BB98;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8247BC44:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r31
	ea = r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bc68
	if (!ctx.cr6.eq) goto loc_8247BC68;
	// stdcx. r6,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bc44
	if (!ctx.cr0.eq) goto loc_8247BC44;
	// b 0x8247bc70
	goto loc_8247BC70;
loc_8247BC68:
	// stdcx. r8,0,r31
	ea = r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BC70:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247bc14
	if (!ctx.cr6.eq) goto loc_8247BC14;
	// b 0x8247b984
	goto loc_8247B984;
loc_8247BC80:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bc80
	if (!ctx.cr0.eq) goto loc_8247BC80;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
loc_8247BCA4:
	// stdcx. r5,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BCAC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8247b9a4
	if (!ctx.cr6.eq) goto loc_8247B9A4;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8247BCC8:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x8247bd2c
	if (!ctx.cr6.eq) goto loc_8247BD2C;
	// stdcx. r5,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bcc8
	if (!ctx.cr0.eq) goto loc_8247BCC8;
	// b 0x8247bd34
	goto loc_8247BD34;
loc_8247BCEC:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8247BCFC:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x8247bd20
	if (!ctx.cr6.eq) goto loc_8247BD20;
	// stdcx. r4,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8247bcfc
	if (!ctx.cr0.eq) goto loc_8247BCFC;
	// b 0x8247b9a4
	goto loc_8247B9A4;
loc_8247BD20:
	// stdcx. r6,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x8247b9a4
	goto loc_8247B9A4;
loc_8247BD2C:
	// stdcx. r8,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8247BD34:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8247bd54
	if (ctx.cr6.eq) goto loc_8247BD54;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8247bd54
	if (!ctx.cr6.gt) goto loc_8247BD54;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8247c540
	ctx.lr = 0x8247BD54;
	sub_8247C540(ctx, base);
loc_8247BD54:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_824A9628) {
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
	ctx.lr = 0x824A9630;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vsrah v12,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v11,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r5,r9,r4
	ctx.r5.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v5,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v4,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v1,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vperm128 v10,v62,v59,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v56,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor v11,v5,v5
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v5.u8));
	// vperm128 v9,v57,v54,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// lvx128 v53,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,48
	r30.s64 = 48;
	// lvsl v7,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v60,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v3,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v2,v11,v4,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), 14));
	// lvx128 v52,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v8,v56,v53,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v51,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v7,v60,v52,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vsubshs v5,v2,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v55,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrglb v31,v0,v8
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v50,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v58,v51,v4
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvsl v2,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v30,v0,v7
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v1,v5,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// lvx128 v49,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v5,v55,v50,v2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvsl v4,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v2,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r29,144
	r29.s64 = 144;
	// vsrah v29,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vperm128 v4,v49,v48,v4
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r9,192
	ctx.r9.s64 = 192;
	// vmrghb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r5,240
	ctx.r5.s64 = 240;
	// vsldoi v25,v10,v3,2
	simde_mm_store_si128((simde__m128i*)v25.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), 14));
	// li r4,288
	ctx.r4.s64 = 288;
	// vaddshs v26,v29,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vmrglb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// li r3,336
	ctx.r3.s64 = 336;
	// vmrghb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsubshs v21,v25,v10
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrglb v24,v0,v4
	simde_mm_store_si128((simde__m128i*)v24.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v26,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v0,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vsldoi v23,v9,v2,2
	simde_mm_store_si128((simde__m128i*)v23.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), 14));
	// vsldoi v22,v8,v31,2
	simde_mm_store_si128((simde__m128i*)v22.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)v31.u8), 14));
	// vsldoi v20,v7,v30,2
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)v30.u8), 14));
	// vsldoi v17,v0,v24,2
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)v24.u8), 14));
	// vsubshs v16,v23,v9
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vsldoi v19,v6,v28,2
	simde_mm_store_si128((simde__m128i*)v19.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)v28.u8), 14));
	// vsubshs v15,v22,v8
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vsldoi v18,v5,v27,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)v27.u8), 14));
	// vsubshs v14,v20,v7
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v2,v21,v12
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsubshs v3,v17,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// vsubshs v11,v19,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsubshs v4,v18,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v1,v16,v12
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v31,v15,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v30,v14,v12
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v29,v11,v12
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v28,v4,v12
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vaddshs v27,v3,v12
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsrah v26,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v25,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v24,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v23,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v27,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vaddshs v19,v26,v10
	simde_mm_store_si128((simde__m128i*)v19.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v18,v25,v9
	simde_mm_store_si128((simde__m128i*)v18.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v17,v24,v8
	simde_mm_store_si128((simde__m128i*)v17.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v16,v23,v7
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v23.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v15,v22,v6
	simde_mm_store_si128((simde__m128i*)v15.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// stvx128 v19,r31,r30
	ea = (r31.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v14,v21,v5
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// stvx128 v18,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v0,v20,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v0.s16)));
	// stvx128 v17,r31,r29
	ea = (r31.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v16,r31,r9
	ea = (r31.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v15,r31,r5
	ea = (r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v15.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v14,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v14.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824B1248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// li r9,1104
	ctx.r9.s64 = 1104;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lvx128 v1,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x824b0010
	sub_824B0010(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824B1A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B1A68;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824a9408
	ctx.lr = 0x824B1A90;
	sub_824A9408(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0b18
	ctx.lr = 0x824B1AB0;
	sub_824B0B18(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B22B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x824B22B8;
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x824a9408
	ctx.lr = 0x824B22E0;
	sub_824A9408(ctx, base);
	// li r10,1104
	ctx.r10.s64 = 1104;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0d48
	ctx.lr = 0x824B2300;
	sub_824B0D48(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824B2570) {
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
	ctx.lr = 0x824B2578;
	// stwu r1,-1024(r1)
	ea = -1024 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// stw r5,1060(r1)
	REX_STORE_U32(ctx.r1.u32 + 1060, ctx.r5.u32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// stw r6,1068(r1)
	REX_STORE_U32(ctx.r1.u32 + 1068, ctx.r6.u32);
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x824b2a20
	if (ctx.cr6.eq) goto loc_824B2A20;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// beq cr6,0x824b285c
	if (ctx.cr6.eq) goto loc_824B285C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b27e8
	if (!ctx.cr6.gt) goto loc_824B27E8;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r14,-96
	r14.s64 = -96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r5,-48
	ctx.r5.s64 = -48;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,96
	ctx.r7.s64 = 96;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r15,144
	r15.s64 = 144;
	// li r16,192
	r16.s64 = 192;
	// li r17,240
	r17.s64 = 240;
	// li r18,-80
	r18.s64 = -80;
	// li r19,-32
	r19.s64 = -32;
	// li r20,64
	r20.s64 = 64;
	// li r21,112
	r21.s64 = 112;
	// li r22,160
	r22.s64 = 160;
	// li r23,208
	r23.s64 = 208;
	// li r24,256
	r24.s64 = 256;
loc_824B2610:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r9
	r31.u64 = r31.u64 + ctx.r9.u64;
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r30,r8,r4
	r30.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v5,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// add r26,r9,r4
	r26.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v62,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r27,r31,r4
	r27.u64 = r31.u64 + ctx.r4.u64;
	// add r29,r30,r4
	r29.u64 = r30.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v28,v0,v5
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r28,r28,r9
	r28.u64 = r28.u64 + ctx.r9.u64;
	// vmrglb v27,v0,v5
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r25,r29,r4
	r25.u64 = r29.u64 + ctx.r4.u64;
	// lvx128 v56,r26,r10
	ea = (r26.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r26
	temp.u32 = r26.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v59,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v62,v56,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v57,r31,r4
	ea = (r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r27,r10
	ea = (r27.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r27
	temp.u32 = r27.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v59,v55,v6
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v57,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v9,v60,v53,v4
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v51,r30,r4
	ea = (r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v8,v58,v52,v3
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// lvx128 v50,r29,r4
	ea = (r29.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v49,r29,r10
	ea = (r29.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v3,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v48,r25,r10
	ea = (r25.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v2,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v47,r28,r10
	ea = (r28.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v1,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v9
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r28
	temp.u32 = r28.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r29
	temp.u32 = r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r25
	temp.u32 = r25.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v46,v47,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v7,v51,v49,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vadduhm v23,v3,v28
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vperm128 v6,v50,v48,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// vadduhm v26,v2,v3
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vmrglb v11,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v20,v0,v4
	simde_mm_store_si128((simde__m128i*)v20.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v24,v31,v1
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v1.u16)));
	// vmrghb v29,v0,v7
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v22,v30,v31
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v21,v12,v27
	simde_mm_store_si128((simde__m128i*)v21.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v19,v11,v12
	simde_mm_store_si128((simde__m128i*)v19.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vmrglb v14,v0,v4
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v18,v29,v30
	simde_mm_store_si128((simde__m128i*)v18.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vmrglb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v17,v28,v29
	simde_mm_store_si128((simde__m128i*)v17.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v15,v20,v28
	simde_mm_store_si128((simde__m128i*)v15.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v20.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vmrglb v6,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v12,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v5,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v22,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vadduhm v2,v10,v11
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v1,v9,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v16,r11,r14
	ea = (ctx.r11.u32 + r14.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v16.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v31,v8,v9
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v12,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v30,v7,v8
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v29,v6,v7
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// stvx128 v4,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v28,v14,v6
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v14.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v3,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v27,v18,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v18.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// vslh v26,v17,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v17.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v24,v21,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v23,v19,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v19.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v25,v15,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v15.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v27,r11,r15
	ea = (ctx.r11.u32 + r15.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v22,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v26,r11,r16
	ea = (ctx.r11.u32 + r16.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v21,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v24,r11,r18
	ea = (ctx.r11.u32 + r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v20,v31,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v23,r11,r19
	ea = (ctx.r11.u32 + r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v19,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r11,r17
	ea = (ctx.r11.u32 + r17.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v18,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v17,v28,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v21,r11,r20
	ea = (ctx.r11.u32 + r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r11,r21
	ea = (ctx.r11.u32 + r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r11,r22
	ea = (ctx.r11.u32 + r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v18,r11,r23
	ea = (ctx.r11.u32 + r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v18.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v17,r11,r24
	ea = (ctx.r11.u32 + r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v17.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,384
	ctx.r11.s64 = ctx.r11.s64 + 384;
	// bdnz 0x824b2610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B2610;
	// lwz r28,1068(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1068);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_824B27E8:
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b2ae0
	if (!ctx.cr6.gt) goto loc_824B2AE0;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r29,r10,r4
	r29.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r3,-48
	ctx.r9.s64 = ctx.r3.s64 + -48;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_824B281C:
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + ctx.r11.u32);
	// lbzux r3,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// add r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r3,r30,r6
	ctx.r3.u64 = r30.u64 + ctx.r6.u64;
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// sth r3,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r3.u16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sthu r6,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824b281c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B281C;
	// b 0x824b2ae0
	goto loc_824B2AE0;
loc_824B285C:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v45,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v44,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r3,r4
	r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v43,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvsl v2,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v45,v43,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v42,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v41,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v30,v44,v38,v2
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// lvx128 v40,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,192
	r29.s64 = ctx.r1.s64 + 192;
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r8,r4
	ctx.r11.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v39,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v31,v0,v6
	simde_mm_store_si128((simde__m128i*)v31.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r11,r4
	r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vperm128 v3,v42,v41,v5
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v42.u8), simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v35,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v1,v40,v39,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v34,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v12,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v37,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,240
	r30.s64 = ctx.r1.s64 + 240;
	// lvx128 v62,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v33,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v10,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v32,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v5,v12,v31
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// lvx128 v63,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,288
	r27.s64 = ctx.r1.s64 + 288;
	// lvsl v7,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v2,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v30,v11,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v63,v37,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v28,v36,v62,v2
	simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8)));
	// vperm128 v1,v35,v33,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// vperm128 v31,v34,v32,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vadduhm v29,v10,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vmrghb v7,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v26,v30,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v6,v0,v28
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v9,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,336
	r31.s64 = ctx.r1.s64 + 336;
	// vmrghb v8,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,384
	r26.s64 = ctx.r1.s64 + 384;
	// vadduhm v3,v6,v7
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vadduhm v25,v9,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// addi r25,r1,432
	r25.s64 = ctx.r1.s64 + 432;
	// vadduhm v24,v8,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// stvx128 v26,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v4,v7,v8
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// stvx128 v27,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v2,v29,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vperm128 v1,v61,v60,v5
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vslh v31,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r5,4
	ctx.r5.s64 = 4;
	// vslh v30,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v27,v0,v1
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r1,64
	ctx.r9.s64 = ctx.r1.s64 + 64;
	// stvx128 v2,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stvx128 v31,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v27,v6
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// stvx128 v30,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// stvx128 v28,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// vslh v25,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v25,r0,r25
	ea = (r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824B29E0:
	// lbzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// lbzux r30,r8,r11
	ea = ctx.r8.u32 + ctx.r11.u32;
	r30.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sth r6,48(r9)
	REX_STORE_U16(ctx.r9.u32 + 48, ctx.r6.u16);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sthu r3,96(r9)
	ea = 96 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r3.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x824b29e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B29E0;
	// b 0x824b2ae0
	goto loc_824B2AE0;
loc_824B2A20:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v59,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r10,16
	ctx.r10.s64 = 16;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v56,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// lvx128 v55,r11,r10
	ea = (ctx.r11.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// lvx128 v54,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,240
	r29.s64 = ctx.r1.s64 + 240;
	// lvx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v6,v59,v52,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v58,v54,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvsl v1,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v57,v55,v4
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// vperm128 v30,v56,v53,v3
	simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vperm128 v29,v50,v51,v1
	simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v30
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v26,v11,v12
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v25,v10,v11
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v24,v12,v28
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// vadduhm v23,v27,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vslh v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// stvx128 v22,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r0,r30
	ea = (r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824B2AE0:
	// li r11,1104
	ctx.r11.s64 = 1104;
	// lwz r5,1060(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 1060);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lvx128 v1,r28,r11
	ea = (r28.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x824b0fd8
	ctx.lr = 0x824B2AF8;
	sub_824B0FD8(ctx, base);
	// addi r1,r1,1024
	ctx.r1.s64 = ctx.r1.s64 + 1024;
	// b 0x822d4ea0
	return;
}

