#include "soulcalibur2_funcs.53.h"

DEFINE_REX_FUNC(sub_820E2180) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x820e00c0
	ctx.lr = 0x820E21A8;
	sub_820E00C0(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820e00c0
	ctx.lr = 0x820E21B8;
	sub_820E00C0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_820E8258) {
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
	// bl 0x820e80c0
	ctx.lr = 0x820E8270;
	sub_820E80C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821ffed0
	ctx.lr = 0x820E827C;
	sub_821FFED0(ctx, base);
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

DEFINE_REX_FUNC(sub_820EB138) {
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
	ctx.lr = 0x820EB140;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eb15c
	if (!ctx.cr6.eq) goto loc_820EB15C;
	// bl 0x820eaee8
	ctx.lr = 0x820EB15C;
	sub_820EAEE8(ctx, base);
loc_820EB15C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820eb310
	if (ctx.cr6.eq) goto loc_820EB310;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x820EB17C;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820eb190
	if (!ctx.cr0.eq) goto loc_820EB190;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_820EB190:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lbz r10,211(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 211);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820eb1b4
	if (ctx.cr0.eq) goto loc_820EB1B4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// bl 0x820eaee8
	ctx.lr = 0x820EB1B0;
	sub_820EAEE8(ctx, base);
	// b 0x820eb310
	goto loc_820EB310;
loc_820EB1B4:
	// lwz r10,10140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addic. r29,r11,20348
	ctx.xer.ca = ctx.r11.u32 > 4294946947;
	r29.s64 = ctx.r11.s64 + 20348;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x820eb1cc
	if (!ctx.cr0.eq) goto loc_820EB1CC;
	// li r28,1
	r28.s64 = 1;
loc_820EB1CC:
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f1,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0088
	ctx.lr = 0x820EB1E4;
	sub_820E0088(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f1,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x820EB1FC;
	sub_820E0028(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// fmadds f0,f1,f0,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f1,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820eb23c
	if (!ctx.cr6.eq) goto loc_820EB23C;
	// bl 0x820e0088
	ctx.lr = 0x820EB220;
	sub_820E0088(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x820EB230;
	sub_820E0028(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820eb260
	goto loc_820EB260;
loc_820EB23C:
	// bl 0x820e0088
	ctx.lr = 0x820EB240;
	sub_820E0088(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f1.f64 = double(temp.f32);
	// fneg f31,f0
	f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0028
	ctx.lr = 0x820EB254;
	sub_820E0028(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820EB260:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82202540
	ctx.lr = 0x820EB288;
	sub_82202540(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x820eb2f0
	if (!ctx.cr6.eq) goto loc_820EB2F0;
	// lfs f0,48(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f11,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,16608(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16608);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f12,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f13,52(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// lfs f1,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f1.f64 = double(temp.f32);
	// stfs f13,156(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// lfs f13,56(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmadds f3,f13,f0,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfs f3,160(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB2F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EB2F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EB310:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FA1D8) {
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
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r5,6384(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 6384);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r11,r11,6648
	ctx.r11.s64 = ctx.r11.s64 + 6648;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// mulli r10,r10,596
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(596));
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FA214;
	sub_820F8D58(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f13,6388(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 6388);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f0,1840(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,6388(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 6388, temp.u32);
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

DEFINE_REX_FUNC(sub_820FC5E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r9,r11,9968
	ctx.r9.s64 = ctx.r11.s64 + 9968;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r9,-112
	ctx.r11.s64 = ctx.r9.s64 + -112;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC604:
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
	// bdnz 0x820fc604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC604;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC658:
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
	// bdnz 0x820fc658
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC658;
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

DEFINE_REX_FUNC(sub_820FF268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// fctiwz f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r10,-12(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r10,528
	ctx.r11.s64 = ctx.r10.s64 + 528;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// li r8,1
	ctx.r8.s64 = 1;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// li r7,255
	ctx.r7.s64 = 255;
	// lbz r9,14(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 14);
	// stfs f3,76(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stb r8,54(r3)
	REX_STORE_U8(ctx.r3.u32 + 54, ctx.r8.u8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 64;
	// stfs f0,68(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stb r7,55(r3)
	REX_STORE_U8(ctx.r3.u32 + 55, ctx.r7.u8);
	// stb r11,52(r3)
	REX_STORE_U8(ctx.r3.u32 + 52, ctx.r11.u8);
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// stb r10,14(r3)
	REX_STORE_U8(ctx.r3.u32 + 14, ctx.r10.u8);
	// fsubs f0,f1,f12
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f12.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// fsubs f0,f2,f13
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// stfs f0,84(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 84, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82101C90) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f0,f1,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f4.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f2,f5
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f5.f64));
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// li r5,-1
	ctx.r5.s64 = -1;
	// stfs f3,88(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f3,104(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bl 0x821e8678
	ctx.lr = 0x82101CE0;
	sub_821E8678(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821070C0) {
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
	ctx.lr = 0x821070D4;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x821070F0;
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
	ctx.lr = 0x82107104;
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

DEFINE_REX_FUNC(sub_82107488) {
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
	ctx.lr = 0x8210749C;
	sub_82106650(ctx, base);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r31,r10,22960
	r31.s64 = ctx.r10.s64 + 22960;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x82106c48
	ctx.lr = 0x821074B8;
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
	ctx.lr = 0x821074CC;
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

DEFINE_REX_FUNC(sub_82108BC8) {
	REX_FUNC_PROLOGUE();
	// lhz r11,90(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 90);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x82108c0c
	if (ctx.cr6.gt) goto loc_82108C0C;
	// beq cr6,0x82108bf8
	if (ctx.cr6.eq) goto loc_82108BF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82108bf8
	if (ctx.cr6.eq) goto loc_82108BF8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x82108c2c
	if (!ctx.cr6.gt) goto loc_82108C2C;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// ble cr6,0x82108bf8
	if (!ctx.cr6.gt) goto loc_82108BF8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82108c2c
	if (!ctx.cr6.eq) goto loc_82108C2C;
loc_82108BF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82108BFC:
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// addi r10,r10,22536
	ctx.r10.s64 = ctx.r10.s64 + 22536;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// blr 
	return;
loc_82108C0C:
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// beq cr6,0x82108bf8
	if (ctx.cr6.eq) goto loc_82108BF8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82108bf8
	if (ctx.cr6.eq) goto loc_82108BF8;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// ble cr6,0x82108c2c
	if (!ctx.cr6.gt) goto loc_82108C2C;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// ble cr6,0x82108bf8
	if (!ctx.cr6.gt) goto loc_82108BF8;
loc_82108C2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82108bfc
	goto loc_82108BFC;
}

DEFINE_REX_FUNC(sub_8210DF70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r11,220(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8210dfa0
	if (ctx.cr0.eq) goto loc_8210DFA0;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8210DFA0:
	// lbz r11,220(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 220);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm. r8,r10,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f12,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,28672(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28672);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x8210dfec
	if (ctx.cr0.eq) goto loc_8210DFEC;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8210dfec
	if (!ctx.cr6.lt) goto loc_8210DFEC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8210DFEC:
	// rlwinm. r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e024
	if (ctx.cr0.eq) goto loc_8210E024;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// ble cr6,0x8210e024
	if (!ctx.cr6.gt) goto loc_8210E024;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_8210E024:
	// rlwinm. r11,r10,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e054
	if (ctx.cr0.eq) goto loc_8210E054;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8210e054
	if (!ctx.cr6.lt) goto loc_8210E054;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8210E054:
	// rlwinm. r11,r10,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8210e08c
	if (ctx.cr0.eq) goto loc_8210E08C;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,16032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16032);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8210e08c
	if (!ctx.cr6.gt) goto loc_8210E08C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8210E08C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm. r9,r10,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfs f13,2360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2360);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x8210e0d8
	if (ctx.cr0.eq) goto loc_8210E0D8;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,28668(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28668);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f12,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8210e0cc
	if (!ctx.cr6.gt) goto loc_8210E0CC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8210E0CC:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
loc_8210E0D8:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// lfs f0,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f13,64(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8210e110
	if (!ctx.cr6.lt) goto loc_8210E110;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
loc_8210E110:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82115FD8) {
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
	// stw r4,212(r3)
	REX_STORE_U32(ctx.r3.u32 + 212, ctx.r4.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f5,252(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 252, temp.u32);
	// stfs f1,216(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// stw r8,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r8.u32);
	// addi r11,r11,31380
	ctx.r11.s64 = ctx.r11.s64 + 31380;
	// stfs f2,220(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stfs f3,224(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f4,228(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stfs f6,232(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// addi r4,r10,31364
	ctx.r4.s64 = ctx.r10.s64 + 31364;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// bl 0x822d55f8
	ctx.lr = 0x8211602C;
	sub_822D55F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,61(r31)
	REX_STORE_U8(r31.u32 + 61, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821174E0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x821174E8;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f24
	ctx.lr = 0x821174F0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,268(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,272(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// li r27,1
	r27.s64 = 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82117514
	if (ctx.cr6.eq) goto loc_82117514;
	// stb r27,308(r3)
	REX_STORE_U8(ctx.r3.u32 + 308, r27.u8);
loc_82117514:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-999
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -999, ctx.xer);
	// beq cr6,0x8211762c
	if (ctx.cr6.eq) goto loc_8211762C;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8211762c
	if (ctx.cr6.eq) goto loc_8211762C;
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// beq cr6,0x8211762c
	if (ctx.cr6.eq) goto loc_8211762C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8211762c
	if (ctx.cr6.eq) goto loc_8211762C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r30,r31,160
	r30.s64 = r31.s64 + 160;
	// li r28,20
	r28.s64 = 20;
	// lfs f30,31344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31344);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f29,17064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 17064);
	f29.f64 = double(temp.f32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lfs f27,16600(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16600);
	f27.f64 = double(temp.f32);
	// lfs f28,2012(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2012);
	f28.f64 = double(temp.f32);
loc_82117574:
	// lfs f26,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 288);
	f26.f64 = double(temp.f32);
	// lfs f25,292(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 292);
	f25.f64 = double(temp.f32);
	// bl 0x821fedc8
	ctx.lr = 0x82117580;
	sub_821FEDC8(ctx, base);
	// fmadds f24,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	f24.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// lfs f23,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f23.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e0028
	ctx.lr = 0x82117590;
	sub_820E0028(ctx, base);
	// fmuls f0,f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f24.f64));
	// fadds f31,f31,f27
	f31.f64 = double(float(f31.f64 + f27.f64));
	// fmadds f0,f0,f25,f23
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f25.f64, f23.f64)));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x821175b0
	if (!ctx.cr6.gt) goto loc_821175B0;
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
loc_821175B0:
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82117574
	if (!ctx.cr0.eq) goto loc_82117574;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,29700(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29700);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(f30.f64, ctx.f0.f64);
	// ble cr6,0x82117638
	if (!ctx.cr6.gt) goto loc_82117638;
	// li r11,20
	ctx.r11.s64 = 20;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r30,-4
	ctx.r10.s64 = r30.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821175DC:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821175dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821175DC;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,304(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 304);
	// stw r27,264(r31)
	REX_STORE_U32(r31.u32 + 264, r27.u32);
	// addi r11,r11,23040
	ctx.r11.s64 = ctx.r11.s64 + 23040;
	// stw r9,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// bne cr6,0x82117638
	if (!ctx.cr6.eq) goto loc_82117638;
	// lwz r11,268(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 268);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82117638
	if (ctx.cr6.lt) goto loc_82117638;
	// lbz r10,308(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 308);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82117638
	if (!ctx.cr0.eq) goto loc_82117638;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82117638
	goto loc_82117638;
loc_8211762C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r27,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r27.u16);
loc_82117638:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f70
	ctx.lr = 0x82117644;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8211C740) {
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
	ctx.lr = 0x8211C748;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f2c
	ctx.lr = 0x8211C750;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lhz r11,432(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 432);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8211c934
	if (!ctx.cr0.eq) goto loc_8211C934;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r3,136
	r28.s64 = ctx.r3.s64 + 136;
	// li r29,2
	r29.s64 = 2;
	// addi r31,r28,76
	r31.s64 = r28.s64 + 76;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f26,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f26.f64 = double(temp.f32);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmr f27,f31
	f27.f64 = f31.f64;
	// fmr f30,f26
	f30.f64 = f26.f64;
	// lfs f25,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f25.f64 = double(temp.f32);
loc_8211C79C:
	// addi r3,r31,-76
	ctx.r3.s64 = r31.s64 + -76;
	// bl 0x8211c1b0
	ctx.lr = 0x8211C7A4;
	sub_8211C1B0(ctx, base);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// bl 0x8211c1b0
	ctx.lr = 0x8211C7AC;
	sub_8211C1B0(ctx, base);
	// addi r3,r31,-12
	ctx.r3.s64 = r31.s64 + -12;
	// bl 0x8211c1b0
	ctx.lr = 0x8211C7B4;
	sub_8211C1B0(ctx, base);
	// lfs f1,-76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8211C7BC;
	sub_820E0028(ctx, base);
	// lfs f0,-64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,-44(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -44);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f29,f0,f30,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211C7D0;
	sub_820E0028(ctx, base);
	// lfs f0,-32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f1,-12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f28,f0,f30,f28
	f28.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f28.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8211C7E4;
	sub_820E0028(ctx, base);
	// fabs f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f27,f0,f30,f27
	f27.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f27.f64)));
	// fmuls f30,f30,f25
	f30.f64 = double(float(f30.f64 * f25.f64));
	// bne 0x8211c79c
	if (!ctx.cr0.eq) goto loc_8211C79C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-30672(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30672);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f27,f0
	f30.f64 = double(float(f27.f64 * ctx.f0.f64));
	// fmuls f29,f29,f0
	f29.f64 = double(float(f29.f64 * ctx.f0.f64));
	// fmuls f28,f28,f0
	f28.f64 = double(float(f28.f64 * ctx.f0.f64));
	// fcmpu cr6,f30,f31
	ctx.cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x8211c83c
	if (!ctx.cr6.lt) goto loc_8211C83C;
	// bl 0x821fef70
	ctx.lr = 0x8211C828;
	sub_821FEF70(ctx, base);
	// lfs f0,108(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211c83c
	if (!ctx.cr6.lt) goto loc_8211C83C;
	// fmr f0,f31
	ctx.f0.f64 = f31.f64;
	// b 0x8211c840
	goto loc_8211C840;
loc_8211C83C:
	// fadds f0,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f30.f64 + f26.f64));
loc_8211C840:
	// lfs f13,96(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f13,284(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 284, temp.u32);
	// lfs f13,100(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,288(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 288, temp.u32);
	// lfs f13,104(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,292(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 292, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8211c8c8
	if (!ctx.cr6.gt) goto loc_8211C8C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8211c8a8
	if (!ctx.cr6.lt) goto loc_8211C8A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,16372(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16372);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,17064(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 17064);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x820e0028
	ctx.lr = 0x8211C898;
	sub_820E0028(ctx, base);
	// fadds f0,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f26.f64));
	// lfs f13,292(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x8211c8c0
	goto loc_8211C8C0;
loc_8211C8A8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f1,f0,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - f26.f64));
	// lfd f2,-30680(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -30680);
	// bl 0x822d5b48
	ctx.lr = 0x8211C8B8;
	sub_822D5B48(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
loc_8211C8C0:
	// stfs f0,292(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 292, temp.u32);
	// b 0x8211c8cc
	goto loc_8211C8CC;
loc_8211C8C8:
	// stfs f31,292(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 292, temp.u32);
loc_8211C8CC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e01b0
	ctx.lr = 0x8211C8D4;
	sub_820E01B0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f2,288(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 288);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f1,284(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 284);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8211C8E8;
	sub_820E0EC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,292(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f26,92(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,16648(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e1d28
	ctx.lr = 0x8211C918;
	sub_820E1D28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r30,112
	ctx.r4.s64 = r30.s64 + 112;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f1,16268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16268);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x8211C930;
	sub_820E2028(ctx, base);
	// stfs f26,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r30.u32 + 124, temp.u32);
loc_8211C934:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x822d4f78
	ctx.lr = 0x8211C940;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82124738) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lha r7,98(r4)
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r4.u32 + 98));
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// addi r6,r11,34
	ctx.r6.s64 = ctx.r11.s64 + 34;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r5
	ctx.r6.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r9,13432
	ctx.r11.s64 = ctx.r9.s64 + 13432;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821247a0
	if (!ctx.cr6.gt) goto loc_821247A0;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82124798
	if (!ctx.cr6.eq) goto loc_82124798;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82124798:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821247c4
	goto loc_821247C4;
loc_821247A0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwzx r11,r8,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821247c0
	if (!ctx.cr6.eq) goto loc_821247C0;
	// li r3,2
	ctx.r3.s64 = 2;
loc_821247C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_821247C4:
	// stwx r11,r8,r10
	REX_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82126D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, f29.u64);
	// stfd f30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f2,88(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x82125218
	ctx.lr = 0x82126DD8;
	sub_82125218(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bne cr6,0x82126ec4
	if (!ctx.cr6.eq) goto loc_82126EC4;
	// fmuls f13,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 * f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f30,f30,f13
	ctx.f13.f64 = double(float(std::fma(f30.f64, f30.f64, ctx.f13.f64)));
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82126e08
	if (!ctx.cr6.lt) goto loc_82126E08;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// b 0x82126ec4
	goto loc_82126EC4;
loc_82126E08:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e2290
	ctx.lr = 0x82126E3C;
	sub_820E2290(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,-30116(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82126E50;
	sub_820E1CC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,2372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2372);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x821256c0
	ctx.lr = 0x82126E74;
	sub_821256C0(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e2358
	ctx.lr = 0x82126E80;
	sub_820E2358(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16624);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x82126ec4
	if (!ctx.cr6.gt) goto loc_82126EC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2016(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2016);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82126eb8
	if (!ctx.cr6.lt) goto loc_82126EB8;
	// fmr f31,f13
	f31.f64 = ctx.f13.f64;
	// b 0x82126ec4
	goto loc_82126EC4;
loc_82126EB8:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x82126ec4
	if (ctx.cr6.gt) goto loc_82126EC4;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_82126EC4:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212B838) {
	REX_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8212b5e8
	sub_8212B5E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212B840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8212B848;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32175
	ctx.r9.s64 = -2108620800;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r9,r9,-5720
	ctx.r9.s64 = ctx.r9.s64 + -5720;
	// li r3,24
	ctx.r3.s64 = 24;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r30,-1
	r30.s64 = -1;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r29,r10,27
	r29.u64 = ctx.r10.u32 & 0x1F;
	// stfs f1,108(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 108, temp.u32);
	// bl 0x82202fd8
	ctx.lr = 0x8212B878;
	sub_82202FD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8e0
	ctx.lr = 0x8212B880;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212b8dc
	if (ctx.cr0.eq) goto loc_8212B8DC;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8212b520
	ctx.lr = 0x8212B8A4;
	sub_8212B520(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8212b8bc
	if (!ctx.cr0.lt) goto loc_8212B8BC;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-22984(r10)
	REX_STORE_U32(ctx.r10.u32 + -22984, ctx.r11.u32);
	// b 0x8212b8c4
	goto loc_8212B8C4;
loc_8212B8BC:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r29,-22984(r11)
	REX_STORE_U32(ctx.r11.u32 + -22984, r29.u32);
loc_8212B8C4:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-23684
	ctx.r8.s64 = ctx.r9.s64 + -23684;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-23684(r9)
	REX_STORE_U32(ctx.r9.u32 + -23684, ctx.r10.u32);
	// stw r11,612(r8)
	REX_STORE_U32(ctx.r8.u32 + 612, ctx.r11.u32);
loc_8212B8DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8212D358) {
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
	ctx.lr = 0x8212D378;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212d3b0
	if (ctx.cr0.eq) goto loc_8212D3B0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x8212b520
	ctx.lr = 0x8212D39C;
	sub_8212B520(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x8212d3b0
	if (ctx.cr0.lt) goto loc_8212D3B0;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-23072(r10)
	REX_STORE_U32(ctx.r10.u32 + -23072, ctx.r11.u32);
loc_8212D3B0:
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

DEFINE_REX_FUNC(sub_8212FDB0) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lha r3,526(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 526));
	// bl 0x821c4fd0
	ctx.lr = 0x8212FDD8;
	sub_821C4FD0(ctx, base);
	// lhz r11,126(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 126);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lfs f1,32280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x820e6950
	ctx.lr = 0x8212FDF4;
	sub_820E6950(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// addis r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 184549376;
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// lwz r4,344(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x8212FE14;
	sub_820E68B8(ctx, base);
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

DEFINE_REX_FUNC(sub_821309C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f12,f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f3.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fadds f13,f2,f4
	ctx.f13.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// stfs f2,84(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// stfs f2,116(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,26936(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f1,92(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f1,108(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f1,140(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// blt cr6,0x82130b10
	if (ctx.cr6.lt) goto loc_82130B10;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x82130a90
	if (ctx.cr6.lt) goto loc_82130A90;
	// bne cr6,0x82130b84
	if (!ctx.cr6.eq) goto loc_82130B84;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16232(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f13,156(r1)
	temp.f32 = float(ctx.f13.f64);
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
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f13,188(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f0,192(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f0,200(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// b 0x82130b74
	goto loc_82130B74;
loc_82130A90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lfs f13,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82130aa8
	if (!ctx.cr6.eq) goto loc_82130AA8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82130ab0
	goto loc_82130AB0;
loc_82130AA8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_82130AB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f13,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f13,236(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,252(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// stfs f0,268(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 268, temp.u32);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lfs f0,-25108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25108);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-25112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -25112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-25116(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,208(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,212(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f12,216(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stfs f13,228(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// stfs f12,232(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 232, temp.u32);
	// stfs f0,240(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 240, temp.u32);
	// stfs f13,244(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// stfs f12,248(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 248, temp.u32);
	// stfs f0,256(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 256, temp.u32);
	// stfs f13,260(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// stfs f12,264(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 264, temp.u32);
	// b 0x82130b74
	goto loc_82130B74;
loc_82130B10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-25120(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -25120);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,16688(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16688);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,272(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 272, temp.u32);
	// stfs f0,276(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// stfs f12,280(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// stfs f13,284(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// stfs f0,288(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 288, temp.u32);
	// stfs f0,292(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 292, temp.u32);
	// stfs f11,296(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 296, temp.u32);
	// stfs f13,300(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 300, temp.u32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// stfs f0,308(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// stfs f12,312(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 312, temp.u32);
	// stfs f13,316(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 316, temp.u32);
	// stfs f0,320(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// stfs f0,324(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stfs f11,328(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// stfs f13,332(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 332, temp.u32);
loc_82130B74:
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x821e7c08
	ctx.lr = 0x82130B84;
	sub_821E7C08(ctx, base);
loc_82130B84:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213EA38) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r3,84
	ctx.r7.s64 = ctx.r3.s64 + 84;
loc_8213EA54:
	// li r11,6
	ctx.r11.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8213EA60:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,10
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(10));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213eaa8
	if (ctx.cr6.eq) goto loc_8213EAA8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
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
	// b 0x8213eaac
	goto loc_8213EAAC;
loc_8213EAA8:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8213EAAC:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8213eab8
	if (ctx.cr6.eq) goto loc_8213EAB8;
	// stbx r4,r7,r9
	REX_STORE_U8(ctx.r7.u32 + ctx.r9.u32, ctx.r4.u8);
loc_8213EAB8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8213ea60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213EA60;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// cmpwi cr6,r8,10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 10, ctx.xer);
	// blt cr6,0x8213ea54
	if (ctx.cr6.lt) goto loc_8213EA54;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82137308
	ctx.lr = 0x8213EAE8;
	sub_82137308(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stbx r10,r11,r31
	REX_STORE_U8(ctx.r11.u32 + r31.u32, ctx.r10.u8);
	// bl 0x8213e980
	ctx.lr = 0x8213EB10;
	sub_8213E980(ctx, base);
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

DEFINE_REX_FUNC(sub_82149268) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821492B0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,23912
	ctx.r10.s64 = ctx.r10.s64 + 23912;
	// stw r11,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82149310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82149344
	if (!ctx.cr6.gt) goto loc_82149344;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8214935c
	goto loc_8214935C;
loc_82149344:
	// fsubs f0,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwa r11,-12(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8214935C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214A148) {
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
	// lha r10,20(r3)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 20));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214A17C;
	sub_820E0AF8(ctx, base);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,48(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,52(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
	// lfs f3,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0d78
	ctx.lr = 0x8214A1B8;
	sub_820E0D78(ctx, base);
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

DEFINE_REX_FUNC(sub_8214B118) {
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
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,24544
	r31.s64 = ctx.r11.s64 + 24544;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = r31.s64 + 16;
	// lfs f31,2020(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2020);
	f31.f64 = double(temp.f32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stfs f1,32(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// blt cr6,0x8214b1a8
	if (ctx.cr6.lt) goto loc_8214B1A8;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e2128
	ctx.lr = 0x8214B19C;
	sub_820E2128(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f31.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// bge cr6,0x8214b1ac
	if (!ctx.cr6.lt) goto loc_8214B1AC;
loc_8214B1A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8214B1AC:
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_8214DEB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r26{};
	PPCRegister r27{};
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
	// bl 0x822d4e80
	ctx.lr = 0x8214DEC0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f20
	ctx.lr = 0x8214DEC8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f30,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lfs f26,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f26.f64 = double(temp.f32);
	// li r28,1
	r28.s64 = 1;
	// lfs f0,28444(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28444);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lfs f24,2000(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2000);
	f24.f64 = double(temp.f32);
	// lfs f23,17064(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 17064);
	f23.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f29,28428(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28428);
	f29.f64 = double(temp.f32);
	// fmr f22,f30
	f22.f64 = f30.f64;
	// lfs f31,27848(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 27848);
	f31.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// fmr f28,f26
	f28.f64 = f26.f64;
	// mr r26,r28
	r26.u64 = r28.u64;
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f25,f30
	f25.f64 = f30.f64;
	// addi r29,r10,13128
	r29.s64 = ctx.r10.s64 + 13128;
	// beq cr6,0x8214e0bc
	if (ctx.cr6.eq) goto loc_8214E0BC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214e088
	if (ctx.cr6.eq) goto loc_8214E088;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214e080
	if (ctx.cr6.eq) goto loc_8214E080;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8214e048
	if (ctx.cr6.eq) goto loc_8214E048;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214df6c
	if (ctx.cr6.eq) goto loc_8214DF6C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8214e12c
	if (!ctx.cr6.eq) goto loc_8214E12C;
	// fmr f25,f26
	f25.f64 = f26.f64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214DF6C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r30,5
	r30.s64 = 5;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// divw r9,r11,r30
	ctx.r9.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// lfs f12,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// mulli r9,r9,5
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(5));
	// lfs f13,16600(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16600);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8214e01c
	if (ctx.cr6.lt) goto loc_8214E01C;
	// beq cr6,0x8214dff8
	if (ctx.cr6.eq) goto loc_8214DFF8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8214e01c
	if (ctx.cr6.lt) goto loc_8214E01C;
	// beq cr6,0x8214dff8
	if (ctx.cr6.eq) goto loc_8214DFF8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8214e01c
	if (ctx.cr6.lt) goto loc_8214E01C;
	// bne cr6,0x8214e12c
	if (!ctx.cr6.eq) goto loc_8214E12C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f26
	ctx.f2.f64 = f26.f64;
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(f30.f64 - ctx.f0.f64));
	// lfs f3,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x8214DFD0;
	sub_82204AE0(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((r30.s32 && !(ctx.r11.s32 == INT32_MIN && r30.s32 == -1)) ? ctx.r11.s32 / r30.s32 : 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214dff0
	if (ctx.cr0.eq) goto loc_8214DFF0;
	// lfs f0,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fneg f28,f0
	f28.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214DFF0:
	// lfs f28,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	f28.f64 = double(temp.f32);
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214DFF8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fneg f28,f13
	f28.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// lfs f0,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f30
	ctx.cr6.compare(ctx.f13.f64, f30.f64);
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-30908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30908);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// b 0x8214e038
	goto loc_8214E038;
loc_8214E01C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f28,96(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	f28.f64 = double(temp.f32);
	// fcmpu cr6,f28,f30
	ctx.cr6.compare(f28.f64, f30.f64);
	// lfs f13,-30908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30908);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f13.f64, -ctx.f12.f64)));
loc_8214E038:
	// stfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// ble cr6,0x8214e12c
	if (!ctx.cr6.gt) goto loc_8214E12C;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8214e0b4
	goto loc_8214E0B4;
loc_8214E048:
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f26
	ctx.cr6.compare(ctx.f13.f64, f26.f64);
	// ble cr6,0x8214e074
	if (!ctx.cr6.gt) goto loc_8214E074;
	// lfs f12,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
loc_8214E05C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f12,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// lfs f12,-24720(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24720);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmadds f27,f13,f31,f0
	f27.f64 = double(float(std::fma(ctx.f13.f64, f31.f64, ctx.f0.f64)));
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214E074:
	// stfs f26,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fmr f27,f0
	f27.f64 = ctx.f0.f64;
	// b 0x8214e128
	goto loc_8214E128;
loc_8214E080:
	// fmr f27,f30
	ctx.fpscr.disableFlushMode();
	f27.f64 = f30.f64;
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214E088:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x8214e0a8
	if (!ctx.cr6.lt) goto loc_8214E0A8;
	// lfs f12,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// b 0x8214e05c
	goto loc_8214E05C;
loc_8214E0A8:
	// stfs f12,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// fmr f27,f30
	f27.f64 = f30.f64;
loc_8214E0B4:
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214E0BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16788(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16788);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8214e11c
	if (!ctx.cr6.lt) goto loc_8214E11C;
	// fmuls f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * f29.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmadds f1,f13,f23,f24
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, f23.f64, f24.f64)));
	// bl 0x820e0028
	ctx.lr = 0x8214E0E8;
	sub_820E0028(ctx, base);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f1.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x820e0028
	ctx.lr = 0x8214E0F4;
	sub_820E0028(ctx, base);
	// fmuls f22,f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = double(float(f22.f64 * ctx.f1.f64));
	// fadds f1,f28,f24
	ctx.f1.f64 = double(float(f28.f64 + f24.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214E100;
	sub_820E0028(ctx, base);
	// fadds f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 + f30.f64));
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1840(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fmuls f28,f13,f23
	f28.f64 = double(float(ctx.f13.f64 * f23.f64));
	// b 0x8214e12c
	goto loc_8214E12C;
loc_8214E11C:
	// stfs f26,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fmr f22,f30
	f22.f64 = f30.f64;
	// fmr f28,f26
	f28.f64 = f26.f64;
loc_8214E128:
	// stw r28,124(r31)
	REX_STORE_U32(r31.u32 + 124, r28.u32);
loc_8214E12C:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f26,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214e61c
	if (ctx.cr6.eq) goto loc_8214E61C;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214e158
	if (ctx.cr6.eq) goto loc_8214E158;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214e158
	if (ctx.cr6.eq) goto loc_8214E158;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x8214e1a8
	goto loc_8214E1A8;
loc_8214E158:
	// lwz r11,1856(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 1856);
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
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
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * f29.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
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
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x8214E19C;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f31,f1,f31,f0
	f31.f64 = double(float(std::fma(ctx.f1.f64, f31.f64, ctx.f0.f64)));
loc_8214E1A8:
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 108);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8214e4f8
	if (!ctx.cr0.eq) goto loc_8214E4F8;
	// lbz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 112);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214e1c4
	if (ctx.cr0.eq) goto loc_8214E1C4;
	// fmr f31,f24
	ctx.fpscr.disableFlushMode();
	f31.f64 = f24.f64;
loc_8214E1C4:
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 109);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8214e4c8
	if (ctx.cr6.eq) goto loc_8214E4C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8214e4a4
	if (ctx.cr6.eq) goto loc_8214E4A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214e1fc
	if (ctx.cr6.eq) goto loc_8214E1FC;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r11,104(r10)
	REX_STORE_U8(ctx.r10.u32 + 104, ctx.r11.u8);
	// stfs f26,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// b 0x8214e508
	goto loc_8214E508;
loc_8214E1FC:
	// lbz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 110);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8214e20c
	if (!ctx.cr6.eq) goto loc_8214E20C;
	// stfs f24,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
loc_8214E20C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1840(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 1840);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f13,26896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26896);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f13,f12
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64)));
	// bl 0x82204b00
	ctx.lr = 0x8214E228;
	sub_82204B00(ctx, base);
	// lbz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 116);
	// stfs f1,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// fmr f29,f31
	f29.f64 = f31.f64;
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r11,104(r9)
	REX_STORE_U8(ctx.r9.u32 + 104, ctx.r11.u8);
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 111);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214e258
	if (ctx.cr0.eq) goto loc_8214E258;
	// fmr f31,f24
	f31.f64 = f24.f64;
loc_8214E258:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-19076
	ctx.r6.s64 = ctx.r10.s64 + -19076;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821f7d50
	ctx.lr = 0x8214E280;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8214e29c
	if (ctx.cr0.eq) goto loc_8214E29C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8214e2a0
	goto loc_8214E2A0;
loc_8214E29C:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_8214E2A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8214e508
	if (ctx.cr6.eq) goto loc_8214E508;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// std r28,80(r30)
	REX_STORE_U64(r30.u32 + 80, r28.u64);
	// sth r28,88(r30)
	REX_STORE_U16(r30.u32 + 88, r28.u16);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r29,r30,112
	r29.s64 = r30.s64 + 112;
	// fmuls f13,f27,f22
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 * f22.f64));
	// addi r10,r11,25904
	ctx.r10.s64 = ctx.r11.s64 + 25904;
	// addi r8,r29,16
	ctx.r8.s64 = r29.s64 + 16;
	// lfs f0,-19080(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -19080);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r9,90(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 90);
	// addi r11,r29,32
	ctx.r11.s64 = r29.s64 + 32;
	// stb r9,90(r30)
	REX_STORE_U8(r30.u32 + 90, ctx.r9.u8);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r9,91(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 91);
	// stb r9,91(r30)
	REX_STORE_U8(r30.u32 + 91, ctx.r9.u8);
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// stw r29,92(r30)
	REX_STORE_U32(r30.u32 + 92, r29.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r10,100(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r10,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// lbz r9,117(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 117);
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 144);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 8);
	// stb r10,104(r30)
	REX_STORE_U8(r30.u32 + 104, ctx.r10.u8);
	// stb r28,105(r30)
	REX_STORE_U8(r30.u32 + 105, r28.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,106(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 106);
	// stb r10,106(r30)
	REX_STORE_U8(r30.u32 + 106, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,107(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 107);
	// stb r10,107(r30)
	REX_STORE_U8(r30.u32 + 107, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 108);
	// stb r10,108(r30)
	REX_STORE_U8(r30.u32 + 108, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,109(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 109);
	// stb r10,109(r30)
	REX_STORE_U8(r30.u32 + 109, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,110(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 110);
	// stb r10,110(r30)
	REX_STORE_U8(r30.u32 + 110, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,111(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 111);
	// stb r10,111(r30)
	REX_STORE_U8(r30.u32 + 111, ctx.r10.u8);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f12,112(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 112, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f12,116(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 116, temp.u32);
	// stfs f0,120(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 120, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lwz r9,128(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// stw r9,128(r30)
	REX_STORE_U32(r30.u32 + 128, ctx.r9.u32);
	// lwz r9,132(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// stw r9,132(r30)
	REX_STORE_U32(r30.u32 + 132, ctx.r9.u32);
	// lwz r9,136(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 136);
	// stw r9,136(r30)
	REX_STORE_U32(r30.u32 + 136, ctx.r9.u32);
	// lwz r10,140(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// stw r10,140(r30)
	REX_STORE_U32(r30.u32 + 140, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// addi r9,r10,144
	ctx.r9.s64 = ctx.r10.s64 + 144;
	// lwz r9,144(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// stw r9,144(r30)
	REX_STORE_U32(r30.u32 + 144, ctx.r9.u32);
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// stw r9,148(r30)
	REX_STORE_U32(r30.u32 + 148, ctx.r9.u32);
	// lwz r9,152(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 152);
	// stw r9,152(r30)
	REX_STORE_U32(r30.u32 + 152, ctx.r9.u32);
	// lwz r10,156(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 156);
	// stw r10,156(r30)
	REX_STORE_U32(r30.u32 + 156, ctx.r10.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,160(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 160, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,164(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 164, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lfs f0,168(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// sth r27,184(r30)
	REX_STORE_U16(r30.u32 + 184, r27.u16);
	// stfs f28,172(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 172, temp.u32);
	// stfs f0,168(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 168, temp.u32);
	// stfs f13,180(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
	// stfs f27,176(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 176, temp.u32);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lbz r10,186(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 186);
	// stb r10,186(r30)
	REX_STORE_U8(r30.u32 + 186, ctx.r10.u8);
	// stb r28,187(r30)
	REX_STORE_U8(r30.u32 + 187, r28.u8);
	// stb r28,188(r30)
	REX_STORE_U8(r30.u32 + 188, r28.u8);
	// stb r27,190(r30)
	REX_STORE_U8(r30.u32 + 190, r27.u8);
	// lbz r10,111(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 111);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8214e424
	if (ctx.cr0.eq) goto loc_8214E424;
	// fmr f29,f24
	f29.f64 = f24.f64;
loc_8214E424:
	// stfs f29,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f29,40(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 40, temp.u32);
	// stfs f29,36(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 36, temp.u32);
	// lfs f1,100(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x8214E438;
	sub_820E0028(ctx, base);
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// bge cr6,0x8214e468
	if (!ctx.cr6.lt) goto loc_8214E468;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// beq cr6,0x8214e45c
	if (ctx.cr6.eq) goto loc_8214E45C;
	// bl 0x820e0188
	ctx.lr = 0x8214E450;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f23.f64));
	// bl 0x820e0160
	ctx.lr = 0x8214E458;
	sub_820E0160(ctx, base);
	// b 0x8214e460
	goto loc_8214E460;
loc_8214E45C:
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
loc_8214E460:
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x8214e484
	goto loc_8214E484;
loc_8214E468:
	// fcmpu cr6,f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f26.f64);
	// beq cr6,0x8214e480
	if (ctx.cr6.eq) goto loc_8214E480;
	// bl 0x820e0188
	ctx.lr = 0x8214E474;
	sub_820E0188(ctx, base);
	// fmuls f1,f1,f23
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f23.f64));
	// bl 0x820e0160
	ctx.lr = 0x8214E47C;
	sub_820E0160(ctx, base);
	// b 0x8214e484
	goto loc_8214E484;
loc_8214E480:
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f26.f64;
loc_8214E484:
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + f30.f64));
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,4
	ctx.r10.s64 = 4;
	// fmuls f0,f0,f24
	ctx.f0.f64 = double(float(ctx.f0.f64 * f24.f64));
	// stfs f0,44(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// sth r11,42(r30)
	REX_STORE_U16(r30.u32 + 42, ctx.r11.u16);
	// sth r10,40(r30)
	REX_STORE_U16(r30.u32 + 40, ctx.r10.u16);
	// b 0x8214e508
	goto loc_8214E508;
loc_8214E4A4:
	// lbz r10,117(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 117);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r11,104(r9)
	REX_STORE_U8(ctx.r9.u32 + 104, ctx.r11.u8);
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 111);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8214e4e8
	goto loc_8214E4E8;
loc_8214E4C8:
	// lbz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 116);
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r9,128(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 128);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// stb r11,104(r9)
	REX_STORE_U8(ctx.r9.u32 + 104, ctx.r11.u8);
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 111);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8214E4E8:
	// stfs f26,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// beq 0x8214e508
	if (ctx.cr0.eq) goto loc_8214E508;
	// fmr f31,f24
	f31.f64 = f24.f64;
	// b 0x8214e508
	goto loc_8214E508;
loc_8214E4F8:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// li r10,74
	ctx.r10.s64 = 74;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// stb r10,104(r11)
	REX_STORE_U8(ctx.r11.u32 + 104, ctx.r10.u8);
loc_8214E508:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// fmuls f10,f27,f22
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(f27.f64 * f22.f64));
	// clrlwi r10,r26,24
	ctx.r10.u64 = r26.u32 & 0xFF;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stfs f27,176(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,2384(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2332(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2332);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16628(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f10,180(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// fmuls f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 * ctx.f0.f64));
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f28,172(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f31,144(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f31,148(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f31,152(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stfs f25,156(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f27,176(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f10,180(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f28,172(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stfs f25,156(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stfs f27,176(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stfs f10,180(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stfs f28,172(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lfs f9,80(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// lfs f9,176(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,128(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lfs f13,180(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 180);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfs f27,176(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfs f10,180(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfs f28,172(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stfs f25,156(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// stfs f25,104(r31)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
loc_8214E61C:
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 109);
	// stb r11,110(r31)
	REX_STORE_U8(r31.u32 + 110, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f6c
	ctx.lr = 0x8214E630;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821768A8) {
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
	ctx.lr = 0x821768B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lbz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// lwz r8,228(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lwz r9,236(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// lwz r10,244(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82176320
	ctx.lr = 0x821768E4;
	sub_82176320(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r28,156(r31)
	REX_STORE_U32(r31.u32 + 156, r28.u32);
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-5788
	ctx.r11.s64 = ctx.r11.s64 + -5788;
	// stw r26,164(r31)
	REX_STORE_U32(r31.u32 + 164, r26.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 2);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// lbz r11,2(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 2);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82178758) {
	REX_FUNC_PROLOGUE();
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// addi r5,r3,180
	ctx.r5.s64 = ctx.r3.s64 + 180;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r4,176(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// b 0x82190670
	sub_82190670(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82178A78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82178A80;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82178a9c
	if (ctx.cr6.eq) goto loc_82178A9C;
	// lbz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
loc_82178A9C:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r30,0
	r30.s64 = 0;
	// mulli r31,r11,3
	r31.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
loc_82178AA8:
	// bl 0x821fecf0
	ctx.lr = 0x82178AAC;
	sub_821FECF0(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u64 = uint32_t(r31.u32 ? ctx.r3.u32 / r31.u32 : 0);
	// lwz r10,104(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 104);
	// twllei r31,0
	if (r31.s32 == 0 || r31.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r31.s32);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82178ad8
	if (!ctx.cr6.eq) goto loc_82178AD8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(r30.s32, 10, ctx.xer);
	// blt cr6,0x82178aa8
	if (ctx.cr6.lt) goto loc_82178AA8;
loc_82178AD8:
	// li r10,3
	ctx.r10.s64 = 3;
	// divwu r3,r11,r10
	ctx.r3.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// stw r3,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82179BA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82179BB0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,196(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r3,196
	r30.s64 = ctx.r3.s64 + 196;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82179bec
	if (ctx.cr6.eq) goto loc_82179BEC;
	// lwz r11,252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// mulli r4,r11,80
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// bl 0x82190670
	ctx.lr = 0x82179BE8;
	sub_82190670(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
loc_82179BEC:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82179c14
	if (ctx.cr6.eq) goto loc_82179C14;
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 252);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// mulli r4,r11,84
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// bl 0x82190670
	ctx.lr = 0x82179C10;
	sub_82190670(ctx, base);
	// stw r28,0(r30)
	REX_STORE_U32(r30.u32 + 0, r28.u32);
loc_82179C14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8217B018) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r4,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r4.u8);
	// stb r5,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r5.u8);
	// lfs f0,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8217b034
	if (!ctx.cr6.lt) goto loc_8217B034;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_8217B034:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-5032(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5032);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + -10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
	// bne 0x8217b060
	if (!ctx.cr0.eq) goto loc_8217B060;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,6(r3)
	REX_STORE_U16(ctx.r3.u32 + 6, ctx.r11.u16);
loc_8217B060:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// stb r11,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r11.u8);
	// sth r11,4(r3)
	REX_STORE_U16(ctx.r3.u32 + 4, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217D510) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e84
	ctx.lr = 0x8217D518;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f28
	ctx.lr = 0x8217D520;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,-4840
	ctx.r11.s64 = ctx.r11.s64 + -4840;
	// li r30,0
	r30.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217d550
	if (ctx.cr6.eq) goto loc_8217D550;
	// addi r30,r11,16
	r30.s64 = ctx.r11.s64 + 16;
	// bne cr6,0x8217d558
	if (!ctx.cr6.eq) goto loc_8217D558;
loc_8217D550:
	// li r29,0
	r29.s64 = 0;
	// b 0x8217d55c
	goto loc_8217D55C;
loc_8217D558:
	// addi r29,r11,4
	r29.s64 = ctx.r11.s64 + 4;
loc_8217D55C:
	// lis r27,-32166
	r27.s64 = -2108030976;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r31,r27,7808
	r31.s64 = r27.s64 + 7808;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r6,r31,8
	ctx.r6.s64 = r31.s64 + 8;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// bl 0x820e0e38
	ctx.lr = 0x8217D578;
	sub_820E0E38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,7808(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 7808);
	ctx.f0.f64 = double(temp.f32);
	// fmr f24,f0
	f24.f64 = ctx.f0.f64;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,2352(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2352);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f28,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f27,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	f27.f64 = double(temp.f32);
	// lfs f30,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	f30.f64 = double(temp.f32);
	// lfs f31,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	f31.f64 = double(temp.f32);
	// lfs f29,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	f29.f64 = double(temp.f32);
	// lfs f26,0(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfs f25,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	f25.f64 = double(temp.f32);
	// bne cr6,0x8217d5b8
	if (!ctx.cr6.eq) goto loc_8217D5B8;
	// fmr f24,f11
	f24.f64 = ctx.f11.f64;
loc_8217D5B8:
	// fcmpu cr6,f28,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f28.f64, ctx.f13.f64);
	// bne cr6,0x8217d5c8
	if (!ctx.cr6.eq) goto loc_8217D5C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,16172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16172);
	f28.f64 = double(temp.f32);
loc_8217D5C8:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f30.f64, ctx.f13.f64);
	// bne cr6,0x8217d5d4
	if (!ctx.cr6.eq) goto loc_8217D5D4;
	// fmr f30,f11
	f30.f64 = ctx.f11.f64;
loc_8217D5D4:
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, ctx.f13.f64);
	// bne cr6,0x8217d5e0
	if (!ctx.cr6.eq) goto loc_8217D5E0;
	// fmr f31,f11
	f31.f64 = ctx.f11.f64;
loc_8217D5E0:
	// fcmpu cr6,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f29.f64, ctx.f13.f64);
	// bne cr6,0x8217d5f0
	if (!ctx.cr6.eq) goto loc_8217D5F0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f29,16188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16188);
	f29.f64 = double(temp.f32);
loc_8217D5F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-4848
	ctx.r6.s64 = ctx.r11.s64 + -4848;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,773
	ctx.r4.s64 = 773;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f7d50
	ctx.lr = 0x8217D614;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217d644
	if (ctx.cr0.eq) goto loc_8217D644;
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 80);
	// fmr f7,f25
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = f25.f64;
	// fmr f6,f26
	ctx.f6.f64 = f26.f64;
	// fmr f5,f29
	ctx.f5.f64 = f29.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f2,f27
	ctx.f2.f64 = f27.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8217cd28
	ctx.lr = 0x8217D640;
	sub_8217CD28(ctx, base);
	// b 0x8217d648
	goto loc_8217D648;
loc_8217D644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8217D648:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-4860
	ctx.r6.s64 = ctx.r11.s64 + -4860;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x821f7d50
	ctx.lr = 0x8217D668;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217d67c
	if (ctx.cr0.eq) goto loc_8217D67C;
	// lwz r4,80(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 80);
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// bl 0x82179ca0
	ctx.lr = 0x8217D67C;
	sub_82179CA0(ctx, base);
loc_8217D67C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f74
	ctx.lr = 0x8217D68C;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82181358) {
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
	ctx.lr = 0x82181384;
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
	ctx.lr = 0x8218139C;
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
	ctx.lr = 0x821813B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821813CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
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

DEFINE_REX_FUNC(sub_821826B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821826C0:
	// slw r11,r10,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// srawi r11,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r7,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r6,r11,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// beq 0x821826fc
	if (ctx.cr0.eq) goto loc_821826FC;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// b 0x82182700
	goto loc_82182700;
loc_821826FC:
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
loc_82182700:
	// stbx r8,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// bdnz 0x821826c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821826C0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183F10) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82183F18;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16516(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16516);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16512);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82183f3c
	if (!ctx.cr6.eq) goto loc_82183F3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82183f74
	goto loc_82183F74;
loc_82183F3C:
	// mulli r11,r11,516
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(516));
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,512(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 512);
	// bl 0x822d4fa0
	ctx.lr = 0x82183F54;
	sub_822D4FA0(ctx, base);
	// lwz r11,512(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 512);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,512(r29)
	REX_STORE_U32(r29.u32 + 512, ctx.r11.u32);
	// lwz r10,16520(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16520);
	// lwz r11,16512(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,16512(r31)
	REX_STORE_U32(r31.u32 + 16512, ctx.r11.u32);
loc_82183F74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82185348) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r8,436(r11)
	REX_STORE_U8(ctx.r11.u32 + 436, ctx.r8.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82185B90) {
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
	ctx.lr = 0x82185B98;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82185c58
	if (ctx.cr6.eq) goto loc_82185C58;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82185c58
	if (ctx.cr6.lt) goto loc_82185C58;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1001
	ctx.r9.s64 = 1001;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// li r30,0
	r30.s64 = 0;
	// sth r9,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi. r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82185c58
	if (ctx.cr0.eq) goto loc_82185C58;
	// li r31,0
	r31.s64 = 0;
loc_82185BFC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82185c30
	if (!ctx.cr0.eq) goto loc_82185C30;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 84);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822cb948
	ctx.lr = 0x82185C30;
	sub_822CB948(ctx, base);
loc_82185C30:
	// lwz r11,76(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 76);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82185bfc
	if (ctx.cr6.lt) goto loc_82185BFC;
loc_82185C58:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82188760) {
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
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r11,r11,2984
	ctx.r11.s64 = ctx.r11.s64 + 2984;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82188798
	if (ctx.cr6.eq) goto loc_82188798;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82187d00
	ctx.lr = 0x82188790;
	sub_82187D00(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821887ac
	goto loc_821887AC;
loc_82188798:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// ld r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// bl 0x82208d28
	ctx.lr = 0x821887A4;
	sub_82208D28(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821887AC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821898A8) {
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
	ctx.lr = 0x821898B0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82189470
	ctx.lr = 0x821898C4;
	sub_82189470(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821898d4
	if (ctx.cr0.eq) goto loc_821898D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,848(r31)
	REX_STORE_U32(r31.u32 + 848, ctx.r11.u32);
loc_821898D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// bl 0x82188300
	ctx.lr = 0x821898E0;
	sub_82188300(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82208cc8
	ctx.lr = 0x821898E8;
	sub_82208CC8(ctx, base);
	// lwz r11,848(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 848);
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// blt cr6,0x82189928
	if (ctx.cr6.lt) goto loc_82189928;
	// li r11,196
	ctx.r11.s64 = 196;
	// addi r9,r31,8
	ctx.r9.s64 = r31.s64 + 8;
loc_82189904:
	// lwz r8,844(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 844);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,196
	ctx.r11.s64 = ctx.r11.s64 + 196;
	// ld r8,-196(r8)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + -196);
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// lwz r8,848(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 848);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82189904
	if (!ctx.cr6.gt) goto loc_82189904;
loc_82189928:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82428fe8
	ctx.lr = 0x82189930;
	sub_82428FE8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// beq 0x82189970
	if (ctx.cr0.eq) goto loc_82189970;
	// li r8,100
	ctx.r8.s64 = 100;
	// lwz r11,848(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 848);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r27.u8);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// bl 0x821894f0
	ctx.lr = 0x8218996C;
	sub_821894F0(ctx, base);
	// b 0x82189998
	goto loc_82189998;
loc_82189970:
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r27,87(r1)
	REX_STORE_U8(ctx.r1.u32 + 87, r27.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821894f0
	ctx.lr = 0x8218998C;
	sub_821894F0(ctx, base);
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x82189998;
	sub_82187D00(ctx, base);
loc_82189998:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8218E060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// addi r7,r10,-8304
	ctx.r7.s64 = ctx.r10.s64 + -8304;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r9,r9,30520
	ctx.r9.s64 = ctx.r9.s64 + 30520;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r10,456(r7)
	REX_STORE_U16(ctx.r7.u32 + 456, ctx.r10.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218E088:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8218e088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E088;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30580(r10)
	REX_STORE_U32(ctx.r10.u32 + 30580, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218EA18) {
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
	ctx.lr = 0x8218EA20;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r9,r10,-5648
	ctx.r9.s64 = ctx.r10.s64 + -5648;
	// addi r6,r6,2600
	ctx.r6.s64 = ctx.r6.s64 + 2600;
	// addi r8,r8,-5784
	ctx.r8.s64 = ctx.r8.s64 + -5784;
	// addi r7,r7,-10000
	ctx.r7.s64 = ctx.r7.s64 + -10000;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,896
	ctx.r4.s64 = 896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x821f7d50
	ctx.lr = 0x8218EA6C;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	r27.s64 = 0;
	// beq 0x8218ea88
	if (ctx.cr0.eq) goto loc_8218EA88;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8218ea8c
	goto loc_8218EA8C;
loc_8218EA88:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8218EA8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218ea9c
	if (!ctx.cr6.eq) goto loc_8218EA9C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8218ebb8
	goto loc_8218EBB8;
loc_8218EA9C:
	// clrlwi. r4,r29,20
	ctx.r4.u64 = r29.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r11,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r11.u32);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, r30.u32);
	// rlwinm r10,r29,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF000;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// blt 0x8218eb24
	if (ctx.cr0.lt) goto loc_8218EB24;
	// cmpwi cr6,r4,29
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 29, ctx.xer);
	// bgt cr6,0x8218eb24
	if (ctx.cr6.gt) goto loc_8218EB24;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// cmpwi cr6,r4,23
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 23, ctx.xer);
	// blt cr6,0x8218eb48
	if (ctx.cr6.lt) goto loc_8218EB48;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218eb48
	if (ctx.cr6.eq) goto loc_8218EB48;
	// li r11,24
	ctx.r11.s64 = 24;
	// lha r10,92(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 92));
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lha r8,142(r30)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r30.u32 + 142));
	// srawi r9,r4,31
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 31;
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mulli r10,r10,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5));
	// adde r11,r7,r9
	temp.u8 = (ctx.r7.u32 + ctx.r9.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,23880
	ctx.r10.s64 = ctx.r10.s64 + 23880;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8218eb48
	goto loc_8218EB48;
loc_8218EB24:
	// cmpwi cr6,r4,30
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 30, ctx.xer);
	// blt cr6,0x8218eb48
	if (ctx.cr6.lt) goto loc_8218EB48;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bgt cr6,0x8218eb48
	if (ctx.cr6.gt) goto loc_8218EB48;
	// addi r11,r4,-30
	ctx.r11.s64 = ctx.r4.s64 + -30;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,11648
	ctx.r10.s64 = ctx.r10.s64 + 11648;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_8218EB48:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8219be48
	ctx.lr = 0x8218EB54;
	sub_8219BE48(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8218eb74
	if (ctx.cr6.eq) goto loc_8218EB74;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f0,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x8218eb84
	goto loc_8218EB84;
loc_8218EB74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
loc_8218EB84:
	// stfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8218eb9c
	if (ctx.cr6.eq) goto loc_8218EB9C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// b 0x8218eba8
	goto loc_8218EBA8;
loc_8218EB9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8218e900
	ctx.lr = 0x8218EBA4;
	sub_8218E900(ctx, base);
	// stw r27,80(r31)
	REX_STORE_U32(r31.u32 + 80, r27.u32);
loc_8218EBA8:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// stw r27,76(r31)
	REX_STORE_U32(r31.u32 + 76, r27.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,30792(r11)
	REX_STORE_U32(ctx.r11.u32 + 30792, r31.u32);
loc_8218EBB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82198470) {
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
	ctx.lr = 0x82198478;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lis r7,1536
	ctx.r7.s64 = 100663296;
	// lis r6,1536
	ctx.r6.s64 = 100663296;
	// lis r5,3840
	ctx.r5.s64 = 251658240;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r8,r8,177
	ctx.r8.u64 = ctx.r8.u64 | 177;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// ori r5,r5,60
	ctx.r5.u64 = ctx.r5.u64 | 60;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82191f50
	ctx.lr = 0x821984AC;
	sub_82191F50(ctx, base);
	// bl 0x82187b58
	ctx.lr = 0x821984B0;
	sub_82187B58(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 148);
	// mulli r11,r4,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne cr6,0x8219879c
	if (!ctx.cr6.eq) goto loc_8219879C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
	// rlwinm. r9,r11,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821984ec
	if (ctx.cr0.eq) goto loc_821984EC;
	// stw r28,148(r31)
	REX_STORE_U32(r31.u32 + 148, r28.u32);
	// b 0x82198548
	goto loc_82198548;
loc_821984EC:
	// rlwinm. r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821984fc
	if (ctx.cr0.eq) goto loc_821984FC;
	// stw r27,148(r31)
	REX_STORE_U32(r31.u32 + 148, r27.u32);
	// b 0x82198548
	goto loc_82198548;
loc_821984FC:
	// andi. r9,r11,16416
	ctx.r9.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82198544
	if (!ctx.cr0.eq) goto loc_82198544;
	// lbz r10,1888(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 1888);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82198544
	if (!ctx.cr0.eq) goto loc_82198544;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82198548
	if (ctx.cr0.eq) goto loc_82198548;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// ld r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82188760
	ctx.lr = 0x82198540;
	sub_82188760(ctx, base);
	// b 0x82198548
	goto loc_82198548;
loc_82198544:
	// bl 0x82191f30
	ctx.lr = 0x82198548;
	sub_82191F30(ctx, base);
loc_82198548:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x8219861c
	if (!ctx.cr6.gt) goto loc_8219861C;
	// lwz r11,144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// beq 0x821985d0
	if (ctx.cr0.eq) goto loc_821985D0;
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82198598
	if (!ctx.cr0.eq) goto loc_82198598;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82198594;
	sub_82199A88(ctx, base);
	// b 0x8219859c
	goto loc_8219859C;
loc_82198598:
	// bl 0x82195578
	ctx.lr = 0x8219859C;
	sub_82195578(ctx, base);
loc_8219859C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82198628
	if (!ctx.cr6.lt) goto loc_82198628;
	// bl 0x82195578
	ctx.lr = 0x821985CC;
	sub_82195578(ctx, base);
	// b 0x82198630
	goto loc_82198630;
loc_821985D0:
	// subf. r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821985e4
	if (!ctx.cr0.eq) goto loc_821985E4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x821985E0;
	sub_82199A88(ctx, base);
	// b 0x821985e8
	goto loc_821985E8;
loc_821985E4:
	// bl 0x821955a0
	ctx.lr = 0x821985E8;
	sub_821955A0(ctx, base);
loc_821985E8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r11,r11,-5
	ctx.r11.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82198628
	if (!ctx.cr6.lt) goto loc_82198628;
	// bl 0x821955a0
	ctx.lr = 0x82198618;
	sub_821955A0(ctx, base);
	// b 0x82198630
	goto loc_82198630;
loc_8219861C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82198624;
	sub_82199A88(ctx, base);
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
loc_82198628:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82199a88
	ctx.lr = 0x82198630;
	sub_82199A88(ctx, base);
loc_82198630:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 12);
	// rlwinm. r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8219879c
	if (ctx.cr0.eq) goto loc_8219879C;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// rlwinm. r9,r11,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821986d0
	if (ctx.cr0.eq) goto loc_821986D0;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8219879c
	if (!ctx.cr6.gt) goto loc_8219879C;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// addi r10,r10,27
	ctx.r10.s64 = ctx.r10.s64 + 27;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82199590
	ctx.lr = 0x82198678;
	sub_82199590(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82198784
	if (!ctx.cr6.lt) goto loc_82198784;
	// lwz r9,124(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 124);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r28,100(r31)
	REX_STORE_U32(r31.u32 + 100, r28.u32);
	// addi r11,r31,124
	ctx.r11.s64 = r31.s64 + 124;
	// stb r27,177(r9)
	REX_STORE_U8(ctx.r9.u32 + 177, r27.u8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8219869C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bdnz 0x8219869c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219869C;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82198388
	ctx.lr = 0x821986C8;
	sub_82198388(ctx, base);
	// stw r3,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// b 0x8219877c
	goto loc_8219877C;
loc_821986D0:
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82198784
	if (ctx.cr0.eq) goto loc_82198784;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8219879c
	if (!ctx.cr6.lt) goto loc_8219879C;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// addi r10,r10,27
	ctx.r10.s64 = ctx.r10.s64 + 27;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82199590
	ctx.lr = 0x8219871C;
	sub_82199590(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82198784
	if (!ctx.cr6.gt) goto loc_82198784;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 108);
	// addi r11,r31,108
	ctx.r11.s64 = r31.s64 + 108;
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// addi r11,r31,112
	ctx.r11.s64 = r31.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r27,177(r10)
	REX_STORE_U8(ctx.r10.u32 + 177, r27.u8);
	// lwz r9,116(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 116);
	// lwz r8,112(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 112);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r8,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r8.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82198388
	ctx.lr = 0x82198778;
	sub_82198388(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
loc_8219877C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82198410
	ctx.lr = 0x82198784;
	sub_82198410(ctx, base);
loc_82198784:
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// bl 0x82199590
	ctx.lr = 0x8219879C;
	sub_82199590(ctx, base);
loc_8219879C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821A3F70) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r3,r11,r10
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A5380) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x821A5388;
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r18,r11,-32480
	r18.s64 = ctx.r11.s64 + -32480;
	// lwz r21,-32480(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8218cb30
	ctx.lr = 0x821A53A4;
	sub_8218CB30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a56c4
	if (!ctx.cr0.eq) goto loc_821A56C4;
	// lwz r31,12(r18)
	r31.u64 = REX_LOAD_U32(r18.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r19,0(r31)
	r19.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r22,44(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x821a4e68
	ctx.lr = 0x821A53D4;
	sub_821A4E68(ctx, base);
	// rlwinm. r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r29,36(r31)
	r29.s64 = int16_t(REX_LOAD_U16(r31.u32 + 36));
	// beq 0x821a5428
	if (ctx.cr0.eq) goto loc_821A5428;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821a5468
	if (!ctx.cr6.gt) goto loc_821A5468;
	// lwz r3,12(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 12);
	// bl 0x821a6570
	ctx.lr = 0x821A5400;
	sub_821A6570(ctx, base);
	// sth r3,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r3.u16);
loc_821A5404:
	// lha r11,34(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 34));
	// subf. r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821a5418
	if (!ctx.cr0.gt) goto loc_821A5418;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// b 0x821a5464
	goto loc_821A5464;
loc_821A5418:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821a5468
	if (!ctx.cr6.lt) goto loc_821A5468;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x821a5464
	goto loc_821A5464;
loc_821A5428:
	// lwz r3,12(r21)
	ctx.r3.u64 = REX_LOAD_U32(r21.u32 + 12);
	// bl 0x821a6570
	ctx.lr = 0x821A5430;
	sub_821A6570(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// sth r3,32(r31)
	REX_STORE_U16(r31.u32 + 32, ctx.r3.u16);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f31,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821a5404
	if (ctx.cr6.gt) goto loc_821A5404;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x821a5468
	if (!ctx.cr6.gt) goto loc_821A5468;
	// addi r11,r29,-2
	ctx.r11.s64 = r29.s64 + -2;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r29,r10,r11
	r29.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_821A5464:
	// sth r29,36(r31)
	REX_STORE_U16(r31.u32 + 36, r29.u16);
loc_821A5468:
	// lwz r24,128(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 128);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lha r25,32(r31)
	r25.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// li r20,0
	r20.s64 = 0;
	// lwz r26,12(r21)
	r26.u64 = REX_LOAD_U32(r21.u32 + 12);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// lwz r23,28(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 28);
	// addi r30,r11,-23416
	r30.s64 = ctx.r11.s64 + -23416;
	// beq cr6,0x821a5570
	if (ctx.cr6.eq) goto loc_821A5570;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// blt cr6,0x821a553c
	if (ctx.cr6.lt) goto loc_821A553C;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r30,4416
	ctx.r3.s64 = r30.s64 + 4416;
	// bl 0x821a6578
	ctx.lr = 0x821A54B0;
	sub_821A6578(ctx, base);
	// clrlwi. r28,r22,31
	r28.u64 = r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r30,4416
	ctx.r4.s64 = r30.s64 + 4416;
	// beq 0x821a54d0
	if (ctx.cr0.eq) goto loc_821A54D0;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821a39b8
	ctx.lr = 0x821A54CC;
	sub_821A39B8(ctx, base);
	// b 0x821a54e0
	goto loc_821A54E0;
loc_821A54D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// bl 0x8218a6e8
	ctx.lr = 0x821A54E0;
	sub_8218A6E8(ctx, base);
loc_821A54E0:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r30,4416
	ctx.r3.s64 = r30.s64 + 4416;
	// bl 0x821a6660
	ctx.lr = 0x821A54FC;
	sub_821A6660(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// addi r4,r30,4416
	ctx.r4.s64 = r30.s64 + 4416;
	// addi r3,r30,2208
	ctx.r3.s64 = r30.s64 + 2208;
	// beq cr6,0x821a551c
	if (ctx.cr6.eq) goto loc_821A551C;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x821a39b8
	ctx.lr = 0x821A5518;
	sub_821A39B8(ctx, base);
	// b 0x821a552c
	goto loc_821A552C;
loc_821A551C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// bl 0x8218a6e8
	ctx.lr = 0x821A552C;
	sub_8218A6E8(ctx, base);
loc_821A552C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x821a52e8
	ctx.lr = 0x821A5538;
	sub_821A52E8(ctx, base);
	// b 0x821a5540
	goto loc_821A5540;
loc_821A553C:
	// mr r27,r20
	r27.u64 = r20.u64;
loc_821A5540:
	// lhz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 4);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r31,48
	ctx.r7.s64 = r31.s64 + 48;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r30,2208
	ctx.r5.s64 = r30.s64 + 2208;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x821a62a8
	ctx.lr = 0x821A5570;
	sub_821A62A8(ctx, base);
loc_821A5570:
	// lwz r28,132(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821a560c
	if (ctx.cr6.eq) goto loc_821A560C;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// blt cr6,0x821a55e0
	if (ctx.cr6.lt) goto loc_821A55E0;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r30,4416
	ctx.r3.s64 = r30.s64 + 4416;
	// bl 0x821a6578
	ctx.lr = 0x821A55A0;
	sub_821A6578(ctx, base);
	// clrlwi. r11,r22,31
	ctx.r11.u64 = r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x821a55c4
	if (ctx.cr0.eq) goto loc_821A55C4;
	// bl 0x821a5b48
	ctx.lr = 0x821A55B0;
	sub_821A5B48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,4416
	ctx.r4.s64 = r30.s64 + 4416;
	// li r6,6
	ctx.r6.s64 = 6;
	// bl 0x821a39b8
	ctx.lr = 0x821A55C0;
	sub_821A39B8(ctx, base);
	// b 0x821a55e4
	goto loc_821A55E4;
loc_821A55C4:
	// bl 0x821a5b48
	ctx.lr = 0x821A55C8;
	sub_821A5B48(ctx, base);
	// addi r5,r29,-1
	ctx.r5.s64 = r29.s64 + -1;
	// addi r4,r30,4416
	ctx.r4.s64 = r30.s64 + 4416;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8218a6e8
	ctx.lr = 0x821A55DC;
	sub_8218A6E8(ctx, base);
	// b 0x821a55e4
	goto loc_821A55E4;
loc_821A55E0:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
loc_821A55E4:
	// lhz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r31,48
	ctx.r5.s64 = r31.s64 + 48;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821a5b58
	ctx.lr = 0x821A560C;
	sub_821A5B58(ctx, base);
loc_821A560C:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,30520
	ctx.r10.s64 = ctx.r10.s64 + 30520;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lfs f0,48(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lhz r10,12(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 12);
	// subfc r8,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// bgt cr6,0x821a56c4
	if (ctx.cr6.gt) goto loc_821A56C4;
	// lha r11,38(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 38));
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// lwz r10,5932(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 5932);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, ctx.xer);
	// bne cr6,0x821a566c
	if (!ctx.cr6.eq) goto loc_821A566C;
	// stw r20,5932(r11)
	REX_STORE_U32(ctx.r11.u32 + 5932, r20.u32);
loc_821A566C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// ble cr6,0x821a5690
	if (!ctx.cr6.gt) goto loc_821A5690;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821a5690
	if (!ctx.cr6.gt) goto loc_821A5690;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x821a569c
	goto loc_821A569C;
loc_821A5690:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(r18.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
loc_821A569C:
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a56b0
	if (ctx.cr6.eq) goto loc_821A56B0;
	// bl 0x8218c278
	ctx.lr = 0x821A56AC;
	sub_8218C278(ctx, base);
	// stw r20,136(r31)
	REX_STORE_U32(r31.u32 + 136, r20.u32);
loc_821A56B0:
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a56c4
	if (ctx.cr6.eq) goto loc_821A56C4;
	// bl 0x8218c278
	ctx.lr = 0x821A56C0;
	sub_8218C278(ctx, base);
	// stw r20,140(r31)
	REX_STORE_U32(r31.u32 + 140, r20.u32);
loc_821A56C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821B43C8) {
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
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-9912(r10)
	REX_STORE_U32(ctx.r10.u32 + -9912, ctx.r11.u32);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r30,r10,-29240
	r30.s64 = ctx.r10.s64 + -29240;
	// stw r9,508(r31)
	REX_STORE_U32(r31.u32 + 508, ctx.r9.u32);
	// b 0x821b440c
	goto loc_821B440C;
loc_821B4408:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_821B440C:
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ori r10,r10,38527
	ctx.r10.u64 = ctx.r10.u64 | 38527;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x821b4424
	if (!ctx.cr6.lt) goto loc_821B4424;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821B4424:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821B4434;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// beq 0x821b4454
	if (ctx.cr0.eq) goto loc_821B4454;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821b4454
	if (!ctx.cr6.gt) goto loc_821B4454;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_821B4454:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821b4408
	if (ctx.cr6.eq) goto loc_821B4408;
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

DEFINE_REX_FUNC(sub_821BDFF8) {
	REX_FUNC_PROLOGUE();
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,100(r3)
	REX_STORE_U16(ctx.r3.u32 + 100, ctx.r11.u16);
	// sth r10,104(r3)
	REX_STORE_U16(ctx.r3.u32 + 104, ctx.r10.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE070) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,10008(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10008);
	// lhz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 116);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x821be088
	if (!ctx.cr6.eq) goto loc_821BE088;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821BE088:
	// lhz r9,120(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 120);
	// lfs f0,108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// lhz r8,118(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 118);
	// stfs f0,124(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 124, temp.u32);
	// sth r10,100(r11)
	REX_STORE_U16(ctx.r11.u32 + 100, ctx.r10.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r9,104(r11)
	REX_STORE_U16(ctx.r11.u32 + 104, ctx.r9.u16);
	// sth r8,102(r11)
	REX_STORE_U16(ctx.r11.u32 + 102, ctx.r8.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821BE420) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lfs f31,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lfs f29,2392(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2392);
	f29.f64 = double(temp.f32);
	// blt cr6,0x821be498
	if (ctx.cr6.lt) goto loc_821BE498;
	// beq cr6,0x821be498
	if (ctx.cr6.eq) goto loc_821BE498;
	// lhz r3,4(r5)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r5.u32 + 4);
	// bl 0x820e2538
	ctx.lr = 0x821BE474;
	sub_820E2538(ctx, base);
	// fmuls f31,f1,f29
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f29.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x821be484
	if (ctx.cr6.gt) goto loc_821BE484;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_821BE484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x821be498
	if (ctx.cr6.lt) goto loc_821BE498;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_821BE498:
	// lhz r3,2(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 2);
	// bl 0x820e2538
	ctx.lr = 0x821BE4A0;
	sub_820E2538(ctx, base);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// fmuls f0,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f29.f64));
	// addi r10,r11,175
	ctx.r10.s64 = ctx.r11.s64 + 175;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r10,r30
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + r30.u32, temp.u32);
	// blt cr6,0x821be4c4
	if (ctx.cr6.lt) goto loc_821BE4C4;
	// addi r11,r11,188
	ctx.r11.s64 = ctx.r11.s64 + 188;
	// b 0x821be4c8
	goto loc_821BE4C8;
loc_821BE4C4:
	// addi r11,r11,162
	ctx.r11.s64 = ctx.r11.s64 + 162;
loc_821BE4C8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + r30.u32, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
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

DEFINE_REX_FUNC(sub_821C0788) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822091c8
	ctx.lr = 0x821C07AC;
	sub_822091C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9148
	ctx.lr = 0x821C07B4;
	sub_822C9148(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// addi r4,r31,2
	ctx.r4.s64 = r31.s64 + 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,0(r31)
	REX_STORE_U16(r31.u32 + 0, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C07CC;
	sub_822091C8(ctx, base);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x822c9148
	ctx.lr = 0x821C07D4;
	sub_822C9148(ctx, base);
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// bl 0x822091c8
	ctx.lr = 0x821C07EC;
	sub_822091C8(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x822c9148
	ctx.lr = 0x821C07F4;
	sub_822C9148(ctx, base);
	// lhz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 84);
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
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

DEFINE_REX_FUNC(sub_821C1748) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,10012(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 10012);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x821c1680
	sub_821C1680(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C2660) {
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
	// addi r11,r11,12136
	ctx.r11.s64 = ctx.r11.s64 + 12136;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821C268C;
	sub_821E2FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821c269c
	if (ctx.cr0.eq) goto loc_821C269C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821C269C;
	sub_822C80A8(ctx, base);
loc_821C269C:
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

DEFINE_REX_FUNC(sub_821C30E0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// ori r8,r9,3696
	ctx.r8.u64 = ctx.r9.u64 | 3696;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// addi r6,r10,56
	ctx.r6.s64 = ctx.r10.s64 + 56;
	// addi r9,r9,-7072
	ctx.r9.s64 = ctx.r9.s64 + -7072;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r10,-7176(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -7176);
	// mullw r11,r5,r8
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// stwx r11,r8,r6
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,116(r11)
	REX_STORE_U32(ctx.r11.u32 + 116, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C45C8) {
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
	ctx.lr = 0x821C45D0;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,192(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 192);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r10,178(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 178);
	// li r26,0
	r26.s64 = 0;
	// lbz r9,180(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 180);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lbz r8,164(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 164);
	// lbz r7,181(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 181);
	// lhz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 604);
	// or r29,r9,r8
	r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r30,r10,r7
	r30.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// blt cr6,0x821c461c
	if (ctx.cr6.lt) goto loc_821C461C;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bgt cr6,0x821c461c
	if (ctx.cr6.gt) goto loc_821C461C;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_821C461C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r28,r11,23240
	r28.s64 = ctx.r11.s64 + 23240;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r9,r28,36
	ctx.r9.s64 = r28.s64 + 36;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821c4698
	if (!ctx.cr0.eq) goto loc_821C4698;
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r28,184
	ctx.r8.s64 = r28.s64 + 184;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821c4698
	if (!ctx.cr0.eq) goto loc_821C4698;
	// mulli r9,r11,284
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// addi r8,r28,188
	ctx.r8.s64 = r28.s64 + 188;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821c4698
	if (!ctx.cr0.eq) goto loc_821C4698;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f30,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f30,7208(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 7208, temp.u32);
	// b 0x821c4760
	goto loc_821C4760;
loc_821C4698:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x821c46f8
	if (!ctx.cr6.eq) goto loc_821C46F8;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x821c46f8
	if (!ctx.cr6.eq) goto loc_821C46F8;
	// lhz r11,606(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 606);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c46ec
	if (!ctx.cr0.eq) goto loc_821C46EC;
	// lbz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 188);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c46ec
	if (!ctx.cr0.eq) goto loc_821C46EC;
	// lbz r11,187(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 187);
	// lfs f13,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 7208);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c46dc
	if (ctx.cr0.eq) goto loc_821C46DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16588(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16588);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c4704
	goto loc_821C4704;
loc_821C46DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16844);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x821c4708
	goto loc_821C4708;
loc_821C46EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c4700
	goto loc_821C4700;
loc_821C46F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
loc_821C4700:
	// lfs f13,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 7208);
	ctx.f13.f64 = double(temp.f32);
loc_821C4704:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_821C4708:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 7208, temp.u32);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x821c4724
	if (ctx.cr6.gt) goto loc_821C4724;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_821C4724:
	// stfs f0,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 7208, temp.u32);
	// lfs f2,10492(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10492);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,10484(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82126d98
	ctx.lr = 0x821C4734;
	sub_82126D98(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821c474c
	if (ctx.cr6.lt) goto loc_821C474C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C474C:
	// lfs f13,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 7208);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x821c475c
	if (!ctx.cr6.gt) goto loc_821C475C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821C475C:
	// stfs f0,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 7208, temp.u32);
loc_821C4760:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,7208(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 7208);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r31,12320
	r27.s64 = r31.s64 + 12320;
	// lbz r7,228(r31)
	ctx.r7.u64 = REX_LOAD_U8(r31.u32 + 228);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f0,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f1,7212(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 7212, temp.u32);
	// bl 0x821c2520
	ctx.lr = 0x821C4790;
	sub_821C2520(ctx, base);
	// lbz r11,210(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 210);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f31,15728(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 15728);
	f31.f64 = double(temp.f32);
	// beq 0x821c47d0
	if (ctx.cr0.eq) goto loc_821C47D0;
	// lbz r11,201(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 201);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c47d0
	if (!ctx.cr0.eq) goto loc_821C47D0;
	// lbz r11,181(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 181);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c47d0
	if (!ctx.cr0.eq) goto loc_821C47D0;
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c47d0
	if (ctx.cr0.eq) goto loc_821C47D0;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x821c47d0
	if (ctx.cr6.gt) goto loc_821C47D0;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_821C47D0:
	// lbz r10,178(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 178);
	// stfs f31,10196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10196, temp.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821c47fc
	if (ctx.cr0.eq) goto loc_821C47FC;
	// lbz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c47fc
	if (ctx.cr0.eq) goto loc_821C47FC;
	// lhz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 604);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821c4800
	if (ctx.cr6.eq) goto loc_821C4800;
loc_821C47FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C4800:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x821c48b0
	if (ctx.cr6.lt) goto loc_821C48B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821c48b0
	if (!ctx.cr6.eq) goto loc_821C48B0;
	// lbz r11,211(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 211);
	// lfs f0,10488(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10488);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4834
	if (ctx.cr0.eq) goto loc_821C4834;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x821c4838
	if (ctx.cr6.gt) goto loc_821C4838;
loc_821C4834:
	// stfs f0,10488(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10488, temp.u32);
loc_821C4838:
	// lbz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4854
	if (!ctx.cr0.eq) goto loc_821C4854;
	// ld r11,8088(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 8088);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821c4880
	if (ctx.cr6.eq) goto loc_821C4880;
loc_821C4854:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c4880
	if (!ctx.cr6.eq) goto loc_821C4880;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f12.f64 = double(temp.f32);
	// li r26,1
	r26.s64 = 1;
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10564(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
loc_821C4880:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821C4894;
	sub_821BF940(ctx, base);
	// lbz r11,178(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4938
	if (!ctx.cr0.eq) goto loc_821C4938;
	// stfs f30,10584(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10584, temp.u32);
	// stfs f30,10568(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10568, temp.u32);
	// stfs f30,10240(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10240, temp.u32);
	// b 0x821c4938
	goto loc_821C4938;
loc_821C48B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c2cd8
	ctx.lr = 0x821C48B8;
	sub_821C2CD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16276(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x821c48dc
	if (!ctx.cr6.lt) goto loc_821C48DC;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821C48DC;
	sub_821BF940(ctx, base);
loc_821C48DC:
	// lbz r11,163(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4938
	if (ctx.cr0.eq) goto loc_821C4938;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821bf940
	ctx.lr = 0x821C48FC;
	sub_821BF940(ctx, base);
	// lbz r11,179(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4938
	if (!ctx.cr0.eq) goto loc_821C4938;
	// lbz r11,178(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c4938
	if (!ctx.cr0.eq) goto loc_821C4938;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,10564(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f12.f64 = double(temp.f32);
	// li r26,1
	r26.s64 = 1;
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,10564(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
loc_821C4938:
	// stfs f31,10196(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 10196, temp.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x821c49e4
	if (!ctx.cr6.eq) goto loc_821C49E4;
	// lbz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 192);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c49e4
	if (!ctx.cr0.eq) goto loc_821C49E4;
	// lbz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821c49e4
	if (!ctx.cr0.eq) goto loc_821C49E4;
	// lbz r11,163(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 163);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821c4974
	if (ctx.cr0.eq) goto loc_821C4974;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24924(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24924);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821c497c
	goto loc_821C497C;
loc_821C4974:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,12208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12208);
	ctx.f0.f64 = double(temp.f32);
loc_821C497C:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// addi r9,r28,24
	ctx.r9.s64 = r28.s64 + 24;
	// stfs f0,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 648, temp.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r8,r11,284
	ctx.r8.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(284));
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c49c8
	if (ctx.cr0.eq) goto loc_821C49C8;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-9504
	ctx.r10.s64 = ctx.r10.s64 + -9504;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c49c8
	if (ctx.cr6.eq) goto loc_821C49C8;
	// stfs f30,10572(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
	// stfs f30,10564(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
loc_821C49C8:
	// lfs f0,648(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10564(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10564);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,10572(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 10572);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,10564(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 10564, temp.u32);
	// stfs f0,10572(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 10572, temp.u32);
loc_821C49E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c4280
	ctx.lr = 0x821C49EC;
	sub_821C4280(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,10148(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 10148);
	// bl 0x82163ec0
	ctx.lr = 0x821C49F8;
	sub_82163EC0(ctx, base);
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

DEFINE_REX_FUNC(sub_821D7B50) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821D7B58;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r8,r10,-8304
	ctx.r8.s64 = ctx.r10.s64 + -8304;
	// addi r30,r11,3960
	r30.s64 = ctx.r11.s64 + 3960;
	// li r28,0
	r28.s64 = 0;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,604(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 604);
	// li r8,1
	ctx.r8.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// addis r29,r11,3
	r29.s64 = ctx.r11.s64 + 196608;
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// addi r31,r9,432
	r31.s64 = ctx.r9.s64 + 432;
	// addi r29,r29,4096
	r29.s64 = r29.s64 + 4096;
	// bne cr6,0x821d7bb8
	if (!ctx.cr6.eq) goto loc_821D7BB8;
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821d7cfc
	if (!ctx.cr6.eq) goto loc_821D7CFC;
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821d7cfc
	if (!ctx.cr6.eq) goto loc_821D7CFC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821D7BB8:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x821d7c88
	if (ctx.cr6.eq) goto loc_821D7C88;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x821d7c4c
	if (ctx.cr6.eq) goto loc_821D7C4C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x821d7c10
	if (ctx.cr6.eq) goto loc_821D7C10;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x821d7cfc
	if (!ctx.cr6.eq) goto loc_821D7CFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821afef0
	ctx.lr = 0x821D7BE0;
	sub_821AFEF0(ctx, base);
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r9,-7072
	ctx.r11.s64 = ctx.r9.s64 + -7072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8212e440
	ctx.lr = 0x821D7C0C;
	sub_8212E440(ctx, base);
	// b 0x821d7cfc
	goto loc_821D7CFC;
loc_821D7C10:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821afef0
	ctx.lr = 0x821D7C18;
	sub_821AFEF0(ctx, base);
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r9,-7072
	ctx.r11.s64 = ctx.r9.s64 + -7072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8212e440
	ctx.lr = 0x821D7C44;
	sub_8212E440(ctx, base);
	// li r5,41
	ctx.r5.s64 = 41;
	// b 0x821d7cbc
	goto loc_821D7CBC;
loc_821D7C4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821afef0
	ctx.lr = 0x821D7C54;
	sub_821AFEF0(ctx, base);
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addi r10,r9,-7072
	ctx.r10.s64 = ctx.r9.s64 + -7072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8212e440
	ctx.lr = 0x821D7C80;
	sub_8212E440(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x821d7cbc
	goto loc_821D7CBC;
loc_821D7C88:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r10,216(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lha r4,88(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// lha r3,88(r10)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 88));
	// bl 0x821d7ab0
	ctx.lr = 0x821D7C9C;
	sub_821D7AB0(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821d7cac
	if (!ctx.cr6.eq) goto loc_821D7CAC;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
loc_821D7CAC:
	// bl 0x821c2e30
	ctx.lr = 0x821D7CB0;
	sub_821C2E30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821d7cfc
	if (ctx.cr6.eq) goto loc_821D7CFC;
loc_821D7CBC:
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// addi r4,r10,31432
	ctx.r4.s64 = ctx.r10.s64 + 31432;
	// stw r28,8(r30)
	REX_STORE_U32(r30.u32 + 8, r28.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,84(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r3,80(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x821f7aa0
	ctx.lr = 0x821D7CFC;
	sub_821F7AA0(ctx, base);
loc_821D7CFC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821DDE50) {
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
	// stw r3,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821ddfa0
	if (ctx.cr6.eq) goto loc_821DDFA0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// addi r11,r11,5128
	ctx.r11.s64 = ctx.r11.s64 + 5128;
	// lbzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// bne cr6,0x821ddeb4
	if (!ctx.cr6.eq) goto loc_821DDEB4;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821ddea8
	if (ctx.cr6.lt) goto loc_821DDEA8;
	// beq cr6,0x821ddea0
	if (ctx.cr6.eq) goto loc_821DDEA0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x821ddeb8
	if (!ctx.cr6.lt) goto loc_821DDEB8;
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x821ddeac
	goto loc_821DDEAC;
loc_821DDEA0:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x821ddeac
	goto loc_821DDEAC;
loc_821DDEA8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_821DDEAC:
	// stbx r10,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x821ddeb8
	goto loc_821DDEB8;
loc_821DDEB4:
	// stbx r4,r3,r11
	REX_STORE_U8(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u8);
loc_821DDEB8:
	// lbzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821ddf9c
	if (ctx.cr6.eq) goto loc_821DDF9C;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,432
	ctx.r10.s64 = ctx.r10.s64 + 432;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// sth r11,426(r10)
	REX_STORE_U16(ctx.r10.u32 + 426, ctx.r11.u16);
	// blt cr6,0x821ddf10
	if (ctx.cr6.lt) goto loc_821DDF10;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bgt cr6,0x821ddf10
	if (ctx.cr6.gt) goto loc_821DDF10;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e1c10
	ctx.lr = 0x821DDEF0;
	sub_821E1C10(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e34e0
	ctx.lr = 0x821DDEFC;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,15108
	ctx.r11.s64 = ctx.r11.s64 + 15108;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DDF10;
	sub_821E2FD0(ctx, base);
loc_821DDF10:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e2698
	ctx.lr = 0x821DDF18;
	sub_821E2698(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x821e34e0
	ctx.lr = 0x821DDF24;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,15116
	ctx.r11.s64 = ctx.r11.s64 + 15116;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DDF38;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e27b8
	ctx.lr = 0x821DDF40;
	sub_821E27B8(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e34e0
	ctx.lr = 0x821DDF4C;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,15124
	ctx.r11.s64 = ctx.r11.s64 + 15124;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DDF60;
	sub_821E2FD0(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// blt cr6,0x821ddf9c
	if (ctx.cr6.lt) goto loc_821DDF9C;
	// cmpwi cr6,r11,288
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 288, ctx.xer);
	// bge cr6,0x821ddf9c
	if (!ctx.cr6.lt) goto loc_821DDF9C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e2b40
	ctx.lr = 0x821DDF7C;
	sub_821E2B40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x821e34e0
	ctx.lr = 0x821DDF88;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,15132
	ctx.r11.s64 = ctx.r11.s64 + 15132;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821DDF9C;
	sub_821E2FD0(ctx, base);
loc_821DDF9C:
	// bl 0x821dccc0
	ctx.lr = 0x821DDFA0;
	sub_821DCCC0(ctx, base);
loc_821DDFA0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E2658) {
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
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x821e2fb8
	ctx.lr = 0x821E2674;
	sub_821E2FB8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,13420
	ctx.r11.s64 = ctx.r11.s64 + 13420;
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

DEFINE_REX_FUNC(sub_821E2D08) {
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
	// bne 0x821e2db0
	if (!ctx.cr0.eq) goto loc_821E2DB0;
	// lbz r10,2973(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2db0
	if (!ctx.cr0.eq) goto loc_821E2DB0;
	// lhz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e2db0
	if (!ctx.cr6.eq) goto loc_821E2DB0;
	// lha r10,30(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x821e2d48
	if (ctx.cr6.lt) goto loc_821E2D48;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// ble cr6,0x821e2db0
	if (!ctx.cr6.gt) goto loc_821E2DB0;
loc_821E2D48:
	// lbz r10,6(r4)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + 6);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821e2db0
	if (!ctx.cr0.eq) goto loc_821E2DB0;
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
	// bne cr6,0x821e2db0
	if (!ctx.cr6.eq) goto loc_821E2DB0;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,124(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// lhz r11,126(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 126);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821e2db0
	if (!ctx.cr6.eq) goto loc_821E2DB0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r9,r11,5608
	ctx.r9.s64 = ctx.r11.s64 + 5608;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// stw r11,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r11.u32);
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
loc_821E2DB0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E6678) {
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
	ctx.lr = 0x821E6680;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,81
	ctx.r11.s64 = ctx.r4.s64 + 81;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwzx r3,r28,r3
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e6704
	if (ctx.cr6.eq) goto loc_821E6704;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x821e3700
	ctx.lr = 0x821E66B0;
	sub_821E3700(ctx, base);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// lfs f12,176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,16008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16008);
	ctx.f13.f64 = double(temp.f32);
	// beq cr6,0x821e66d8
	if (ctx.cr6.eq) goto loc_821E66D8;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x821e66dc
	goto loc_821E66DC;
loc_821E66D8:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
loc_821E66DC:
	// lwzx r11,r28,r31
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6704
	if (ctx.cr6.eq) goto loc_821E6704;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// stfs f12,176(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// stfs f12,180(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 180, temp.u32);
	// lfs f0,32280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
loc_821E6704:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e6750
	if (ctx.cr6.eq) goto loc_821E6750;
	// addi r11,r30,22
	ctx.r11.s64 = r30.s64 + 22;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r9,25
	ctx.r9.s64 = ctx.r9.s64 + 25;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r29.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,41
	ctx.r11.s64 = ctx.r11.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, r27.u32);
	// bl 0x821e5b00
	ctx.lr = 0x821E6750;
	sub_821E5B00(ctx, base);
loc_821E6750:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821EAEA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821eaf70
	if (!ctx.cr0.eq) goto loc_821EAF70;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821eaef4
	if (!ctx.cr6.eq) goto loc_821EAEF4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// b 0x821eaf1c
	goto loc_821EAF1C;
loc_821EAEF4:
	// clrlwi r11,r6,28
	ctx.r11.u64 = ctx.r6.u32 & 0xF;
	// rlwinm r10,r6,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(ctx.f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
loc_821EAF1C:
	// stfd f4,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,17184
	ctx.r3.s64 = ctx.r11.s64 + 17184;
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821EAF48;
	sub_821EACB0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// lwz r4,196(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x821eaa48
	ctx.lr = 0x821EAF64;
	sub_821EAA48(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// bl 0x821fe738
	ctx.lr = 0x821EAF70;
	sub_821FE738(ctx, base);
loc_821EAF70:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EDCC8) {
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
	ctx.lr = 0x821EDCD0;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f34
	ctx.lr = 0x821EDCD8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821edeec
	if (!ctx.cr0.eq) goto loc_821EDEEC;
	// lhz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 88);
	// lwz r28,92(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821edeec
	if (ctx.cr6.lt) goto loc_821EDEEC;
	// lbz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 110);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821edeec
	if (ctx.cr0.eq) goto loc_821EDEEC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821edeec
	if (ctx.cr6.eq) goto loc_821EDEEC;
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// li r4,12
	ctx.r4.s64 = 12;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r21,r11,-32032
	r21.s64 = ctx.r11.s64 + -32032;
	// addi r3,r21,332
	ctx.r3.s64 = r21.s64 + 332;
	// bne cr6,0x821edd3c
	if (!ctx.cr6.eq) goto loc_821EDD3C;
	// li r4,13
	ctx.r4.s64 = 13;
loc_821EDD3C:
	// bl 0x821f1818
	ctx.lr = 0x821EDD40;
	sub_821F1818(ctx, base);
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 109);
	// li r23,0
	r23.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r23.u32);
	// addi r29,r3,160
	r29.s64 = ctx.r3.s64 + 160;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// beq 0x821edd7c
	if (ctx.cr0.eq) goto loc_821EDD7C;
	// addi r3,r3,96
	ctx.r3.s64 = ctx.r3.s64 + 96;
	// stw r3,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r5,96(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 96);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x820e0368
	ctx.lr = 0x821EDD78;
	sub_820E0368(ctx, base);
	// b 0x821edd88
	goto loc_821EDD88;
loc_821EDD7C:
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r11,1684(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
loc_821EDD88:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r25,r29
	r25.u64 = r29.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lbz r11,91(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 91);
	// stb r11,30(r30)
	REX_STORE_U8(r30.u32 + 30, ctx.r11.u8);
	// lfs f27,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f27.f64 = double(temp.f32);
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mr r22,r23
	r22.u64 = r23.u64;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// fmr f30,f0
	f30.f64 = ctx.f0.f64;
	// lbz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 104);
	// sth r11,12(r30)
	REX_STORE_U16(r30.u32 + 12, ctx.r11.u16);
	// lbz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 108);
	// sth r11,14(r30)
	REX_STORE_U16(r30.u32 + 14, ctx.r11.u16);
	// ld r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 80);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lfs f31,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// lfs f29,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	f29.f64 = double(temp.f32);
	// lfs f28,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	f28.f64 = double(temp.f32);
	// bge cr6,0x821eddf8
	if (!ctx.cr6.lt) goto loc_821EDDF8;
	// li r22,256
	r22.s64 = 256;
	// fmr f31,f27
	f31.f64 = f27.f64;
loc_821EDDF8:
	// lhz r26,88(r31)
	r26.u64 = REX_LOAD_U16(r31.u32 + 88);
	// cmpwi r26,0
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble 0x821ede98
	if (!ctx.cr0.gt) goto loc_821EDE98;
	// addi r28,r28,24
	r28.s64 = r28.s64 + 24;
loc_821EDE08:
	// lwz r11,-12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ede2c
	if (ctx.cr6.eq) goto loc_821EDE2C;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// ble cr6,0x821ede2c
	if (!ctx.cr6.gt) goto loc_821EDE2C;
	// stw r27,24(r25)
	REX_STORE_U32(r25.u32 + 24, r27.u32);
	// mr r27,r23
	r27.u64 = r23.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
loc_821EDE2C:
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fadds f30,f1,f30
	f30.f64 = double(float(ctx.f1.f64 + f30.f64));
	// bl 0x821ed290
	ctx.lr = 0x821EDE38;
	sub_821ED290(ctx, base);
	// lfs f0,-8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f31
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r3,r28,8
	ctx.r3.s64 = r28.s64 + 8;
	// lfs f0,-4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f13,8(r29)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f0,-24(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -24);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f0,16(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// lfs f0,-20(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + -20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,20(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// bl 0x82202740
	ctx.lr = 0x821EDE70;
	sub_82202740(ctx, base);
	// stw r3,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r3.u32);
	// stw r23,24(r29)
	REX_STORE_U32(r29.u32 + 24, r23.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,64
	r28.s64 = r28.s64 + 64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// bgt 0x821ede08
	if (ctx.cr0.gt) goto loc_821EDE08;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x821ede98
	if (ctx.cr6.eq) goto loc_821EDE98;
	// stw r27,24(r25)
	REX_STORE_U32(r25.u32 + 24, r27.u32);
loc_821EDE98:
	// addi r11,r24,1
	ctx.r11.s64 = r24.s64 + 1;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r11,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r11.u32);
	// lhz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 88);
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
	// fdivs f0,f27,f0
	ctx.f0.f64 = double(float(f27.f64 / ctx.f0.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * f30.f64));
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// beq cr6,0x821eded4
	if (ctx.cr6.eq) goto loc_821EDED4;
	// lfs f0,20(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_821EDED4:
	// lbz r11,90(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 90);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r21,332
	ctx.r3.s64 = r21.s64 + 332;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// or r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 | r22.u64;
	// bl 0x821f1a48
	ctx.lr = 0x821EDEEC;
	sub_821F1A48(ctx, base);
loc_821EDEEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f80
	ctx.lr = 0x821EDEF8;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_821F9130) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x820e4bb0
	ctx.lr = 0x821F9154;
	sub_820E4BB0(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e72c8
	ctx.lr = 0x821F916C;
	sub_820E72C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,4(r30)
	REX_STORE_U16(r30.u32 + 4, ctx.r11.u16);
	// sth r10,6(r30)
	REX_STORE_U16(r30.u32 + 6, ctx.r10.u16);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x82206898
	ctx.lr = 0x821F9188;
	sub_82206898(ctx, base);
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

DEFINE_REX_FUNC(sub_821FA1F0) {
	REX_FUNC_PROLOGUE();
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
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f2c
	ctx.lr = 0x821FA208;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1823(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1823);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821fa4b0
	if (!ctx.cr0.eq) goto loc_821FA4B0;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r11,72
	ctx.r9.s64 = ctx.r11.s64 + 72;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lfs f30,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 80);
	f30.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfs f29,84(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 84);
	f29.f64 = double(temp.f32);
loc_821FA240:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x821fa240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FA240;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,116
	ctx.r10.s64 = ctx.r11.s64 + 116;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stw r10,164(r11)
	REX_STORE_U32(ctx.r11.u32 + 164, ctx.r10.u32);
	// lwz r10,120(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// stw r10,168(r11)
	REX_STORE_U32(ctx.r11.u32 + 168, ctx.r10.u32);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// stw r10,172(r11)
	REX_STORE_U32(ctx.r11.u32 + 172, ctx.r10.u32);
	// lwz r10,128(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,112(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821FA284;
	sub_821FEEC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x82204b00
	ctx.lr = 0x821FA2A4;
	sub_82204B00(ctx, base);
	// stfs f1,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// bl 0x820e0028
	ctx.lr = 0x821FA2AC;
	sub_820E0028(ctx, base);
	// lfs f0,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,-30108(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30108);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f13,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, f30.f64)));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
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
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r11,132
	ctx.r3.s64 = ctx.r11.s64 + 132;
	// bl 0x82202d90
	ctx.lr = 0x821FA2F4;
	sub_82202D90(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stfs f1,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FA300;
	sub_821FEDC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,-24832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24832);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA318;
	sub_82204B00(ctx, base);
	// stfs f1,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// bl 0x821fedc8
	ctx.lr = 0x821FA320;
	sub_821FEDC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA338;
	sub_82204B00(ctx, base);
	// stfs f1,152(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// bl 0x821feec8
	ctx.lr = 0x821FA340;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfs f0,26528(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26528);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA358;
	sub_82204B00(ctx, base);
	// stfs f1,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FA36C;
	sub_820E0028(ctx, base);
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f1
	f28.f64 = ctx.f1.f64;
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x820e0028
	ctx.lr = 0x821FA380;
	sub_820E0028(ctx, base);
	// lfs f11,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// fmr f27,f1
	f27.f64 = ctx.f1.f64;
	// fmuls f10,f11,f28
	ctx.f10.f64 = double(float(ctx.f11.f64 * f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f11,f11,f1
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f2,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16688(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16688);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16260(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16260);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f26,f10,f0,f13
	f26.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f13.f64)));
	// lfs f1,132(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f25,f11,f12,f31
	f25.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, f31.f64)));
	// bl 0x82204b00
	ctx.lr = 0x821FA3C4;
	sub_82204B00(ctx, base);
	// stfs f1,180(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 180, temp.u32);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f2,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 * f26.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821FA3E4;
	sub_82204AE0(ctx, base);
	// stfs f1,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 184, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,140(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,188(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 188, temp.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// lfs f1,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x821FA40C;
	sub_820E0028(ctx, base);
	// fadds f12,f27,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f27.f64 + f28.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28436(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28436);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f1.f64)));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmadds f0,f0,f13,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, f29.f64)));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
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
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,84(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 84, temp.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// bl 0x821f9e60
	ctx.lr = 0x821FA460;
	sub_821F9E60(ctx, base);
	// fctiwz f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(f29.f64) ? int64_t(0x80000000U) : (f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f29.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(f30.f64) ? int64_t(0x80000000U) : (f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r10,84(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + 84));
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f30,f0
	ctx.f0.f64 = double(float(f30.f64 - ctx.f0.f64));
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// fsubs f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 - ctx.f0.f64));
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
loc_821FA4B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f78
	ctx.lr = 0x821FA4BC;
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

DEFINE_REX_FUNC(sub_822097E0) {
	REX_FUNC_PROLOGUE();
	// b 0x824d400c
	__imp__XamContentClose(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822097F0) {
	REX_FUNC_PROLOGUE();
	// b 0x824d402c
	__imp__XamContentGetLicenseMask(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209888) {
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
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82209758
	ctx.lr = 0x822098B4;
	sub_82209758(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220A898) {
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
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8220a8c4
	if (!ctx.cr6.eq) goto loc_8220A8C4;
	// li r31,0
	r31.s64 = 0;
	// b 0x8220a8f0
	goto loc_8220A8F0;
loc_8220A8C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d40ec
	ctx.lr = 0x8220A8CC;
	__imp__XamGetExecutionId(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a8f0
	if (ctx.cr0.lt) goto loc_8220A8F0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r30,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// lhz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_8220A8F0:
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

DEFINE_REX_FUNC(sub_8220E3F8) {
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
	ctx.lr = 0x8220E400;
	// addi r31,r1,-320
	r31.s64 = ctx.r1.s64 + -320;
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r24,0
	r24.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r3,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r3.u32);
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
	// beq 0x8220e460
	if (ctx.cr0.eq) goto loc_8220E460;
	// bl 0x824d419c
	ctx.lr = 0x8220E43C;
	__imp__KeGetCurrentProcessType(ctx, base);
	// lbz r11,379(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 379);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x8220e460
	if (ctx.cr6.eq) goto loc_8220E460;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// li r6,1514
	ctx.r6.s64 = 1514;
	// lwz r5,312(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 312);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,244
	ctx.r3.s64 = 244;
	// bl 0x824d43dc
	ctx.lr = 0x8220E460;
	__imp__KeBugCheckEx(ctx, base);
loc_8220E460:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// or r23,r11,r29
	r23.u64 = ctx.r11.u64 | r29.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne cr6,0x8220e47c
	if (!ctx.cr6.eq) goto loc_8220E47C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8220E47C:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r4,r11,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r4,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// rlwinm r29,r4,28,4,31
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220e4ac
	if (!ctx.cr0.eq) goto loc_8220E4AC;
	// lwz r3,1408(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 1408);
	// bl 0x824d438c
	ctx.lr = 0x8220E4A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r22,r27
	r22.u64 = r27.u64;
	// stw r27,104(r31)
	REX_STORE_U32(r31.u32 + 104, r27.u32);
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_8220E4AC:
	// cmplwi cr6,r29,128
	ctx.cr6.compare<uint32_t>(r29.u32, 128, ctx.xer);
	// bge cr6,0x8220e6a4
	if (!ctx.cr6.lt) goto loc_8220E6A4;
	// addi r11,r29,48
	ctx.r11.s64 = r29.s64 + 48;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220e568
	if (ctx.cr6.eq) goto loc_8220E568;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lbz r6,5(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// stb r6,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r6.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8220e538
	if (!ctx.cr6.eq) goto loc_8220E538;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8220e538
	if (!ctx.cr6.eq) goto loc_8220E538;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8220e538
	if (!ctx.cr6.eq) goto loc_8220E538;
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
loc_8220E538:
	// lwz r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 48);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// rlwimi r6,r27,0,28,26
	ctx.r6.u64 = (__builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF) | (ctx.r6.u64 & 0x10);
	// stw r10,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// stb r6,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// lwz r10,88(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 88);
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - r25.u64;
	// stb r10,6(r11)
	REX_STORE_U8(ctx.r11.u32 + 6, ctx.r10.u8);
	// stb r24,7(r11)
	REX_STORE_U8(ctx.r11.u32 + 7, r24.u8);
	// b 0x8220eb2c
	goto loc_8220EB2C;
loc_8220E568:
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// rlwinm r11,r29,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x7FFFFFF;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r11,88
	ctx.r9.s64 = ctx.r11.s64 + 88;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// blt cr6,0x8220e5b8
	if (ctx.cr6.lt) goto loc_8220E5B8;
	// beq cr6,0x8220e5d8
	if (ctx.cr6.eq) goto loc_8220E5D8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8220e5f8
	if (ctx.cr6.lt) goto loc_8220E5F8;
	// beq cr6,0x8220e618
	if (ctx.cr6.eq) goto loc_8220E618;
	// b 0x8220e6b0
	goto loc_8220E6B0;
loc_8220E5B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e5c8
	if (ctx.cr6.eq) goto loc_8220E5C8;
	// addi r9,r30,384
	ctx.r9.s64 = r30.s64 + 384;
	// b 0x8220e624
	goto loc_8220E624;
loc_8220E5C8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_8220E5D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e5e8
	if (ctx.cr6.eq) goto loc_8220E5E8;
	// addi r9,r30,640
	ctx.r9.s64 = r30.s64 + 640;
	// b 0x8220e624
	goto loc_8220E624;
loc_8220E5E8:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
loc_8220E5F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e608
	if (ctx.cr6.eq) goto loc_8220E608;
	// addi r9,r30,896
	ctx.r9.s64 = r30.s64 + 896;
	// b 0x8220e624
	goto loc_8220E624;
loc_8220E608:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// stw r10,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r10.u32);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
loc_8220E618:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8220e6b0
	if (ctx.cr6.eq) goto loc_8220E6B0;
	// addi r9,r30,1152
	ctx.r9.s64 = r30.s64 + 1152;
loc_8220E624:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220e784
	if (!ctx.cr6.eq) goto loc_8220E784;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8220e784
	if (!ctx.cr6.eq) goto loc_8220E784;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bne cr6,0x8220e784
	if (!ctx.cr6.eq) goto loc_8220E784;
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r10.u32);
	// b 0x8220e784
	goto loc_8220E784;
loc_8220E6A4:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8220eb68
	if (ctx.cr6.gt) goto loc_8220EB68;
loc_8220E6B0:
	// lwz r11,388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 388);
	// addi r10,r30,384
	ctx.r10.s64 = r30.s64 + 384;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// beq cr6,0x8220e740
	if (ctx.cr6.eq) goto loc_8220E740;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// blt cr6,0x8220e740
	if (ctx.cr6.lt) goto loc_8220E740;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
loc_8220E6E0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220e740
	if (ctx.cr6.eq) goto loc_8220E740;
	// addi r3,r11,-8
	ctx.r3.s64 = ctx.r11.s64 + -8;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r29.u32, ctx.xer);
	// bge cr6,0x8220e70c
	if (!ctx.cr6.lt) goto loc_8220E70C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220e6e0
	goto loc_8220E6E0;
loc_8220E70C:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220e738
	if (!ctx.cr6.eq) goto loc_8220E738;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220e738
	if (!ctx.cr6.eq) goto loc_8220E738;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8220E738:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220e784
	goto loc_8220E784;
loc_8220E740:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8220d880
	ctx.lr = 0x8220E748;
	sub_8220D880(ctx, base);
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220ec2c
	if (ctx.cr0.eq) goto loc_8220EC2C;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8220e780
	if (!ctx.cr6.eq) goto loc_8220E780;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220e780
	if (!ctx.cr6.eq) goto loc_8220E780;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_8220E780:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_8220E784:
	// lbz r10,5(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// clrlwi r11,r29,16
	ctx.r11.u64 = r29.u32 & 0xFFFF;
	// stb r10,80(r31)
	REX_STORE_U8(r31.u32 + 80, ctx.r10.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r8,48(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 48);
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// stw r9,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r9.u32);
	// stw r3,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stb r27,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, r27.u8);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// subf. r6,r29,r9
	ctx.r6.u64 = ctx.r9.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// subf r9,r25,r9
	ctx.r9.u64 = ctx.r9.u64 - r25.u64;
	// stb r9,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r9.u8);
	// stb r24,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, r24.u8);
	// beq 0x8220eb18
	if (ctx.cr0.eq) goto loc_8220EB18;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8220e7f0
	if (!ctx.cr6.eq) goto loc_8220E7F0;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// lbz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 6);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stb r11,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r11.u8);
	// b 0x8220eb18
	goto loc_8220EB18;
loc_8220E7F0:
	// rlwinm r9,r29,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm. r8,r10,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r30,r9,r3
	r30.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// stb r10,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// sth r11,2(r30)
	REX_STORE_U16(r30.u32 + 2, ctx.r11.u16);
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,4(r30)
	REX_STORE_U8(r30.u32 + 4, ctx.r11.u8);
	// sth r9,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r9.u16);
	// beq 0x8220e8b0
	if (ctx.cr0.eq) goto loc_8220E8B0;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bge cr6,0x8220e86c
	if (!ctx.cr6.lt) goto loc_8220E86C;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stb r10,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220e91c
	if (!ctx.cr6.eq) goto loc_8220E91C;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x8220e918
	goto loc_8220E918;
loc_8220E86C:
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 384);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
loc_8220E884:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220e91c
	if (ctx.cr6.eq) goto loc_8220E91C;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220e91c
	if (!ctx.cr6.gt) goto loc_8220E91C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220e884
	goto loc_8220E884;
loc_8220E8B0:
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lbz r10,5(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8220e980
	if (ctx.cr0.eq) goto loc_8220E980;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x8220e940
	if (!ctx.cr6.lt) goto loc_8220E940;
	// addi r10,r8,48
	ctx.r10.s64 = ctx.r8.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220e91c
	if (!ctx.cr6.eq) goto loc_8220E91C;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
loc_8220E918:
	// stwx r9,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_8220E91C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// b 0x8220eadc
	goto loc_8220EADC;
loc_8220E940:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 384);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_8220E954:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220e91c
	if (ctx.cr6.eq) goto loc_8220E91C;
	// lhz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8220e91c
	if (!ctx.cr6.gt) goto loc_8220E91C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220e954
	goto loc_8220E954;
loc_8220E980:
	// stb r10,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r10.u8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,4(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8220e9e4
	if (!ctx.cr6.eq) goto loc_8220E9E4;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8220e9e4
	if (!ctx.cr6.eq) goto loc_8220E9E4;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bne cr6,0x8220e9e4
	if (!ctx.cr6.eq) goto loc_8220E9E4;
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,128
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 128, ctx.xer);
	// bge cr6,0x8220e9e4
	if (!ctx.cr6.lt) goto loc_8220E9E4;
	// rlwinm r9,r10,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// slw r8,r27,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r28
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// xor r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// stwx r9,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
loc_8220E9E4:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lwz r9,48(r28)
	ctx.r9.u64 = REX_LOAD_U32(r28.u32 + 48);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// stw r10,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r5,61440
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 61440, ctx.xer);
	// bgt cr6,0x8220eae4
	if (ctx.cr6.gt) goto loc_8220EAE4;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r11,0(r30)
	REX_STORE_U16(r30.u32 + 0, ctx.r11.u16);
	// lbz r10,5(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220ea24
	if (!ctx.cr0.eq) goto loc_8220EA24;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// sth r11,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r11.u16);
loc_8220EA24:
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// bge cr6,0x8220ea7c
	if (!ctx.cr6.lt) goto loc_8220EA7C;
	// addi r10,r9,48
	ctx.r10.s64 = ctx.r9.s64 + 48;
	// rlwinm r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r9,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r9.u8);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220eabc
	if (!ctx.cr6.eq) goto loc_8220EABC;
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r28
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r28.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r10,r28
	REX_STORE_U32(ctx.r10.u32 + r28.u32, ctx.r9.u32);
	// b 0x8220eabc
	goto loc_8220EABC;
loc_8220EA7C:
	// addi r10,r28,384
	ctx.r10.s64 = r28.s64 + 384;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stb r11,5(r30)
	REX_STORE_U8(r30.u32 + 5, ctx.r11.u8);
	// lwz r11,384(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 384);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
loc_8220EA90:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8220eabc
	if (ctx.cr6.eq) goto loc_8220EABC;
	// lhz r8,-8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + -8);
	// addi r7,r11,-8
	ctx.r7.s64 = ctx.r11.s64 + -8;
	// stw r7,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r7.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8220eabc
	if (!ctx.cr6.gt) goto loc_8220EABC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8220ea90
	goto loc_8220EA90;
loc_8220EABC:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
loc_8220EADC:
	// stw r11,48(r28)
	REX_STORE_U32(r28.u32 + 48, ctx.r11.u32);
	// b 0x8220eaf0
	goto loc_8220EAF0;
loc_8220EAE4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8220cfb8
	ctx.lr = 0x8220EAF0;
	sub_8220CFB8(ctx, base);
loc_8220EAF0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stb r24,80(r31)
	REX_STORE_U8(r31.u32 + 80, r24.u8);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220eb18
	if (ctx.cr0.eq) goto loc_8220EB18;
	// lbz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 4);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r28.u32);
	// stw r30,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, r30.u32);
loc_8220EB18:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220eb2c
	if (ctx.cr0.eq) goto loc_8220EB2C;
	// lbz r11,5(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 5);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stb r11,5(r26)
	REX_STORE_U8(r26.u32 + 5, ctx.r11.u8);
loc_8220EB2C:
	// addi r30,r26,16
	r30.s64 = r26.s64 + 16;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// stw r30,100(r31)
	REX_STORE_U32(r31.u32 + 100, r30.u32);
	// beq cr6,0x8220eb4c
	if (ctx.cr6.eq) goto loc_8220EB4C;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1408);
	// bl 0x824d437c
	ctx.lr = 0x8220EB44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r22,r24
	r22.u64 = r24.u64;
	// stw r24,104(r31)
	REX_STORE_U32(r31.u32 + 104, r24.u32);
loc_8220EB4C:
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ec60
	if (ctx.cr0.eq) goto loc_8220EC60;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8220EB64;
	sub_822D5870(ctx, base);
	// b 0x8220ec60
	goto loc_8220EC60;
loc_8220EB68:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ec30
	if (ctx.cr0.eq) goto loc_8220EC30;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// stw r24,84(r31)
	REX_STORE_U32(r31.u32 + 84, r24.u32);
	// not r10,r23
	ctx.r10.u64 = ~r23.u64;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// rlwinm r11,r10,20,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x800000;
	// lwz r7,1424(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 1424);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// oris r5,r11,24576
	ctx.r5.u64 = ctx.r11.u64 | 1610612736;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x824d43bc
	ctx.lr = 0x8220EBA4;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220ec2c
	if (ctx.cr0.lt) goto loc_8220EC2C;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8220EBBC;
	sub_822D5870(ctx, base);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r11,r30,88
	ctx.r11.s64 = r30.s64 + 88;
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r8,84(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 84);
	// subf r9,r25,r9
	ctx.r9.u64 = ctx.r9.u64 - r25.u64;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// sth r9,32(r8)
	REX_STORE_U16(ctx.r8.u32 + 32, ctx.r9.u16);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stb r10,37(r9)
	REX_STORE_U8(ctx.r9.u32 + 37, ctx.r10.u8);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,92(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 92);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r11,92(r30)
	REX_STORE_U32(r30.u32 + 92, ctx.r11.u32);
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// b 0x8220ec60
	goto loc_8220EC60;
loc_8220EC2C:
	// lwz r4,88(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_8220EC30:
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220ec5c
	if (ctx.cr0.eq) goto loc_8220EC5C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// stw r24,152(r31)
	REX_STORE_U32(r31.u32 + 152, r24.u32);
	// stw r27,160(r31)
	REX_STORE_U32(r31.u32 + 160, r27.u32);
	// stw r24,148(r31)
	REX_STORE_U32(r31.u32 + 148, r24.u32);
	// stw r4,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r4.u32);
	// bl 0x824d42cc
	ctx.lr = 0x8220EC5C;
	__imp__RtlRaiseException(ctx, base);
loc_8220EC5C:
	// stw r24,100(r31)
	REX_STORE_U32(r31.u32 + 100, r24.u32);
loc_8220EC60:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,320
	ctx.r12.s64 = r31.s64 + 320;
	// bl 0x8220eca0
	ctx.lr = 0x8220EC6C;
	ctx.r22 = r22;
	ctx.r23 = r23;
	ctx.r24 = r24;
	ctx.r25 = r25;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_8220ECA0(ctx, base);
	r22 = ctx.r22;
	r23 = ctx.r23;
	r24 = ctx.r24;
	r25 = ctx.r25;
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r1,r31,320
	ctx.r1.s64 = r31.s64 + 320;
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_822346B0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,512(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// li r9,4
	ctx.r9.s64 = 4;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// std r8,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// lwz r3,512(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// stw r10,512(r11)
	REX_STORE_U32(ctx.r11.u32 + 512, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82234EE0) {
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
	// std r4,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r4,5
	ctx.r4.s64 = 327680;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x824d479c
	ctx.lr = 0x82234F14;
	__imp__XMsgInProcessCall(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822356A8) {
	REX_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824d47ec
	__imp__NetDll_socket(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82235730) {
	REX_FUNC_PROLOGUE();
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
	// b 0x824d484c
	__imp__NetDll_recv(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822361A0) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822359b0
	ctx.lr = 0x822361C0;
	sub_822359B0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82236630) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82236218
	ctx.lr = 0x8223664C;
	sub_82236218(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x82236664
	if (ctx.cr0.lt) goto loc_82236664;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x82236664;
	sub_822D4FA0(ctx, base);
loc_82236664:
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

DEFINE_REX_FUNC(sub_82236DD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82236DD8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x823cd980
	ctx.lr = 0x82236DFC;
	sub_823CD980(ctx, base);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822395d0
	ctx.lr = 0x82236E14;
	sub_822395D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82236e44
	if (!ctx.cr0.lt) goto loc_82236E44;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82236e64
	if (ctx.cr6.eq) goto loc_82236E64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82236E38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// b 0x82236e64
	goto loc_82236E64;
loc_82236E44:
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r11,-32221
	ctx.r11.s64 = -2111635456;
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// addi r8,r9,-5748
	ctx.r8.s64 = ctx.r9.s64 + -5748;
	// addi r11,r11,27496
	ctx.r11.s64 = ctx.r11.s64 + 27496;
	// addi r10,r10,27656
	ctx.r10.s64 = ctx.r10.s64 + 27656;
	// stw r11,-5748(r9)
	REX_STORE_U32(ctx.r9.u32 + -5748, ctx.r11.u32);
	// stw r10,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82236E64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822388D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822388E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// li r28,0
	r28.s64 = 0;
	// addi r8,r9,-5748
	ctx.r8.s64 = ctx.r9.s64 + -5748;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stw r28,-5748(r9)
	REX_STORE_U32(ctx.r9.u32 + -5748, r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r28.u32);
	// beq cr6,0x82238a68
	if (ctx.cr6.eq) goto loc_82238A68;
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,-1
	r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82238950
	if (ctx.cr6.eq) goto loc_82238950;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82238950
	if (ctx.cr6.eq) goto loc_82238950;
	// lwz r3,276(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x823cd948
	ctx.lr = 0x8223892C;
	sub_823CD948(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,272(r31)
	REX_STORE_U32(r31.u32 + 272, ctx.r11.u32);
	// bl 0x8220aa00
	ctx.lr = 0x82238940;
	sub_8220AA00(ctx, base);
	// stw r28,272(r31)
	REX_STORE_U32(r31.u32 + 272, r28.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 236);
	// bl 0x82208848
	ctx.lr = 0x8223894C;
	sub_82208848(ctx, base);
	// stw r30,236(r31)
	REX_STORE_U32(r31.u32 + 236, r30.u32);
loc_82238950:
	// lwz r3,276(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223896c
	if (ctx.cr6.eq) goto loc_8223896C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223896c
	if (ctx.cr6.eq) goto loc_8223896C;
	// bl 0x82208848
	ctx.lr = 0x82238968;
	sub_82208848(ctx, base);
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
loc_8223896C:
	// lwz r3,284(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238988
	if (ctx.cr6.eq) goto loc_82238988;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82238988
	if (ctx.cr6.eq) goto loc_82238988;
	// bl 0x82208848
	ctx.lr = 0x82238984;
	sub_82208848(ctx, base);
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
loc_82238988:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822389ac
	if (ctx.cr6.eq) goto loc_822389AC;
	// stw r28,72(r31)
	REX_STORE_U32(r31.u32 + 72, r28.u32);
	// b 0x822389a0
	goto loc_822389A0;
loc_8223899C:
	// db16cyc 
	std::this_thread::yield();
loc_822389A0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8223899c
	if (!ctx.cr6.eq) goto loc_8223899C;
loc_822389AC:
	// addi r29,r31,80
	r29.s64 = r31.s64 + 80;
	// li r30,4
	r30.s64 = 4;
loc_822389B4:
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// bl 0x8223a768
	ctx.lr = 0x822389BC;
	sub_8223A768(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stwu r28,4(r29)
	ea = 4 + r29.u32;
	REX_STORE_U32(ea, r28.u32);
	r29.u32 = ea;
	// bne 0x822389b4
	if (!ctx.cr0.eq) goto loc_822389B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822389f8
	if (!ctx.cr6.gt) goto loc_822389F8;
	// addi r30,r31,96
	r30.s64 = r31.s64 + 96;
loc_822389DC:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 4);
	// bl 0x8223da60
	ctx.lr = 0x822389E4;
	sub_8223DA60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822389dc
	if (ctx.cr6.lt) goto loc_822389DC;
loc_822389F8:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238a18
	if (ctx.cr6.eq) goto loc_82238A18;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,64(r31)
	REX_STORE_U32(r31.u32 + 64, r28.u32);
loc_82238A18:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238a38
	if (ctx.cr6.eq) goto loc_82238A38;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238A34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,68(r31)
	REX_STORE_U32(r31.u32 + 68, r28.u32);
loc_82238A38:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82238a58
	if (ctx.cr6.eq) goto loc_82238A58;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	REX_STORE_U32(r31.u32 + 60, r28.u32);
loc_82238A58:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x823cd250
	ctx.lr = 0x82238A68;
	sub_823CD250(ctx, base);
loc_82238A68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82241340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-4288(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x822412a8
	sub_822412A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822417B0) {
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
	ctx.lr = 0x822417B8;
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r26,5
	r26.s64 = 5;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822418e0
	if (!ctx.cr6.gt) goto loc_822418E0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32161
	ctx.r9.s64 = -2107703296;
	// lis r4,-32161
	ctx.r4.s64 = -2107703296;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// addi r27,r7,-4
	r27.s64 = ctx.r7.s64 + -4;
	// lfs f11,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f12,-12032(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12032);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,-12544
	r31.s64 = ctx.r11.s64 + -12544;
	// lwz r28,-12608(r4)
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + -12608);
loc_822417F4:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82241840
	if (!ctx.cr6.gt) goto loc_82241840;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// divwu r11,r11,r26
	ctx.r11.u64 = uint32_t(r26.u32 ? ctx.r11.u32 / r26.u32 : 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82241810:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfsu f0,4(r30)
	ea = 4 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r30.u32 = ea;
	// lfsu f13,4(r30)
	ea = 4 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	r30.u32 = ea;
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f10.f64)));
	// lfsu f0,4(r30)
	ea = 4 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	r30.u32 = ea;
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f9.f64)));
	// lfsu f13,4(r30)
	ea = 4 + r30.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	r30.u32 = ea;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f0,f13,f13,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f7.f64)));
	// bdnz 0x82241810
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241810;
loc_82241840:
	// li r9,2
	ctx.r9.s64 = 2;
	// fmuls f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82241854:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82241878
	if (!ctx.cr6.lt) goto loc_82241878;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x8224187c
	goto loc_8224187C;
loc_82241878:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8224187C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822418a0
	if (!ctx.cr6.lt) goto loc_822418A0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x822418a4
	goto loc_822418A4;
loc_822418A0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822418A4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x822418c8
	if (!ctx.cr6.lt) goto loc_822418C8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x822418cc
	goto loc_822418CC;
loc_822418C8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_822418CC:
	// bdnz 0x82241854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241854;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stwu r11,4(r27)
	ea = 4 + r27.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r27.u32 = ea;
	// bne 0x822417f4
	if (!ctx.cr0.eq) goto loc_822417F4;
loc_822418E0:
	// addic. r11,r16,-2
	ctx.xer.ca = r16.u32 > 1;
	ctx.r11.s64 = r16.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82241918
	if (ctx.cr0.lt) goto loc_82241918;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822418F8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-11
	ctx.r10.s64 = ctx.r10.s64 + -11;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82241910
	if (!ctx.cr6.lt) goto loc_82241910;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82241910:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822418f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822418F8;
loc_82241918:
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r11,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r11.u64 = static_cast<uint64_t>(1) - ctx.r8.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8224192c
	if (!ctx.cr6.lt) goto loc_8224192C;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_8224192C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r4,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82241940
	if (!ctx.cr6.gt) goto loc_82241940;
	// stw r4,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_82241940:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r9,r8,-8
	ctx.xer.ca = ctx.r8.u32 <= 4294967288;
	ctx.r9.u64 = static_cast<uint64_t>(-8) - ctx.r8.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r26,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, r26.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r11,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// bge cr6,0x8224196c
	if (!ctx.cr6.lt) goto loc_8224196C;
	// stw r9,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_8224196C:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x8224197c
	if (!ctx.cr6.gt) goto loc_8224197C;
	// stw r4,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
loc_8224197C:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(r16.s32, 2, ctx.xer);
	// ble cr6,0x822419e0
	if (!ctx.cr6.gt) goto loc_822419E0;
	// addi r10,r16,-3
	ctx.r10.s64 = r16.s64 + -3;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82241998:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822419a8
	if (!ctx.cr6.lt) goto loc_822419A8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822419A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x822419b8
	if (!ctx.cr6.gt) goto loc_822419B8;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_822419B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x822419c8
	if (!ctx.cr6.lt) goto loc_822419C8;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_822419C8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x822419d8
	if (!ctx.cr6.gt) goto loc_822419D8;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_822419D8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82241998
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241998;
loc_822419E0:
	// li r22,0
	r22.s64 = 0;
	// li r17,0
	r17.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(r16.s32, 1, ctx.xer);
	// ble cr6,0x82241c38
	if (!ctx.cr6.gt) goto loc_82241C38;
	// addi r18,r16,-1
	r18.s64 = r16.s64 + -1;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(r18.s32, 2, ctx.xer);
	// addi r27,r11,-16432
	r27.s64 = ctx.r11.s64 + -16432;
	// addi r26,r10,-16640
	r26.s64 = ctx.r10.s64 + -16640;
	// blt cr6,0x82241b84
	if (ctx.cr6.lt) goto loc_82241B84;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// subf r21,r7,r5
	r21.u64 = ctx.r5.u64 - ctx.r7.u64;
	// subf r20,r7,r6
	r20.u64 = ctx.r6.u64 - ctx.r7.u64;
	// subf r19,r7,r10
	r19.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r24,r5,r9
	r24.u64 = ctx.r9.u64 - ctx.r5.u64;
	// subf r23,r5,r6
	r23.u64 = ctx.r6.u64 - ctx.r5.u64;
loc_82241A34:
	// addi r25,r4,1
	r25.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r9,r25,-2
	ctx.r9.s64 = r25.s64 + -2;
	// ble cr6,0x82241a48
	if (!ctx.cr6.gt) goto loc_82241A48;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82241A48:
	// lwz r28,-8(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - r28.u64;
	// cmpwi cr6,r10,-12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12, ctx.xer);
	// bge cr6,0x82241a60
	if (!ctx.cr6.lt) goto loc_82241A60;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_82241A60:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r31,r9,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r30,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r30.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r24,r8
	REX_STORE_U32(r24.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// rlwinm r14,r31,2,0,29
	r14.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,4,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// rlwinm r15,r10,2,27,29
	r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// stw r31,-224(r1)
	REX_STORE_U32(ctx.r1.u32 + -224, r31.u32);
	// add r31,r28,r10
	r31.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r30,r9,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r14,r26
	r29.u64 = REX_LOAD_U32(r14.u32 + r26.u32);
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// sraw r29,r29,r15
	temp.u32 = r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r29.s32 < 0) & (((r29.s32 >> temp.u32) << temp.u32) != r29.s32);
	r29.s64 = r29.s32 >> temp.u32;
	// stw r31,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r31.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r15,-224(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r29,r29,28
	r29.u64 = r29.u32 & 0xF;
	// add r30,r30,r10
	r30.u64 = r30.u64 + ctx.r10.u64;
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r22,r10
	r22.u64 = r22.u64 + ctx.r10.u64;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r25,13
	ctx.cr6.compare<int32_t>(r25.s32, 13, ctx.xer);
	// lwzx r10,r30,r27
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// sraw r10,r10,r15
	temp.u32 = r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r10,r23,r8
	REX_STORE_U32(r23.u32 + ctx.r8.u32, ctx.r10.u32);
	// ble cr6,0x82241ae8
	if (!ctx.cr6.gt) goto loc_82241AE8;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82241AE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - r31.u64;
	// cmpwi cr6,r10,-12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12, ctx.xer);
	// bge cr6,0x82241afc
	if (!ctx.cr6.lt) goto loc_82241AFC;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_82241AFC:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r31,-4(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r28,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	r28.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r19,r11
	REX_STORE_U32(r19.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r29,r9,r30
	r29.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r30,r9,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r10
	ctx.r9.u64 = r31.u64 + ctx.r10.u64;
	// rlwinm r31,r10,2,27,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r26
	r29.u64 = REX_LOAD_U32(r29.u32 + r26.u32);
	// rlwinm r28,r10,4,27,27
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// sraw r31,r29,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r29.s32 < 0) & (((r29.s32 >> temp.u32) << temp.u32) != r29.s32);
	r31.s64 = r29.s32 >> temp.u32;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r10,r31,28
	ctx.r10.u64 = r31.u32 & 0xF;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r21,r11
	REX_STORE_U32(r21.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r18.s32, ctx.xer);
	// lwzx r10,r9,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + r27.u32);
	// sraw r9,r10,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stwx r10,r20,r11
	REX_STORE_U32(r20.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82241a34
	if (ctx.cr6.lt) goto loc_82241A34;
loc_82241B84:
	// cmpw cr6,r4,r16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r16.s32, ctx.xer);
	// bge cr6,0x82241c30
	if (!ctx.cr6.lt) goto loc_82241C30;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// ble cr6,0x82241b9c
	if (!ctx.cr6.gt) goto loc_82241B9C;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82241B9C:
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r7
	r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -4);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// cmpwi cr6,r11,-12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -12, ctx.xer);
	// bge cr6,0x82241bbc
	if (!ctx.cr6.lt) goto loc_82241BBC;
	// li r11,-12
	ctx.r11.s64 = -12;
loc_82241BBC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r11,2,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r30,r1,-208
	r30.s64 = ctx.r1.s64 + -208;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r7,r7,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r26.u32);
	// rlwinm r29,r11,4,27,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// sraw r4,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r11.u32);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// addi r7,r10,-12
	ctx.r7.s64 = ctx.r10.s64 + -12;
	// stw r7,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r7.u32);
	// lwzx r5,r8,r27
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// sraw r4,r5,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stwx r11,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82241C30:
	// add r11,r17,r22
	ctx.r11.u64 = r17.u64 + r22.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82241C38:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82255D80) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x822469c0
	ctx.lr = 0x82255DA0;
	sub_822469C0(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,-6976(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -6976);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82255dd0
	if (!ctx.cr6.eq) goto loc_82255DD0;
	// clrlwi r11,r31,24
	ctx.r11.u64 = r31.u32 & 0xFF;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82255dd0
	if (ctx.cr6.eq) goto loc_82255DD0;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r9,29600
	ctx.r11.s64 = ctx.r9.s64 + 29600;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82255dd8
	goto loc_82255DD8;
loc_82255DD0:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r11,r11,29596
	ctx.r11.s64 = ctx.r11.s64 + 29596;
loc_82255DD8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82255de8
	if (ctx.cr6.eq) goto loc_82255DE8;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x82255dfc
	goto loc_82255DFC;
loc_82255DE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82255dfc
	if (!ctx.cr6.eq) goto loc_82255DFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82255DFC:
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

DEFINE_REX_FUNC(sub_822572C8) {
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
	ctx.lr = 0x822572E8;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822572fc
	if (!ctx.cr0.eq) goto loc_822572FC;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82257304
	goto loc_82257304;
loc_822572FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822605b0
	ctx.lr = 0x82257304;
	sub_822605B0(ctx, base);
loc_82257304:
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

DEFINE_REX_FUNC(sub_82258378) {
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
	ctx.lr = 0x82258380;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// bl 0x82255c88
	ctx.lr = 0x822583AC;
	sub_82255C88(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x822583bc
	if (!ctx.cr0.eq) goto loc_822583BC;
loc_822583B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82258504
	goto loc_82258504;
loc_822583BC:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822583ec
	if (ctx.cr0.eq) goto loc_822583EC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256e40
	ctx.lr = 0x822583D8;
	sub_82256E40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82256e40
	ctx.lr = 0x822583E8;
	sub_82256E40(ctx, base);
	// b 0x822583b4
	goto loc_822583B4;
loc_822583EC:
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(r28.u32, 1, ctx.xer);
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82258440
	if (ctx.cr6.lt) goto loc_82258440;
	// beq cr6,0x82258438
	if (ctx.cr6.eq) goto loc_82258438;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(r28.u32, 3, ctx.xer);
	// blt cr6,0x82258430
	if (ctx.cr6.lt) goto loc_82258430;
	// beq cr6,0x82258428
	if (ctx.cr6.eq) goto loc_82258428;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(r28.u32, 5, ctx.xer);
	// blt cr6,0x82258420
	if (ctx.cr6.lt) goto loc_82258420;
	// bne cr6,0x822584f4
	if (!ctx.cr6.eq) goto loc_822584F4;
	// lwz r30,40(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 40);
	// b 0x82258444
	goto loc_82258444;
loc_82258420:
	// lwz r30,36(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 36);
	// b 0x82258444
	goto loc_82258444;
loc_82258428:
	// lwz r30,24(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 24);
	// b 0x82258444
	goto loc_82258444;
loc_82258430:
	// lwz r30,20(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 20);
	// b 0x82258444
	goto loc_82258444;
loc_82258438:
	// lwz r30,32(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 32);
	// b 0x82258444
	goto loc_82258444;
loc_82258440:
	// lwz r30,28(r29)
	r30.u64 = REX_LOAD_U32(r29.u32 + 28);
loc_82258444:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822584f4
	if (ctx.cr6.eq) goto loc_822584F4;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822584f4
	if (ctx.cr0.eq) goto loc_822584F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82256918
	ctx.lr = 0x82258468;
	sub_82256918(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822584f4
	if (ctx.cr6.eq) goto loc_822584F4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8227d000
	ctx.lr = 0x8225847C;
	sub_8227D000(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822584f4
	if (ctx.cr0.eq) goto loc_822584F4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822469c0
	ctx.lr = 0x8225848C;
	sub_822469C0(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822584f4
	if (ctx.cr6.eq) goto loc_822584F4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(r24.s32, 0, ctx.xer);
	// beq cr6,0x822584ac
	if (ctx.cr6.eq) goto loc_822584AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257bf8
	ctx.lr = 0x822584A4;
	sub_82257BF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822584d8
	if (ctx.cr0.eq) goto loc_822584D8;
loc_822584AC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x822584c4
	if (ctx.cr6.eq) goto loc_822584C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ee88
	ctx.lr = 0x822584BC;
	sub_8225EE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822584d8
	if (ctx.cr0.eq) goto loc_822584D8;
loc_822584C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82257c40
	ctx.lr = 0x822584D0;
	sub_82257C40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822584f4
	if (ctx.cr0.eq) goto loc_822584F4;
loc_822584D8:
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82258378
	ctx.lr = 0x822584F0;
	sub_82258378(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_822584F4:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,16(r29)
	REX_STORE_U32(r29.u32 + 16, ctx.r11.u32);
loc_82258504:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8225E858) {
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
	// li r4,2028
	ctx.r4.s64 = 2028;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E880;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E88C;
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

DEFINE_REX_FUNC(sub_8225FBF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8225fc18
	if (!ctx.cr6.eq) goto loc_8225FC18;
	// stfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x8225fc54
	goto loc_8225FC54;
loc_8225FC18:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8225fc28
	if (!ctx.cr6.lt) goto loc_8225FC28;
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
loc_8225FC28:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8225fc38
	if (!ctx.cr6.gt) goto loc_8225FC38;
	// stfs f1,12(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
loc_8225FC38:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bge cr6,0x8225fc48
	if (!ctx.cr6.lt) goto loc_8225FC48;
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_8225FC48:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x8225fc58
	if (!ctx.cr6.gt) goto loc_8225FC58;
loc_8225FC54:
	// stfs f2,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
loc_8225FC58:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82264DE0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// sth r8,48(r3)
	REX_STORE_U16(ctx.r3.u32 + 48, ctx.r8.u16);
	// sth r11,50(r3)
	REX_STORE_U16(ctx.r3.u32 + 50, ctx.r11.u16);
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82265AD8) {
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
	ctx.lr = 0x82265AE0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82265b00
	if (!ctx.cr6.eq) goto loc_82265B00;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8225cda0
	ctx.lr = 0x82265AFC;
	sub_8225CDA0(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
loc_82265B00:
	// lwz r30,140(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82265c70
	if (ctx.cr6.eq) goto loc_82265C70;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,144(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 144);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8225e4f8
	ctx.lr = 0x82265B24;
	sub_8225E4F8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x82265B30;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265c74
	if (ctx.cr0.lt) goto loc_82265C74;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265b50
	if (ctx.cr6.eq) goto loc_82265B50;
	// li r29,4
	r29.s64 = 4;
	// b 0x82265b74
	goto loc_82265B74;
loc_82265B50:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82265b64
	if (ctx.cr6.eq) goto loc_82265B64;
	// li r29,2
	r29.s64 = 2;
	// b 0x82265b74
	goto loc_82265B74;
loc_82265B64:
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
loc_82265B74:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82265bec
	if (!ctx.cr6.eq) goto loc_82265BEC;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82265bec
	if (!ctx.cr6.eq) goto loc_82265BEC;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x82265ba0
	if (!ctx.cr6.eq) goto loc_82265BA0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82265bec
	if (!ctx.cr6.eq) goto loc_82265BEC;
loc_82265BA0:
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x82265bc8
	if (!ctx.cr6.eq) goto loc_82265BC8;
	// bl 0x822893c8
	ctx.lr = 0x82265BAC;
	sub_822893C8(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82265bec
	if (!ctx.cr6.eq) goto loc_82265BEC;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82265bec
	if (!ctx.cr6.eq) goto loc_82265BEC;
loc_82265BC8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x82265c70
	if (!ctx.cr6.eq) goto loc_82265C70;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82265bec
	if (ctx.cr6.eq) goto loc_82265BEC;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x822d7938
	ctx.lr = 0x82265BE4;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82265c70
	if (ctx.cr0.eq) goto loc_82265C70;
loc_82265BEC:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8225d438
	ctx.lr = 0x82265BF8;
	sub_8225D438(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x82265c1c
	if (!ctx.cr6.eq) goto loc_82265C1C;
	// lwz r3,132(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r3,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// bl 0x822893c8
	ctx.lr = 0x82265C10;
	sub_822893C8(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// stw r28,120(r31)
	REX_STORE_U32(r31.u32 + 120, r28.u32);
	// b 0x82265c68
	goto loc_82265C68;
loc_82265C1C:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x82265c50
	if (!ctx.cr6.eq) goto loc_82265C50;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,140(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x82265310
	ctx.lr = 0x82265C38;
	sub_82265310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82265c74
	if (ctx.cr0.lt) goto loc_82265C74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82246a38
	ctx.lr = 0x82265C4C;
	sub_82246A38(ctx, base);
	// b 0x82265c68
	goto loc_82265C68;
loc_82265C50:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(r29.s32, 3, ctx.xer);
	// bne cr6,0x82265c68
	if (!ctx.cr6.eq) goto loc_82265C68;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,136(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225d4d8
	ctx.lr = 0x82265C68;
	sub_8225D4D8(ctx, base);
loc_82265C68:
	// stw r29,124(r31)
	REX_STORE_U32(r31.u32 + 124, r29.u32);
	// stb r28,12(r31)
	REX_STORE_U8(r31.u32 + 12, r28.u8);
loc_82265C70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82265C74:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8226E388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8226E390;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8226e3bc
	if (ctx.cr6.eq) goto loc_8226E3BC;
	// lwz r11,196(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 196);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x8226e468
	goto loc_8226E468;
loc_8226E3BC:
	// lwz r3,196(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r30,r31,196
	r30.s64 = r31.s64 + 196;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226e3d8
	if (ctx.cr6.eq) goto loc_8226E3D8;
	// bl 0x8228ae10
	ctx.lr = 0x8226E3D0;
	sub_8228AE10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8226E3D8:
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8226e3f0
	if (ctx.cr6.eq) goto loc_8226E3F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268368
	ctx.lr = 0x8226E3F0;
	sub_82268368(ctx, base);
loc_8226E3F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r5,r31,204
	ctx.r5.s64 = r31.s64 + 204;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8226e420
	if (ctx.cr6.eq) goto loc_8226E420;
	// lfs f11,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 / ctx.f0.f64));
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// b 0x8226e424
	goto loc_8226E424;
loc_8226E420:
	// stfs f12,204(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
loc_8226E424:
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x8226e440
	if (ctx.cr6.eq) goto loc_8226E440;
	// lfs f13,184(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 184);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfs f0,208(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// b 0x8226e444
	goto loc_8226E444;
loc_8226E440:
	// stfs f12,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
loc_8226E444:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8228bc18
	ctx.lr = 0x8226E454;
	sub_8228BC18(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
loc_8226E468:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822764A0) {
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
	ctx.lr = 0x822764A8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822764d0
	if (!ctx.cr6.eq) goto loc_822764D0;
loc_822764C4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// b 0x82276540
	goto loc_82276540;
loc_822764D0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,1284
	r29.s64 = ctx.r11.s64 + 1284;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x822d82e0
	ctx.lr = 0x822764E4;
	sub_822D82E0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x822764c4
	if (ctx.cr0.eq) goto loc_822764C4;
	// li r28,0
	r28.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r28,0(r31)
	REX_STORE_U16(r31.u32 + 0, r28.u16);
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// bl 0x822d6a10
	ctx.lr = 0x82276500;
	sub_822D6A10(ctx, base);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,35
	ctx.r4.s64 = 35;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// bl 0x822d7b70
	ctx.lr = 0x82276514;
	sub_822D7B70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82276538
	if (ctx.cr0.eq) goto loc_82276538;
	// lhz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// addi r11,r3,2
	ctx.r11.s64 = ctx.r3.s64 + 2;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82276530
	if (ctx.cr0.eq) goto loc_82276530;
	// sth r28,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, r28.u16);
loc_82276530:
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// b 0x8227653c
	goto loc_8227653C;
loc_82276538:
	// stw r28,0(r25)
	REX_STORE_U32(r25.u32 + 0, r28.u32);
loc_8227653C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82276540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822778B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// li r31,2
	r31.s64 = 2;
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// beq cr6,0x822778d8
	if (ctx.cr6.eq) goto loc_822778D8;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
loc_822778D8:
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// li r30,-1
	r30.s64 = -1;
	// stw r9,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// stw r30,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, r30.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r5,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// ble cr6,0x8227795c
	if (!ctx.cr6.gt) goto loc_8227795C;
loc_82277910:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// beq cr6,0x82277934
	if (ctx.cr6.eq) goto loc_82277934;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_82277934:
	// lwz r30,40(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// addi r10,r10,68
	ctx.r10.s64 = ctx.r10.s64 + 68;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// stw r30,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, r30.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82277910
	if (ctx.cr6.lt) goto loc_82277910;
loc_8227795C:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822790A0) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x82279124
	if (!ctx.cr6.eq) goto loc_82279124;
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822790f8
	if (!ctx.cr0.eq) goto loc_822790F8;
	// li r4,0
	ctx.r4.s64 = 0;
loc_822790D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227af18
	ctx.lr = 0x822790E0;
	sub_8227AF18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82279198
	if (ctx.cr0.lt) goto loc_82279198;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
	// b 0x82279198
	goto loc_82279198;
loc_822790F8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82279118
	if (ctx.cr6.gt) goto loc_82279118;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x822790d8
	goto loc_822790D8;
loc_82279118:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// b 0x82279198
	goto loc_82279198;
loc_82279124:
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x82279160
	if (!ctx.cr6.eq) goto loc_82279160;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82278a08
	ctx.lr = 0x82279140;
	sub_82278A08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82279118
	if (ctx.cr0.eq) goto loc_82279118;
	// li r11,7
	ctx.r11.s64 = 7;
loc_8227914C:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x82279198
	goto loc_82279198;
loc_82279160:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bne cr6,0x8227918c
	if (!ctx.cr6.eq) goto loc_8227918C;
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x82278a08
	ctx.lr = 0x8227917C;
	sub_82278A08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82279118
	if (ctx.cr0.eq) goto loc_82279118;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8227914c
	goto loc_8227914C;
loc_8227918C:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8224a560
	ctx.lr = 0x82279198;
	sub_8224A560(ctx, base);
loc_82279198:
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

DEFINE_REX_FUNC(sub_8227C518) {
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
	ctx.lr = 0x8227C520;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,22613
	ctx.r10.s64 = 1481965568;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// ori r10,r10,18771
	ctx.r10.u64 = ctx.r10.u64 | 18771;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8227c5c8
	if (!ctx.cr6.eq) goto loc_8227C5C8;
	// lbz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227c5c8
	if (!ctx.cr6.eq) goto loc_8227C5C8;
	// lbz r11,5(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 5);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lhz r27,10(r4)
	r27.u64 = REX_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8227c6b0
	if (ctx.cr6.eq) goto loc_8227C6B0;
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// mr r28,r25
	r28.u64 = r25.u64;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
loc_8227C580:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8227c0d8
	ctx.lr = 0x8227C58C;
	sub_8227C0D8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8227c690
	if (ctx.cr0.lt) goto loc_8227C690;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 12);
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8227c5d4
	if (!ctx.cr6.eq) goto loc_8227C5D4;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x8227C5B0;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227c640
	if (ctx.cr0.eq) goto loc_8227C640;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8227C5BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8227c4b8
	ctx.lr = 0x8227C5C4;
	sub_8227C4B8(ctx, base);
	// b 0x8227c638
	goto loc_8227C638;
loc_8227C5C8:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x8227c690
	goto loc_8227C690;
loc_8227C5D4:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8227c608
	if (!ctx.cr6.eq) goto loc_8227C608;
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r10,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r10.u32);
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82255b48
	ctx.lr = 0x8227C5F8;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227c640
	if (ctx.cr0.eq) goto loc_8227C640;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8227c5bc
	goto loc_8227C5BC;
loc_8227C608:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,188
	ctx.r3.s64 = ctx.r1.s64 + 188;
	// bl 0x8227c0d8
	ctx.lr = 0x8227C614;
	sub_8227C0D8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8227c690
	if (ctx.cr0.lt) goto loc_8227C690;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x8227C624;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227c640
	if (ctx.cr0.eq) goto loc_8227C640;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8227c4b8
	ctx.lr = 0x8227C638;
	sub_8227C4B8(ctx, base);
loc_8227C638:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8227c644
	goto loc_8227C644;
loc_8227C640:
	// mr r31,r25
	r31.u64 = r25.u64;
loc_8227C644:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8227c680
	if (ctx.cr6.eq) goto loc_8227C680;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8227c190
	ctx.lr = 0x8227C658;
	sub_8227C190(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x8227c690
	if (ctx.cr0.lt) goto loc_8227C690;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x8227c580
	if (ctx.cr6.lt) goto loc_8227C580;
	// b 0x8227c688
	goto loc_8227C688;
loc_8227C680:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_8227C688:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bge cr6,0x8227c6b0
	if (!ctx.cr6.lt) goto loc_8227C6B0;
loc_8227C690:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227C698;
	sub_82255B70(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82255b70
	ctx.lr = 0x8227C6A0;
	sub_82255B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227C6A8;
	sub_82255B70(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8227c388
	ctx.lr = 0x8227C6B0;
	sub_8227C388(ctx, base);
loc_8227C6B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82280CC8) {
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
	// addi r31,r11,30464
	r31.s64 = ctx.r11.s64 + 30464;
	// lwz r11,30508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 30508);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,30508(r10)
	REX_STORE_U32(ctx.r10.u32 + 30508, ctx.r11.u32);
	// bl 0x824d438c
	ctx.lr = 0x82280CF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,30500(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 30500);
	// b 0x82280d08
	goto loc_82280D08;
loc_82280D04:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_82280D08:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82280d04
	if (!ctx.cr6.eq) goto loc_82280D04;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d437c
	ctx.lr = 0x82280D18;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_822830C0) {
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
	ctx.lr = 0x822830C8;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822831f4
	if (ctx.cr6.eq) goto loc_822831F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x822831f4
	if (ctx.cr6.lt) goto loc_822831F4;
	// rlwinm r28,r5,0,28,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82283110
	if (ctx.cr6.eq) goto loc_82283110;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283110
	if (ctx.cr0.eq) goto loc_82283110;
	// bl 0x822556b8
	ctx.lr = 0x8228310C;
	sub_822556B8(ctx, base);
	// b 0x82283114
	goto loc_82283114;
loc_82283110:
	// bl 0x82255738
	ctx.lr = 0x82283114;
	sub_82255738(ctx, base);
loc_82283114:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822831e8
	if (ctx.cr6.eq) goto loc_822831E8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822831e8
	if (ctx.cr6.eq) goto loc_822831E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822831e8
	if (ctx.cr6.eq) goto loc_822831E8;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// lbz r11,30497(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 30497);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82283168
	if (ctx.cr0.eq) goto loc_82283168;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24948(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24948);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// ble cr6,0x82283170
	if (!ctx.cr6.gt) goto loc_82283170;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
	// b 0x82283170
	goto loc_82283170;
loc_82283168:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_82283170:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r29,r11,30464
	r29.s64 = ctx.r11.s64 + 30464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d438c
	ctx.lr = 0x82283180;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82280d30
	ctx.lr = 0x82283190;
	sub_82280D30(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bne 0x822831cc
	if (!ctx.cr0.eq) goto loc_822831CC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82282fe8
	ctx.lr = 0x822831B0;
	sub_82282FE8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822831c8
	if (!ctx.cr0.lt) goto loc_822831C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x822831C0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822831fc
	goto loc_822831FC;
loc_822831C8:
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822831CC:
	// bl 0x82288590
	ctx.lr = 0x822831D0;
	sub_82288590(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x822831DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r31,0(r27)
	REX_STORE_U32(r27.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822831fc
	goto loc_822831FC;
loc_822831E8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x822831fc
	goto loc_822831FC;
loc_822831F4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_822831FC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82287848) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,400
	ctx.r4.s64 = ctx.r11.s64 + 400;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r9,396(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 396);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x822d4fa0
	ctx.lr = 0x82287874;
	sub_822D4FA0(ctx, base);
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

DEFINE_REX_FUNC(sub_822889C0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822889d4
	if (!ctx.cr6.eq) goto loc_822889D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822889D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82288D68) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288d7c
	if (!ctx.cr6.eq) goto loc_82288D7C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288D7C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82289120) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,31388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31388);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82289198
	if (ctx.cr6.eq) goto loc_82289198;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82289178
	if (!ctx.cr6.eq) goto loc_82289178;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228915C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228916C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82289198
	if (!ctx.cr0.eq) goto loc_82289198;
	// lwz r3,31388(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31388);
loc_82289178:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,192(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 192);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289188;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82289198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82289198:
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

DEFINE_REX_FUNC(sub_8228B590) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8228B598;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,100
	r29.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x824d438c
	ctx.lr = 0x8228B5B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r30.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,17
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(17));
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// b 0x8228b600
	goto loc_8228B600;
loc_8228B5D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r30.u32, ctx.xer);
	// bne cr6,0x8228b5fc
	if (!ctx.cr6.eq) goto loc_8228B5FC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228b5fc
	if (ctx.cr6.eq) goto loc_8228B5FC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822d7988
	ctx.lr = 0x8228B5F4;
	sub_822D7988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8228b608
	if (ctx.cr0.eq) goto loc_8228B608;
loc_8228B5FC:
	// lwz r31,60(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 60);
loc_8228B600:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228b5d4
	if (!ctx.cr6.eq) goto loc_8228B5D4;
loc_8228B608:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824d437c
	ctx.lr = 0x8228B610;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8228E0D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e15c
	if (ctx.cr6.eq) goto loc_8228E15C;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e108
	if (ctx.cr6.eq) goto loc_8228E108;
	// bl 0x82216cc8
	ctx.lr = 0x8228E104;
	sub_82216CC8(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
loc_8228E108:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e11c
	if (ctx.cr6.eq) goto loc_8228E11C;
	// bl 0x82216cc8
	ctx.lr = 0x8228E118;
	sub_82216CC8(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8228E11C:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e130
	if (ctx.cr6.eq) goto loc_8228E130;
	// bl 0x82216cc8
	ctx.lr = 0x8228E12C;
	sub_82216CC8(ctx, base);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_8228E130:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e144
	if (ctx.cr6.eq) goto loc_8228E144;
	// bl 0x82216cc8
	ctx.lr = 0x8228E140;
	sub_82216CC8(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_8228E144:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228e154
	if (ctx.cr6.eq) goto loc_8228E154;
	// bl 0x82288ee8
	ctx.lr = 0x8228E154;
	sub_82288EE8(ctx, base);
loc_8228E154:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8228E15C;
	sub_82255B70(ctx, base);
loc_8228E15C:
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

DEFINE_REX_FUNC(sub_822917C8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82294020
	ctx.lr = 0x822917F0;
	sub_82294020(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
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

DEFINE_REX_FUNC(sub_82292460) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82292520
	if (ctx.cr6.eq) goto loc_82292520;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f11,2332(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f11.f64 = double(temp.f32);
loc_82292488:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x822924a0
	if (!ctx.cr6.gt) goto loc_822924A0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x822924a4
	goto loc_822924A4;
loc_822924A0:
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
loc_822924A4:
	// fmuls f13,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fctidz f13,f13
	ctx.f13.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822924e0
	if (ctx.cr6.lt) goto loc_822924E0;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x822924cc
	if (ctx.cr6.gt) goto loc_822924CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_822924CC:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r10,7
	ctx.r5.s64 = ctx.r10.s64 + 7;
loc_822924E0:
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82292504
	if (ctx.cr6.lt) goto loc_82292504;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82292504:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82292488
	if (!ctx.cr6.eq) goto loc_82292488;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82292528
	if (!ctx.cr6.eq) goto loc_82292528;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82292528
	if (!ctx.cr6.eq) goto loc_82292528;
loc_82292520:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229252c
	goto loc_8229252C;
loc_82292528:
	// bl 0x822922d0
	ctx.lr = 0x8229252C;
	sub_822922D0(ctx, base);
loc_8229252C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822957C0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r9,13508
	ctx.r4.s64 = ctx.r9.s64 + 13508;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8229a1b0
	ctx.lr = 0x8229580C;
	sub_8229A1B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82295854
	if (!ctx.cr0.eq) goto loc_82295854;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229a1c0
	ctx.lr = 0x82295820;
	sub_8229A1C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x82295848
	if (ctx.cr6.eq) goto loc_82295848;
	// bl 0x82299fd0
	ctx.lr = 0x82295834;
	sub_82299FD0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r3,-5
	ctx.r3.s64 = -5;
	// beq cr6,0x82295854
	if (ctx.cr6.eq) goto loc_82295854;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82295854
	goto loc_82295854;
loc_82295848:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82299fd0
	ctx.lr = 0x82295854;
	sub_82299FD0(ctx, base);
loc_82295854:
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

DEFINE_REX_FUNC(sub_8229A718) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r11,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,24(r8)
	REX_STORE_U32(ctx.r8.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229CEF8) {
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
	ctx.lr = 0x8229CF00;
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
	ctx.lr = 0x8229CF38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x8229cf48
	if (!ctx.cr0.eq) goto loc_8229CF48;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x8229cfcc
	goto loc_8229CFCC;
loc_8229CF48:
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
	// bl 0x8229ca18
	ctx.lr = 0x8229CF78;
	sub_8229CA18(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x8229cf90
	if (!ctx.cr6.eq) goto loc_8229CF90;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,22332
	ctx.r11.s64 = ctx.r11.s64 + 22332;
	// b 0x8229cfb0
	goto loc_8229CFB0;
loc_8229CF90:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(r30.s32, -5, ctx.xer);
	// beq cr6,0x8229cfa4
	if (ctx.cr6.eq) goto loc_8229CFA4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229cfb4
	if (!ctx.cr6.eq) goto loc_8229CFB4;
loc_8229CFA4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r30,-3
	r30.s64 = -3;
	// addi r11,r11,22296
	ctx.r11.s64 = ctx.r11.s64 + 22296;
loc_8229CFB0:
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
loc_8229CFB4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8229CFC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8229CFCC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8229EB38) {
	REX_FUNC_PROLOGUE();
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229eb4c
	if (!ctx.cr0.eq) goto loc_8229EB4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229EB4C:
	// lwz r11,72(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,80(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229F5C0) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9aa8
	ctx.lr = 0x8229F5E0;
	sub_822A9AA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x822b9570
	ctx.lr = 0x8229F5F0;
	sub_822B9570(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229FA58) {
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
	ctx.lr = 0x8229FA60;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,12
	ctx.r3.s64 = 12;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// add r30,r11,r5
	r30.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x822c80d0
	ctx.lr = 0x8229FA90;
	sub_822C80D0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(r31.s32, r30.s32, ctx.xer);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bge cr6,0x8229facc
	if (!ctx.cr6.lt) goto loc_8229FACC;
	// addi r6,r30,-1
	ctx.r6.s64 = r30.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8229fa58
	ctx.lr = 0x8229FAC4;
	sub_8229FA58(ctx, base);
	// stw r3,4(r29)
	REX_STORE_U32(r29.u32 + 4, ctx.r3.u32);
	// b 0x8229fad0
	goto loc_8229FAD0;
loc_8229FACC:
	// stw r25,4(r29)
	REX_STORE_U32(r29.u32 + 4, r25.u32);
loc_8229FAD0:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(r30.s32, r27.s32, ctx.xer);
	// bge cr6,0x8229faf4
	if (!ctx.cr6.lt) goto loc_8229FAF4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8229fa58
	ctx.lr = 0x8229FAEC;
	sub_8229FA58(ctx, base);
	// stw r3,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// b 0x8229faf8
	goto loc_8229FAF8;
loc_8229FAF4:
	// stw r25,8(r29)
	REX_STORE_U32(r29.u32 + 8, r25.u32);
loc_8229FAF8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822A27D8) {
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
	ctx.lr = 0x822A27E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82213578
	ctx.lr = 0x822A2804;
	sub_82213578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822132a0
	ctx.lr = 0x822A2810;
	sub_822132A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9958
	ctx.lr = 0x822A281C;
	sub_822A9958(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x822a2994
	if (ctx.cr6.eq) goto loc_822A2994;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r7,238(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 238);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r6,236(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 236);
	// bl 0x822a11e8
	ctx.lr = 0x822A2840;
	sub_822A11E8(ctx, base);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a26b8
	ctx.lr = 0x822A284C;
	sub_822A26B8(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// lwz r26,452(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 452);
	// stw r28,452(r31)
	REX_STORE_U32(r31.u32 + 452, r28.u32);
	// ld r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 456);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x822a1600
	ctx.lr = 0x822A2874;
	sub_822A1600(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// beq cr6,0x822a2884
	if (ctx.cr6.eq) goto loc_822A2884;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x822a28d0
	if (!ctx.cr6.eq) goto loc_822A28D0;
loc_822A2884:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82213578
	ctx.lr = 0x822A2894;
	sub_82213578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822132a0
	ctx.lr = 0x822A28A0;
	sub_822132A0(ctx, base);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x822a3e58
	ctx.lr = 0x822A28AC;
	sub_822A3E58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3e78
	ctx.lr = 0x822A28BC;
	sub_822A3E78(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// bne cr6,0x822a28d0
	if (!ctx.cr6.eq) goto loc_822A28D0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822132a0
	ctx.lr = 0x822A28D0;
	sub_822132A0(ctx, base);
loc_822A28D0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x822a28e0
	if (ctx.cr6.eq) goto loc_822A28E0;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x822a2978
	if (!ctx.cr6.eq) goto loc_822A2978;
loc_822A28E0:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,164(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 164);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82213578
	ctx.lr = 0x822A28F0;
	sub_82213578(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822132a0
	ctx.lr = 0x822A28FC;
	sub_822132A0(ctx, base);
	// lwz r4,152(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 152);
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// bl 0x822a3e58
	ctx.lr = 0x822A2908;
	sub_822A3E58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3e78
	ctx.lr = 0x822A2918;
	sub_822A3E78(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82213578
	ctx.lr = 0x822A2928;
	sub_82213578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822132a0
	ctx.lr = 0x822A2934;
	sub_822132A0(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r30,104(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r28,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r28.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stb r10,101(r11)
	REX_STORE_U8(ctx.r11.u32 + 101, ctx.r10.u8);
	// lwz r4,144(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 144);
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// bl 0x822a3e58
	ctx.lr = 0x822A2958;
	sub_822A3E58(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 156);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822a3e78
	ctx.lr = 0x822A2968;
	sub_822A3E78(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r30.u32);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 156);
	// stb r28,101(r11)
	REX_STORE_U8(ctx.r11.u32 + 101, r28.u8);
loc_822A2978:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a1600
	ctx.lr = 0x822A2988;
	sub_822A1600(ctx, base);
	// stw r26,452(r31)
	REX_STORE_U32(r31.u32 + 452, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822A2994:
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x822a11e8
	ctx.lr = 0x822A29A8;
	sub_822A11E8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822A9D90) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,1632
	ctx.r3.s64 = ctx.r11.s64 + 1632;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9F38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2896(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2896);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822a9f68
	if (!ctx.cr6.eq) goto loc_822A9F68;
	// lfs f13,2900(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2900);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x822a9f68
	if (!ctx.cr6.eq) goto loc_822A9F68;
	// lfs f13,2904(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2904);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822A9F68:
	// stfs f0,2896(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2896, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2900(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2900, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2904(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2904, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB0B0) {
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
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab0e0
	if (ctx.cr6.eq) goto loc_822AB0E0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822b9ea8
	ctx.lr = 0x822AB0E0;
	sub_822B9EA8(ctx, base);
loc_822AB0E0:
	// lwz r3,272(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 272);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab0f8
	if (ctx.cr6.eq) goto loc_822AB0F8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822b9ea8
	ctx.lr = 0x822AB0F8;
	sub_822B9EA8(ctx, base);
loc_822AB0F8:
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

DEFINE_REX_FUNC(sub_822ACE00) {
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
	ctx.lr = 0x822ACE08;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a99c0
	ctx.lr = 0x822ACE24;
	sub_822A99C0(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + r28.u64;
	// lbz r11,465(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 465);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822acea4
	if (ctx.cr0.eq) goto loc_822ACEA4;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_822ACE3C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9d40
	ctx.lr = 0x822ACE48;
	sub_822A9D40(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(r31.u32, 16, ctx.xer);
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r29,r11,r29
	r29.u64 = ctx.r11.u64 | r29.u64;
	// blt cr6,0x822ace3c
	if (ctx.cr6.lt) goto loc_822ACE3C;
	// lwz r30,20(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// lwz r31,16(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 16);
	// beq cr6,0x822ace9c
	if (ctx.cr6.eq) goto loc_822ACE9C;
	// b 0x822ace84
	goto loc_822ACE84;
loc_822ACE78:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822b6328
	ctx.lr = 0x822ACE80;
	sub_822B6328(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822ACE84:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x822ace78
	if (!ctx.cr6.eq) goto loc_822ACE78;
	// b 0x822acea4
	goto loc_822ACEA4;
loc_822ACE90:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822b5078
	ctx.lr = 0x822ACE98;
	sub_822B5078(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822ACE9C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(r31.u32, r30.u32, ctx.xer);
	// bne cr6,0x822ace90
	if (!ctx.cr6.eq) goto loc_822ACE90;
loc_822ACEA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822AE8B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822AE8C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,144(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r28,r3,144
	r28.s64 = ctx.r3.s64 + 144;
	// b 0x822ae8f4
	goto loc_822AE8F4;
loc_822AE8D4:
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x822ae8f0
	if (ctx.cr6.eq) goto loc_822AE8F0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c2168
	ctx.lr = 0x822AE8E8;
	sub_822C2168(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822AE8F0;
	sub_822C80A8(ctx, base);
loc_822AE8F0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_822AE8F4:
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 148);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ae8d4
	if (!ctx.cr6.eq) goto loc_822AE8D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822ba200
	ctx.lr = 0x822AE914;
	sub_822BA200(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822B1B40) {
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
	ctx.lr = 0x822B1B48;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32163
	ctx.r9.s64 = -2107834368;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r9,31492(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 31492);
	// lwz r11,31552(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31552);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r27,8(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// bne 0x822b1b78
	if (!ctx.cr0.eq) goto loc_822B1B78;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,31552(r10)
	REX_STORE_U32(ctx.r10.u32 + 31552, ctx.r11.u32);
loc_822B1B78:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r11,31536
	r29.s64 = ctx.r11.s64 + 31536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stfs f0,31536(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 31536, temp.u32);
	// lfs f0,68(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lfs f0,72(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 8, temp.u32);
	// lfs f0,76(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lwz r11,528(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 528);
	// addi r4,r11,384
	ctx.r4.s64 = ctx.r11.s64 + 384;
	// bl 0x822a5ac8
	ctx.lr = 0x822B1BB0;
	sub_822A5AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,608(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 608);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f11,612(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 612);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,616(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 616);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r30,384
	r31.s64 = r30.s64 + 384;
	// addi r5,r30,192
	ctx.r5.s64 = r30.s64 + 192;
	// lfs f31,2024(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f31.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f31
	ctx.f12.f64 = double(float(ctx.f12.f64 * f31.f64));
	// lfs f0,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * f31.f64));
	// fmuls f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 * f31.f64));
	// stfs f13,384(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 384, temp.u32);
	// stfs f0,388(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 388, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,392(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 392, temp.u32);
	// addi r28,r30,608
	r28.s64 = r30.s64 + 608;
	// stfs f0,396(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 396, temp.u32);
	// stfs f0,400(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 400, temp.u32);
	// stfs f13,404(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 404, temp.u32);
	// stfs f0,408(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 408, temp.u32);
	// stfs f0,412(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 412, temp.u32);
	// stfs f0,416(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 416, temp.u32);
	// stfs f0,420(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 420, temp.u32);
	// stfs f13,424(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 424, temp.u32);
	// stfs f0,428(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 428, temp.u32);
	// stfs f13,444(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 444, temp.u32);
	// stfs f12,432(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r30.u32 + 432, temp.u32);
	// stfs f11,436(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 436, temp.u32);
	// stfs f10,440(r30)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r30.u32 + 440, temp.u32);
	// bl 0x8229f270
	ctx.lr = 0x822B1C38;
	sub_8229F270(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B1C48;
	sub_822A9900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r30,624
	ctx.r5.s64 = r30.s64 + 624;
	// bl 0x822a9900
	ctx.lr = 0x822B1C58;
	sub_822A9900(ctx, base);
	// lfs f0,640(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,644(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 644);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// lfs f12,648(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 648);
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
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r28,r30,640
	r28.s64 = r30.s64 + 640;
	// bl 0x822a9900
	ctx.lr = 0x822B1C90;
	sub_822A9900(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r5,r30,128
	ctx.r5.s64 = r30.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B1CA0;
	sub_8229F270(ctx, base);
	// lwz r11,452(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 452);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// bne cr6,0x822b1ccc
	if (!ctx.cr6.eq) goto loc_822B1CCC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b1cc4
	if (!ctx.cr6.eq) goto loc_822B1CC4;
	// bl 0x822aa660
	ctx.lr = 0x822B1CC0;
	sub_822AA660(ctx, base);
	// b 0x822b1ce0
	goto loc_822B1CE0;
loc_822B1CC4:
	// bl 0x822aa6a8
	ctx.lr = 0x822B1CC8;
	sub_822AA6A8(ctx, base);
	// b 0x822b1ce0
	goto loc_822B1CE0;
loc_822B1CCC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822b1cdc
	if (!ctx.cr6.eq) goto loc_822B1CDC;
	// bl 0x822aa540
	ctx.lr = 0x822B1CD8;
	sub_822AA540(ctx, base);
	// b 0x822b1ce0
	goto loc_822B1CE0;
loc_822B1CDC:
	// bl 0x822aa5d0
	ctx.lr = 0x822B1CE0;
	sub_822AA5D0(ctx, base);
loc_822B1CE0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229f270
	ctx.lr = 0x822B1CF0;
	sub_8229F270(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B1D00;
	sub_822A9900(ctx, base);
	// addi r5,r30,656
	ctx.r5.s64 = r30.s64 + 656;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B1D10;
	sub_822A9900(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822a9900
	ctx.lr = 0x822B1D20;
	sub_822A9900(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822BAA00) {
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
	// bl 0x822ba7e8
	ctx.lr = 0x822BAA18;
	sub_822BA7E8(ctx, base);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822baa28
	if (ctx.cr6.eq) goto loc_822BAA28;
	// bl 0x822c80a8
	ctx.lr = 0x822BAA28;
	sub_822C80A8(ctx, base);
loc_822BAA28:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822BD300) {
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
	// bl 0x822bbb08
	ctx.lr = 0x822BD318;
	sub_822BBB08(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,24160
	ctx.r11.s64 = ctx.r11.s64 + 24160;
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_822BE1A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f13.f64, ctx.f0.f64)));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f12.f64, ctx.f0.f64)));
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// blt cr6,0x822be1d8
	if (ctx.cr6.lt) goto loc_822BE1D8;
loc_822BE1D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822BE1D8:
	// fabs f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f11,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// blt cr6,0x822be1d0
	if (ctx.cr6.lt) goto loc_822BE1D0;
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f11
	ctx.cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x822be200
	if (!ctx.cr6.lt) goto loc_822BE200;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_822BE200:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// lfs f12,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f10,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r5)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmuls f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,8(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C2BA8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C2BCC;
	sub_822C9160(ctx, base);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x822c9160
	ctx.lr = 0x822C2BD4;
	sub_822C9160(ctx, base);
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x822c9160
	ctx.lr = 0x822C2BDC;
	sub_822C9160(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822c9160
	ctx.lr = 0x822C2BE4;
	sub_822C9160(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// bl 0x822c9160
	ctx.lr = 0x822C2BEC;
	sub_822C9160(ctx, base);
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x822c9160
	ctx.lr = 0x822C2BF4;
	sub_822C9160(ctx, base);
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x822c9160
	ctx.lr = 0x822C2BFC;
	sub_822C9160(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x822c9160
	ctx.lr = 0x822C2C04;
	sub_822C9160(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// bl 0x822c9160
	ctx.lr = 0x822C2C0C;
	sub_822C9160(ctx, base);
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x822c9160
	ctx.lr = 0x822C2C14;
	sub_822C9160(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x822c9160
	ctx.lr = 0x822C2C1C;
	sub_822C9160(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = r31.s64 + 76;
	// bl 0x822c9160
	ctx.lr = 0x822C2C24;
	sub_822C9160(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x822c9160
	ctx.lr = 0x822C2C2C;
	sub_822C9160(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x822c9160
	ctx.lr = 0x822C2C34;
	sub_822C9160(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x822c9160
	ctx.lr = 0x822C2C3C;
	sub_822C9160(ctx, base);
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x822c9160
	ctx.lr = 0x822C2C44;
	sub_822C9160(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822c9160
	ctx.lr = 0x822C2C4C;
	sub_822C9160(ctx, base);
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x822c9160
	ctx.lr = 0x822C2C54;
	sub_822C9160(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x822c9160
	ctx.lr = 0x822C2C5C;
	sub_822C9160(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x822c9160
	ctx.lr = 0x822C2C64;
	sub_822C9160(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x822c9160
	ctx.lr = 0x822C2C6C;
	sub_822C9160(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x822c9160
	ctx.lr = 0x822C2C74;
	sub_822C9160(ctx, base);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x822c9160
	ctx.lr = 0x822C2C7C;
	sub_822C9160(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822c9160
	ctx.lr = 0x822C2C84;
	sub_822C9160(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822c9160
	ctx.lr = 0x822C2C8C;
	sub_822C9160(ctx, base);
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x822c9160
	ctx.lr = 0x822C2C94;
	sub_822C9160(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = r31.s64 + 136;
	// bl 0x822c9160
	ctx.lr = 0x822C2C9C;
	sub_822C9160(ctx, base);
	// addi r3,r31,140
	ctx.r3.s64 = r31.s64 + 140;
	// bl 0x822c9160
	ctx.lr = 0x822C2CA4;
	sub_822C9160(ctx, base);
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x822c9188
	ctx.lr = 0x822C2CAC;
	sub_822C9188(ctx, base);
	// addi r3,r31,144
	ctx.r3.s64 = r31.s64 + 144;
	// bl 0x822c9188
	ctx.lr = 0x822C2CB4;
	sub_822C9188(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x822c9160
	ctx.lr = 0x822C2CBC;
	sub_822C9160(ctx, base);
	// addi r3,r31,180
	ctx.r3.s64 = r31.s64 + 180;
	// bl 0x822c9160
	ctx.lr = 0x822C2CC4;
	sub_822C9160(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x822c9160
	ctx.lr = 0x822C2CCC;
	sub_822C9160(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2CE0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2cf0
	if (ctx.cr0.eq) goto loc_822C2CF0;
	// addi r3,r31,188
	ctx.r3.s64 = r31.s64 + 188;
	// bl 0x822c9160
	ctx.lr = 0x822C2CF0;
	sub_822C9160(ctx, base);
loc_822C2CF0:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2D04;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2d14
	if (ctx.cr0.eq) goto loc_822C2D14;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x822c9160
	ctx.lr = 0x822C2D14;
	sub_822C9160(ctx, base);
loc_822C2D14:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2D28;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2d38
	if (ctx.cr0.eq) goto loc_822C2D38;
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x822c9160
	ctx.lr = 0x822C2D38;
	sub_822C9160(ctx, base);
loc_822C2D38:
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2D4C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2d5c
	if (ctx.cr0.eq) goto loc_822C2D5C;
	// addi r3,r31,200
	ctx.r3.s64 = r31.s64 + 200;
	// bl 0x822c9160
	ctx.lr = 0x822C2D5C;
	sub_822C9160(ctx, base);
loc_822C2D5C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2D70;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2d88
	if (ctx.cr0.eq) goto loc_822C2D88;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x822c9160
	ctx.lr = 0x822C2D80;
	sub_822C9160(ctx, base);
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// bl 0x822c9160
	ctx.lr = 0x822C2D88;
	sub_822C9160(ctx, base);
loc_822C2D88:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2D9C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2dac
	if (ctx.cr0.eq) goto loc_822C2DAC;
	// addi r3,r31,212
	ctx.r3.s64 = r31.s64 + 212;
	// bl 0x822c9160
	ctx.lr = 0x822C2DAC;
	sub_822C9160(ctx, base);
loc_822C2DAC:
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2DC0;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2de0
	if (ctx.cr0.eq) goto loc_822C2DE0;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// bl 0x822c9160
	ctx.lr = 0x822C2DD0;
	sub_822C9160(ctx, base);
	// addi r3,r31,220
	ctx.r3.s64 = r31.s64 + 220;
	// bl 0x822c91b8
	ctx.lr = 0x822C2DD8;
	sub_822C91B8(ctx, base);
	// addi r3,r31,232
	ctx.r3.s64 = r31.s64 + 232;
	// bl 0x822c91b8
	ctx.lr = 0x822C2DE0;
	sub_822C91B8(ctx, base);
loc_822C2DE0:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2DF4;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2e0c
	if (ctx.cr0.eq) goto loc_822C2E0C;
	// addi r3,r31,244
	ctx.r3.s64 = r31.s64 + 244;
	// bl 0x822c9160
	ctx.lr = 0x822C2E04;
	sub_822C9160(ctx, base);
	// addi r3,r31,248
	ctx.r3.s64 = r31.s64 + 248;
	// bl 0x822c9160
	ctx.lr = 0x822C2E0C;
	sub_822C9160(ctx, base);
loc_822C2E0C:
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2E20;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2e30
	if (ctx.cr0.eq) goto loc_822C2E30;
	// addi r3,r31,252
	ctx.r3.s64 = r31.s64 + 252;
	// bl 0x822c9160
	ctx.lr = 0x822C2E30;
	sub_822C9160(ctx, base);
loc_822C2E30:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822b8668
	ctx.lr = 0x822C2E44;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c2e68
	if (ctx.cr0.eq) goto loc_822C2E68;
	// addi r30,r31,256
	r30.s64 = r31.s64 + 256;
	// li r31,4
	r31.s64 = 4;
loc_822C2E54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c9160
	ctx.lr = 0x822C2E5C;
	sub_822C9160(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x822c2e54
	if (!ctx.cr0.eq) goto loc_822C2E54;
loc_822C2E68:
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

DEFINE_REX_FUNC(sub_822CBA38) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,1000
	ctx.r10.s64 = 1000;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// divwu r8,r4,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r4.u32 / ctx.r10.u32 : 0);
	// divwu r10,r4,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r4.u32 / ctx.r10.u32 : 0);
	// stw r9,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mulli r9,r8,1000
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1000));
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// subf r10,r9,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mulli r10,r10,1000
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1000));
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82235710
	ctx.lr = 0x822CBA94;
	sub_82235710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822cbab0
	if (ctx.cr0.eq) goto loc_822CBAB0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82235788
	ctx.lr = 0x822CBAA8;
	sub_82235788(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_822CBAB0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CD888) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CD890;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,26176
	ctx.r11.s64 = ctx.r11.s64 + 26176;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x822c8a00
	ctx.lr = 0x822CD8B4;
	sub_822C8A00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c8be0
	ctx.lr = 0x822CD8BC;
	sub_822C8BE0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cd8cc
	if (ctx.cr0.eq) goto loc_822CD8CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822CD8CC;
	sub_822C80A8(ctx, base);
loc_822CD8CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CE610) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ce678
	if (ctx.cr6.eq) goto loc_822CE678;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r9,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r9.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r3,16493
	ctx.r3.s64 = 1080885248;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,5000
	ctx.r3.u64 = ctx.r3.u64 | 5000;
	// bl 0x823ce1c0
	ctx.lr = 0x822CE66C;
	sub_823CE1C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_822CE678:
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D09C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D09D0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// addi r29,r3,220
	r29.s64 = ctx.r3.s64 + 220;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r30.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// stb r10,28(r31)
	REX_STORE_U8(r31.u32 + 28, ctx.r10.u8);
	// stb r30,29(r31)
	REX_STORE_U8(r31.u32 + 29, r30.u8);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r30,40(r31)
	REX_STORE_U8(r31.u32 + 40, r30.u8);
	// stw r30,216(r31)
	REX_STORE_U32(r31.u32 + 216, r30.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822D0A24;
	sub_822C88C0(ctx, base);
	// stb r30,256(r31)
	REX_STORE_U8(r31.u32 + 256, r30.u8);
	// stb r30,257(r31)
	REX_STORE_U8(r31.u32 + 257, r30.u8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822d5870
	ctx.lr = 0x822D0A50;
	sub_822D5870(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// bl 0x822d5870
	ctx.lr = 0x822D0A70;
	sub_822D5870(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822d5870
	ctx.lr = 0x822D0A80;
	sub_822D5870(ctx, base);
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,164
	ctx.r3.s64 = r31.s64 + 164;
	// bl 0x822d5870
	ctx.lr = 0x822D0A90;
	sub_822D5870(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D0AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x822c80d0
	ctx.lr = 0x822D0AAC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d0abc
	if (ctx.cr0.eq) goto loc_822D0ABC;
	// bl 0x822cd7d8
	ctx.lr = 0x822D0AB8;
	sub_822CD7D8(ctx, base);
	// b 0x822d0ac0
	goto loc_822D0AC0;
loc_822D0ABC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822D0AC0:
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D3628) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D3630;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4600);
	// addi r28,r3,4600
	r28.s64 = ctx.r3.s64 + 4600;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D3650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r31
	r29.u64 = r31.u64;
	// li r30,32
	r30.s64 = 32;
loc_822D3658:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d35d0
	ctx.lr = 0x822D3660;
	sub_822D35D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// bne 0x822d3658
	if (!ctx.cr0.eq) goto loc_822D3658;
	// addi r29,r31,256
	r29.s64 = r31.s64 + 256;
	// li r30,16
	r30.s64 = 16;
loc_822D3674:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d0ad0
	ctx.lr = 0x822D367C;
	sub_822D0AD0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,264
	r29.s64 = r29.s64 + 264;
	// bne 0x822d3674
	if (!ctx.cr0.eq) goto loc_822D3674;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4596(r31)
	REX_STORE_U32(r31.u32 + 4596, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D36A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__savegprlr_25) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(__restgprlr_27) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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

DEFINE_REX_FUNC(__savefpr_31) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -8, f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_22) {
	REX_FUNC_PROLOGUE();
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
	// lfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_822D6500) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D6508;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stfd f1,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822dc9d0
	ctx.lr = 0x822D6528;
	sub_822DC9D0(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// ori r28,r10,65279
	r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,-2304(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -2304);
	// bl 0x822dc9d0
	ctx.lr = 0x822D6544;
	sub_822DC9D0(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x822d65e0
	if (!ctx.cr6.eq) goto loc_822D65E0;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f0,-2064(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -2064);
	// stfd f0,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f0.u64);
	// bl 0x822da780
	ctx.lr = 0x822D656C;
	sub_822DA780(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x822d65b8
	if (!ctx.cr0.gt) goto loc_822D65B8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x822d659c
	if (!ctx.cr6.gt) goto loc_822D659C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x822d65b8
	if (!ctx.cr6.eq) goto loc_822D65B8;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, f31.u64);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822dc700
	ctx.lr = 0x822D6598;
	sub_822DC700(ctx, base);
	// b 0x822d6624
	goto loc_822D6624;
loc_822D659C:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r31.u32 + 0, f31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// lfd f1,31912(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// bl 0x822d6cd0
	ctx.lr = 0x822D65B0;
	sub_822D6CD0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x822d6614
	goto loc_822D6614;
loc_822D65B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,26664(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 26664);
	// fadd f2,f31,f0
	ctx.f2.f64 = f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f2.u64);
	// bl 0x822dc808
	ctx.lr = 0x822D65DC;
	sub_822DC808(ctx, base);
	// b 0x822d6624
	goto loc_822D6624;
loc_822D65E0:
	// bl 0x822da900
	ctx.lr = 0x822D65E4;
	sub_822DA900(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = f31.f64 - ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, f31.u64);
	// lfd f0,31912(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bne cr6,0x822d6614
	if (!ctx.cr6.eq) goto loc_822D6614;
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_822D6614:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822dc9d0
	ctx.lr = 0x822D6620;
	sub_822DC9D0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
loc_822D6624:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(__savevmx_96) {
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

DEFINE_REX_FUNC(__restvmx_81) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E0FF8) {
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
	// li r4,72
	ctx.r4.s64 = 72;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822dba28
	ctx.lr = 0x822E1010;
	sub_822DBA28(ctx, base);
	// mr. r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e1020
	if (!ctx.cr0.eq) goto loc_822E1020;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e10bc
	goto loc_822E10BC;
loc_822E1020:
	// lis r7,-32161
	ctx.r7.s64 = -2107703296;
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,-11584(r7)
	REX_STORE_U32(ctx.r7.u32 + -11584, ctx.r10.u32);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// stw r11,-11596(r8)
	REX_STORE_U32(ctx.r8.u32 + -11596, ctx.r11.u32);
	// bge cr6,0x822e108c
	if (!ctx.cr6.lt) goto loc_822E108C;
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// li r8,10
	ctx.r8.s64 = 10;
loc_822E104C:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stb r9,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stw r10,-5(r11)
	REX_STORE_U32(ctx.r11.u32 + -5, ctx.r10.u32);
	// stw r9,3(r11)
	REX_STORE_U32(ctx.r11.u32 + 3, ctx.r9.u32);
	// stb r9,35(r11)
	REX_STORE_U8(ctx.r11.u32 + 35, ctx.r9.u8);
	// stb r8,36(r11)
	REX_STORE_U8(ctx.r11.u32 + 36, ctx.r8.u8);
	// stb r8,37(r11)
	REX_STORE_U8(ctx.r11.u32 + 37, ctx.r8.u8);
	// stw r9,59(r11)
	REX_STORE_U32(ctx.r11.u32 + 59, ctx.r9.u32);
	// stb r9,55(r11)
	REX_STORE_U8(ctx.r11.u32 + 55, ctx.r9.u8);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// lwz r10,-11584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -11584);
	// addi r6,r10,2304
	ctx.r6.s64 = ctx.r10.s64 + 2304;
	// addi r5,r11,-5
	ctx.r5.s64 = ctx.r11.s64 + -5;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822e104c
	if (ctx.cr6.lt) goto loc_822E104C;
loc_822E108C:
	// li r11,3
	ctx.r11.s64 = 3;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x822e109c
	goto loc_822E109C;
loc_822E1098:
	// lwz r10,-11584(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + -11584);
loc_822E109C:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r8,-2
	ctx.r8.s64 = -2;
	// addi r9,r9,72
	ctx.r9.s64 = ctx.r9.s64 + 72;
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// bdnz 0x822e1098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E1098;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E10BC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E6C30) {
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
	ctx.lr = 0x822E6C38;
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x822e6c74
	if (!ctx.cr6.eq) goto loc_822E6C74;
	// bl 0x822db6f8
	ctx.lr = 0x822E6C54;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E6C60;
	sub_822DB6C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e6d30
	goto loc_822E6D30;
loc_822E6C74:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x822e6c8c
	if (ctx.cr6.lt) goto loc_822E6C8C;
	// lis r11,-32161
	ctx.r11.s64 = -2107703296;
	// lwz r11,-11596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -11596);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e6cb0
	if (ctx.cr6.lt) goto loc_822E6CB0;
loc_822E6C8C:
	// bl 0x822db6f8
	ctx.lr = 0x822E6C90;
	sub_822DB6F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822db6c0
	ctx.lr = 0x822E6C9C;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E6CA8;
	sub_822D6910(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e6d30
	goto loc_822E6D30;
loc_822E6CB0:
	// srawi r11,r30,5
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1F) != 0);
	ctx.r11.s64 = r30.s32 >> 5;
	// lis r10,-32161
	ctx.r10.s64 = -2107703296;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r10,-11584
	r28.s64 = ctx.r10.s64 + -11584;
	// clrlwi r11,r30,27
	ctx.r11.u64 = r30.u32 & 0x1F;
	// mulli r29,r11,72
	r29.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6c8c
	if (ctx.cr0.eq) goto loc_822E6C8C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e5be0
	ctx.lr = 0x822E6CE4;
	sub_822E5BE0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r27,r28
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// lbz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e6d0c
	if (ctx.cr0.eq) goto loc_822E6D0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e6b48
	ctx.lr = 0x822E6D04;
	sub_822E6B48(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x822e6d20
	goto loc_822E6D20;
loc_822E6D0C:
	// bl 0x822db6c0
	ctx.lr = 0x822E6D10;
	sub_822DB6C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
loc_822E6D20:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = r31.s64 + 144;
	// bl 0x822e6d58
	ctx.lr = 0x822E6D2C;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E6D58(ctx, base);
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
loc_822E6D30:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822EBD90) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x822EBD98;
	// stfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// li r17,0
	r17.s64 = 0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r27,124
	r30.s64 = r27.s64 + 124;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822e8d60
	ctx.lr = 0x822EBDD0;
	sub_822E8D60(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824607c8
	ctx.lr = 0x822EBDDC;
	sub_824607C8(ctx, base);
	// rlwinm r24,r3,29,3,31
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(r24.u32, 3, ctx.xer);
	// bne cr6,0x822ebdf4
	if (!ctx.cr6.eq) goto loc_822EBDF4;
	// li r24,4
	r24.s64 = 4;
	// li r19,1
	r19.s64 = 1;
loc_822EBDF4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// mullw r10,r24,r26
	ctx.r10.s64 = int64_t(r24.s32) * int64_t(r26.s32);
	// divwu r25,r11,r10
	r25.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// divwu r20,r21,r10
	r20.u64 = uint32_t(ctx.r10.u32 ? r21.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r18,10000
	r18.s64 = 10000;
	// subf r23,r25,r20
	r23.u64 = r20.u64 - r25.u64;
	// lfd f30,26664(r9)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r9.u32 + 26664);
	// lfd f31,-28024(r8)
	f31.u64 = REX_LOAD_U64(ctx.r8.u32 + -28024);
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
loc_822EBE2C:
	// lwz r11,676(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ebfd0
	if (ctx.cr6.eq) goto loc_822EBFD0;
	// subf r23,r25,r20
	r23.u64 = r20.u64 - r25.u64;
	// stw r23,80(r31)
	REX_STORE_U32(r31.u32 + 80, r23.u32);
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(r23.u32, 16, ctx.xer);
	// blt cr6,0x822ebfd0
	if (ctx.cr6.lt) goto loc_822EBFD0;
	// lwz r3,48(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 48);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// subf r29,r11,r21
	r29.u64 = r21.u64 - ctx.r11.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,80(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EBE64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r7,116(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 116);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EBE7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mullw r6,r25,r24
	ctx.r6.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mullw r5,r6,r26
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// lwz r3,672(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 672);
	// addi r8,r31,104
	ctx.r8.s64 = r31.s64 + 104;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f4170
	ctx.lr = 0x822EBEA8;
	sub_822F4170(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ebfc4
	if (ctx.cr6.eq) goto loc_822EBFC4;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EBEC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x822ebee4
	if (ctx.cr6.lt) goto loc_822EBEE4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// bne cr6,0x822ebee4
	if (!ctx.cr6.eq) goto loc_822EBEE4;
	// ld r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 104);
	// divd r10,r11,r18
	ctx.r10.s64 = (r18.s64 && !(ctx.r11.s64 == INT64_MIN && r18.s64 == -1)) ? ctx.r11.s64 / r18.s64 : 0;
	// std r10,0(r28)
	REX_STORE_U64(r28.u32 + 0, ctx.r10.u64);
loc_822EBEE4:
	// lwz r11,676(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 676);
	// add r25,r25,r29
	r25.u64 = r25.u64 + r29.u64;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - r29.u64;
	// stw r25,84(r31)
	REX_STORE_U32(r31.u32 + 84, r25.u32);
	// stw r10,676(r27)
	REX_STORE_U32(r27.u32 + 676, ctx.r10.u32);
	// beq cr6,0x822ebfb0
	if (ctx.cr6.eq) goto loc_822EBFB0;
	// mullw r11,r26,r29
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + r30.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-3
	ctx.r10.s64 = ctx.r9.s64 + -3;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
loc_822EBF2C:
	// stw r7,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r7.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ebfb0
	if (!ctx.cr6.lt) goto loc_822EBFB0;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r6,1(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rotlwi r5,r9,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r9,r3,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// rlwinm r6,r9,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822ebf78
	if (ctx.cr6.eq) goto loc_822EBF78;
	// clrlwi r9,r9,9
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFF;
	// std r9,112(r31)
	REX_STORE_U64(r31.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmsub f12,f13,f31,f30
	ctx.f12.f64 = std::fma(ctx.f13.f64, f31.f64, -f30.f64);
	// b 0x822ebf8c
	goto loc_822EBF8C;
loc_822EBF78:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,120(r31)
	REX_STORE_U64(r31.u32 + 120, ctx.r9.u64);
	// lfd f0,120(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(r31.u32 + 120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fmul f12,f13,f31
	ctx.f12.f64 = ctx.f13.f64 * f31.f64;
loc_822EBF8C:
	// frsp f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r10,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// b 0x822ebf2c
	goto loc_822EBF2C;
loc_822EBFB0:
	// mullw r11,r25,r24
	ctx.r11.s64 = int64_t(r25.s32) * int64_t(r24.s32);
	// mullw r10,r11,r26
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// stw r10,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822ebe2c
	goto loc_822EBE2C;
loc_822EBFC4:
	// lis r17,-32768
	r17.s64 = -2147483648;
	// ori r17,r17,16389
	r17.u64 = r17.u64 | 16389;
	// stw r17,100(r31)
	REX_STORE_U32(r31.u32 + 100, r17.u32);
loc_822EBFD0:
	// li r11,16
	ctx.r11.s64 = 16;
	// subfc r10,r11,r23
	ctx.xer.ca = r23.u32 >= ctx.r11.u32;
	ctx.r10.u64 = r23.u64 - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,0(r16)
	REX_STORE_U32(r16.u32 + 0, ctx.r7.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x822ec000
	goto loc_822EC000;
loc_822EC000:
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// lfd f30,-152(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_822F6520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822F6528;
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
	ctx.lr = 0x822F6540;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f67e0
	if (!ctx.cr6.eq) goto loc_822F67E0;
	// li r29,0
	r29.s64 = 0;
loc_822F6550:
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
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f6784
	if (ctx.cr6.eq) goto loc_822F6784;
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
	ctx.lr = 0x822F659C;
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
	ctx.lr = 0x822F65B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x822f6730
	if (!ctx.cr6.eq) goto loc_822F6730;
loc_822F65BC:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F65D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f46e0
	ctx.lr = 0x822F65D8;
	sub_822F46E0(ctx, base);
	// lwz r9,244(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 244);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822f66b8
	if (!ctx.cr6.gt) goto loc_822F66B8;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f66b8
	if (!ctx.cr6.eq) goto loc_822F66B8;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f4740
	ctx.lr = 0x822F65F8;
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
	ctx.lr = 0x822F6610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,72(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F6628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 84);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// lwz r28,0(r6)
	r28.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bctrl 
	ctx.lr = 0x822F6644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,120(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 120);
	// addi r4,r3,-8
	ctx.r4.s64 = ctx.r3.s64 + -8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F665C;
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
	// blt cr6,0x822f6704
	if (ctx.cr6.lt) goto loc_822F6704;
	// bctrl 
	ctx.lr = 0x822F6678;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822f4840
	ctx.lr = 0x822F6680;
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
	ctx.lr = 0x822F6694;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,204(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 204);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F66A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822f6730
	if (ctx.cr6.eq) goto loc_822F6730;
	// b 0x822f66e0
	goto loc_822F66E0;
loc_822F66B8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F66CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,164(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 164);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F66E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F66E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F66F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x6;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822f65bc
	if (ctx.cr6.eq) goto loc_822F65BC;
	// b 0x822f6730
	goto loc_822F6730;
loc_822F6704:
	// bctrl 
	ctx.lr = 0x822F6708;
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
	ctx.lr = 0x822F671C;
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
	ctx.lr = 0x822F6730;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822F6730:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6764
	if (ctx.cr6.eq) goto loc_822F6764;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6760;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_822F6764:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822f6784
	if (ctx.cr6.eq) goto loc_822F6784;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6780;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_822F6784:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F6798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r9,r3,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822f67e0
	if (!ctx.cr6.eq) goto loc_822F67E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F67B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,264(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 264);
	// bl 0x8220be80
	ctx.lr = 0x822F67C0;
	sub_8220BE80(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,256(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 256);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F67D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r7,r3,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822f6550
	if (ctx.cr6.eq) goto loc_822F6550;
loc_822F67E0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F67F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823072E0) {
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
	ctx.lr = 0x823072E8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r27,0
	r27.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stb r27,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, r27.u8);
	// mr r26,r27
	r26.u64 = r27.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r29,r11,r4
	r29.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpd cr6,r29,r10
	ctx.cr6.compare<int64_t>(r29.s64, ctx.r10.s64, ctx.xer);
	// bgt cr6,0x8230742c
	if (ctx.cr6.gt) goto loc_8230742C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpd cr6,r29,r10
	ctx.cr6.compare<int64_t>(r29.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x8230742c
	if (ctx.cr6.lt) goto loc_8230742C;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230743c
	if (ctx.cr6.eq) goto loc_8230743C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x822f9928
	ctx.lr = 0x82307350;
	sub_822F9928(ctx, base);
	// lis r11,-32688
	ctx.r11.s64 = -2142240768;
	// ori r30,r11,22
	r30.u64 = ctx.r11.u64 | 22;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// beq cr6,0x823073c4
	if (ctx.cr6.eq) goto loc_823073C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82307498
	if (ctx.cr6.lt) goto loc_82307498;
loc_82307368:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82307498
	if (ctx.cr6.lt) goto loc_82307498;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823073a0
	if (ctx.cr6.eq) goto loc_823073A0;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x823073a0
	if (!ctx.cr6.eq) goto loc_823073A0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823073a0
	if (ctx.cr6.eq) goto loc_823073A0;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823073c0
	if (ctx.cr6.eq) goto loc_823073C0;
loc_823073A0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x822f9990
	ctx.lr = 0x823073B4;
	sub_822F9990(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// bne cr6,0x82307368
	if (!ctx.cr6.eq) goto loc_82307368;
	// b 0x823073c4
	goto loc_823073C4;
loc_823073C0:
	// li r26,1
	r26.s64 = 1;
loc_823073C4:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x822f99f8
	ctx.lr = 0x823073D0;
	sub_822F99F8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x8230743c
	if (ctx.cr6.eq) goto loc_8230743C;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rotldi r11,r29,1
	ctx.r11.u64 = __builtin_rotateleft64(r29.u64, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,72(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// divd r6,r29,r8
	ctx.r6.s64 = (ctx.r8.s64 && !(r29.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? r29.s64 / ctx.r8.s64 : 0;
	// andc r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// rotlwi r11,r6,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// tdlgei r5,-1
	if (ctx.r5.s64 == -1ll || ctx.r5.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x8230742c
	if (ctx.cr6.gt) goto loc_8230742C;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,16(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8230747c
	if (!ctx.cr6.gt) goto loc_8230747C;
loc_8230742C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230743C:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8230747c
	if (!ctx.cr6.gt) goto loc_8230747C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mulld r7,r9,r28
	ctx.r7.s64 = static_cast<int64_t>(ctx.r9.u64 * r28.u64);
	// rotldi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1);
	// divd r5,r7,r8
	ctx.r5.s64 = (ctx.r8.s64 && !(ctx.r7.s64 == INT64_MIN && ctx.r8.s64 == -1)) ? ctx.r7.s64 / ctx.r8.s64 : 0;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// tdllei r8,0
	if (ctx.r8.s64 == 0ll || ctx.r8.u64 < 0ull) ppc_trap(ctx, base, 0);
	// andc r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// tdlgei r4,-1
	if (ctx.r4.s64 == -1ll || ctx.r4.u64 > 18446744073709551615ull) ppc_trap(ctx, base, 0);
loc_8230747C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 16);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82307160
	ctx.lr = 0x82307498;
	sub_82307160(ctx, base);
loc_82307498:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823108A8) {
	REX_FUNC_PROLOGUE();
	// lwz r9,44(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r8,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// ld r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823108f4
	if (!ctx.cr6.eq) goto loc_823108F4;
	// stw r4,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_823108F4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ld r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// cmpld cr6,r7,r6
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r6.u64, ctx.xer);
	// bge cr6,0x82310940
	if (!ctx.cr6.lt) goto loc_82310940;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82310920
	if (!ctx.cr6.eq) goto loc_82310920;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r4,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r4.u32);
loc_82310920:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823108f4
	if (!ctx.cr6.eq) goto loc_823108F4;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_82310940:
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r4,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r4.u32);
	// stw r4,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82311070) {
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
	ctx.lr = 0x82311078;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,44(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 40);
	// ld r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r4
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r4.u64, ctx.xer);
	// beq cr6,0x823110c0
	if (ctx.cr6.eq) goto loc_823110C0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823110B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311200
	if (ctx.cr6.lt) goto loc_82311200;
loc_823110C0:
	// ld r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 64);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
loc_823110CC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 96);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823125c8
	ctx.lr = 0x823110E0;
	sub_823125C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311200
	if (ctx.cr6.lt) goto loc_82311200;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8231119c
	if (ctx.cr6.eq) goto loc_8231119C;
	// lwz r30,84(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// cmpld cr6,r4,r10
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r10.u64, ctx.xer);
	// bne cr6,0x82311118
	if (!ctx.cr6.eq) goto loc_82311118;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82310a18
	ctx.lr = 0x82311110;
	sub_82310A18(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311200
	if (ctx.cr6.lt) goto loc_82311200;
loc_82311118:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// ld r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// ld r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// subf r6,r11,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmpld cr6,r6,r8
	ctx.cr6.compare<uint64_t>(ctx.r6.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82311154
	if (ctx.cr6.lt) goto loc_82311154;
	// bne cr6,0x82311170
	if (!ctx.cr6.eq) goto loc_82311170;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r11.u32);
	// b 0x82311170
	goto loc_82311170;
loc_82311154:
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// stw r6,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r6.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82311170:
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// ld r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 96);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// std r11,96(r31)
	REX_STORE_U64(r31.u32 + 96, ctx.r11.u64);
	// beq 0x8231119c
	if (ctx.cr0.eq) goto loc_8231119C;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x823110cc
	if (!ctx.cr6.gt) goto loc_823110CC;
loc_8231119C:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823111f0
	if (ctx.cr6.eq) goto loc_823111F0;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 76);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// ld r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823111C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82311200
	if (ctx.cr6.lt) goto loc_82311200;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// ld r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 40);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r28,92(r31)
	REX_STORE_U32(r31.u32 + 92, r28.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r9.u64);
	// std r8,40(r31)
	REX_STORE_U64(r31.u32 + 40, ctx.r8.u64);
loc_823111F0:
	// ld r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 64);
	// clrldi r11,r27,32
	ctx.r11.u64 = r27.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,64(r31)
	REX_STORE_U64(r31.u32 + 64, ctx.r11.u64);
loc_82311200:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823156A8) {
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
	ctx.lr = 0x823156B0;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82315750
	if (!ctx.cr6.eq) goto loc_82315750;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82315a2c
	if (!ctx.cr6.gt) goto loc_82315A2C;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_823156E8:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 584);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r3,114(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lhzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sth r4,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r4.u16);
	// sth r4,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r4.u16);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823156e8
	if (ctx.cr6.lt) goto loc_823156E8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_82315750:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82315a2c
	if (!ctx.cr6.eq) goto loc_82315A2C;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82315a24
	if (!ctx.cr6.gt) goto loc_82315A24;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f30,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f31,2008(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	f31.f64 = double(temp.f32);
loc_82315780:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,424(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 424);
	// lhz r5,114(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 114);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r8,124(r30)
	REX_STORE_U16(r30.u32 + 124, ctx.r8.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r9,-2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r9,122(r30)
	REX_STORE_U16(r30.u32 + 122, ctx.r9.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r5,126(r30)
	REX_STORE_U16(r30.u32 + 126, ctx.r5.u16);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x823158a0
	if (!ctx.cr6.gt) goto loc_823158A0;
	// lwz r7,256(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 256);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// li r10,0
	ctx.r10.s64 = 0;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// divw r6,r7,r11
	ctx.r6.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// andc r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble cr6,0x8231583c
	if (!ctx.cr6.gt) goto loc_8231583C;
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r9,r9,r11
	ctx.r9.u64 = uint32_t((ctx.r11.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r9.s32 / ctx.r11.s32 : 0);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twlgei r6,-1
	if (ctx.r6.s32 == -1 || ctx.r6.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_8231582C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r11,r9,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8231582c
	if (ctx.cr6.gt) goto loc_8231582C;
loc_8231583C:
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82315a40
	if (!ctx.cr6.lt) goto loc_82315A40;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82315870
	if (!ctx.cr6.gt) goto loc_82315870;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231585C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8231585c
	if (ctx.cr6.lt) goto loc_8231585C;
loc_82315870:
	// lwz r9,340(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 340);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// lwz r5,352(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r4.u32);
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// lwzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r11.u32);
	// b 0x823158c4
	goto loc_823158C4;
loc_823158A0:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 340);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lwz r9,352(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 352);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// stw r6,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r6.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r5,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r5.u32);
loc_823158C4:
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 276);
	// divw r3,r5,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// mullw r4,r9,r11
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// divw r10,r4,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// stw r10,268(r31)
	REX_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// sth r8,118(r30)
	REX_STORE_U16(r30.u32 + 118, ctx.r8.u16);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// lwz r8,268(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 268);
	// andc r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// andc r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twllei r6,0
	if (ctx.r6.s32 == 0 || ctx.r6.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r4,-1
	if (ctx.r4.s32 == -1 || ctx.r4.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// twlgei r3,-1
	if (ctx.r3.s32 == -1 || ctx.r3.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 264);
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stw r9,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x823159ac
	if (!ctx.cr6.eq) goto loc_823159AC;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmuls f8,f0,f11
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * f31.f64));
	// fdivs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + f30.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r8,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r8.u32);
	// lhz r6,118(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82315998
	if (!ctx.cr6.gt) goto loc_82315998;
	// stw r11,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r11.u32);
loc_82315998:
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 412);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,400(r31)
	REX_STORE_U32(r31.u32 + 400, ctx.r8.u32);
loc_823159AC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82462288
	ctx.lr = 0x823159B8;
	sub_82462288(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x823159cc
	if (!ctx.cr6.eq) goto loc_823159CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// bl 0x82315610
	ctx.lr = 0x823159CC;
	sub_82315610(ctx, base);
loc_823159CC:
	// addi r8,r30,130
	ctx.r8.s64 = r30.s64 + 130;
	// lhz r6,124(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 124);
	// addi r7,r30,128
	ctx.r7.s64 = r30.s64 + 128;
	// lhz r5,122(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 122);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231aa18
	ctx.lr = 0x823159E8;
	sub_8231AA18(ctx, base);
	// addi r9,r30,134
	ctx.r9.s64 = r30.s64 + 134;
	// addi r8,r30,132
	ctx.r8.s64 = r30.s64 + 132;
	// lwz r7,140(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r6,126(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 126);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U16(r30.u32 + 124);
	// bl 0x82466908
	ctx.lr = 0x82315A08;
	sub_82466908(ctx, base);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82315780
	if (ctx.cr6.lt) goto loc_82315780;
loc_82315A24:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231aae8
	ctx.lr = 0x82315A2C;
	sub_8231AAE8(ctx, base);
loc_82315A2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
loc_82315A40:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
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

DEFINE_REX_FUNC(sub_8232B470) {
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
	ctx.lr = 0x8232B478;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// ble cr6,0x8232b4f8
	if (!ctx.cr6.gt) goto loc_8232B4F8;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r27,r10,r6
	r27.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_8232B494:
	// cmpw cr6,r28,r7
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8232b4f8
	if (!ctx.cr6.lt) goto loc_8232B4F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// blt cr6,0x8232b4e8
	if (ctx.cr6.lt) goto loc_8232B4E8;
	// addi r31,r28,1
	r31.s64 = r28.s64 + 1;
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8232B4BC:
	// lwzu r31,-4(r10)
	ea = -4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// lwz r29,0(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// mulld r31,r31,r30
	r31.s64 = static_cast<int64_t>(r31.u64 * r30.u64);
	// sradi r31,r31,30
	ctx.xer.ca = (r31.s64 < 0) & ((r31.u64 & 0x3FFFFFFF) != 0);
	r31.s64 = r31.s64 >> 30;
	// extsw r31,r31
	r31.s64 = r31.s32;
	// add r31,r31,r29
	r31.u64 = r31.u64 + r29.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bdnz 0x8232b4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B4BC;
loc_8232B4E8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r28,r5
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8232b494
	if (ctx.cr6.lt) goto loc_8232B494;
loc_8232B4F8:
	// add r28,r5,r7
	r28.u64 = ctx.r5.u64 + ctx.r7.u64;
	// srawi r11,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r11.s64 = r28.s32 >> 1;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8232b578
	if (!ctx.cr6.lt) goto loc_8232B578;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r3,r1,-464
	ctx.r3.s64 = ctx.r1.s64 + -464;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subf r30,r3,r6
	r30.u64 = ctx.r6.u64 - ctx.r3.u64;
	// subf r29,r5,r10
	r29.u64 = ctx.r10.u64 - ctx.r5.u64;
loc_8232B524:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r26.u32);
	// ble cr6,0x8232b56c
	if (!ctx.cr6.gt) goto loc_8232B56C;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8232B540:
	// lwzu r6,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// mulld r6,r6,r3
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r3.u64);
	// sradi r3,r6,30
	ctx.xer.ca = (ctx.r6.s64 < 0) & ((ctx.r6.u64 & 0x3FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r6.s64 >> 30;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + r31.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bdnz 0x8232b540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B540;
loc_8232B56C:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8232b524
	if (!ctx.cr0.eq) goto loc_8232B524;
loc_8232B578:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addze. r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble 0x8232b5d4
	if (!ctx.cr0.gt) goto loc_8232B5D4;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_8232B59C:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r5,r6,r11
	REX_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// addi r3,r7,-1
	ctx.r3.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u32);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// addze r3,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r3.s64 = temp.s64;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8232b59c
	if (ctx.cr6.lt) goto loc_8232B59C;
loc_8232B5D4:
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82334E28) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82334e38
	if (!ctx.cr6.eq) goto loc_82334E38;
	// li r3,-3
	ctx.r3.s64 = -3;
	// blr 
	return;
loc_82334E38:
	// b 0x82331578
	sub_82331578(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82337370) {
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
	ctx.lr = 0x82337378;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233739c
	if (!ctx.cr6.eq) goto loc_8233739C;
loc_82337390:
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_8233739C:
	// lis r11,6553
	ctx.r11.s64 = 429457408;
	// ld r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lis r9,6550
	ctx.r9.s64 = 429260800;
	// ori r8,r11,4643
	ctx.r8.u64 = ctx.r11.u64 | 4643;
	// ori r7,r9,276
	ctx.r7.u64 = ctx.r9.u64 | 276;
	// rldimi r8,r7,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// cmpld cr6,r10,r8
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x82337390
	if (!ctx.cr6.eq) goto loc_82337390;
	// lwz r31,736(r29)
	r31.u64 = REX_LOAD_U32(r29.u32 + 736);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823373d8
	if (ctx.cr6.eq) goto loc_823373D8;
	// li r3,-4
	ctx.r3.s64 = -4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823373D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e700
	ctx.lr = 0x823373E0;
	sub_8232E700(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x823373f0
	if (ctx.cr6.eq) goto loc_823373F0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823373f8
	if (!ctx.cr6.eq) goto loc_823373F8;
loc_823373F0:
	// rlwinm r11,r30,0,20,27
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0;
	// ori r30,r11,15
	r30.u64 = ctx.r11.u64 | 15;
loc_823373F8:
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// li r28,1
	r28.s64 = 1;
	// stw r30,15620(r31)
	REX_STORE_U32(r31.u32 + 15620, r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82337418
	if (!ctx.cr6.eq) goto loc_82337418;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337440
	if (ctx.cr6.eq) goto loc_82337440;
loc_82337418:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,15376(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r6,15372(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82330888
	ctx.lr = 0x82337438;
	sub_82330888(ctx, base);
	// sth r28,0(r27)
	REX_STORE_U16(r27.u32 + 0, r28.u16);
	// b 0x82337450
	goto loc_82337450;
loc_82337440:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82336ee8
	ctx.lr = 0x82337450;
	sub_82336EE8(ctx, base);
loc_82337450:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -9, ctx.xer);
	// bne cr6,0x82337460
	if (!ctx.cr6.eq) goto loc_82337460;
	// stw r28,3732(r31)
	REX_STORE_U32(r31.u32 + 3732, r28.u32);
loc_82337460:
	// lwz r11,3736(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3736);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337478
	if (ctx.cr6.eq) goto loc_82337478;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,3732(r31)
	REX_STORE_U32(r31.u32 + 3732, r28.u32);
	// stw r11,3736(r31)
	REX_STORE_U32(r31.u32 + 3736, ctx.r11.u32);
loc_82337478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e760
	ctx.lr = 0x82337480;
	sub_8232E760(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8233D4C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d530
	if (ctx.cr6.eq) goto loc_8233D530;
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// bl 0x823cd270
	ctx.lr = 0x8233D4EC;
	sub_823CD270(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r4,r4,32769
	ctx.r4.u64 = ctx.r4.u64 | 32769;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x8233D500;
	sub_823CD250(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(r30.s32, -1, ctx.xer);
	// beq cr6,0x8233d530
	if (ctx.cr6.eq) goto loc_8233D530;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// neg r8,r30
	ctx.r8.s64 = static_cast<int64_t>(-r30.u64);
	// addi r6,r11,-30204
	ctx.r6.s64 = ctx.r11.s64 + -30204;
loc_8233D514:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stwcx. r9,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8233d514
	if (!ctx.cr0.eq) goto loc_8233D514;
loc_8233D530:
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

DEFINE_REX_FUNC(sub_8233FF60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233ff74
	if (ctx.cr6.eq) goto loc_8233FF74;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// b 0x8232ea90
	sub_8232EA90(ctx, base);
	return;
loc_8233FF74:
	// b 0x8233feb8
	sub_8233FEB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823400B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,456(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823400c8
	if (!ctx.cr6.eq) goto loc_823400C8;
	// lwz r11,3148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3148);
	// lwz r10,3152(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3152);
	// b 0x823400f4
	goto loc_823400F4;
loc_823400C8:
	// lwz r11,3956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823400fc
	if (ctx.cr6.eq) goto loc_823400FC;
	// lwz r11,3960(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823400ec
	if (ctx.cr6.eq) goto loc_823400EC;
	// lwz r11,3128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3128);
	// lwz r10,3124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// b 0x823400f4
	goto loc_823400F4;
loc_823400EC:
	// lwz r11,3136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r10,3132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3132);
loc_823400F4:
	// stw r11,3120(r3)
	REX_STORE_U32(ctx.r3.u32 + 3120, ctx.r11.u32);
	// stw r10,3116(r3)
	REX_STORE_U32(ctx.r3.u32 + 3116, ctx.r10.u32);
loc_823400FC:
	// lwz r11,3956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3956);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,3960(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3960);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82340128
	if (ctx.cr6.eq) goto loc_82340128;
	// lwz r11,3128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3128);
	// lwz r10,3124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3124);
	// stw r11,3140(r3)
	REX_STORE_U32(ctx.r3.u32 + 3140, ctx.r11.u32);
	// stw r10,3144(r3)
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r10.u32);
	// blr 
	return;
loc_82340128:
	// lwz r11,3136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 3136);
	// lwz r10,3132(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3132);
	// stw r11,3140(r3)
	REX_STORE_U32(ctx.r3.u32 + 3140, ctx.r11.u32);
	// stw r10,3144(r3)
	REX_STORE_U32(ctx.r3.u32 + 3144, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82347D38) {
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
	// addi r4,r3,3756
	ctx.r4.s64 = ctx.r3.s64 + 3756;
	// addi r3,r3,3760
	ctx.r3.s64 = ctx.r3.s64 + 3760;
	// bl 0x823530d0
	ctx.lr = 0x82347D58;
	sub_823530D0(ctx, base);
	// lwz r11,3756(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3756);
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,3800(r31)
	REX_STORE_U32(r31.u32 + 3800, ctx.r9.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,3804(r31)
	REX_STORE_U32(r31.u32 + 3804, ctx.r8.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,3808(r31)
	REX_STORE_U32(r31.u32 + 3808, ctx.r7.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,3832(r31)
	REX_STORE_U32(r31.u32 + 3832, ctx.r6.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,3836(r31)
	REX_STORE_U32(r31.u32 + 3836, ctx.r5.u32);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,3840(r31)
	REX_STORE_U32(r31.u32 + 3840, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_8234F148) {
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
	ctx.lr = 0x8234F150;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
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
	// bge 0x8234f184
	if (!ctx.cr0.lt) goto loc_8234F184;
	// bl 0x823380c8
	ctx.lr = 0x8234F184;
	sub_823380C8(ctx, base);
loc_8234F184:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r30,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234f3d8
	if (!ctx.cr6.eq) goto loc_8234F3D8;
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8234f1d4
	if (ctx.cr6.eq) goto loc_8234F1D4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,14(r31)
	REX_STORE_U16(r31.u32 + 14, ctx.r11.u16);
	// sth r11,16(r31)
	REX_STORE_U16(r31.u32 + 16, ctx.r11.u16);
	// sth r11,18(r31)
	REX_STORE_U16(r31.u32 + 18, ctx.r11.u16);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// oris r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 131072;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8234F1D4:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// addi r28,r10,25280
	r28.s64 = ctx.r10.s64 + 25280;
	// ld r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U64(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rldicl r8,r9,9,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 9) & 0x1FF;
	// rlwinm r26,r8,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r26,r28
	ctx.r4.u64 = REX_LOAD_U8(r26.u32 + r28.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234F200;
	sub_82337F50(ctx, base);
	// addi r7,r28,1
	ctx.r7.s64 = r28.s64 + 1;
	// li r30,3
	r30.s64 = 3;
	// lbzx r11,r26,r7
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234f218
	if (!ctx.cr6.eq) goto loc_8234F218;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_8234F218:
	// lwz r10,84(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 84);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234f3d8
	if (!ctx.cr6.eq) goto loc_8234F3D8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8234f3d8
	if (ctx.cr6.lt) goto loc_8234F3D8;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bgt cr6,0x8234f3d8
	if (ctx.cr6.gt) goto loc_8234F3D8;
	// srawi. r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r26,r11,30
	r26.u64 = ctx.r11.u32 & 0x3;
	// beq 0x8234f2e0
	if (ctx.cr0.eq) goto loc_8234F2E0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x8234f3d8
	if (!ctx.cr6.eq) goto loc_8234F3D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,0,15,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r7,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// rldicl r29,r8,1,63
	r29.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0x1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x8234f284
	if (!ctx.cr0.lt) goto loc_8234F284;
	// bl 0x823380c8
	ctx.lr = 0x8234F284;
	sub_823380C8(ctx, base);
loc_8234F284:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r29,24
	ctx.r10.u64 = r29.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8234f3d8
	if (!ctx.cr6.eq) goto loc_8234F3D8;
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// addi r28,r10,23856
	r28.s64 = ctx.r10.s64 + 23856;
	// rlwinm r25,r9,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + r28.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234F2C4;
	sub_82337F50(ctx, base);
	// addi r8,r28,1
	ctx.r8.s64 = r28.s64 + 1;
	// lbzx r11,r25,r8
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234f2d8
	if (!ctx.cr6.eq) goto loc_8234F2D8;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_8234F2D8:
	// clrlwi r28,r11,24
	r28.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8234f350
	goto loc_8234F350;
loc_8234F2E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// oris r9,r11,2
	ctx.r9.u64 = ctx.r11.u64 | 131072;
	// addi r28,r10,23856
	r28.s64 = ctx.r10.s64 + 23856;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r29,84(r27)
	r29.u64 = REX_LOAD_U32(r27.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U64(r29.u32 + 0);
	// rldicl r7,r8,6,58
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 6) & 0x3F;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r25,r28
	ctx.r4.u64 = REX_LOAD_U8(r25.u32 + r28.u32);
	// bl 0x82337f50
	ctx.lr = 0x8234F310;
	sub_82337F50(ctx, base);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// lbzx r11,r25,r6
	ctx.r11.u64 = REX_LOAD_U8(r25.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8234f324
	if (!ctx.cr6.eq) goto loc_8234F324;
	// stw r30,20(r29)
	REX_STORE_U32(r29.u32 + 20, r30.u32);
loc_8234F324:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// subfic r28,r11,15
	ctx.xer.ca = ctx.r11.u32 <= 15;
	r28.u64 = static_cast<uint64_t>(15) - ctx.r11.u64;
	// bne cr6,0x8234f340
	if (!ctx.cr6.eq) goto loc_8234F340;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8234f344
	if (ctx.cr6.eq) goto loc_8234F344;
loc_8234F340:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234F344:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwimi r10,r11,30,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8234F350:
	// lwz r11,84(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8234f3d8
	if (!ctx.cr6.eq) goto loc_8234F3D8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// blt cr6,0x8234f3d8
	if (ctx.cr6.lt) goto loc_8234F3D8;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(r28.s32, 15, ctx.xer);
	// bgt cr6,0x8234f3d8
	if (ctx.cr6.gt) goto loc_8234F3D8;
	// srawi r5,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	ctx.r5.s64 = r26.s32 >> 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234F380;
	sub_8238ECB0(ctx, base);
	// clrlwi r5,r26,31
	ctx.r5.u64 = r26.u32 & 0x1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234F390;
	sub_8238ECB0(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_8234F394:
	// sraw r11,r28,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (r28.s32 < 0) & (((r28.s32 >> temp.u32) << temp.u32) != r28.s32);
	ctx.r11.s64 = r28.s32 >> temp.u32;
	// clrlwi r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ecb0
	ctx.lr = 0x8234F3A8;
	sub_8238ECB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bge 0x8234f394
	if (!ctx.cr0.lt) goto loc_8234F394;
	// addi r3,r31,14
	ctx.r3.s64 = r31.s64 + 14;
	// bl 0x82340140
	ctx.lr = 0x8234F3BC;
	sub_82340140(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwimi r10,r11,19,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8234F3D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8235B188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bgt cr6,0x8235b230
	if (ctx.cr6.gt) goto loc_8235B230;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235b4cc
	if (!ctx.cr6.gt) goto loc_8235B4CC;
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
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f6,f9
	ctx.f6.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f6.u64);
	// fctiwz f5,f8
	ctx.f5.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f5,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f5.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// lwz r7,-4(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
loc_8235B1F4:
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
	// blt cr6,0x8235b1f4
	if (ctx.cr6.lt) goto loc_8235B1F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8235B230:
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// fsubs f0,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// fneg f12,f3
	ctx.f12.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// std r10,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r10.u64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f13,f10
	ctx.f13.f64 = double(float(ctx.f10.f64));
	// fsubs f12,f2,f12
	ctx.f12.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8235b25c
	if (!ctx.cr6.gt) goto loc_8235B25C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8235B25C:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f13,4000(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// lfs f10,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// lwz r5,-4(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x8235b2dc
	if (ctx.cr6.lt) goto loc_8235B2DC;
	// fadds f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// addi r6,r5,-3
	ctx.r6.s64 = ctx.r5.s64 + -3;
	// li r10,0
	ctx.r10.s64 = 0;
	// fadd f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f9.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
loc_8235B2A0:
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
	// stw r9,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
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
	// blt cr6,0x8235b2a0
	if (ctx.cr6.lt) goto loc_8235B2A0;
loc_8235B2DC:
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8235b318
	if (!ctx.cr6.lt) goto loc_8235B318;
	// fadds f0,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fadd f11,f0,f13
	ctx.f11.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f9.u64);
	// lwz r9,-4(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
loc_8235B308:
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235b308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B308;
loc_8235B318:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// fmuls f11,f3,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f3.f64 * ctx.f3.f64));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lfd f0,-8(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f0,f9
	ctx.f0.f64 = double(float(ctx.f9.f64));
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bgt cr6,0x8235b340
	if (ctx.cr6.gt) goto loc_8235B340;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8235B340:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f0.u64);
	// lwz r10,-4(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235b3c0
	if (!ctx.cr6.lt) goto loc_8235B3C0;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f12,31912(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 31912);
loc_8235B368:
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r9.u64);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfd f0,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fsubs f7,f8,f2
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f2.f64));
	// fnmsubs f0,f7,f7,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f7.f64, -ctx.f11.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8235b3a0
	if (ctx.cr6.gt) goto loc_8235B3A0;
	// fadd f0,f1,f13
	ctx.f0.f64 = ctx.f1.f64 + ctx.f13.f64;
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f9,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f9.u32);
	// b 0x8235b3b4
	goto loc_8235B3B4;
loc_8235B3A0:
	// fsqrt f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f0.f64);
	// fsub f9,f1,f0
	ctx.f9.f64 = ctx.f1.f64 - ctx.f0.f64;
	// fadd f8,f9,f13
	ctx.f8.f64 = ctx.f9.f64 + ctx.f13.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.f7.u32);
loc_8235B3B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8235b368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B368;
loc_8235B3C0:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8235b400
	if (!ctx.cr6.lt) goto loc_8235B400;
	// fadds f0,f1,f10
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f0,f13
	ctx.f12.f64 = ctx.f0.f64 + ctx.f13.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f11.u64);
	// lwz r8,-4(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
loc_8235B3E4:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235b3e4
	if (ctx.cr6.lt) goto loc_8235B3E4;
loc_8235B400:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235b43c
	if (!ctx.cr6.gt) goto loc_8235B43C;
	// fadd f0,f1,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 + ctx.f13.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f12.u64);
	// lwz r8,-4(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -4);
loc_8235B420:
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8235b420
	if (ctx.cr6.lt) goto loc_8235B420;
loc_8235B43C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8235b4cc
	if (!ctx.cr6.gt) goto loc_8235B4CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2008(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
loc_8235B458:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r6.u64);
	// lfd f12,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fsubs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fadd f8,f9,f13
	ctx.f8.f64 = ctx.f9.f64 + ctx.f13.f64;
	// fctiwz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfiwx f7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.f7.u32);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r4,32(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwzx r10,r11,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f6,-16(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f0,f4
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f4.f64));
	// fadd f2,f3,f13
	ctx.f2.f64 = ctx.f3.f64 + ctx.f13.f64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfiwx f1,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.f1.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8235b458
	if (ctx.cr6.lt) goto loc_8235B458;
loc_8235B4CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82365638) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x82365640;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,3392(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3392);
	// lwz r9,188(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r8,200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// divwu r9,r9,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// divwu r8,r8,r10
	ctx.r8.u64 = uint32_t(ctx.r10.u32 ? ctx.r8.u32 / ctx.r10.u32 : 0);
	// lwz r31,136(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// divwu r4,r3,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r3.u32 / ctx.r10.u32 : 0);
	// lwz r7,220(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r6,224(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 224);
	// divwu r30,r31,r10
	r30.u64 = uint32_t(ctx.r10.u32 ? r31.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3876(r11)
	REX_STORE_U32(ctx.r11.u32 + 3876, ctx.r5.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r9,3880(r11)
	REX_STORE_U32(ctx.r11.u32 + 3880, ctx.r9.u32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r5,3884(r11)
	REX_STORE_U32(ctx.r11.u32 + 3884, ctx.r5.u32);
	// stw r8,3888(r11)
	REX_STORE_U32(ctx.r11.u32 + 3888, ctx.r8.u32);
	// stw r4,3868(r11)
	REX_STORE_U32(ctx.r11.u32 + 3868, ctx.r4.u32);
	// stw r30,3872(r11)
	REX_STORE_U32(ctx.r11.u32 + 3872, r30.u32);
	// stw r7,3892(r11)
	REX_STORE_U32(ctx.r11.u32 + 3892, ctx.r7.u32);
	// stw r6,3896(r11)
	REX_STORE_U32(ctx.r11.u32 + 3896, ctx.r6.u32);
	// blt cr6,0x8236572c
	if (ctx.cr6.lt) goto loc_8236572C;
	// lwz r5,204(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// rlwinm r29,r9,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r28,208(r11)
	r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// rlwinm r27,r8,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r9,3912(r11)
	REX_STORE_U32(ctx.r11.u32 + 3912, ctx.r9.u32);
	// stw r8,3920(r11)
	REX_STORE_U32(ctx.r11.u32 + 3920, ctx.r8.u32);
	// stw r29,3916(r11)
	REX_STORE_U32(ctx.r11.u32 + 3916, r29.u32);
	// stw r27,3924(r11)
	REX_STORE_U32(ctx.r11.u32 + 3924, r27.u32);
	// stw r4,3900(r11)
	REX_STORE_U32(ctx.r11.u32 + 3900, ctx.r4.u32);
	// mullw r9,r28,r8
	ctx.r9.s64 = int64_t(r28.s32) * int64_t(ctx.r8.s32);
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,3928(r11)
	REX_STORE_U32(ctx.r11.u32 + 3928, ctx.r8.u32);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r7,3932(r11)
	REX_STORE_U32(ctx.r11.u32 + 3932, ctx.r7.u32);
	// bne cr6,0x82365704
	if (!ctx.cr6.eq) goto loc_82365704;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,3904(r11)
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r10.u32);
	// stw r9,3908(r11)
	REX_STORE_U32(ctx.r11.u32 + 3908, ctx.r9.u32);
	// b 0x8236570c
	goto loc_8236570C;
loc_82365704:
	// stw r3,3904(r11)
	REX_STORE_U32(ctx.r11.u32 + 3904, ctx.r3.u32);
	// stw r31,3908(r11)
	REX_STORE_U32(ctx.r11.u32 + 3908, r31.u32);
loc_8236570C:
	// lwz r10,204(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// lwz r9,208(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// mullw r8,r10,r4
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r9,r4
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// rlwinm r6,r8,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r6,15232(r11)
	REX_STORE_U32(ctx.r11.u32 + 15232, ctx.r6.u32);
	// stw r5,15236(r11)
	REX_STORE_U32(ctx.r11.u32 + 15236, ctx.r5.u32);
loc_8236572C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82369DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82369e7c
	if (!ctx.cr6.eq) goto loc_82369E7C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82369e6c
	if (ctx.cr6.eq) goto loc_82369E6C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82369e6c
	if (ctx.cr6.eq) goto loc_82369E6C;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369e74
	if (ctx.cr6.eq) goto loc_82369E74;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369e74
	if (ctx.cr6.eq) goto loc_82369E74;
	// lis r11,12850
	ctx.r11.s64 = 842137600;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82369e74
	if (ctx.cr6.eq) goto loc_82369E74;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369e54
	if (ctx.cr6.eq) goto loc_82369E54;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369e54
	if (ctx.cr6.eq) goto loc_82369E54;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369e54
	if (ctx.cr6.eq) goto loc_82369E54;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82369e6c
	if (!ctx.cr6.eq) goto loc_82369E6C;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82369e6c
	if (ctx.cr0.eq) goto loc_82369E6C;
loc_82369E4C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82369E54:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369e4c
	if (!ctx.cr6.eq) goto loc_82369E4C;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369e4c
	if (!ctx.cr6.eq) goto loc_82369E4C;
loc_82369E6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82369E74:
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
loc_82369E7C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82369f58
	if (ctx.cr6.eq) goto loc_82369F58;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82369f58
	if (ctx.cr6.eq) goto loc_82369F58;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369f34
	if (ctx.cr6.eq) goto loc_82369F34;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369f34
	if (ctx.cr6.eq) goto loc_82369F34;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369f10
	if (ctx.cr6.eq) goto loc_82369F10;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369f10
	if (ctx.cr6.eq) goto loc_82369F10;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82369f10
	if (ctx.cr6.eq) goto loc_82369F10;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82369e6c
	if (!ctx.cr6.eq) goto loc_82369E6C;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369f50
	if (!ctx.cr6.eq) goto loc_82369F50;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82369F10:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369f2c
	if (!ctx.cr6.eq) goto loc_82369F2C;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82369F2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82369F34:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369f50
	if (!ctx.cr6.eq) goto loc_82369F50;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82369F50:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82369F58:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374AF8) {
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
	ctx.lr = 0x82374B00;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,220(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// li r25,0
	r25.s64 = 0;
	// lwz r9,3776(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// li r22,1
	r22.s64 = 1;
	// lwz r30,84(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r15,r9,r10
	r15.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r10,3784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3784);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r8,3780(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 3780);
	// mr r28,r25
	r28.u64 = r25.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r25,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// add r14,r8,r11
	r14.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82374bac
	if (!ctx.cr6.lt) goto loc_82374BAC;
loc_82374B54:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82374bac
	if (ctx.cr6.eq) goto loc_82374BAC;
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
	// bge 0x82374b9c
	if (!ctx.cr0.lt) goto loc_82374B9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82374B9C;
	sub_823380C8(ctx, base);
loc_82374B9C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82374b54
	if (ctx.cr6.gt) goto loc_82374B54;
loc_82374BAC:
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
	// bge 0x82374be4
	if (!ctx.cr0.lt) goto loc_82374BE4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x82374BE4;
	sub_823380C8(ctx, base);
loc_82374BE4:
	// rlwinm r11,r29,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r10,15536(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// subf r9,r29,r11
	ctx.r9.u64 = ctx.r11.u64 - r29.u64;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// stw r9,1964(r31)
	REX_STORE_U32(r31.u32 + 1964, ctx.r9.u32);
	// blt cr6,0x82374c0c
	if (ctx.cr6.lt) goto loc_82374C0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x82340178
	ctx.lr = 0x82374C08;
	sub_82340178(ctx, base);
	// b 0x82374c2c
	goto loc_82374C2C;
loc_82374C0C:
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// stw r9,316(r31)
	REX_STORE_U32(r31.u32 + 316, ctx.r9.u32);
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r8,324(r31)
	REX_STORE_U32(r31.u32 + 324, ctx.r8.u32);
	// stw r7,320(r31)
	REX_STORE_U32(r31.u32 + 320, ctx.r7.u32);
loc_82374C2C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// bl 0x82397a10
	ctx.lr = 0x82374C3C;
	sub_82397A10(ctx, base);
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 316);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r11,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stw r11,300(r31)
	REX_STORE_U32(r31.u32 + 300, ctx.r11.u32);
	// ble cr6,0x82374c64
	if (!ctx.cr6.gt) goto loc_82374C64;
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r9.u32);
loc_82374C64:
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r3,1772(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rotlwi r10,r7,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r9,r6,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// andc r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// andc r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r16,r7,r11
	r16.u64 = uint32_t((ctx.r11.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r7.s32 / ctx.r11.s32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r17,r6,r8
	r17.u64 = uint32_t((ctx.r8.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r6.s32 / ctx.r8.s32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x822d5870
	ctx.lr = 0x82374CBC;
	sub_822D5870(ctx, base);
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lwz r11,-30200(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -30200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,-28636
	ctx.r11.s64 = ctx.r11.s64 + -28636;
	// beq cr6,0x82374cec
	if (ctx.cr6.eq) goto loc_82374CEC;
	// lwz r10,1828(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1828);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1820(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1820);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1824(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1824);
	// b 0x82374d00
	goto loc_82374D00;
loc_82374CEC:
	// lwz r10,1832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1812);
loc_82374D00:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,1792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1792);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82374d28
	if (ctx.cr6.eq) goto loc_82374D28;
	// lwz r10,1832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,1808(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,1812(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82374D28:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// mr r29,r25
	r29.u64 = r25.u64;
	// lwz r10,1968(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1968);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r24,1772(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 1772);
	// lwz r27,84(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r9,140(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r11,1976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r26,r11,12
	r26.s64 = ctx.r11.s64 + 12;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82374fe8
	if (!ctx.cr6.gt) goto loc_82374FE8;
	// li r18,255
	r18.s64 = 255;
loc_82374D5C:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 204);
	// srawi r23,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	r23.s64 = r29.s32 >> 1;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r8,r11,r29
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// lwz r7,164(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r6,r10,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r11,r6,r23
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(r23.s32);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r10,r15
	r19.u64 = ctx.r10.u64 + r15.u64;
	// add r21,r11,r14
	r21.u64 = ctx.r11.u64 + r14.u64;
	// add r20,r11,r7
	r20.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82374fd4
	if (!ctx.cr6.gt) goto loc_82374FD4;
loc_82374D9C:
	// addi r8,r1,168
	ctx.r8.s64 = ctx.r1.s64 + 168;
	// lwz r6,248(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 248);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// lwz r3,1972(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1972);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823964e0
	ctx.lr = 0x82374DB8;
	sub_823964E0(ctx, base);
	// lwz r11,300(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 300);
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1968);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823728f8
	ctx.lr = 0x82374DEC;
	sub_823728F8(ctx, base);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82374e2c
	if (ctx.cr6.eq) goto loc_82374E2C;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 16);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82397360
	ctx.lr = 0x82374E10;
	sub_82397360(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82375018
	if (!ctx.cr6.eq) goto loc_82375018;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_82374E2C:
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r28,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r28.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r8,300(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 300);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r7,204(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r9,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,160(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r16,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r16.u32);
	// stw r25,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r25.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// bl 0x823746b0
	ctx.lr = 0x82374E7C;
	sub_823746B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237500c
	if (!ctx.cr6.eq) goto loc_8237500C;
	// and r11,r30,r29
	ctx.r11.u64 = r30.u64 & r29.u64;
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82374fc0
	if (ctx.cr6.eq) goto loc_82374FC0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,1972(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1972);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823966e8
	ctx.lr = 0x82374EA8;
	sub_823966E8(ctx, base);
	// lwz r4,304(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 304);
	// srawi r28,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r28.s64 = r30.s32 >> 1;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1968);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// bl 0x823728f8
	ctx.lr = 0x82374EE8;
	sub_823728F8(ctx, base);
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x823746b0
	ctx.lr = 0x82374F30;
	sub_823746B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237500c
	if (!ctx.cr6.eq) goto loc_8237500C;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 304);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r3,1968(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1968);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x823728f8
	ctx.lr = 0x82374F68;
	sub_823728F8(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r8,304(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 304);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r22.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r7,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r17.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// stw r18,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// bl 0x823746b0
	ctx.lr = 0x82374FB0;
	sub_823746B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8237500c
	if (!ctx.cr6.eq) goto loc_8237500C;
	// addi r21,r21,8
	r21.s64 = r21.s64 + 8;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
loc_82374FC0:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82374d9c
	if (ctx.cr6.lt) goto loc_82374D9C;
loc_82374FD4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82374d5c
	if (ctx.cr6.lt) goto loc_82374D5C;
loc_82374FE8:
	// lwz r11,15572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82375030
	if (ctx.cr6.eq) goto loc_82375030;
	// stw r25,15592(r31)
	REX_STORE_U32(r31.u32 + 15592, r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r25.u32);
	// stw r25,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
loc_8237500C:
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82375024
	if (ctx.cr6.eq) goto loc_82375024;
loc_82375018:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
loc_82375024:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
loc_82375030:
	// stw r22,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r22.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r25.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_82388798) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823887A0;
	// lwz r27,136(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r28,3972(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 3972);
	// mullw r30,r27,r5
	r30.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lwz r26,20680(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20680);
	// addi r31,r11,7000
	r31.s64 = ctx.r11.s64 + 7000;
	// add r11,r30,r4
	ctx.r11.u64 = r30.u64 + ctx.r4.u64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r11,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r4
	r30.u64 = r30.u64 + ctx.r4.u64;
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r30,1,0,30
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r29,1,0,30
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r23
	r21.u64 = ctx.r11.u64 + r23.u64;
	// subf r22,r11,r23
	r22.u64 = r23.u64 - ctx.r11.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// add r11,r30,r28
	ctx.r11.u64 = r30.u64 + r28.u64;
	// bne cr6,0x82388814
	if (!ctx.cr6.eq) goto loc_82388814;
	// lwz r30,288(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x82388814
	if (!ctx.cr6.eq) goto loc_82388814;
	// li r29,6
	r29.s64 = 6;
	// addi r30,r11,-1
	r30.s64 = ctx.r11.s64 + -1;
	// li r28,15
	r28.s64 = 15;
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
loc_82388808:
	// stbu r28,1(r30)
	ea = 1 + r30.u32;
	REX_STORE_U8(ea, r28.u8);
	r30.u32 = ea;
	// bdnz 0x82388808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82388808;
	// b 0x82388890
	goto loc_82388890;
loc_82388814:
	// li r28,6
	r28.s64 = 6;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// subf r27,r7,r10
	r27.u64 = ctx.r10.u64 - ctx.r7.u64;
	// subf r29,r7,r11
	r29.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r24,15
	r24.s64 = 15;
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// li r25,-49
	r25.s64 = -49;
	// li r26,63
	r26.s64 = 63;
loc_82388834:
	// lbz r28,0(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x8238884c
	if (!ctx.cr6.eq) goto loc_8238884C;
	// stbx r24,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r24.u8);
	// b 0x82388888
	goto loc_82388888;
loc_8238884C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(r28.s32, 1, ctx.xer);
	// bne cr6,0x8238885c
	if (!ctx.cr6.eq) goto loc_8238885C;
	// stbx r25,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r25.u8);
	// b 0x82388888
	goto loc_82388888;
loc_8238885C:
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// bne cr6,0x8238886c
	if (!ctx.cr6.eq) goto loc_8238886C;
	// stbx r26,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r26.u8);
	// b 0x82388888
	goto loc_82388888;
loc_8238886C:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// bne cr6,0x82388888
	if (!ctx.cr6.eq) goto loc_82388888;
	// lbzx r28,r27,r30
	r28.u64 = REX_LOAD_U8(r27.u32 + r30.u32);
	// addi r20,r31,960
	r20.s64 = r31.s64 + 960;
	// rotlwi r28,r28,2
	r28.u64 = __builtin_rotateleft32(r28.u32, 2);
	// lwzx r28,r28,r20
	r28.u64 = REX_LOAD_U32(r28.u32 + r20.u32);
	// stbx r28,r29,r30
	REX_STORE_U8(r29.u32 + r30.u32, r28.u8);
loc_82388888:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bdnz 0x82388834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82388834;
loc_82388890:
	// lwz r20,100(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r19,108(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// beq cr6,0x82388928
	if (ctx.cr6.eq) goto loc_82388928;
	// lbz r29,1(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// lbz r30,0(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// extsb r30,r30
	r30.s64 = r30.s8;
	// rlwinm r29,r29,0,30,27
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r29,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, r29.u8);
	// beq cr6,0x823888fc
	if (ctx.cr6.eq) goto loc_823888FC;
	// lbz r28,2(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r30,r30,0,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFF0;
	// lbz r27,4(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r26,5(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r27,r27
	r27.s64 = r27.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r26,r26
	r26.s64 = r26.s8;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r27,r27,0,0,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r26,r26,0,0,27
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0xFFFFFFF0;
	// stb r28,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r28.u8);
	// stb r27,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r27.u8);
	// stb r26,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r26.u8);
	// b 0x82388974
	goto loc_82388974;
loc_823888FC:
	// lbz r28,4(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r30,r30,0,30,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// lbz r27,5(r11)
	r27.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// extsb r28,r28
	r28.s64 = r28.s8;
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
	// extsb r27,r27
	r27.s64 = r27.s8;
	// rlwinm r28,r28,0,30,27
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// rlwinm r27,r27,0,30,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
	// stb r27,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r27.u8);
	// b 0x82388974
	goto loc_82388974;
loc_82388928:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82388974
	if (ctx.cr6.eq) goto loc_82388974;
	// lwz r30,3400(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 3400);
	// lbzx r29,r30,r11
	r29.u64 = REX_LOAD_U8(r30.u32 + ctx.r11.u32);
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// stbx r29,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r29.u8);
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r30,2(r11)
	r30.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// extsb r30,r30
	r30.s64 = r30.s8;
	// extsb r28,r28
	r28.s64 = r28.s8;
	// extsb r29,r29
	r29.s64 = r29.s8;
	// rlwinm r30,r30,0,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r29,r29,0,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r28,0,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFC;
	// stb r30,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r30.u8);
	// stb r29,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r29.u8);
	// stb r28,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, r28.u8);
loc_82388974:
	// lwz r30,288(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x8238902c
	if (ctx.cr6.eq) goto loc_8238902C;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// beq cr6,0x8238902c
	if (ctx.cr6.eq) goto loc_8238902C;
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82388a24
	if (!ctx.cr6.eq) goto loc_82388A24;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r6
	r30.u64 = REX_LOAD_U16(r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x82388a24
	if (ctx.cr6.eq) goto loc_82388A24;
	// lwz r29,1776(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r30,r22,1,0,30
	r30.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r28,r29,r6
	r28.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// lhzx r29,r30,r29
	r29.u64 = REX_LOAD_U16(r30.u32 + r29.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(r29.u32, r28.u32, ctx.xer);
	// bne cr6,0x82388a24
	if (!ctx.cr6.eq) goto loc_82388A24;
	// lwz r29,1780(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// lhzx r30,r29,r30
	r30.u64 = REX_LOAD_U16(r29.u32 + r30.u32);
	// lhzx r6,r29,r6
	ctx.r6.u64 = REX_LOAD_U16(r29.u32 + ctx.r6.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388a24
	if (!ctx.cr6.eq) goto loc_82388A24;
	// lbz r6,2(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// addi r27,r31,640
	r27.s64 = r31.s64 + 640;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r26,r31,320
	r26.s64 = r31.s64 + 320;
	// extsb r28,r6
	r28.s64 = ctx.r6.s8;
	// lbz r6,2(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 2);
	// extsb r24,r30
	r24.s64 = r30.s8;
	// lbz r29,0(r10)
	r29.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r30,r28,4,0,27
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r28,r24,4,0,27
	r28.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 4) & 0xFFFFFFF0;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// or r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 | r30.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_82388A24:
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82388ac0
	if (!ctx.cr6.eq) goto loc_82388AC0;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r30,r6
	r30.u64 = REX_LOAD_U16(r30.u32 + ctx.r6.u32);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x82388ac0
	if (ctx.cr6.eq) goto loc_82388AC0;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// lhz r29,-2(r30)
	r29.u64 = REX_LOAD_U16(r30.u32 + -2);
	// lhz r30,0(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 0);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(r29.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388ac0
	if (!ctx.cr6.eq) goto loc_82388AC0;
	// lwz r30,1780(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388ac0
	if (!ctx.cr6.eq) goto loc_82388AC0;
	// lbz r6,1(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 1);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r24)
	r28.u64 = REX_LOAD_U8(r24.u32 + 1);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,0(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r31
	r30.u64 = REX_LOAD_U32(r30.u32 + r31.u32);
	// lwzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r27.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
loc_82388AC0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// bne cr6,0x82388b6c
	if (!ctx.cr6.eq) goto loc_82388B6C;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r6,r23,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r30,r6
	r30.u64 = r30.u64 + ctx.r6.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplwi cr6,r30,16384
	ctx.cr6.compare<uint32_t>(r30.u32, 16384, ctx.xer);
	// beq cr6,0x82388b6c
	if (ctx.cr6.eq) goto loc_82388B6C;
	// lwz r30,1776(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r29,r22,1,0,30
	r29.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r30,r6
	r28.u64 = r30.u64 + ctx.r6.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// lhz r28,2(r28)
	r28.u64 = REX_LOAD_U16(r28.u32 + 2);
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(r30.u32, r28.u32, ctx.xer);
	// bne cr6,0x82388b6c
	if (!ctx.cr6.eq) goto loc_82388B6C;
	// lwz r30,1780(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r30,2(r29)
	r30.u64 = REX_LOAD_U16(r29.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388b6c
	if (!ctx.cr6.eq) goto loc_82388B6C;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,320
	r27.s64 = r31.s64 + 320;
	// lbz r30,3(r8)
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// addi r26,r31,640
	r26.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r25)
	r30.u64 = REX_LOAD_U8(r25.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,1(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r26
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r26.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_82388B6C:
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r26,r23,1,0,30
	r26.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x82388c00
	if (ctx.cr6.eq) goto loc_82388C00;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388c00
	if (!ctx.cr6.eq) goto loc_82388C00;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + r26.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388c00
	if (!ctx.cr6.eq) goto loc_82388C00;
	// lbz r6,1(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,1(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// extsb r23,r30
	r23.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r22,1(r11)
	r22.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// rlwinm r6,r23,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r22
	ctx.r6.u64 = ctx.r6.u64 & r22.u64;
	// stb r6,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
loc_82388C00:
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// rlwinm r27,r21,1,0,30
	r27.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x82388c8c
	if (ctx.cr6.eq) goto loc_82388C8C;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388c8c
	if (!ctx.cr6.eq) goto loc_82388C8C;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// lhzx r30,r6,r26
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + r26.u32);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388c8c
	if (!ctx.cr6.eq) goto loc_82388C8C;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,320
	r23.s64 = r31.s64 + 320;
	// lbz r30,0(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r22,r31,640
	r22.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r21,r30
	r21.s64 = r30.s8;
	// lbz r30,0(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r18,2(r11)
	r18.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r21,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	r30.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r6,r6,r22
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r22.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r18
	ctx.r6.u64 = ctx.r6.u64 & r18.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_82388C8C:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x82388d20
	if (!ctx.cr6.eq) goto loc_82388D20;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// lhzx r6,r6,r27
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + r27.u32);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x82388d20
	if (ctx.cr6.eq) goto loc_82388D20;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388d20
	if (!ctx.cr6.eq) goto loc_82388D20;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,-2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388d20
	if (!ctx.cr6.eq) goto loc_82388D20;
	// lbz r6,2(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// addi r23,r31,-320
	r23.s64 = r31.s64 + -320;
	// lbz r30,3(r9)
	r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 3);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,2(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,3(r24)
	r30.u64 = REX_LOAD_U8(r24.u32 + 3);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,2(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r23
	r30.u64 = REX_LOAD_U32(r30.u32 + r23.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
loc_82388D20:
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x82388dbc
	if (ctx.cr6.eq) goto loc_82388DBC;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388dbc
	if (!ctx.cr6.eq) goto loc_82388DBC;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r30,r6,r26
	r30.u64 = ctx.r6.u64 + r26.u64;
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r30)
	r30.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplw cr6,r30,r6
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82388dbc
	if (!ctx.cr6.eq) goto loc_82388DBC;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r26,r31,320
	r26.s64 = r31.s64 + 320;
	// lbz r30,1(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 1);
	// addi r23,r31,640
	r23.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r22,r30
	r22.s64 = r30.s8;
	// lbz r30,1(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r21,3(r11)
	r21.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r22,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r26
	r30.u64 = REX_LOAD_U32(r30.u32 + r26.u32);
	// lwzx r6,r6,r23
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r23.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r21
	ctx.r6.u64 = ctx.r6.u64 & r21.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_82388DBC:
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r6,2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// cmplwi cr6,r6,16384
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16384, ctx.xer);
	// beq cr6,0x82388e4c
	if (ctx.cr6.eq) goto loc_82388E4C;
	// lwz r6,1776(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1776);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388e4c
	if (!ctx.cr6.eq) goto loc_82388E4C;
	// lwz r6,1780(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1780);
	// add r6,r6,r27
	ctx.r6.u64 = ctx.r6.u64 + r27.u64;
	// lhz r30,2(r6)
	r30.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// lhz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388e4c
	if (!ctx.cr6.eq) goto loc_82388E4C;
	// lbz r6,3(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 3);
	// addi r27,r31,-320
	r27.s64 = r31.s64 + -320;
	// lbz r30,2(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r28,3(r10)
	r28.u64 = REX_LOAD_U8(ctx.r10.u32 + 3);
	// extsb r26,r30
	r26.s64 = r30.s8;
	// lbz r30,2(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// rlwinm r29,r6,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,3(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm r6,r26,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + r30.u64;
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r30,r27
	r30.u64 = REX_LOAD_U32(r30.u32 + r27.u32);
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r30,r6
	ctx.r6.u64 = r30.u64 | ctx.r6.u64;
	// and r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 & r23.u64;
	// stb r6,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
loc_82388E4C:
	// lwz r6,136(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// mullw r5,r6,r5
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r29,r5,r4
	r29.u64 = ctx.r5.u64 + ctx.r4.u64;
	// bne cr6,0x82388f48
	if (!ctx.cr6.eq) goto loc_82388F48;
	// lwz r4,1784(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r4
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x82388f48
	if (ctx.cr6.eq) goto loc_82388F48;
	// subf r6,r6,r29
	ctx.r6.u64 = r29.u64 - ctx.r6.u64;
	// lwz r4,1784(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r30,r4,r5
	r30.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// lhzx r4,r4,r6
	ctx.r4.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r30
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r30.u32, ctx.xer);
	// bne cr6,0x82388f48
	if (!ctx.cr6.eq) goto loc_82388F48;
	// lwz r4,1788(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// lhzx r6,r4,r6
	ctx.r6.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r6.u32);
	// lhzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U16(ctx.r4.u32 + ctx.r5.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82388f48
	if (!ctx.cr6.eq) goto loc_82388F48;
	// lbz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// addi r28,r31,320
	r28.s64 = r31.s64 + 320;
	// lbz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r27,r31,640
	r27.s64 = r31.s64 + 640;
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// lbz r5,4(r25)
	ctx.r5.u64 = REX_LOAD_U8(r25.u32 + 4);
	// extsb r4,r4
	ctx.r4.s64 = ctx.r4.s8;
	// lbz r30,4(r10)
	r30.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r26,4(r11)
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r23,5(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// add r5,r4,r30
	ctx.r5.u64 = ctx.r4.u64 + r30.u64;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r30,r31,320
	r30.s64 = r31.s64 + 320;
	// addi r26,r31,640
	r26.s64 = r31.s64 + 640;
	// lwzx r4,r4,r27
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	// lwzx r6,r6,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + r28.u32);
	// or r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 | ctx.r4.u64;
	// and r6,r4,r5
	ctx.r6.u64 = ctx.r4.u64 & ctx.r5.u64;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// lbz r5,5(r7)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// lbz r6,5(r25)
	ctx.r6.u64 = REX_LOAD_U8(r25.u32 + 5);
	// lbz r4,5(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// lbz r8,5(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 5);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r5,r5
	ctx.r5.s64 = ctx.r5.s8;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r5,r26
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	// lwzx r6,r4,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + r30.u32);
	// or r5,r6,r8
	ctx.r5.u64 = ctx.r6.u64 | ctx.r8.u64;
	// and r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 & r23.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_82388F48:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// bne cr6,0x8238902c
	if (!ctx.cr6.eq) goto loc_8238902C;
	// lwz r6,1784(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// rlwinm r8,r29,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r8,r6
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r6.u32);
	// cmplwi cr6,r5,16384
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 16384, ctx.xer);
	// beq cr6,0x8238902c
	if (ctx.cr6.eq) goto loc_8238902C;
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lhz r5,-2(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8238902c
	if (!ctx.cr6.eq) goto loc_8238902C;
	// lwz r6,1788(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 1788);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// lhz r6,-2(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// lhz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8238902c
	if (!ctx.cr6.eq) goto loc_8238902C;
	// lbz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// addi r3,r31,-320
	ctx.r3.s64 = r31.s64 + -320;
	// lbz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 4);
	// addi r30,r31,-320
	r30.s64 = r31.s64 + -320;
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// extsb r8,r6
	ctx.r8.s64 = ctx.r6.s8;
	// lbz r6,4(r24)
	ctx.r6.u64 = REX_LOAD_U8(r24.u32 + 4);
	// rlwinm r5,r5,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r29,4(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r28,5(r11)
	r28.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r8,r6,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// or r6,r3,r8
	ctx.r6.u64 = ctx.r3.u64 | ctx.r8.u64;
	// and r5,r6,r29
	ctx.r5.u64 = ctx.r6.u64 & r29.u64;
	// stb r5,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r5.u8);
	// lbz r8,5(r7)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + 5);
	// extsb r5,r8
	ctx.r5.s64 = ctx.r8.s8;
	// lbz r7,5(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 5);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// lbz r7,5(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r5,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lbz r9,5(r24)
	ctx.r9.u64 = REX_LOAD_U8(r24.u32 + 5);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r6,r8,r30
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + r30.u32);
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// and r4,r5,r28
	ctx.r4.u64 = ctx.r5.u64 & r28.u64;
	// stb r4,5(r11)
	REX_STORE_U8(ctx.r11.u32 + 5, ctx.r4.u8);
loc_8238902C:
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_823ABC10) {
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
	ctx.lr = 0x823ABC18;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f30
	ctx.lr = 0x823ABC20;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,420(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r9,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r9.u32);
	// mr r15,r7
	r15.u64 = ctx.r7.u64;
	// lwz r9,412(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f28,f0
	f28.f64 = double(ctx.f0.s64);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsub f12,f28,f30
	ctx.f12.f64 = f28.f64 - f30.f64;
	// lfd f26,31912(r10)
	f26.u64 = REX_LOAD_U64(ctx.r10.u32 + 31912);
	// fadd f11,f28,f30
	ctx.f11.f64 = f28.f64 + f30.f64;
	// srawi r24,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r24.s64 = ctx.r3.s32 >> 1;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r14,r5
	r14.u64 = ctx.r5.u64;
	// srawi r17,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	r17.s64 = ctx.r4.s32 >> 1;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r25,84(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r6,r25
	ctx.r6.s64 = r25.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fsub f7,f12,f8
	ctx.f7.f64 = ctx.f12.f64 - ctx.f8.f64;
	// fctiwz f6,f11
	ctx.f6.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f6.u64);
	// lwz r23,84(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fcmpu cr6,f7,f26
	ctx.cr6.compare(ctx.f7.f64, f26.f64);
	// bne cr6,0x823abcbc
	if (!ctx.cr6.eq) goto loc_823ABCBC;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_823ABCBC:
	// lwz r19,388(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823abd40
	if (!ctx.cr6.gt) goto loc_823ABD40;
	// subf r11,r23,r20
	ctx.r11.u64 = r20.u64 - r23.u64;
	// addi r28,r25,1
	r28.s64 = r25.s64 + 1;
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
	// mr r31,r19
	r31.u64 = r19.u64;
	// subf r26,r19,r22
	r26.u64 = r22.u64 - r19.u64;
	// subf r30,r19,r20
	r30.u64 = r20.u64 - r19.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
loc_823ABCE4:
	// cmpw cr6,r28,r20
	ctx.cr6.compare<int32_t>(r28.s32, r20.s32, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// blt cr6,0x823abcf4
	if (ctx.cr6.lt) goto loc_823ABCF4;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_823ABCF4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823abd08
	if (!ctx.cr6.gt) goto loc_823ABD08;
	// add r4,r26,r31
	ctx.r4.u64 = r26.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABD08;
	sub_822D4FA0(ctx, base);
loc_823ABD08:
	// cmpw cr6,r27,r20
	ctx.cr6.compare<int32_t>(r27.s32, r20.s32, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// blt cr6,0x823abd18
	if (ctx.cr6.lt) goto loc_823ABD18;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
loc_823ABD18:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x823abd34
	if (!ctx.cr6.gt) goto loc_823ABD34;
	// subf r11,r5,r30
	ctx.r11.u64 = r30.u64 - ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	// add r3,r11,r19
	ctx.r3.u64 = ctx.r11.u64 + r19.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABD34;
	sub_822D4FA0(ctx, base);
loc_823ABD34:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// add r31,r31,r20
	r31.u64 = r31.u64 + r20.u64;
	// bne 0x823abce4
	if (!ctx.cr0.eq) goto loc_823ABCE4;
loc_823ABD40:
	// lwz r26,404(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// li r29,0
	r29.s64 = 0;
	// lwz r21,396(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x823abe04
	if (!ctx.cr6.gt) goto loc_823ABE04;
	// srawi r11,r25,1
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	ctx.r11.s64 = r25.s32 >> 1;
	// srawi r10,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r10.s64 = r23.s32 >> 1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// subf r11,r10,r24
	ctx.r11.u64 = r24.u64 - ctx.r10.u64;
	// addi r27,r11,-1
	r27.s64 = ctx.r11.s64 + -1;
loc_823ABD68:
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(r28.s32, r24.s32, ctx.xer);
	// mr r30,r28
	r30.u64 = r28.u64;
	// blt cr6,0x823abd78
	if (ctx.cr6.lt) goto loc_823ABD78;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823ABD78:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823abdb0
	if (!ctx.cr6.gt) goto loc_823ABDB0;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mullw r31,r11,r24
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABD9C;
	sub_822D4FA0(ctx, base);
	// lwz r9,380(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r9
	ctx.r4.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABDB0;
	sub_822D4FA0(ctx, base);
loc_823ABDB0:
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(r27.s32, r24.s32, ctx.xer);
	// mr r30,r27
	r30.u64 = r27.u64;
	// blt cr6,0x823abdc0
	if (ctx.cr6.lt) goto loc_823ABDC0;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823ABDC0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823abdf8
	if (!ctx.cr6.gt) goto loc_823ABDF8;
	// srawi r11,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r11.s64 = r29.s32 >> 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// subf r31,r30,r10
	r31.u64 = ctx.r10.u64 - r30.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABDE8;
	sub_822D4FA0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823ABDF8;
	sub_822D4FA0(ctx, base);
loc_823ABDF8:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmpw cr6,r29,r18
	ctx.cr6.compare<int32_t>(r29.s32, r18.s32, ctx.xer);
	// blt cr6,0x823abd68
	if (ctx.cr6.lt) goto loc_823ABD68;
loc_823ABE04:
	// addi r11,r25,1
	ctx.r11.s64 = r25.s64 + 1;
	// lwz r28,80(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// xoris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 ^ 2147483648;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addc r7,r8,r9
	ctx.xer.ca = ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32;
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r25,r22,r14
	r25.u64 = r14.u64 - r22.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r27,r19,r22
	r27.u64 = r22.u64 - r19.u64;
	// and r30,r5,r11
	r30.u64 = ctx.r5.u64 & ctx.r11.u64;
	// lfd f29,4000(r10)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// lfd f27,-9416(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + -9416);
loc_823ABE40:
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(r23.s32, r20.s32, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
	// blt cr6,0x823abe50
	if (ctx.cr6.lt) goto loc_823ABE50;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_823ABE50:
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823abfa8
	if (!ctx.cr6.lt) goto loc_823ABFA8;
	// extsw r11,r30
	ctx.r11.s64 = r30.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f28,f13
	f31.f64 = f28.f64 - ctx.f13.f64;
	// fdiv f1,f31,f30
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x822d6768
	ctx.lr = 0x823ABE74;
	sub_822D6768(ctx, base);
	// fsub f12,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f27.f64 - ctx.f1.f64;
	// fmsub f11,f1,f30,f31
	ctx.f11.f64 = std::fma(ctx.f1.f64, f30.f64, -f31.f64);
	// fmsub f10,f12,f30,f31
	ctx.f10.f64 = std::fma(ctx.f12.f64, f30.f64, -f31.f64);
	// fadd f9,f11,f29
	ctx.f9.f64 = ctx.f11.f64 + f29.f64;
	// fadd f8,f10,f29
	ctx.f8.f64 = ctx.f10.f64 + f29.f64;
	// fctiwz f7,f9
	ctx.f7.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f7.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// fctiwz f6,f8
	ctx.f6.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f6.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// neg r10,r8
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// add. r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823abecc
	if (ctx.cr0.lt) goto loc_823ABECC;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
loc_823ABEB4:
	// srawi r10,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r10.s64 = r30.s32 >> 1;
	// li r29,1
	r29.s64 = 1;
	// add r28,r9,r10
	r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r11,r14
	ctx.r4.u64 = ctx.r11.u64 + r14.u64;
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// b 0x823abf04
	goto loc_823ABF04;
loc_823ABECC:
	// add. r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x823abef8
	if (ctx.cr0.lt) goto loc_823ABEF8;
	// fcmpu cr6,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f26.f64);
	// ble cr6,0x823abee4
	if (!ctx.cr6.gt) goto loc_823ABEE4;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// b 0x823abeb4
	goto loc_823ABEB4;
loc_823ABEE4:
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// add r11,r25,r27
	ctx.r11.u64 = r25.u64 + r27.u64;
	// li r29,0
	r29.s64 = 0;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x823abf04
	goto loc_823ABF04;
loc_823ABEF8:
	// add r3,r30,r19
	ctx.r3.u64 = r30.u64 + r19.u64;
	// li r29,2
	r29.s64 = 2;
	// add r4,r27,r3
	ctx.r4.u64 = r27.u64 + ctx.r3.u64;
loc_823ABF04:
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bl 0x823ac430
	ctx.lr = 0x823ABF10;
	sub_823AC430(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823abfa0
	if (!ctx.cr6.eq) goto loc_823ABFA0;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x823abf44
	if (!ctx.cr6.eq) goto loc_823ABF44;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r31,r16
	ctx.r4.u64 = r31.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x823ac430
	ctx.lr = 0x823ABF3C;
	sub_823AC430(ctx, base);
	// add r4,r31,r15
	ctx.r4.u64 = r31.u64 + r15.u64;
	// b 0x823abf90
	goto loc_823ABF90;
loc_823ABF44:
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x823abf68
	if (!ctx.cr6.eq) goto loc_823ABF68;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r28,r16
	ctx.r4.u64 = r28.u64 + r16.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x823ac430
	ctx.lr = 0x823ABF60;
	sub_823AC430(ctx, base);
	// add r4,r28,r15
	ctx.r4.u64 = r28.u64 + r15.u64;
	// b 0x823abf90
	goto loc_823ABF90;
loc_823ABF68:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x823abfa0
	if (!ctx.cr6.eq) goto loc_823ABFA0;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x823ac430
	ctx.lr = 0x823ABF88;
	sub_823AC430(ctx, base);
	// lwz r10,380(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r10
	ctx.r4.u64 = r31.u64 + ctx.r10.u64;
loc_823ABF90:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// add r3,r31,r26
	ctx.r3.u64 = r31.u64 + r26.u64;
	// bl 0x823ac430
	ctx.lr = 0x823ABFA0;
	sub_823AC430(ctx, base);
loc_823ABFA0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823abe40
	goto loc_823ABE40;
loc_823ABFA8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f7c
	ctx.lr = 0x823ABFB4;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823BE500) {
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
	ctx.lr = 0x823BE508;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r31,1,0,30
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r29,r8,r4
	r29.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
loc_823BE534:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// mulli r31,r31,29
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(29));
	// lbzx r26,r11,r3
	r26.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r30,r31,r30
	r30.u64 = r30.u64 - r31.u64;
	// mulli r31,r26,197
	r31.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(197));
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r30,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r30.s64 = r31.s32 >> 8;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// addze r26,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r26.s64 = temp.s64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// clrlwi r26,r26,24
	r26.u64 = r26.u32 & 0xFF;
	// stbux r26,r29,r8
	ea = r29.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r26.u8);
	r29.u32 = ea;
	// bdnz 0x823be534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE534;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r25,r5,r31
	r25.u64 = ctx.r5.u64 + r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r24,r5,r30
	r24.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r23,r5,1,0,30
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r8,r4
	r31.u64 = ctx.r4.u64 - ctx.r8.u64;
	// add r29,r11,r23
	r29.u64 = ctx.r11.u64 + r23.u64;
	// add r26,r31,r6
	r26.u64 = r31.u64 + ctx.r6.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
loc_823BE5AC:
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r31,r28,r3
	r31.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r22,r27,r3
	r22.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r29,r11,r23
	r29.u64 = ctx.r11.u64 + r23.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r28,r11,r25
	r28.u64 = ctx.r11.u64 + r25.u64;
	// rlwinm r21,r31,3,0,28
	r21.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// subf r31,r31,r21
	r31.u64 = r21.u64 - r31.u64;
	// add r31,r31,r22
	r31.u64 = r31.u64 + r22.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// srawi r31,r31,4
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xF) != 0);
	r31.s64 = r31.s32 >> 4;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// stbux r31,r26,r8
	ea = r26.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r31.u8);
	r26.u32 = ea;
	// bdnz 0x823be5ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE5AC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r26,r5,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r5,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r31,r8,r4
	r31.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm r24,r5,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r31,r6
	r28.u64 = r31.u64 + ctx.r6.u64;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
loc_823BE61C:
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r23,r11,r24
	r23.u64 = ctx.r11.u64 + r24.u64;
	// lbzx r31,r11,r3
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r29,r27,r31
	r29.u64 = r27.u64 + r31.u64;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// lbzx r30,r23,r3
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// mulli r29,r29,29
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(29));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r29,r31
	r31.u64 = r31.u64 - r29.u64;
	// mulli r30,r30,138
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(138));
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r30,r11,r25
	r30.u64 = ctx.r11.u64 + r25.u64;
	// addze r31,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r31.s64 = temp.s64;
	// clrlwi r31,r31,24
	r31.u64 = r31.u32 & 0xFF;
	// stbux r31,r28,r8
	ea = r28.u32 + ctx.r8.u32;
	REX_STORE_U8(ea, r31.u8);
	r28.u32 = ea;
	// bdnz 0x823be61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE61C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r5,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r24,r5,r30
	r24.u64 = ctx.r5.u64 + r30.u64;
	// add r22,r5,r31
	r22.u64 = ctx.r5.u64 + r31.u64;
	// subf r23,r5,r29
	r23.u64 = r29.u64 - ctx.r5.u64;
	// rlwinm r21,r6,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	r31.s64 = 0;
	// add r28,r11,r22
	r28.u64 = ctx.r11.u64 + r22.u64;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
loc_823BE6A8:
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r20,r31,r21
	r20.u64 = r31.u64 + r21.u64;
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r25,r30,r3
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// add r28,r11,r22
	r28.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r26,r30,3,0,28
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r24
	r27.u64 = ctx.r11.u64 + r24.u64;
	// subf r26,r30,r26
	r26.u64 = r26.u64 - r30.u64;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// add r29,r26,r29
	r29.u64 = r26.u64 + r29.u64;
	// srawi r29,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	r29.s64 = r29.s32 >> 4;
	// addze r29,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r29.s64 = temp.s64;
	// clrlwi r29,r29,24
	r29.u64 = r29.u32 & 0xFF;
	// stbx r29,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r29.u8);
	// bdnz 0x823be6a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE6A8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r30,1,0,30
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r5,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r5,2,0,29
	r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r6,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,0
	r31.s64 = 0;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
	// add r29,r25,r11
	r29.u64 = r25.u64 + ctx.r11.u64;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
loc_823BE738:
	// lbzx r27,r29,r3
	r27.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r21,r23,r11
	r21.u64 = r23.u64 + ctx.r11.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r20,r22,r31
	r20.u64 = r22.u64 + r31.u64;
	// lbzx r29,r28,r3
	r29.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r28,r27,r30
	r28.u64 = r27.u64 + r30.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// lbzx r29,r21,r3
	r29.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// mulli r28,r28,29
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(29));
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r30,r28,r30
	r30.u64 = r30.u64 - r28.u64;
	// mulli r29,r29,138
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// srawi r29,r30,8
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r29.s64 = r30.s32 >> 8;
	// add r30,r24,r11
	r30.u64 = r24.u64 + ctx.r11.u64;
	// addze r28,r29
	temp.s64 = r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r29.u32;
	r28.s64 = temp.s64;
	// add r29,r25,r11
	r29.u64 = r25.u64 + ctx.r11.u64;
	// clrlwi r27,r28,24
	r27.u64 = r28.u32 & 0xFF;
	// add r28,r26,r11
	r28.u64 = r26.u64 + ctx.r11.u64;
	// stbx r27,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r27.u8);
	// bdnz 0x823be738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE738;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be830
	if (!ctx.cr6.gt) goto loc_823BE830;
	// rlwinm r30,r5,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r31,r5,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r5,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r23,r5,r31
	r23.u64 = ctx.r5.u64 + r31.u64;
	// add r25,r5,r30
	r25.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r30,r5,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	ctx.r11.s64 = 0;
	// subf r24,r5,r29
	r24.u64 = r29.u64 - ctx.r5.u64;
	// add r22,r5,r30
	r22.u64 = ctx.r5.u64 + r30.u64;
	// add r21,r6,r31
	r21.u64 = ctx.r6.u64 + r31.u64;
	// li r31,0
	r31.s64 = 0;
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// add r30,r25,r11
	r30.u64 = r25.u64 + ctx.r11.u64;
	// add r28,r23,r11
	r28.u64 = r23.u64 + ctx.r11.u64;
loc_823BE7DC:
	// lbzx r29,r29,r3
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// add r26,r22,r11
	r26.u64 = r22.u64 + ctx.r11.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r20,r21,r31
	r20.u64 = r21.u64 + r31.u64;
	// lbzx r27,r28,r3
	r27.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r30,r29,r30
	r30.u64 = r29.u64 + r30.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// rlwinm r28,r30,3,0,28
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzx r26,r26,r3
	r26.u64 = REX_LOAD_U8(r26.u32 + ctx.r3.u32);
	// add r29,r24,r11
	r29.u64 = r24.u64 + ctx.r11.u64;
	// subf r28,r30,r28
	r28.u64 = r28.u64 - r30.u64;
	// add r30,r25,r11
	r30.u64 = r25.u64 + ctx.r11.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// add r28,r23,r11
	r28.u64 = r23.u64 + ctx.r11.u64;
	// add r27,r27,r26
	r27.u64 = r27.u64 + r26.u64;
	// srawi r27,r27,4
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0xF) != 0);
	r27.s64 = r27.s32 >> 4;
	// addze r27,r27
	temp.s64 = r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r27.u32;
	r27.s64 = temp.s64;
	// clrlwi r27,r27,24
	r27.u64 = r27.u32 & 0xFF;
	// stbx r27,r20,r4
	REX_STORE_U8(r20.u32 + ctx.r4.u32, r27.u8);
	// bdnz 0x823be7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE7DC;
loc_823BE830:
	// srawi r11,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 1;
	// li r19,3
	r19.s64 = 3;
	// addze r15,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	r15.s64 = temp.s64;
	// addi r16,r15,-2
	r16.s64 = r15.s64 + -2;
	// cmpwi cr6,r16,3
	ctx.cr6.compare<int32_t>(r16.s32, 3, ctx.xer);
	// ble cr6,0x823be9cc
	if (!ctx.cr6.gt) goto loc_823BE9CC;
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r5,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r5,r11
	r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r31,r5,r31
	r31.u64 = ctx.r5.u64 + r31.u64;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r31,2,0,29
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r6,r10
	r20.u64 = ctx.r6.u64 + ctx.r10.u64;
	// li r21,6
	r21.s64 = 6;
	// rlwinm r24,r30,1,0,30
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r5,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r5,r11
	r18.u64 = ctx.r5.u64 + ctx.r11.u64;
	// li r23,0
	r23.s64 = 0;
	// rlwinm r31,r5,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
loc_823BE880:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be904
	if (!ctx.cr6.gt) goto loc_823BE904;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
loc_823BE898:
	// add r27,r23,r11
	r27.u64 = r23.u64 + ctx.r11.u64;
	// lbzx r25,r30,r3
	r25.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// addi r28,r21,-2
	r28.s64 = r21.s64 + -2;
	// add r17,r24,r11
	r17.u64 = r24.u64 + ctx.r11.u64;
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r28,r27,r3
	r28.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r27,r22,r11
	r27.u64 = r22.u64 + ctx.r11.u64;
	// add r14,r20,r10
	r14.u64 = r20.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbzx r26,r30,r3
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r30,r31,r11
	r30.u64 = r31.u64 + ctx.r11.u64;
	// lbzx r27,r27,r3
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// lbzx r25,r17,r3
	r25.u64 = REX_LOAD_U8(r17.u32 + ctx.r3.u32);
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// mulli r27,r26,88
	r27.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(88));
	// mulli r28,r28,29
	r28.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(29));
	// subf r28,r28,r27
	r28.u64 = r27.u64 - r28.u64;
	// mulli r27,r25,138
	r27.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(138));
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// srawi r28,r28,8
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xFF) != 0);
	r28.s64 = r28.s32 >> 8;
	// addze r28,r28
	temp.s64 = r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r28.u32;
	r28.s64 = temp.s64;
	// clrlwi r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	// stbx r28,r14,r4
	REX_STORE_U8(r14.u32 + ctx.r4.u32, r28.u8);
	// bdnz 0x823be898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE898;
loc_823BE904:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r10,r21,2
	ctx.r10.s64 = r21.s64 + 2;
	// add r17,r31,r29
	r17.u64 = r31.u64 + r29.u64;
	// add r25,r18,r29
	r25.u64 = r18.u64 + r29.u64;
	// add r20,r20,r6
	r20.u64 = r20.u64 + ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823be9a4
	if (!ctx.cr6.gt) goto loc_823BE9A4;
	// li r31,0
	r31.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BE938:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r27,r10,1
	r27.s64 = ctx.r10.s64 + 1;
	// mullw r28,r30,r5
	r28.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r27,r5
	r30.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// addi r27,r10,-3
	r27.s64 = ctx.r10.s64 + -3;
	// add r21,r25,r11
	r21.u64 = r25.u64 + ctx.r11.u64;
	// mullw r27,r27,r5
	r27.s64 = int64_t(r27.s32) * int64_t(ctx.r5.s32);
	// lbzx r26,r30,r3
	r26.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r28,r3
	r30.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// lbzx r28,r21,r3
	r28.u64 = REX_LOAD_U8(r21.u32 + ctx.r3.u32);
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r27,r27,r11
	r27.u64 = r27.u64 + ctx.r11.u64;
	// rlwinm r26,r30,3,0,28
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r21,r20,r31
	r21.u64 = r20.u64 + r31.u64;
	// subf r30,r30,r26
	r30.u64 = r26.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r27,r27,r3
	r27.u64 = REX_LOAD_U8(r27.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// stbx r30,r21,r4
	REX_STORE_U8(r21.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x823be938
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BE938;
loc_823BE9A4:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// add r24,r24,r29
	r24.u64 = r24.u64 + r29.u64;
	// add r23,r23,r29
	r23.u64 = r23.u64 + r29.u64;
	// add r22,r22,r29
	r22.u64 = r22.u64 + r29.u64;
	// addi r21,r10,2
	r21.s64 = ctx.r10.s64 + 2;
	// add r31,r17,r29
	r31.u64 = r17.u64 + r29.u64;
	// add r18,r25,r29
	r18.u64 = r25.u64 + r29.u64;
	// add r20,r20,r6
	r20.u64 = r20.u64 + ctx.r6.u64;
	// cmpw cr6,r19,r16
	ctx.cr6.compare<int32_t>(r19.s32, r16.s32, ctx.xer);
	// blt cr6,0x823be880
	if (ctx.cr6.lt) goto loc_823BE880;
loc_823BE9CC:
	// addi r23,r15,-3
	r23.s64 = r15.s64 + -3;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823bea70
	if (!ctx.cr6.gt) goto loc_823BEA70;
	// rlwinm r28,r23,1,0,30
	r28.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r23,-3
	ctx.r11.s64 = r23.s64 + -3;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// mullw r31,r11,r5
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r27,r10,r5
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r23,r5
	ctx.r10.s64 = int64_t(r23.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r23,r6
	r24.s64 = int64_t(r23.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
loc_823BEA0C:
	// add r22,r11,r26
	r22.u64 = ctx.r11.u64 + r26.u64;
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// lbzx r30,r22,r3
	r30.u64 = REX_LOAD_U8(r22.u32 + ctx.r3.u32);
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r22,r11,r25
	r22.u64 = ctx.r11.u64 + r25.u64;
	// mulli r21,r30,29
	r21.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(29));
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r22,r3
	r29.u64 = REX_LOAD_U8(r22.u32 + ctx.r3.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// mulli r30,r29,138
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r21,r31
	r31.u64 = r31.u64 - r21.u64;
	// add r29,r10,r24
	r29.u64 = ctx.r10.u64 + r24.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r30,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r30.s64 = temp.s64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// stbx r30,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x823bea0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BEA0C;
loc_823BEA70:
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823beba4
	if (!ctx.cr6.gt) goto loc_823BEBA4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r26,r11,r6
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// li r31,0
	r31.s64 = 0;
	// mullw r25,r11,r5
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BEA98:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// addi r28,r10,-3
	r28.s64 = ctx.r10.s64 + -3;
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
	// mullw r28,r28,r5
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r24,r3
	r29.u64 = REX_LOAD_U8(r24.u32 + ctx.r3.u32);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r27,r30,3,0,28
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r31,r26
	r24.u64 = r31.u64 + r26.u64;
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r28,r28,r3
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// stbx r30,r24,r4
	REX_STORE_U8(r24.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x823bea98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BEA98;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823beba4
	if (!ctx.cr6.gt) goto loc_823BEBA4;
	// rlwinm r28,r16,1,0,30
	r28.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r16,-3
	ctx.r11.s64 = r16.s64 + -3;
	// addi r10,r28,2
	ctx.r10.s64 = r28.s64 + 2;
	// mullw r31,r11,r5
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// mullw r27,r10,r5
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r10,r16,r5
	ctx.r10.s64 = int64_t(r16.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r26,r31,1,0,30
	r26.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r24,r16,r6
	r24.s64 = int64_t(r16.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
loc_823BEB40:
	// add r23,r11,r26
	r23.u64 = ctx.r11.u64 + r26.u64;
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// addi r30,r28,-2
	r30.s64 = r28.s64 + -2;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// lbzx r30,r23,r3
	r30.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// add r30,r30,r31
	r30.u64 = r30.u64 + r31.u64;
	// add r23,r11,r25
	r23.u64 = ctx.r11.u64 + r25.u64;
	// mulli r22,r30,29
	r22.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(29));
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r23,r3
	r29.u64 = REX_LOAD_U8(r23.u32 + ctx.r3.u32);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// mulli r30,r29,138
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(138));
	// mulli r31,r31,88
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(88));
	// subf r31,r22,r31
	r31.u64 = r31.u64 - r22.u64;
	// add r29,r10,r24
	r29.u64 = ctx.r10.u64 + r24.u64;
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r31,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r31.s64 = r31.s32 >> 8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addze r30,r31
	temp.s64 = r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r31.u32;
	r30.s64 = temp.s64;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// stbx r30,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x823beb40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BEB40;
loc_823BEBA4:
	// addi r11,r16,1
	ctx.r11.s64 = r16.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823bec38
	if (!ctx.cr6.gt) goto loc_823BEC38;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mullw r26,r11,r6
	r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addi r11,r10,3
	ctx.r11.s64 = ctx.r10.s64 + 3;
	// li r31,0
	r31.s64 = 0;
	// mullw r25,r11,r5
	r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_823BEBCC:
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// addi r28,r10,1
	r28.s64 = ctx.r10.s64 + 1;
	// mullw r29,r30,r5
	r29.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r28,r5
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r29,r11
	r29.u64 = r29.u64 + ctx.r11.u64;
	// addi r28,r10,-3
	r28.s64 = ctx.r10.s64 + -3;
	// add r24,r11,r25
	r24.u64 = ctx.r11.u64 + r25.u64;
	// mullw r28,r28,r5
	r28.s64 = int64_t(r28.s32) * int64_t(ctx.r5.s32);
	// lbzx r27,r30,r3
	r27.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// lbzx r30,r29,r3
	r30.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// lbzx r29,r24,r3
	r29.u64 = REX_LOAD_U8(r24.u32 + ctx.r3.u32);
	// add r30,r30,r27
	r30.u64 = r30.u64 + r27.u64;
	// add r28,r28,r11
	r28.u64 = r28.u64 + ctx.r11.u64;
	// rlwinm r27,r30,3,0,28
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r31,r26
	r24.u64 = r31.u64 + r26.u64;
	// subf r30,r30,r27
	r30.u64 = r27.u64 - r30.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r28,r28,r3
	r28.u64 = REX_LOAD_U8(r28.u32 + ctx.r3.u32);
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r28
	r30.u64 = r30.u64 + r28.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// addze r30,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r30.s64 = temp.s64;
	// clrlwi r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	// stbx r30,r24,r4
	REX_STORE_U8(r24.u32 + ctx.r4.u32, r30.u8);
	// bdnz 0x823bebcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BEBCC;
loc_823BEC38:
	// addi r24,r15,-1
	r24.s64 = r15.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823beccc
	if (!ctx.cr6.gt) goto loc_823BECCC;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r24,-3
	ctx.r10.s64 = r24.s64 + -3;
	// addi r31,r11,-2
	r31.s64 = ctx.r11.s64 + -2;
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// mullw r30,r24,r5
	r30.s64 = int64_t(r24.s32) * int64_t(ctx.r5.s32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r28,r31,r5
	r28.s64 = int64_t(r31.s32) * int64_t(ctx.r5.s32);
	// rlwinm r27,r10,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r30,1,0,30
	r26.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r25,r24,r6
	r25.s64 = int64_t(r24.s32) * int64_t(ctx.r6.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
loc_823BEC80:
	// lbzx r31,r31,r3
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r3.u32);
	// add r23,r10,r25
	r23.u64 = ctx.r10.u64 + r25.u64;
	// lbzx r30,r30,r3
	r30.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mulli r31,r31,29
	r31.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(29));
	// lbzx r29,r29,r3
	r29.u64 = REX_LOAD_U8(r29.u32 + ctx.r3.u32);
	// mulli r30,r30,88
	r30.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// subf r31,r31,r30
	r31.u64 = r30.u64 - r31.u64;
	// mulli r30,r29,197
	r30.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(197));
	// add r31,r31,r30
	r31.u64 = r31.u64 + r30.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r30,r31,8
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	r30.s64 = r31.s32 >> 8;
	// add r31,r11,r27
	r31.u64 = ctx.r11.u64 + r27.u64;
	// addze r29,r30
	temp.s64 = r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < r30.u32;
	r29.s64 = temp.s64;
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// clrlwi r22,r29,24
	r22.u64 = r29.u32 & 0xFF;
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// stbx r22,r23,r4
	REX_STORE_U8(r23.u32 + ctx.r4.u32, r22.u8);
	// bdnz 0x823bec80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BEC80;
loc_823BECCC:
	// addi r10,r24,1
	ctx.r10.s64 = r24.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823bed54
	if (!ctx.cr6.gt) goto loc_823BED54;
	// rlwinm r31,r10,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1
	ctx.r9.s64 = r31.s64 + 1;
	// mullw r27,r10,r6
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r28,r9,r5
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
loc_823BECF8:
	// addi r30,r31,-1
	r30.s64 = r31.s64 + -1;
	// lbzx r6,r9,r3
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// addi r29,r31,-3
	r29.s64 = r31.s64 + -3;
	// mullw r9,r30,r5
	ctx.r9.s64 = int64_t(r30.s32) * int64_t(ctx.r5.s32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r30,r29,r5
	r30.s64 = int64_t(r29.s32) * int64_t(ctx.r5.s32);
	// lbzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r26,r27,r10
	r26.u64 = r27.u64 + ctx.r10.u64;
	// rlwinm r25,r9,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r29,r30,r3
	r29.u64 = REX_LOAD_U8(r30.u32 + ctx.r3.u32);
	// subf r30,r9,r25
	r30.u64 = r25.u64 - ctx.r9.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r30,r30,r29
	r30.u64 = r30.u64 + r29.u64;
	// add r9,r28,r11
	ctx.r9.u64 = r28.u64 + ctx.r11.u64;
	// add r6,r30,r6
	ctx.r6.u64 = r30.u64 + ctx.r6.u64;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// stbx r6,r26,r4
	REX_STORE_U8(r26.u32 + ctx.r4.u32, ctx.r6.u8);
	// bdnz 0x823becf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823BECF8;
loc_823BED54:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823D9E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823D9E90;
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
	// beq 0x823d9eec
	if (ctx.cr0.eq) goto loc_823D9EEC;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r29,r3,-4
	r29.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt 0x823d9ed0
	if (ctx.cr0.lt) goto loc_823D9ED0;
loc_823D9EBC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,-12(r30)
	ea = -12 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// bl 0x823cd250
	ctx.lr = 0x823D9EC8;
	sub_823CD250(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x823d9ebc
	if (!ctx.cr0.lt) goto loc_823D9EBC;
loc_823D9ED0:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d9ee4
	if (ctx.cr0.eq) goto loc_823D9EE4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9EE4;
	sub_823CD250(ctx, base);
loc_823D9EE4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823d9f10
	goto loc_823D9F10;
loc_823D9EEC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x823cd250
	ctx.lr = 0x823D9EF8;
	sub_823CD250(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823d9f0c
	if (ctx.cr0.eq) goto loc_823D9F0C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd250
	ctx.lr = 0x823D9F0C;
	sub_823CD250(ctx, base);
loc_823D9F0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823D9F10:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823DBFC8) {
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
	ctx.lr = 0x823DBFD0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,11336
	ctx.r8.s64 = ctx.r8.s64 + 11336;
	// lwz r29,104(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r28,116(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r27,32(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r26,52(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r10.u32);
	// stw r9,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r9.u32);
	// stw r7,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r7.u32);
	// stw r8,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r8.u32);
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// beq cr6,0x823dc04c
	if (ctx.cr6.eq) goto loc_823DC04C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x823dc04c
	if (ctx.cr6.eq) goto loc_823DC04C;
	// addi r4,r3,36
	ctx.r4.s64 = ctx.r3.s64 + 36;
	// lwz r5,84(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r30,88(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r4,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// stw r10,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r10.u32);
	// bl 0x82413040
	ctx.lr = 0x823DC044;
	sub_82413040(ctx, base);
	// stw r5,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r5.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_823DC04C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r31,36
	r30.s64 = r31.s64 + 36;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DC070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823DC090;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,104(r31)
	REX_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r28,116(r31)
	REX_STORE_U32(r31.u32 + 116, r28.u32);
	// stw r27,32(r31)
	REX_STORE_U32(r31.u32 + 32, r27.u32);
	// stw r26,52(r31)
	REX_STORE_U32(r31.u32 + 52, r26.u32);
	// stw r25,24(r31)
	REX_STORE_U32(r31.u32 + 24, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823DEEC8) {
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
	ctx.lr = 0x823DEED0;
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
	// beq cr6,0x823def08
	if (ctx.cr6.eq) goto loc_823DEF08;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823DEF04;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DEF08:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823def24
	if (ctx.cr6.eq) goto loc_823DEF24;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823DEF20;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823DEF24:
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
	// bne 0x823def90
	if (!ctx.cr0.eq) goto loc_823DEF90;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823def98
	goto loc_823DEF98;
loc_823DEF90:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823DEF98:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823defb0
	if (ctx.cr6.eq) goto loc_823DEFB0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823DEFB0;
	sub_823DC658(ctx, base);
loc_823DEFB0:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823df278
	if (!ctx.cr6.gt) goto loc_823DF278;
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
loc_823DF014:
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
	// beq cr6,0x823df1c4
	if (ctx.cr6.eq) goto loc_823DF1C4;
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
loc_823DF1C4:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823df1d4
	if (ctx.cr6.lt) goto loc_823DF1D4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DF1D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823df1ec
	if (!ctx.cr6.gt) goto loc_823DF1EC;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x823df1f0
	if (ctx.cr6.lt) goto loc_823DF1F0;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x823df1f0
	goto loc_823DF1F0;
loc_823DF1EC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823DF1F0:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823df200
	if (ctx.cr6.lt) goto loc_823DF200;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DF200:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823df218
	if (!ctx.cr6.gt) goto loc_823DF218;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x823df21c
	if (ctx.cr6.lt) goto loc_823DF21C;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x823df21c
	goto loc_823DF21C;
loc_823DF218:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823DF21C:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823df22c
	if (ctx.cr6.lt) goto loc_823DF22C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823DF22C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823df244
	if (!ctx.cr6.gt) goto loc_823DF244;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x823df248
	if (ctx.cr6.lt) goto loc_823DF248;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x823df248
	goto loc_823DF248;
loc_823DF244:
	// li r6,0
	ctx.r6.s64 = 0;
loc_823DF248:
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
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
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
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
	// blt cr6,0x823df014
	if (ctx.cr6.lt) goto loc_823DF014;
loc_823DF278:
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

DEFINE_REX_FUNC(sub_823E5A50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,6688
	ctx.r10.s64 = 438304768;
	// ori r10,r10,19
	ctx.r10.u64 = ctx.r10.u64 | 19;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x823e5a74
	if (!ctx.cr6.eq) goto loc_823E5A74;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,29356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29356);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823e5a7c
	goto loc_823E5A7C;
loc_823E5A74:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f13.f64 = double(temp.f32);
loc_823E5A7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f9,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f11,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f13,128(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f8.f64 = double(temp.f32);
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmadds f9,f9,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f12,25732(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 25732);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f0
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f11,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lfs f12,32280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32280);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f0
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64)));
	// stfs f13,132(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fmadds f8,f8,f12,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f0.f64)));
	// lfs f0,9952(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 9952);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-7220(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7220);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f11,f9
	ctx.f11.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f11.u64);
	// fctiwz f11,f7
	ctx.f11.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f11,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f11.u64);
	// lwa r11,-28(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -28));
	// lwa r9,-12(r1)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -12));
	// fctiwz f11,f10
	ctx.f11.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// std r9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lwa r10,-20(r1)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fctiwz f11,f8
	ctx.f11.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x80000000U) : (ctx.f8.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f11,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lwa r11,-20(r1)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r1.u32 + -20));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,-16(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f9,36(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmuls f0,f11,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f0,48(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823EBC40) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// bl 0x823eb758
	ctx.lr = 0x823EBC5C;
	sub_823EB758(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ebc68
	if (ctx.cr0.eq) goto loc_823EBC68;
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_823EBC68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823ED5C8) {
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
	ctx.lr = 0x823ED5D0;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r25,24(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823ed610
	if (!ctx.cr6.eq) goto loc_823ED610;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ED610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ED610:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x823ed644
	if (!ctx.cr6.eq) goto loc_823ED644;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED628;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823ed63c
	if (!ctx.cr6.eq) goto loc_823ED63C;
loc_823ED630:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
loc_823ED63C:
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED644:
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// addic. r10,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	ctx.r10.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rotlwi r30,r9,8
	r30.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// bne 0x823ed678
	if (!ctx.cr0.eq) goto loc_823ED678;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED668;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED678:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// bne 0x823ed6ac
	if (!ctx.cr0.eq) goto loc_823ED6AC;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED69C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED6AC:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r8,103
	ctx.r8.s64 = 103;
	// lbz r23,0(r11)
	r23.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// stw r8,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r23,24(r7)
	REX_STORE_U32(ctx.r7.u32 + 24, r23.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x823ED6E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r23,3
	ctx.r4.s64 = r23.s64 + 3;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823ed704
	if (!ctx.cr6.eq) goto loc_823ED704;
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(r23.s32, 1, ctx.xer);
	// blt cr6,0x823ed704
	if (ctx.cr6.lt) goto loc_823ED704;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(r23.s32, 4, ctx.xer);
	// ble cr6,0x823ed724
	if (!ctx.cr6.gt) goto loc_823ED724;
loc_823ED704:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,11
	ctx.r10.s64 = 11;
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
	ctx.lr = 0x823ED724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ED724:
	// stw r23,332(r31)
	REX_STORE_U32(r31.u32 + 332, r23.u32);
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// ble cr6,0x823ed858
	if (!ctx.cr6.gt) goto loc_823ED858;
	// addi r22,r31,332
	r22.s64 = r31.s64 + 332;
	// li r20,5
	r20.s64 = 5;
	// li r21,104
	r21.s64 = 104;
loc_823ED740:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823ed768
	if (!ctx.cr6.eq) goto loc_823ED768;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED758;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r26,4(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED768:
	// lbz r27,0(r28)
	r27.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r10.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// bne 0x823ed798
	if (!ctx.cr0.eq) goto loc_823ED798;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED798:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r28,r11,1
	r28.s64 = ctx.r11.s64 + 1;
	// lbz r29,0(r11)
	r29.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r26,r10,-1
	r26.s64 = ctx.r10.s64 + -1;
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823ed7d8
	if (!ctx.cr6.gt) goto loc_823ED7D8;
loc_823ED7B8:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823ed7fc
	if (ctx.cr6.eq) goto loc_823ED7FC;
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,84
	r30.s64 = r30.s64 + 84;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823ed7b8
	if (ctx.cr6.lt) goto loc_823ED7B8;
loc_823ED7D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r20,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, r20.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, r27.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x823ED7FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823ED7FC:
	// srawi r11,r29,4
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r11.s64 = r29.s32 >> 4;
	// stwu r30,4(r22)
	ea = 4 + r22.u32;
	REX_STORE_U32(ea, r30.u32);
	r22.u32 = ea;
	// clrlwi r10,r29,28
	ctx.r10.u64 = r29.u32 & 0xF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = ctx.r11.u32 & 0xF;
	// stw r10,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r27,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, r27.u32);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 20);
	// stw r8,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 24);
	// stw r7,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r21,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, r21.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED84C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmpw cr6,r24,r23
	ctx.cr6.compare<int32_t>(r24.s32, r23.s32, ctx.xer);
	// blt cr6,0x823ed740
	if (ctx.cr6.lt) goto loc_823ED740;
loc_823ED858:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// bne cr6,0x823ed880
	if (!ctx.cr6.eq) goto loc_823ED880;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r28,0(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r26,4(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED880:
	// lbz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addic. r10,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r10.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// stw r9,404(r31)
	REX_STORE_U32(r31.u32 + 404, ctx.r9.u32);
	// bne 0x823ed8b4
	if (!ctx.cr0.eq) goto loc_823ED8B4;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED8A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED8B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r30,r11,1
	r30.s64 = ctx.r11.s64 + 1;
	// stw r9,408(r31)
	REX_STORE_U32(r31.u32 + 408, ctx.r9.u32);
	// bne 0x823ed8e8
	if (!ctx.cr0.eq) goto loc_823ED8E8;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED8D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823ed630
	if (ctx.cr6.eq) goto loc_823ED630;
	// lwz r30,0(r25)
	r30.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lwz r29,4(r25)
	r29.u64 = REX_LOAD_U32(r25.u32 + 4);
loc_823ED8E8:
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// li r9,105
	ctx.r9.s64 = 105;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// srawi r8,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 4;
	// lwz r7,404(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 404);
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
	// clrlwi r5,r8,28
	ctx.r5.u64 = ctx.r8.u32 & 0xF;
	// stw r6,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r5,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r5.u32);
	// stw r7,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// lwz r10,408(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 408);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r8,412(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 412);
	// stw r8,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// lwz r7,416(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 416);
	// stw r7,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r9,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823ED948;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,444(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r30,1
	ctx.r9.s64 = r30.s64 + 1;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,20(r7)
	REX_STORE_U32(ctx.r7.u32 + 20, ctx.r10.u32);
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r6.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r8,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r8.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_823F98B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823F98B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823f993c
	if (!ctx.cr0.eq) goto loc_823F993C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3604
	ctx.r4.s64 = ctx.r11.s64 + 3604;
	// bl 0x823ec3e0
	ctx.lr = 0x823F98E0;
	sub_823EC3E0(ctx, base);
loc_823F98E0:
	// lbz r11,1558(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1558);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x823f99c0
	if (!ctx.cr6.eq) goto loc_823F99C0;
	// lwz r11,1368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1368);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f9908
	if (!ctx.cr0.eq) goto loc_823F9908;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3576
	ctx.r4.s64 = ctx.r11.s64 + 3576;
	// bl 0x823ec418
	ctx.lr = 0x823F9908;
	sub_823EC418(ctx, base);
loc_823F9908:
	// lhz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 1544);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f99b4
	if (ctx.cr6.gt) goto loc_823F99B4;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// bgt cr6,0x823f99b4
	if (ctx.cr6.gt) goto loc_823F99B4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x823f9970
	if (!ctx.cr6.eq) goto loc_823F9970;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3552
	ctx.r4.s64 = ctx.r11.s64 + 3552;
	// bl 0x823ec418
	ctx.lr = 0x823F9934;
	sub_823EC418(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823f9ad4
	goto loc_823F9AD4;
loc_823F993C:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9950
	if (ctx.cr0.eq) goto loc_823F9950;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3528
	ctx.r4.s64 = ctx.r11.s64 + 3528;
	// b 0x823f9ac8
	goto loc_823F9AC8;
loc_823F9950:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x823f98e0
	if (ctx.cr6.eq) goto loc_823F98E0;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f98e0
	if (ctx.cr0.eq) goto loc_823F98E0;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3504
	ctx.r4.s64 = ctx.r11.s64 + 3504;
	// b 0x823f9ac8
	goto loc_823F9AC8;
loc_823F9970:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823f45f0
	ctx.lr = 0x823F9978;
	sub_823F45F0(ctx, base);
	// lwz r11,1372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1372);
	// stw r3,1628(r31)
	REX_STORE_U32(r31.u32 + 1628, ctx.r3.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,1372(r31)
	REX_STORE_U32(r31.u32 + 1372, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f2248
	ctx.lr = 0x823F999C;
	sub_823F2248(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec5f8
	ctx.lr = 0x823F99AC;
	sub_823EC5F8(ctx, base);
	// sth r30,1546(r31)
	REX_STORE_U16(r31.u32 + 1546, r30.u16);
	// b 0x823f9a90
	goto loc_823F9A90;
loc_823F99B4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3476
	ctx.r4.s64 = ctx.r11.s64 + 3476;
	// b 0x823f9ac8
	goto loc_823F9AC8;
loc_823F99C0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823f9a44
	if (!ctx.cr6.eq) goto loc_823F9A44;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(r30.u32, 6, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823f99e0
	if (ctx.cr6.eq) goto loc_823F99E0;
loc_823F99D4:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3476
	ctx.r4.s64 = ctx.r11.s64 + 3476;
	// b 0x823f9acc
	goto loc_823F9ACC;
loc_823F99E0:
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f2248
	ctx.lr = 0x823F99EC;
	sub_823F2248(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec5f8
	ctx.lr = 0x823F99FC;
	sub_823EC5F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// sth r11,1546(r31)
	REX_STORE_U16(r31.u32 + 1546, ctx.r11.u16);
	// lbz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rotlwi r6,r7,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r9,83(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 83);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// lbz r7,85(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sth r11,1634(r31)
	REX_STORE_U16(r31.u32 + 1634, ctx.r11.u16);
	// sth r10,1636(r31)
	REX_STORE_U16(r31.u32 + 1636, ctx.r10.u16);
	// sth r9,1638(r31)
	REX_STORE_U16(r31.u32 + 1638, ctx.r9.u16);
	// b 0x823f9a90
	goto loc_823F9A90;
loc_823F9A44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f9ac0
	if (!ctx.cr6.eq) goto loc_823F9AC0;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x823f99d4
	if (!ctx.cr6.eq) goto loc_823F99D4;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823f2248
	ctx.lr = 0x823F9A64;
	sub_823F2248(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ec5f8
	ctx.lr = 0x823F9A74;
	sub_823EC5F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r9,89(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 89);
	// sth r11,1546(r31)
	REX_STORE_U16(r31.u32 + 1546, ctx.r11.u16);
	// lbz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 88);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sth r11,1640(r31)
	REX_STORE_U16(r31.u32 + 1640, ctx.r11.u16);
loc_823F9A90:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F9A9C;
	sub_823F8FA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823f9adc
	if (!ctx.cr0.eq) goto loc_823F9ADC;
	// addi r7,r31,1632
	ctx.r7.s64 = r31.s64 + 1632;
	// lhz r6,1546(r31)
	ctx.r6.u64 = REX_LOAD_U16(r31.u32 + 1546);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,1628(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1628);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ef590
	ctx.lr = 0x823F9ABC;
	sub_823EF590(ctx, base);
	// b 0x823f9adc
	goto loc_823F9ADC;
loc_823F9AC0:
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// addi r4,r11,3432
	ctx.r4.s64 = ctx.r11.s64 + 3432;
loc_823F9AC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823F9ACC:
	// bl 0x823ec418
	ctx.lr = 0x823F9AD0;
	sub_823EC418(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_823F9AD4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f8fa8
	ctx.lr = 0x823F9ADC;
	sub_823F8FA8(ctx, base);
loc_823F9ADC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824000C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e84
	ctx.lr = 0x824000C8;
	// lhz r31,2(r4)
	r31.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi r31,0
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x824000ec
	if (!ctx.cr0.eq) goto loc_824000EC;
	// li r11,138
	ctx.r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_824000EC:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x8240060c
	if (ctx.cr6.lt) goto loc_8240060C;
	// addi r9,r5,1
	ctx.r9.s64 = ctx.r5.s64 + 1;
	// addi r30,r4,6
	r30.s64 = ctx.r4.s64 + 6;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r4,r9,65533
	ctx.r4.u64 = ctx.r9.u64 | 65533;
loc_82400108:
	// lhz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82400128
	if (!ctx.cr6.lt) goto loc_82400128;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82400604
	if (ctx.cr6.eq) goto loc_82400604;
loc_82400128:
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x824001e4
	if (!ctx.cr6.lt) goto loc_824001E4;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,669
	ctx.r10.s64 = ctx.r5.s64 + 669;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82400140:
	// lhz r10,2678(r7)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r7.u32 + 2678);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lhz r29,5808(r3)
	r29.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhzx r9,r8,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x824001c4
	if (!ctx.cr6.gt) goto loc_824001C4;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r28,20(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r29,r28
	REX_STORE_U8(r29.u32 + r28.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r29,r11
	REX_STORE_U8(r29.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r29,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	r29.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x824001d8
	goto loc_824001D8;
loc_824001C4:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | r29.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824001D8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82400140
	if (!ctx.cr0.eq) goto loc_82400140;
	// b 0x824005d0
	goto loc_824005D0;
loc_824001E4:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x824003a4
	if (ctx.cr6.eq) goto loc_824003A4;
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x824002a0
	if (ctx.cr6.eq) goto loc_824002A0;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r10,2678(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2678);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// addi r9,r5,669
	ctx.r9.s64 = ctx.r5.s64 + 669;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// ble cr6,0x82400288
	if (!ctx.cr6.gt) goto loc_82400288;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r29,8(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r29,r7
	REX_STORE_U8(r29.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r7,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r7,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r7.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r7,16
	ctx.r10.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x8240029c
	goto loc_8240029C;
loc_82400288:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8240029C:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_824002A0:
	// lhz r10,2742(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2742);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2740(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2740);
	// ble cr6,0x82400324
	if (!ctx.cr6.gt) goto loc_82400324;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x82400338
	goto loc_82400338;
loc_82400324:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82400338:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// ble cr6,0x82400398
	if (!ctx.cr6.gt) goto loc_82400398;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r11,r11,-14
	ctx.r11.s64 = ctx.r11.s64 + -14;
	// b 0x82400598
	goto loc_82400598;
loc_82400398:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// b 0x824005c0
	goto loc_824005C0;
loc_824003A4:
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r6,10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 10, ctx.xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// bgt cr6,0x824004ac
	if (ctx.cr6.gt) goto loc_824004AC;
	// lhz r10,2746(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2746);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2744(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2744);
	// ble cr6,0x82400430
	if (!ctx.cr6.gt) goto loc_82400430;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// b 0x82400444
	goto loc_82400444;
loc_82400430:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82400444:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// ble cr6,0x824004a0
	if (!ctx.cr6.gt) goto loc_824004A0;
	// addi r11,r6,-3
	ctx.r11.s64 = ctx.r6.s64 + -3;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// b 0x82400594
	goto loc_82400594;
loc_824004A0:
	// add r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// b 0x824005c0
	goto loc_824005C0;
loc_824004AC:
	// lhz r10,2750(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 2750);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,2748(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x82400528
	if (!ctx.cr6.gt) goto loc_82400528;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r9,r8,r11
	REX_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r10,r29,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r29.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x8240053c
	goto loc_8240053C;
loc_82400528:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r10,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8240053C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// ble cr6,0x824005b4
	if (!ctx.cr6.gt) goto loc_824005B4;
	// addi r11,r6,-11
	ctx.r11.s64 = ctx.r6.s64 + -11;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
loc_82400594:
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
loc_82400598:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x824005d0
	goto loc_824005D0;
loc_824005B4:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
loc_824005C0:
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_824005D0:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne cr6,0x824005e8
	if (!ctx.cr6.eq) goto loc_824005E8;
	// li r11,138
	ctx.r11.s64 = 138;
	// b 0x824005f4
	goto loc_824005F4;
loc_824005E8:
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bne cr6,0x824005fc
	if (!ctx.cr6.eq) goto loc_824005FC;
	// li r11,6
	ctx.r11.s64 = 6;
loc_824005F4:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82400604
	goto loc_82400604;
loc_824005FC:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82400604:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bdnz 0x82400108
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82400108;
loc_8240060C:
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82419318) {
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
	ctx.lr = 0x82419320;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x82419328;
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
	// beq cr6,0x82419354
	if (ctx.cr6.eq) goto loc_82419354;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x82419350;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82419354:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82419370
	if (ctx.cr6.eq) goto loc_82419370;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x8241936C;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_82419370:
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
	// bne 0x824193e0
	if (!ctx.cr0.eq) goto loc_824193E0;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x824193e8
	goto loc_824193E8;
loc_824193E0:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_824193E8:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419400
	if (ctx.cr6.eq) goto loc_82419400;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82419400;
	sub_823DC658(ctx, base);
loc_82419400:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82419788
	if (!ctx.cr6.gt) goto loc_82419788;
	// add r10,r30,r29
	ctx.r10.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lfs f4,-31056(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -31056);
	ctx.f4.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f10,-7204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + -7204);
	ctx.f10.f64 = double(temp.f32);
	// lfs f3,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,-7208(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -7208);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_82419474:
	// add r10,r27,r11
	ctx.r10.u64 = r27.u64 + ctx.r11.u64;
	// lfsx f9,r27,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f9,f29,f9
	ctx.f9.f64 = double(float(f29.f64 + ctx.f9.f64));
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
	// lfsx f2,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fadds f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f27,f8,f2
	f27.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// fadds f26,f7,f2
	f26.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// fadds f2,f6,f2
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f2.f64));
	// fctiwz f1,f1
	ctx.f1.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f1,f27
	ctx.f1.s64 = std::isnan(f27.f64) ? int64_t(0x80000000U) : (f27.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f27.f64));
	// stfd f1,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// fctiwz f1,f26
	ctx.f1.s64 = std::isnan(f26.f64) ? int64_t(0x80000000U) : (f26.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f26.f64));
	// stfd f1,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f1.u64);
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// beq cr6,0x824196ac
	if (ctx.cr6.eq) goto loc_824196AC;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// std r7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f1,112(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// std r7,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// lfd f31,120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsw r28,r3
	r28.s64 = ctx.r3.s32;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// std r28,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, r28.u64);
	// lfs f30,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	f30.f64 = double(temp.f32);
	// fsubs f8,f8,f1
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f1.f64));
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// fmuls f8,f8,f10
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// fsubs f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f2,f8,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, f30.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f2,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f8,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// fcfid f2,f31
	ctx.f2.f64 = double(f31.s64);
	// lfs f1,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f7,f7,f10
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// fmadds f1,f8,f12,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f1.f64)));
	// stfs f1,16(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// frsp f2,f2
	ctx.f2.f64 = double(float(ctx.f2.f64));
	// lfs f1,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f7,f0,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f1,20(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fsubs f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f2.f64));
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f7,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfs f2,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f9,f10
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f2,f7,f12,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f2,20(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// fmul f8,f8,f11
	ctx.f8.f64 = ctx.f8.f64 * ctx.f11.f64;
	// lfs f2,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f0,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfs f2,24(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmul f7,f7,f11
	ctx.f7.f64 = ctx.f7.f64 * ctx.f11.f64;
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// frsp f31,f8
	f31.f64 = double(float(ctx.f8.f64));
	// lfs f8,24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
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
	// fmadds f7,f9,f12,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f7.f64)));
	// fmul f9,f9,f11
	ctx.f9.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmuls f9,f9,f4
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// fmadds f8,f9,f0,f7
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f7.f64)));
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
	// fmadds f8,f9,f13,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmul f7,f9,f11
	ctx.f7.f64 = ctx.f9.f64 * ctx.f11.f64;
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
	// fmadds f9,f9,f12,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f9,28(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// frsp f28,f7
	f28.f64 = double(float(ctx.f7.f64));
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
loc_824196AC:
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x824196bc
	if (ctx.cr6.lt) goto loc_824196BC;
	// li r10,511
	ctx.r10.s64 = 511;
loc_824196BC:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x824196d4
	if (!ctx.cr6.gt) goto loc_824196D4;
	// cmpwi cr6,r4,511
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 511, ctx.xer);
	// blt cr6,0x824196d8
	if (ctx.cr6.lt) goto loc_824196D8;
	// li r4,511
	ctx.r4.s64 = 511;
	// b 0x824196d8
	goto loc_824196D8;
loc_824196D4:
	// li r4,-511
	ctx.r4.s64 = -511;
loc_824196D8:
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x824196e8
	if (ctx.cr6.lt) goto loc_824196E8;
	// li r10,511
	ctx.r10.s64 = 511;
loc_824196E8:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x82419700
	if (!ctx.cr6.gt) goto loc_82419700;
	// cmpwi cr6,r5,511
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 511, ctx.xer);
	// blt cr6,0x82419704
	if (ctx.cr6.lt) goto loc_82419704;
	// li r5,511
	ctx.r5.s64 = 511;
	// b 0x82419704
	goto loc_82419704;
loc_82419700:
	// li r5,-511
	ctx.r5.s64 = -511;
loc_82419704:
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82419714
	if (ctx.cr6.lt) goto loc_82419714;
	// li r10,511
	ctx.r10.s64 = 511;
loc_82419714:
	// cmpwi cr6,r10,-511
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -511, ctx.xer);
	// ble cr6,0x8241972c
	if (!ctx.cr6.gt) goto loc_8241972C;
	// cmpwi cr6,r6,511
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 511, ctx.xer);
	// blt cr6,0x82419730
	if (ctx.cr6.lt) goto loc_82419730;
	// li r6,511
	ctx.r6.s64 = 511;
	// b 0x82419730
	goto loc_82419730;
loc_8241972C:
	// li r6,-511
	ctx.r6.s64 = -511;
loc_82419730:
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x82419740
	if (ctx.cr6.lt) goto loc_82419740;
	// li r10,3
	ctx.r10.s64 = 3;
loc_82419740:
	// cmpwi cr6,r10,-3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -3, ctx.xer);
	// ble cr6,0x82419758
	if (!ctx.cr6.gt) goto loc_82419758;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x8241975c
	if (ctx.cr6.lt) goto loc_8241975C;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8241975c
	goto loc_8241975C;
loc_82419758:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_8241975C:
	// rlwimi r6,r3,10,0,21
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r6.u64 & 0xFFFFFFFF000003FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwimi r5,r6,10,0,21
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r5.u64 & 0xFFFFFFFF000003FF);
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwimi r4,r5,10,0,21
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0xFFFFFC00) | (ctx.r4.u64 & 0xFFFFFFFF000003FF);
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// stwux r4,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r29.u32 = ea;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82419474
	if (ctx.cr6.lt) goto loc_82419474;
loc_82419788:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x82419794;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82427798) {
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
	// bl 0x82427100
	ctx.lr = 0x824277B8;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-5692
	ctx.r11.s64 = ctx.r11.s64 + -5692;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1412);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 1412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r30)
	REX_STORE_U32(r30.u32 + 1412, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82428940) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82428974
	if (!ctx.cr6.eq) goto loc_82428974;
	// lwz r11,952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,2736(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// lwz r3,172(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x82424780
	ctx.lr = 0x82428974;
	sub_82424780(ctx, base);
loc_82428974:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// bl 0x82426a08
	ctx.lr = 0x82428988;
	sub_82426A08(ctx, base);
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

DEFINE_REX_FUNC(sub_824294E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824294F0;
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
	ctx.lr = 0x8242950C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x82429548
	if (ctx.cr0.eq) goto loc_82429548;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428a88
	ctx.lr = 0x82429528;
	sub_82428A88(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-15448
	ctx.r11.s64 = ctx.r11.s64 + -15448;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8242954c
	goto loc_8242954C;
loc_82429548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242954C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242A1E8) {
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
	// lhz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,65534
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65534, ctx.xer);
	// bne cr6,0x8242a238
	if (!ctx.cr6.eq) goto loc_8242A238;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r11,r11,9780
	ctx.r11.s64 = ctx.r11.s64 + 9780;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8247db50
	ctx.lr = 0x8242A220;
	sub_8247DB50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8242a234
	if (!ctx.cr0.eq) goto loc_8242A234;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x8242a238
	goto loc_8242A238;
loc_8242A234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242A238:
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

DEFINE_REX_FUNC(sub_8242CCB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242CCB8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r28,r3,44
	r28.s64 = ctx.r3.s64 + 44;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CCDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// stw r11,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r11.u32);
	// bl 0x8242c3b0
	ctx.lr = 0x8242CD04;
	sub_8242C3B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x8242cd18
	if (!ctx.cr0.eq) goto loc_8242CD18;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x8242cd40
	goto loc_8242CD40;
loc_8242CD18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,492(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 492);
	// bl 0x8247c0e8
	ctx.lr = 0x8242CD30;
	sub_8247C0E8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8242cd40
	if (!ctx.cr0.lt) goto loc_8242CD40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8242CD40;
	sub_82473600(ctx, base);
loc_8242CD40:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242CD54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242EF08) {
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
	ctx.lr = 0x8242EF10;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	r25.s64 = ctx.r3.s64 + 44;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242EF4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? r31.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242ef7c
	if (ctx.cr0.eq) goto loc_8242EF7C;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bge cr6,0x8242ef70
	if (!ctx.cr6.lt) goto loc_8242EF70;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_8242EF70:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r31.u32, ctx.xer);
	// beq cr6,0x8242ef7c
	if (ctx.cr6.eq) goto loc_8242EF7C;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_8242EF7C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8242e6f0
	ctx.lr = 0x8242EF94;
	sub_8242E6F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242f088
	if (ctx.cr0.lt) goto loc_8242F088;
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
	// li r4,188
	ctx.r4.s64 = 188;
	// bl 0x8242c3b0
	ctx.lr = 0x8242EFBC;
	sub_8242C3B0(ctx, base);
	// lwz r26,84(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242efe8
	if (ctx.cr0.eq) goto loc_8242EFE8;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r6,44(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8243c860
	ctx.lr = 0x8242EFE0;
	sub_8243C860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8242efec
	goto loc_8242EFEC;
loc_8242EFE8:
	// li r31,0
	r31.s64 = 0;
loc_8242EFEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8242f004
	if (!ctx.cr6.eq) goto loc_8242F004;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8242f088
	goto loc_8242F088;
loc_8242F004:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8243c740
	ctx.lr = 0x8242F018;
	sub_8243C740(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt 0x8242f054
	if (ctx.cr0.lt) goto loc_8242F054;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = r26.s64 + 4;
	// bl 0x82438e18
	ctx.lr = 0x8242F030;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242f048
	if (ctx.cr0.eq) goto loc_8242F048;
	// li r30,0
	r30.s64 = 0;
	// stw r31,0(r21)
	REX_STORE_U32(r21.u32 + 0, r31.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// b 0x8242f088
	goto loc_8242F088;
loc_8242F048:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_8242F054:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F06C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F084;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x8242F088;
	sub_82473600(ctx, base);
loc_8242F088:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F09C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242f0ac
	if (!ctx.cr6.lt) goto loc_8242F0AC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8242c890
	ctx.lr = 0x8242F0AC;
	sub_8242C890(ctx, base);
loc_8242F0AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82443000
	ctx.lr = 0x8242F0B4;
	sub_82443000(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82436AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82436AF8;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x822d5870
	ctx.lr = 0x82436B28;
	sub_822D5870(ctx, base);
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// li r5,-2
	ctx.r5.s64 = -2;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 184);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82436B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 544);
	// ld r10,536(r30)
	ctx.r10.u64 = REX_LOAD_U64(r30.u32 + 536);
	// clrldi r9,r31,32
	ctx.r9.u64 = r31.u64 & 0xFFFFFFFF;
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,544(r30)
	REX_STORE_U32(r30.u32 + 544, ctx.r11.u32);
	// std r10,536(r30)
	REX_STORE_U64(r30.u32 + 536, ctx.r10.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82437FB8) {
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
	// lwz r11,492(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 492);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82438004
	if (!ctx.cr6.gt) goto loc_82438004;
loc_82437FE0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 516);
	// bl 0x8243b8f8
	ctx.lr = 0x82437FEC;
	sub_8243B8F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82438020
	if (ctx.cr0.eq) goto loc_82438020;
	// lwz r11,492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 492);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82437fe0
	if (ctx.cr6.lt) goto loc_82437FE0;
loc_82438004:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82438008:
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
loc_82438020:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82438008
	goto loc_82438008;
}

DEFINE_REX_FUNC(sub_82439048) {
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
	ctx.lr = 0x82439050;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243906c
	if (ctx.cr6.eq) goto loc_8243906C;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82439070
	goto loc_82439070;
loc_8243906C:
	// li r31,0
	r31.s64 = 0;
loc_82439070:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82439134
	if (ctx.cr6.eq) goto loc_82439134;
	// lwz r11,492(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 492);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824390f0
	if (!ctx.cr6.gt) goto loc_824390F0;
	// lwz r26,80(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r27,80(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82439090:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r3,516(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 516);
	// bl 0x8243c2a8
	ctx.lr = 0x824390A4;
	sub_8243C2A8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r28,12(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm r6,r28,23,9,31
	ctx.r6.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 23) & 0x7FFFFF;
	// bl 0x82437df0
	ctx.lr = 0x824390BC;
	sub_82437DF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824390cc
	if (ctx.cr0.eq) goto loc_824390CC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r26,r28,25,30,31
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x3;
loc_824390CC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r3,516(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 516);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8243bf48
	ctx.lr = 0x824390E0;
	sub_8243BF48(ctx, base);
	// lwz r11,492(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 492);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82439090
	if (ctx.cr6.lt) goto loc_82439090;
loc_824390F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824388c8
	ctx.lr = 0x824390F8;
	sub_824388C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82439120
	if (ctx.cr6.eq) goto loc_82439120;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82439120
	if (!ctx.cr6.eq) goto loc_82439120;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82438a10
	ctx.lr = 0x8243911C;
	sub_82438A10(ctx, base);
	// stw r30,512(r29)
	REX_STORE_U32(r29.u32 + 512, r30.u32);
loc_82439120:
	// addi r3,r29,180
	ctx.r3.s64 = r29.s64 + 180;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// bl 0x82434ad0
	ctx.lr = 0x82439130;
	sub_82434AD0(ctx, base);
	// stw r30,520(r29)
	REX_STORE_U32(r29.u32 + 520, r30.u32);
loc_82439134:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8243C2A8) {
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
	ctx.lr = 0x8243C2B0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r10,r4,96
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r27,r9,12,30,31
	r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x3;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// clrlwi. r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r6,21,11,31
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1FFFFF;
	// bne 0x8243c348
	if (!ctx.cr0.eq) goto loc_8243C348;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C2E0;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,1
	r30.s64 = 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8243c300
	if (ctx.cr6.eq) goto loc_8243C300;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C2F8;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_8243C300:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8243c31c
	if (ctx.cr6.eq) goto loc_8243C31C;
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8243C31C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r11,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// rlwimi r10,r30,20,11,9
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r10.u64 & 0x200000);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c340
	if (ctx.cr6.eq) goto loc_8243C340;
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8243C340:
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
	// b 0x8243c3bc
	goto loc_8243C3BC;
loc_8243C348:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243c400
	if (!ctx.cr0.eq) goto loc_8243C400;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C358;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r30,1
	r30.s64 = 1;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8243c378
	if (ctx.cr6.eq) goto loc_8243C378;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C370;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
loc_8243C378:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r11,20
	ctx.r10.u64 = ctx.r11.u32 & 0xFFF;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, ctx.xer);
	// beq cr6,0x8243c394
	if (ctx.cr6.eq) goto loc_8243C394;
	// rlwimi r11,r29,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8243C394:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r9,r11,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300000;
	// rlwimi r10,r30,21,12,10
	ctx.r10.u64 = (__builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 21) & 0xFFFFFFFFFFEFFFFF) | (ctx.r10.u64 & 0x100000);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c3b8
	if (ctx.cr6.eq) goto loc_8243C3B8;
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8243C3B8:
	// stw r28,88(r31)
	REX_STORE_U32(r31.u32 + 88, r28.u32);
loc_8243C3BC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x8243c3f8
	if (!ctx.cr6.eq) goto loc_8243C3F8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,32767
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32767, ctx.xer);
	// beq cr6,0x8243c3f8
	if (ctx.cr6.eq) goto loc_8243C3F8;
	// rlwinm r11,r11,21,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x7FFF;
	// addic. r11,r11,32
	ctx.xer.ca = ctx.r11.u32 > 4294967263;
	ctx.r11.s64 = ctx.r11.s64 + 32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243c3f8
	if (ctx.cr0.eq) goto loc_8243C3F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// clrlwi r9,r10,6
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8243c3f8
	if (ctx.cr6.eq) goto loc_8243C3F8;
	// rlwimi r11,r10,0,0,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8243C3F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8243c408
	goto loc_8243C408;
loc_8243C400:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_8243C408:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824428A8) {
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
	// bl 0x82442460
	ctx.lr = 0x824428C8;
	sub_82442460(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x824428d8
	if (ctx.cr0.eq) goto loc_824428D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x824428D8;
	sub_82473600(ctx, base);
loc_824428D8:
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

DEFINE_REX_FUNC(sub_82442CB0) {
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
	ctx.lr = 0x82442CB8;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r25,0
	r25.s64 = 0;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82442ce4
	if (ctx.cr6.eq) goto loc_82442CE4;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// b 0x82442cf8
	goto loc_82442CF8;
loc_82442CE4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442CF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
loc_82442CF8:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// mr r18,r25
	r18.u64 = r25.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r26,160(r11)
	r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r24,100(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// ble cr6,0x82442f2c
	if (!ctx.cr6.gt) goto loc_82442F2C;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// mr r21,r25
	r21.u64 = r25.u64;
	// ori r22,r9,14
	r22.u64 = ctx.r9.u64 | 14;
	// addi r20,r11,-6500
	r20.s64 = ctx.r11.s64 + -6500;
	// addi r17,r10,7712
	r17.s64 = ctx.r10.s64 + 7712;
loc_82442D30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82442fa4
	if (ctx.cr6.lt) goto loc_82442FA4;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r25,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r25.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 4);
	// mr r29,r25
	r29.u64 = r25.u64;
	// mr r28,r25
	r28.u64 = r25.u64;
	// add r31,r11,r21
	r31.u64 = ctx.r11.u64 + r21.u64;
	// lwzx r3,r11,r21
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82442f10
	if (ctx.cr0.lt) goto loc_82442F10;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82442df8
	if (ctx.cr0.lt) goto loc_82442DF8;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r28,1048(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 1048);
	// bl 0x823cd250
	ctx.lr = 0x82442DA4;
	sub_823CD250(ctx, base);
	// rlwinm. r11,r28,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82442dc0
	if (!ctx.cr0.eq) goto loc_82442DC0;
	// rlwinm. r11,r28,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82442dc8
	if (ctx.cr0.eq) goto loc_82442DC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82442dc8
	if (!ctx.cr6.eq) goto loc_82442DC8;
loc_82442DC0:
	// mr r29,r26
	r29.u64 = r26.u64;
	// b 0x82442df8
	goto loc_82442DF8;
loc_82442DC8:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r7,104(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// addi r3,r11,604
	ctx.r3.s64 = ctx.r11.s64 + 604;
	// bl 0x824348a8
	ctx.lr = 0x82442DE8;
	sub_824348A8(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r22
	r30.u64 = ctx.r11.u64 & r22.u64;
loc_82442DF8:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442E0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82442f10
	if (ctx.cr6.lt) goto loc_82442F10;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lwz r6,4(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 16);
	// bl 0x82443700
	ctx.lr = 0x82442E38;
	sub_82443700(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82442f10
	if (ctx.cr0.lt) goto loc_82442F10;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82442e70
	if (!ctx.cr6.eq) goto loc_82442E70;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442E6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82442E70:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82442f00
	if (ctx.cr6.lt) goto loc_82442F00;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x8242c3b0
	ctx.lr = 0x82442E90;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82442eb0
	if (ctx.cr0.eq) goto loc_82442EB0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82442eb4
	goto loc_82442EB4;
loc_82442EB0:
	// mr r28,r25
	r28.u64 = r25.u64;
loc_82442EB4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x82442ec4
	if (!ctx.cr6.eq) goto loc_82442EC4;
	// mr r30,r22
	r30.u64 = r22.u64;
	// b 0x82442f00
	goto loc_82442F00;
loc_82442EC4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r27,20
	ctx.r3.s64 = r27.s64 + 20;
	// bl 0x82438e18
	ctx.lr = 0x82442ED0;
	sub_82438E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82442ef4
	if (ctx.cr0.eq) goto loc_82442EF4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r25
	r30.u64 = r25.u64;
	// lwz r24,8(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r26,r29
	r26.u64 = r29.u64;
	// mr r19,r11
	r19.u64 = ctx.r11.u64;
	// stw r11,12(r27)
	REX_STORE_U32(r27.u32 + 12, ctx.r11.u32);
	// b 0x82442f10
	goto loc_82442F10;
loc_82442EF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r30,r22
	r30.u64 = r22.u64;
	// bl 0x82473600
	ctx.lr = 0x82442F00;
	sub_82473600(ctx, base);
loc_82442F00:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8242c888
	ctx.lr = 0x82442F10;
	sub_8242C888(ctx, base);
loc_82442F10:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r21,r21,12
	r21.s64 = r21.s64 + 12;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82442d30
	if (ctx.cr6.lt) goto loc_82442D30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt cr6,0x82442fa4
	if (ctx.cr6.lt) goto loc_82442FA4;
loc_82442F2C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r26
	ea = r26.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r26
	ea = r26.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82442f2c
	if (!ctx.cr0.eq) goto loc_82442F2C;
	// stw r24,0(r27)
	REX_STORE_U32(r27.u32 + 0, r24.u32);
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stw r26,8(r27)
	REX_STORE_U32(r27.u32 + 8, r26.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82442f74
	if (!ctx.cr6.eq) goto loc_82442F74;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82442F70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82442f7c
	goto loc_82442F7C;
loc_82442F74:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8243a368
	ctx.lr = 0x82442F7C;
	sub_8243A368(ctx, base);
loc_82442F7C:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// stw r3,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r3.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82442fa4
	if (ctx.cr6.eq) goto loc_82442FA4;
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// bl 0x82442908
	ctx.lr = 0x82442FA0;
	sub_82442908(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82442FA4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_82455DB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x82455698
	ctx.lr = 0x82455DD8;
	sub_82455698(ctx, base);
	// addis r11,r31,3
	ctx.r11.s64 = r31.s64 + 196608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,23248
	ctx.r11.s64 = ctx.r11.s64 + 23248;
	// lfs f0,2000(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,1040(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 1040);
	// lfs f13,1052(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1052);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f31,f13
	ctx.f12.f64 = double(float(f31.f64 / ctx.f13.f64));
	// stfs f31,1052(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 1052, temp.u32);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmadds f8,f12,f9,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f0.f64)));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,1040(r11)
	REX_STORE_U32(ctx.r11.u32 + 1040, ctx.r7.u32);
	// stw r7,1044(r11)
	REX_STORE_U32(ctx.r11.u32 + 1044, ctx.r7.u32);
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

DEFINE_REX_FUNC(sub_82459DA0) {
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
	ctx.lr = 0x82459DA8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f10
	ctx.lr = 0x82459DB0;
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r5,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, ctx.r5.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r6,636(r1)
	REX_STORE_U32(ctx.r1.u32 + 636, ctx.r6.u32);
	// addis r3,r3,3
	ctx.r3.s64 = ctx.r3.s64 + 196608;
	// stw r4,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r7,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r7.u32);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r3,r3,23248
	ctx.r3.s64 = ctx.r3.s64 + 23248;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82454108
	ctx.lr = 0x82459DEC;
	sub_82454108(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,23296
	ctx.r3.s64 = ctx.r3.s64 + 23296;
	// bl 0x82453a10
	ctx.lr = 0x82459E00;
	sub_82453A10(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,23232
	ctx.r9.u64 = ctx.r11.u64 | 23232;
	// lfs f11,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f11.f64 = double(temp.f32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// fcmpu cr6,f27,f11
	ctx.cr6.compare(f27.f64, ctx.f11.f64);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x82459e28
	if (!ctx.cr6.gt) goto loc_82459E28;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
loc_82459E28:
	// fmr f30,f11
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f11.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// fmr f29,f11
	f29.f64 = ctx.f11.f64;
	// beq cr6,0x8245b354
	if (ctx.cr6.eq) goto loc_8245B354;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// lwz r11,644(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 644);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// addi r10,r10,2184
	ctx.r10.s64 = ctx.r10.s64 + 2184;
	// addi r9,r9,2188
	ctx.r9.s64 = ctx.r9.s64 + 2188;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// stw r10,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// addi r8,r8,2192
	ctx.r8.s64 = ctx.r8.s64 + 2192;
	// addi r7,r7,2740
	ctx.r7.s64 = ctx.r7.s64 + 2740;
	// addi r6,r6,10984
	ctx.r6.s64 = ctx.r6.s64 + 10984;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// addi r5,r5,10988
	ctx.r5.s64 = ctx.r5.s64 + 10988;
	// stw r7,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r7.u32);
	// addi r4,r4,10992
	ctx.r4.s64 = ctx.r4.s64 + 10992;
	// stw r6,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// addi r3,r3,12052
	ctx.r3.s64 = ctx.r3.s64 + 12052;
	// stw r5,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r4,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// stw r3,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r3.u32);
	// addi r10,r10,14132
	ctx.r10.s64 = ctx.r10.s64 + 14132;
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// stw r9,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r9.u32);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// addis r5,r31,5
	ctx.r5.s64 = r31.s64 + 327680;
	// addis r4,r31,5
	ctx.r4.s64 = r31.s64 + 327680;
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// addi r8,r8,84
	ctx.r8.s64 = ctx.r8.s64 + 84;
	// addi r7,r7,18260
	ctx.r7.s64 = ctx.r7.s64 + 18260;
	// addi r6,r6,18264
	ctx.r6.s64 = ctx.r6.s64 + 18264;
	// stw r8,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// addi r5,r5,25432
	ctx.r5.s64 = ctx.r5.s64 + 25432;
	// stw r7,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r7.u32);
	// addi r4,r4,25436
	ctx.r4.s64 = ctx.r4.s64 + 25436;
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r3,r3,25440
	ctx.r3.s64 = ctx.r3.s64 + 25440;
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// addis r10,r31,5
	ctx.r10.s64 = r31.s64 + 327680;
	// stw r4,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r4.u32);
	// addis r9,r31,6
	ctx.r9.s64 = r31.s64 + 393216;
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// addi r10,r10,25988
	ctx.r10.s64 = ctx.r10.s64 + 25988;
	// addi r9,r9,-31304
	ctx.r9.s64 = ctx.r9.s64 + -31304;
	// addis r8,r31,6
	ctx.r8.s64 = r31.s64 + 393216;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addis r28,r31,6
	r28.s64 = r31.s64 + 393216;
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// addis r7,r31,6
	ctx.r7.s64 = r31.s64 + 393216;
	// addis r6,r31,6
	ctx.r6.s64 = r31.s64 + 393216;
	// addis r5,r31,6
	ctx.r5.s64 = r31.s64 + 393216;
	// addis r4,r31,5
	ctx.r4.s64 = r31.s64 + 327680;
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// addi r8,r8,-31300
	ctx.r8.s64 = ctx.r8.s64 + -31300;
	// addi r28,r28,-30224
	r28.s64 = r28.s64 + -30224;
	// addi r7,r7,-31296
	ctx.r7.s64 = ctx.r7.s64 + -31296;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r6,-30236
	ctx.r6.s64 = ctx.r6.s64 + -30236;
	// stw r28,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, r28.u32);
	// addi r5,r5,-28156
	ctx.r5.s64 = ctx.r5.s64 + -28156;
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// addi r4,r4,23336
	ctx.r4.s64 = ctx.r4.s64 + 23336;
	// stw r6,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r6.u32);
	// addi r3,r3,23340
	ctx.r3.s64 = ctx.r3.s64 + 23340;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addis r10,r31,6
	ctx.r10.s64 = r31.s64 + 393216;
	// stw r4,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// addis r9,r31,6
	ctx.r9.s64 = r31.s64 + 393216;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// addi r10,r10,-24028
	ctx.r10.s64 = ctx.r10.s64 + -24028;
	// addi r9,r9,-24024
	ctx.r9.s64 = ctx.r9.s64 + -24024;
	// addis r8,r31,6
	ctx.r8.s64 = r31.s64 + 393216;
	// addis r23,r31,6
	r23.s64 = r31.s64 + 393216;
	// lwz r19,636(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 636);
	// addis r22,r31,3
	r22.s64 = r31.s64 + 196608;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addi r23,r23,-17776
	r23.s64 = r23.s64 + -17776;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r22,r22,23236
	r22.s64 = r22.s64 + 23236;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r8,r8,-15696
	ctx.r8.s64 = ctx.r8.s64 + -15696;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addis r21,r31,3
	r21.s64 = r31.s64 + 196608;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addis r23,r31,6
	r23.s64 = r31.s64 + 393216;
	// addis r22,r31,6
	r22.s64 = r31.s64 + 393216;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// addi r21,r21,23240
	r21.s64 = r21.s64 + 23240;
	// addi r23,r23,-13612
	r23.s64 = r23.s64 + -13612;
	// addi r22,r22,-13608
	r22.s64 = r22.s64 + -13608;
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r21.u32);
	// stw r23,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r23.u32);
	// addis r21,r31,3
	r21.s64 = r31.s64 + 196608;
	// stw r22,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r22.u32);
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// addis r22,r31,6
	r22.s64 = r31.s64 + 393216;
	// addi r21,r21,21140
	r21.s64 = r21.s64 + 21140;
	// addi r23,r23,23220
	r23.s64 = r23.s64 + 23220;
	// addi r22,r22,-21948
	r22.s64 = r22.s64 + -21948;
	// stw r21,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r21.u32);
	// addis r7,r31,6
	ctx.r7.s64 = r31.s64 + 393216;
	// stw r23,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r23.u32);
	// addis r6,r31,6
	ctx.r6.s64 = r31.s64 + 393216;
	// stw r22,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, r22.u32);
	// addi r7,r7,-21936
	ctx.r7.s64 = ctx.r7.s64 + -21936;
	// addi r6,r6,-19856
	ctx.r6.s64 = ctx.r6.s64 + -19856;
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addis r24,r31,6
	r24.s64 = r31.s64 + 393216;
	// addis r21,r31,6
	r21.s64 = r31.s64 + 393216;
	// addis r23,r31,6
	r23.s64 = r31.s64 + 393216;
	// addis r22,r31,6
	r22.s64 = r31.s64 + 393216;
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// addi r26,r26,19072
	r26.s64 = r26.s64 + 19072;
	// addi r25,r25,21152
	r25.s64 = r25.s64 + 21152;
	// addi r24,r24,-24016
	r24.s64 = r24.s64 + -24016;
	// stw r26,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, r26.u32);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// stw r25,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r25.u32);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r24,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r24.u32);
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// addis r9,r31,5
	ctx.r9.s64 = r31.s64 + 327680;
	// addis r8,r31,5
	ctx.r8.s64 = r31.s64 + 327680;
	// addis r6,r31,6
	ctx.r6.s64 = r31.s64 + 393216;
	// addis r30,r31,5
	r30.s64 = r31.s64 + 327680;
	// addis r29,r31,6
	r29.s64 = r31.s64 + 393216;
	// addi r21,r21,-19868
	r21.s64 = r21.s64 + -19868;
	// addi r23,r23,-17788
	r23.s64 = r23.s64 + -17788;
	// addi r22,r22,-15708
	r22.s64 = r22.s64 + -15708;
	// stw r21,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, r21.u32);
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// stw r23,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, r23.u32);
	// addi r10,r10,2752
	ctx.r10.s64 = ctx.r10.s64 + 2752;
	// stw r22,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, r22.u32);
	// addi r7,r7,14144
	ctx.r7.s64 = ctx.r7.s64 + 14144;
	// addi r5,r5,2208
	ctx.r5.s64 = ctx.r5.s64 + 2208;
	// addi r4,r4,11008
	ctx.r4.s64 = ctx.r4.s64 + 11008;
	// addi r3,r3,12064
	ctx.r3.s64 = ctx.r3.s64 + 12064;
	// addi r9,r9,23344
	ctx.r9.s64 = ctx.r9.s64 + 23344;
	// addi r8,r8,26000
	ctx.r8.s64 = ctx.r8.s64 + 26000;
	// addi r6,r6,-28144
	ctx.r6.s64 = ctx.r6.s64 + -28144;
	// addi r30,r30,25456
	r30.s64 = r30.s64 + 25456;
	// addi r29,r29,-31280
	r29.s64 = r29.s64 + -31280;
	// lis r18,-32256
	r18.s64 = -2113929216;
	// lis r17,-32256
	r17.s64 = -2113929216;
	// lis r16,-32256
	r16.s64 = -2113929216;
	// lis r15,-32256
	r15.s64 = -2113929216;
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lis r14,-32256
	r14.s64 = -2113929216;
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfs f26,31452(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 31452);
	f26.f64 = double(temp.f32);
	// lfs f1,1992(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,2000(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 2000);
	f31.f64 = double(temp.f32);
	// lfs f5,2008(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 2008);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,2332(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 2332);
	f28.f64 = double(temp.f32);
loc_8245A0E8:
	// lwz r18,2048(r11)
	r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// lfs f0,2076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2076);
	ctx.f0.f64 = double(temp.f32);
	// lwz r17,2064(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// lfs f12,2080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f12.f64 = double(temp.f32);
	// lwz r16,2068(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// rlwinm r15,r18,2,0,29
	r15.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,2072(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// subf r17,r17,r18
	r17.u64 = r18.u64 - r17.u64;
	// subf r16,r16,r18
	r16.u64 = r18.u64 - r16.u64;
	// std r31,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, r31.u64);
	// subf r18,r14,r18
	r18.u64 = r18.u64 - r14.u64;
	// lwz r31,244(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r14,204(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r17,r17,2,21,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x7FC;
	// rlwinm r16,r16,2,21,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x7FC;
	// std r27,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, r27.u64);
	// rlwinm r18,r18,2,21,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x7FC;
	// lwz r27,116(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f10,2084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	ctx.f10.f64 = double(temp.f32);
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,132(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f7,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r14,252(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// lfsx f2,r17,r11
	temp.u32 = REX_LOAD_U32(r17.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fadds f3,f7,f8
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// lfsx f8,r16,r11
	temp.u32 = REX_LOAD_U32(r16.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfsx f2,r18,r11
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f12,f8
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// lfs f6,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f10,f2
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// stfs f7,2088(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 2088, temp.u32);
	// lwz r17,124(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stfs f0,2092(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2092, temp.u32);
	// lwz r16,212(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// stfs f12,2096(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 2096, temp.u32);
	// lfs f9,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// stfsx f9,r15,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r15.u32 + ctx.r11.u32, temp.u32);
	// lfs f4,4(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r19,2048(r11)
	r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r19,2048(r11)
	REX_STORE_U32(ctx.r11.u32 + 2048, r19.u32);
	// lfs f10,524(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 524);
	ctx.f10.f64 = double(temp.f32);
	// lwz r19,512(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 512);
	// lfs f9,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r18,516(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 516);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r18,r5
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r5.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,528(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 528);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f3,f8,f10,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, ctx.f3.f64)));
	// stfsx f3,r19,r5
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r19.u32 + ctx.r5.u32, temp.u32);
	// lwz r18,512(r5)
	r18.u64 = REX_LOAD_U32(ctx.r5.u32 + 512);
	// lwz r19,516(r5)
	r19.u64 = REX_LOAD_U32(ctx.r5.u32 + 516);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// fmadds f2,f7,f3,f8
	ctx.f2.f64 = double(float(std::fma(ctx.f7.f64, ctx.f3.f64, ctx.f8.f64)));
	// clrlwi r19,r19,25
	r19.u64 = r19.u32 & 0x7F;
	// stfs f2,532(r5)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r5.u32 + 532, temp.u32);
	// clrlwi r18,r18,25
	r18.u64 = r18.u32 & 0x7F;
	// stw r19,516(r5)
	REX_STORE_U32(ctx.r5.u32 + 516, r19.u32);
	// stw r18,512(r5)
	REX_STORE_U32(ctx.r5.u32 + 512, r18.u32);
	// lfs f0,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,8216(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 8216);
	// lfs f12,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r18,8212(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 8212);
	// lfs f8,8220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8220);
	ctx.f8.f64 = double(temp.f32);
	// lwz r17,8192(r10)
	r17.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// lfs f7,8224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8224);
	ctx.f7.f64 = double(temp.f32);
	// lwz r16,8208(r10)
	r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 8208);
	// subf r16,r16,r17
	r16.u64 = r17.u64 - r16.u64;
	// rlwinm r16,r16,2,19,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x1FFC;
	// fadds f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// subf r18,r18,r17
	r18.u64 = r17.u64 - r18.u64;
	// lfs f10,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// subf r19,r19,r17
	r19.u64 = r17.u64 - r19.u64;
	// lfs f0,8228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8228);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r18,r18,2,19,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x1FFC;
	// rlwinm r19,r19,2,19,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x1FFC;
	// lfsx f2,r16,r10
	temp.u32 = REX_LOAD_U32(r16.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f2,f8
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// lfsx f8,r18,r10
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f2,r19,r10
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f7,f2,f0
	ctx.f7.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f7,8240(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8240, temp.u32);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,8232(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 8232, temp.u32);
	// stfs f8,8236(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8236, temp.u32);
	// lwz r16,288(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r15,140(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r14,220(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r31,148(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stfsx f9,r17,r10
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r17.u32 + ctx.r10.u32, temp.u32);
	// lwz r19,8192(r10)
	r19.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lwz r17,156(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// clrlwi r19,r19,21
	r19.u64 = r19.u32 & 0x7FF;
	// lwz r27,260(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// stw r19,8192(r10)
	REX_STORE_U32(ctx.r10.u32 + 8192, r19.u32);
	// lfs f2,1036(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1036);
	ctx.f2.f64 = double(temp.f32);
	// lwz r19,1024(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 1024);
	// lfs f7,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r18,1028(r4)
	r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 1028);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r4
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1040(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1040);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f3,f12,f2,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f12.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfsx f3,r19,r4
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r19.u32 + ctx.r4.u32, temp.u32);
	// fmadds f2,f3,f0,f12
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f2,1044(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 1044, temp.u32);
	// lwz r18,1024(r4)
	r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 1024);
	// lwz r19,1028(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 1028);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r19,r19,24
	r19.u64 = r19.u32 & 0xFF;
	// clrlwi r18,r18,24
	r18.u64 = r18.u32 & 0xFF;
	// stw r19,1028(r4)
	REX_STORE_U32(ctx.r4.u32 + 1028, r19.u32);
	// stw r18,1024(r4)
	REX_STORE_U32(ctx.r4.u32 + 1024, r18.u32);
	// lfs f0,2060(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lwz r18,2048(r3)
	r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 2048);
	// lfs f12,2064(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2064);
	ctx.f12.f64 = double(temp.f32);
	// lwz r19,2052(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 2052);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r19,r3
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r3.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r19,r18,2,0,29
	r19.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f3,f0,f8,f7
	ctx.f3.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f7.f64)));
	// stfsx f3,r19,r3
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(r19.u32 + ctx.r3.u32, temp.u32);
	// fmadds f0,f3,f12,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f3.f64, ctx.f12.f64, ctx.f8.f64)));
	// stfs f0,2068(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2068, temp.u32);
	// lwz r19,2052(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 2052);
	// addi r18,r19,1
	r18.s64 = r19.s64 + 1;
	// lwz r19,2048(r3)
	r19.u64 = REX_LOAD_U32(ctx.r3.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r18,2052(r3)
	REX_STORE_U32(ctx.r3.u32 + 2052, r18.u32);
	// stw r19,2048(r3)
	REX_STORE_U32(ctx.r3.u32 + 2048, r19.u32);
	// lfs f0,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r19,4096(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 4096);
	// lfs f3,4108(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4108);
	ctx.f3.f64 = double(temp.f32);
	// lwz r18,4100(r7)
	r18.u64 = REX_LOAD_U32(ctx.r7.u32 + 4100);
	// lwz r17,0(r14)
	r17.u64 = REX_LOAD_U32(r14.u32 + 0);
	// lwz r16,4104(r7)
	r16.u64 = REX_LOAD_U32(ctx.r7.u32 + 4104);
	// lwz r15,0(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stw r15,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r15.u32);
	// subf r18,r18,r19
	r18.u64 = r19.u64 - r18.u64;
	// stw r17,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, r17.u32);
	// rlwinm r17,r19,2,0,29
	r17.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4112(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4112);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r18,r18,2,20,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFC;
	// lfs f8,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// subf r19,r16,r19
	r19.u64 = r19.u64 - r16.u64;
	// lfs f25,228(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 228);
	f25.f64 = double(temp.f32);
	// lwz r16,96(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r19,r19,2,20,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFC;
	// lfsx f24,r18,r7
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r7.u32);
	f24.f64 = double(temp.f32);
	// lwz r18,164(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// fmuls f3,f24,f3
	ctx.f3.f64 = double(float(f24.f64 * ctx.f3.f64));
	// fmuls f7,f25,f7
	ctx.f7.f64 = double(float(f25.f64 * ctx.f7.f64));
	// lfsx f25,r19,r7
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r7.u32);
	f25.f64 = double(temp.f32);
	// stfs f3,4116(r7)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r7.u32 + 4116, temp.u32);
	// fmuls f12,f25,f12
	ctx.f12.f64 = double(float(f25.f64 * ctx.f12.f64));
	// stfs f12,4120(r7)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + 4120, temp.u32);
	// std r11,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r11.u64);
	// stfsx f2,r17,r7
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r17.u32 + ctx.r7.u32, temp.u32);
	// lwz r19,4096(r7)
	r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 4096);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lfs f24,172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 172);
	f24.f64 = double(temp.f32);
	// clrlwi r19,r19,22
	r19.u64 = r19.u32 & 0x3FF;
	// fmuls f9,f24,f9
	ctx.f9.f64 = double(float(f24.f64 * ctx.f9.f64));
	// std r10,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r10.u64);
	// stw r19,4096(r7)
	REX_STORE_U32(ctx.r7.u32 + 4096, r19.u32);
	// lfs f12,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,2068(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2068);
	// lfs f3,2080(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2080);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2084(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2084);
	ctx.f2.f64 = double(temp.f32);
	// lwz r19,2048(r9)
	r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 2048);
	// rlwinm r10,r19,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,292(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r17,2064(r9)
	r17.u64 = REX_LOAD_U32(ctx.r9.u32 + 2064);
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// lfs f7,2076(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2076);
	ctx.f7.f64 = double(temp.f32);
	// lwz r27,2072(r9)
	r27.u64 = REX_LOAD_U32(ctx.r9.u32 + 2072);
	// lwz r14,236(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lfs f25,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	f25.f64 = double(temp.f32);
	// subf r27,r27,r19
	r27.u64 = r19.u64 - r27.u64;
	// fadds f12,f25,f12
	ctx.f12.f64 = double(float(f25.f64 + ctx.f12.f64));
	// lwz r16,0(r16)
	r16.u64 = REX_LOAD_U32(r16.u32 + 0);
	// rlwinm r18,r27,2,21,29
	r18.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7FC;
	// lwz r31,180(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f24,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	f24.f64 = double(temp.f32);
	// fadds f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// lfsx f25,r18,r9
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r9.u32);
	f25.f64 = double(temp.f32);
	// fmuls f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 * f25.f64));
	// subf r17,r17,r19
	r17.u64 = r19.u64 - r17.u64;
	// stw r16,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, r16.u32);
	// subf r19,r11,r19
	r19.u64 = r19.u64 - ctx.r11.u64;
	// rlwinm r17,r17,2,21,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x7FC;
	// rlwinm r19,r19,2,21,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x7FC;
	// lfsx f6,r17,r9
	temp.u32 = REX_LOAD_U32(r17.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfsx f6,r19,r9
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// stfs f6,2092(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 2092, temp.u32);
	// stfs f7,2088(r9)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r9.u32 + 2088, temp.u32);
	// stfs f2,2096(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 2096, temp.u32);
	// stfsx f4,r10,r9
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// lfs f4,268(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 268);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f9,f4
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lwz r19,2048(r9)
	r19.u64 = REX_LOAD_U32(ctx.r9.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r19,2048(r9)
	REX_STORE_U32(ctx.r9.u32 + 2048, r19.u32);
	// lfs f2,524(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 524);
	ctx.f2.f64 = double(temp.f32);
	// lwz r18,516(r30)
	r18.u64 = REX_LOAD_U32(r30.u32 + 516);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r18,r30
	temp.u32 = REX_LOAD_U32(r18.u32 + r30.u32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r19,512(r30)
	r19.u64 = REX_LOAD_U32(r30.u32 + 512);
	// lfs f9,528(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 528);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	f25.f64 = double(temp.f32);
	// fmadds f6,f7,f2,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f12.f64)));
	// stfsx f6,r19,r30
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + r30.u32, temp.u32);
	// lwz r19,516(r30)
	r19.u64 = REX_LOAD_U32(r30.u32 + 516);
	// addi r18,r19,1
	r18.s64 = r19.s64 + 1;
	// lwz r19,512(r30)
	r19.u64 = REX_LOAD_U32(r30.u32 + 512);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// fmadds f4,f9,f6,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f9.f64, ctx.f6.f64, ctx.f7.f64)));
	// clrlwi r18,r18,25
	r18.u64 = r18.u32 & 0x7F;
	// stfs f4,532(r30)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r30.u32 + 532, temp.u32);
	// clrlwi r19,r19,25
	r19.u64 = r19.u32 & 0x7F;
	// stw r18,516(r30)
	REX_STORE_U32(r30.u32 + 516, r18.u32);
	// stw r19,512(r30)
	REX_STORE_U32(r30.u32 + 512, r19.u32);
	// lfs f2,8220(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8220);
	ctx.f2.f64 = double(temp.f32);
	// lwz r16,8216(r8)
	r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 8216);
	// lwz r19,8212(r8)
	r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 8212);
	// lwz r18,8192(r8)
	r18.u64 = REX_LOAD_U32(ctx.r8.u32 + 8192);
	// rlwinm r17,r18,2,0,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r19,r18
	r19.u64 = r18.u64 - r19.u64;
	// lwz r15,8208(r8)
	r15.u64 = REX_LOAD_U32(ctx.r8.u32 + 8208);
	// rlwinm r19,r19,2,19,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x1FFC;
	// lwz r14,188(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lfs f12,8224(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8224);
	ctx.f12.f64 = double(temp.f32);
	// subf r15,r15,r18
	r15.u64 = r18.u64 - r15.u64;
	// lwz r11,196(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// subf r18,r16,r18
	r18.u64 = r18.u64 - r16.u64;
	// lwz r16,104(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r15,r15,2,19,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x1FFC;
	// lfs f7,8228(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8228);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r18,r18,2,19,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0x1FFC;
	// lfsx f23,r19,r8
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r8.u32);
	f23.f64 = double(temp.f32);
	// lfs f6,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f12,f23,f12
	ctx.f12.f64 = double(float(f23.f64 * ctx.f12.f64));
	// lfs f9,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r14,108(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfs f4,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r16,272(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// lfsx f21,r15,r8
	temp.u32 = REX_LOAD_U32(r15.u32 + ctx.r8.u32);
	f21.f64 = double(temp.f32);
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// lfsx f22,r18,r8
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r8.u32);
	f22.f64 = double(temp.f32);
	// fmuls f2,f21,f2
	ctx.f2.f64 = double(float(f21.f64 * ctx.f2.f64));
	// fmuls f7,f22,f7
	ctx.f7.f64 = double(float(f22.f64 * ctx.f7.f64));
	// stfs f7,8240(r8)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r8.u32 + 8240, temp.u32);
	// stfs f2,8232(r8)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r8.u32 + 8232, temp.u32);
	// lwz r15,112(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f12,8236(r8)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r8.u32 + 8236, temp.u32);
	// stfsx f25,r17,r8
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r17.u32 + ctx.r8.u32, temp.u32);
	// lwz r19,8192(r8)
	r19.u64 = REX_LOAD_U32(ctx.r8.u32 + 8192);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,21
	r19.u64 = r19.u32 & 0x7FF;
	// stw r19,8192(r8)
	REX_STORE_U32(ctx.r8.u32 + 8192, r19.u32);
	// lfs f4,1036(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1036);
	ctx.f4.f64 = double(temp.f32);
	// lwz r18,1028(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 1028);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,1024(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 1024);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r29
	temp.u32 = REX_LOAD_U32(r18.u32 + r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f23,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	f23.f64 = double(temp.f32);
	// fmadds f7,f12,f4,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f6.f64)));
	// lfs f2,1040(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 1040);
	ctx.f2.f64 = double(temp.f32);
	// stfsx f7,r19,r29
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r19.u32 + r29.u32, temp.u32);
	// lwz r19,1028(r29)
	r19.u64 = REX_LOAD_U32(r29.u32 + 1028);
	// lwz r18,1024(r29)
	r18.u64 = REX_LOAD_U32(r29.u32 + 1024);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// fmadds f6,f7,f2,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f12.f64)));
	// clrlwi r18,r18,24
	r18.u64 = r18.u32 & 0xFF;
	// stfs f6,1044(r29)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r29.u32 + 1044, temp.u32);
	// clrlwi r19,r19,24
	r19.u64 = r19.u32 & 0xFF;
	// stw r18,1024(r29)
	REX_STORE_U32(r29.u32 + 1024, r18.u32);
	// stw r19,1028(r29)
	REX_STORE_U32(r29.u32 + 1028, r19.u32);
	// lfs f12,2064(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2064);
	ctx.f12.f64 = double(temp.f32);
	// lwz r18,2048(r28)
	r18.u64 = REX_LOAD_U32(r28.u32 + 2048);
	// lwz r19,2052(r28)
	r19.u64 = REX_LOAD_U32(r28.u32 + 2052);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,2060(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2060);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f7,r19,r28
	temp.u32 = REX_LOAD_U32(r19.u32 + r28.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f4,f7,f23
	ctx.f6.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, f23.f64)));
	// lfs f2,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f4,f6,f12,f7
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, ctx.f7.f64)));
	// stfsx f6,r18,r28
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r18.u32 + r28.u32, temp.u32);
	// stfs f4,2068(r28)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r28.u32 + 2068, temp.u32);
	// lwz r19,2052(r28)
	r19.u64 = REX_LOAD_U32(r28.u32 + 2052);
	// addi r18,r19,1
	r18.s64 = r19.s64 + 1;
	// lwz r19,2048(r28)
	r19.u64 = REX_LOAD_U32(r28.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r18,2052(r28)
	REX_STORE_U32(r28.u32 + 2052, r18.u32);
	// stw r19,2048(r28)
	REX_STORE_U32(r28.u32 + 2048, r19.u32);
	// lfs f21,4112(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4112);
	f21.f64 = double(temp.f32);
	// lwz r18,4100(r6)
	r18.u64 = REX_LOAD_U32(ctx.r6.u32 + 4100);
	// lfs f22,4108(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4108);
	f22.f64 = double(temp.f32);
	// lwz r17,4104(r6)
	r17.u64 = REX_LOAD_U32(ctx.r6.u32 + 4104);
	// lwz r19,4096(r6)
	r19.u64 = REX_LOAD_U32(ctx.r6.u32 + 4096);
	// rlwinm r16,r19,2,0,29
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r18,r18,r19
	r18.u64 = r19.u64 - r18.u64;
	// subf r19,r17,r19
	r19.u64 = r19.u64 - r17.u64;
	// lwz r17,120(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r18,r18,2,20,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFC;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r19,r19,2,20,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFC;
	// lwz r14,128(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r15,0(r15)
	r15.u64 = REX_LOAD_U32(r15.u32 + 0);
	// fmr f7,f11
	ctx.f7.f64 = ctx.f11.f64;
	// lwz r17,0(r17)
	r17.u64 = REX_LOAD_U32(r17.u32 + 0);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lfsx f20,r18,r6
	temp.u32 = REX_LOAD_U32(r18.u32 + ctx.r6.u32);
	f20.f64 = double(temp.f32);
	// ld r31,304(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// lfsx f19,r19,r6
	temp.u32 = REX_LOAD_U32(r19.u32 + ctx.r6.u32);
	f19.f64 = double(temp.f32);
	// fmuls f22,f20,f22
	f22.f64 = double(float(f20.f64 * f22.f64));
	// lfs f4,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f21,f19,f21
	f21.f64 = double(float(f19.f64 * f21.f64));
	// lfs f12,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stw r17,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r17.u32);
	// stfs f22,4116(r6)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r6.u32 + 4116, temp.u32);
	// stw r15,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r15.u32);
	// stfs f21,4120(r6)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(ctx.r6.u32 + 4120, temp.u32);
	// ld r27,312(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// stfsx f2,r16,r6
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r16.u32 + ctx.r6.u32, temp.u32);
	// ld r11,296(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// lfs f2,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f2,f2,f23
	ctx.f2.f64 = double(float(ctx.f2.f64 * f23.f64));
	// lwz r19,4096(r6)
	r19.u64 = REX_LOAD_U32(ctx.r6.u32 + 4096);
	// lfs f22,160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	f22.f64 = double(temp.f32);
	// fmuls f25,f22,f25
	f25.f64 = double(float(f22.f64 * f25.f64));
	// addi r18,r19,1
	r18.s64 = r19.s64 + 1;
	// lwz r19,96(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r18,r18,22
	r18.u64 = r18.u32 & 0x3FF;
	// stw r18,4096(r6)
	REX_STORE_U32(ctx.r6.u32 + 4096, r18.u32);
	// fadds f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 + f25.f64));
	// fadds f2,f2,f24
	ctx.f2.f64 = double(float(ctx.f2.f64 + f24.f64));
	// lwz r19,0(r19)
	r19.u64 = REX_LOAD_U32(r19.u32 + 0);
	// lwz r18,0(r10)
	r18.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// ld r10,280(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// stw r19,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, r19.u32);
	// lfs f25,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	f25.f64 = double(temp.f32);
	// fmuls f2,f2,f25
	ctx.f2.f64 = double(float(ctx.f2.f64 * f25.f64));
	// bne cr6,0x8245afe4
	if (!ctx.cr6.eq) goto loc_8245AFE4;
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// lis r28,1
	r28.s64 = 65536;
	// addi r27,r27,20352
	r27.s64 = r27.s64 + 20352;
	// lis r26,1
	r26.s64 = 65536;
	// ori r28,r28,20340
	r28.u64 = r28.u64 | 20340;
	// ori r26,r26,22420
	r26.u64 = r26.u64 | 22420;
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// lwz r25,2052(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 2052);
	// lfs f7,2060(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 2060);
	ctx.f7.f64 = double(temp.f32);
	// lwz r24,2048(r27)
	r24.u64 = REX_LOAD_U32(r27.u32 + 2048);
	// lfs f6,2064(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r31,r28
	temp.u32 = REX_LOAD_U32(r31.u32 + r28.u32);
	f30.f64 = double(temp.f32);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	f29.f64 = double(temp.f32);
	// lis r28,1
	r28.s64 = 65536;
	// fadds f29,f29,f10
	f29.f64 = double(float(f29.f64 + ctx.f10.f64));
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// addi r23,r23,22452
	r23.s64 = r23.s64 + 22452;
	// lfsx f25,r25,r27
	temp.u32 = REX_LOAD_U32(r25.u32 + r27.u32);
	f25.f64 = double(temp.f32);
	// ori r25,r28,22448
	r25.u64 = r28.u64 | 22448;
	// fmadds f7,f7,f25,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f25.f64, f30.f64)));
	// stfsx f7,r24,r27
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r24.u32 + r27.u32, temp.u32);
	// lis r28,1
	r28.s64 = 65536;
	// addi r26,r26,22432
	r26.s64 = r26.s64 + 22432;
	// ori r22,r28,22476
	r22.u64 = r28.u64 | 22476;
	// lis r28,1
	r28.s64 = 65536;
	// addis r24,r31,1
	r24.s64 = r31.s64 + 65536;
	// ori r20,r28,22500
	r20.u64 = r28.u64 | 22500;
	// lis r28,1
	r28.s64 = 65536;
	// addi r24,r24,22480
	r24.s64 = r24.s64 + 22480;
	// ori r18,r28,38916
	r18.u64 = r28.u64 | 38916;
	// lwz r28,2052(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 2052);
	// addi r17,r28,1
	r17.s64 = r28.s64 + 1;
	// fmadds f6,f6,f7,f25
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, f25.f64)));
	// lwz r28,2048(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 2048);
	// clrlwi r17,r17,23
	r17.u64 = r17.u32 & 0x1FF;
	// stfs f6,2068(r27)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r27.u32 + 2068, temp.u32);
	// addis r21,r31,2
	r21.s64 = r31.s64 + 131072;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r17,2052(r27)
	REX_STORE_U32(r27.u32 + 2052, r17.u32);
	// lis r19,1
	r19.s64 = 65536;
	// clrlwi r28,r28,23
	r28.u64 = r28.u32 & 0x1FF;
	// addi r21,r21,-26608
	r21.s64 = r21.s64 + -26608;
	// stw r28,2048(r27)
	REX_STORE_U32(r27.u32 + 2048, r28.u32);
	// lfs f30,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	f30.f64 = double(temp.f32);
	// ori r19,r19,38944
	r19.u64 = r19.u64 | 38944;
	// lfsx f6,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r28,r26
	temp.u32 = REX_LOAD_U32(r28.u32 + r26.u32);
	f25.f64 = double(temp.f32);
	// lfs f7,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f7,f25,f7,f29
	ctx.f7.f64 = double(float(std::fma(f25.f64, ctx.f7.f64, f29.f64)));
	// stfs f30,4(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f7,16(r26)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r26.u32 + 16, temp.u32);
	// stfs f29,0(r26)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// lfs f29,16(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 16);
	f29.f64 = double(temp.f32);
	// lwz r28,8(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 8);
	// lfs f7,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r28,r23
	temp.u32 = REX_LOAD_U32(r28.u32 + r23.u32);
	f30.f64 = double(temp.f32);
	// fmadds f6,f29,f30,f6
	ctx.f6.f64 = double(float(std::fma(f29.f64, f30.f64, ctx.f6.f64)));
	// lfs f25,20(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	f25.f64 = double(temp.f32);
	// fmuls f30,f25,f30
	f30.f64 = double(float(f25.f64 * f30.f64));
	// lfsx f29,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	f29.f64 = double(temp.f32);
	// lfs f25,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	f25.f64 = double(temp.f32);
	// stfs f6,0(r23)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f25,4(r23)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// fmadds f7,f7,f6,f30
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, f30.f64)));
	// stfs f7,24(r23)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r23.u32 + 24, temp.u32);
	// lfs f25,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	f25.f64 = double(temp.f32);
	// lwz r28,8(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 8);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r31,r20
	temp.u32 = REX_LOAD_U32(r31.u32 + r20.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,12(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfs f30,16(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 16);
	f30.f64 = double(temp.f32);
	// lfsx f24,r28,r24
	temp.u32 = REX_LOAD_U32(r28.u32 + r24.u32);
	f24.f64 = double(temp.f32);
	// fmadds f30,f30,f24,f29
	f30.f64 = double(float(std::fma(f30.f64, f24.f64, f29.f64)));
	// stfs f25,4(r24)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r24.u32 + 4, temp.u32);
	// fmuls f6,f6,f28
	ctx.f6.f64 = double(float(ctx.f6.f64 * f28.f64));
	// fmuls f7,f7,f30
	ctx.f7.f64 = double(float(ctx.f7.f64 * f30.f64));
	// stfs f30,0(r24)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r24.u32 + 0, temp.u32);
	// addis r27,r31,1
	r27.s64 = r31.s64 + 65536;
	// stfs f7,20(r24)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r24.u32 + 20, temp.u32);
	// lwz r28,8(r21)
	r28.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lfs f7,12(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	f25.f64 = double(temp.f32);
	// addi r27,r27,22512
	r27.s64 = r27.s64 + 22512;
	// lfsx f24,r28,r21
	temp.u32 = REX_LOAD_U32(r28.u32 + r21.u32);
	f24.f64 = double(temp.f32);
	// fmuls f7,f7,f24
	ctx.f7.f64 = double(float(ctx.f7.f64 * f24.f64));
	// lfsx f29,r31,r19
	temp.u32 = REX_LOAD_U32(r31.u32 + r19.u32);
	f29.f64 = double(temp.f32);
	// lis r28,1
	r28.s64 = 65536;
	// lfsx f30,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	f30.f64 = double(temp.f32);
	// lis r26,1
	r26.s64 = 65536;
	// stfs f30,0(r21)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// ori r23,r28,41028
	r23.u64 = r28.u64 | 41028;
	// stfs f7,16(r21)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r21.u32 + 16, temp.u32);
	// lis r28,1
	r28.s64 = 65536;
	// stfs f25,4(r21)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r21.u32 + 4, temp.u32);
	// ori r26,r26,38920
	r26.u64 = r26.u64 | 38920;
	// ori r20,r28,43136
	r20.u64 = r28.u64 | 43136;
	// lis r28,1
	r28.s64 = 65536;
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// ori r18,r28,43188
	r18.u64 = r28.u64 | 43188;
	// addi r25,r25,-24496
	r25.s64 = r25.s64 + -24496;
	// lis r24,1
	r24.s64 = 65536;
	// addis r22,r31,2
	r22.s64 = r31.s64 + 131072;
	// ori r24,r24,43108
	r24.u64 = r24.u64 | 43108;
	// addi r22,r22,-22416
	r22.s64 = r22.s64 + -22416;
	// lis r21,1
	r21.s64 = 65536;
	// addis r19,r31,2
	r19.s64 = r31.s64 + 131072;
	// addis r17,r31,2
	r17.s64 = r31.s64 + 131072;
	// ori r21,r21,43164
	r21.u64 = r21.u64 | 43164;
	// addi r19,r19,-22396
	r19.s64 = r19.s64 + -22396;
	// addi r17,r17,-22368
	r17.s64 = r17.s64 + -22368;
	// lwz r15,16392(r27)
	r15.u64 = REX_LOAD_U32(r27.u32 + 16392);
	// lwz r28,16388(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 16388);
	// lfsx f7,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f7.f64 = double(temp.f32);
	// lwz r16,16384(r27)
	r16.u64 = REX_LOAD_U32(r27.u32 + 16384);
	// lfs f25,16396(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16396);
	f25.f64 = double(temp.f32);
	// subf r28,r28,r16
	r28.u64 = r16.u64 - r28.u64;
	// lfs f30,16400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16400);
	f30.f64 = double(temp.f32);
	// rlwinm r28,r28,2,18,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FFC;
	// subf r26,r15,r16
	r26.u64 = r16.u64 - r15.u64;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r26,2,18,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FFC;
	// lfsx f24,r28,r27
	temp.u32 = REX_LOAD_U32(r28.u32 + r27.u32);
	f24.f64 = double(temp.f32);
	// fmuls f25,f24,f25
	f25.f64 = double(float(f24.f64 * f25.f64));
	// lfsx f24,r26,r27
	temp.u32 = REX_LOAD_U32(r26.u32 + r27.u32);
	f24.f64 = double(temp.f32);
	// fmuls f30,f24,f30
	f30.f64 = double(float(f24.f64 * f30.f64));
	// stfs f30,16408(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 16408, temp.u32);
	// stfs f25,16404(r27)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r27.u32 + 16404, temp.u32);
	// stfsx f6,r16,r27
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r16.u32 + r27.u32, temp.u32);
	// lwz r28,16384(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 16384);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r28,r28,20
	r28.u64 = r28.u32 & 0xFFF;
	// stw r28,16384(r27)
	REX_STORE_U32(r27.u32 + 16384, r28.u32);
	// lwz r28,2052(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// lfsx f30,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	f30.f64 = double(temp.f32);
	// lwz r27,2048(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// lfs f25,2060(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2060);
	f25.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f24,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	f24.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f24,f24,f9
	f24.f64 = double(float(f24.f64 + ctx.f9.f64));
	// lfsx f6,r28,r25
	temp.u32 = REX_LOAD_U32(r28.u32 + r25.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f30,f25,f6,f30
	f30.f64 = double(float(std::fma(f25.f64, ctx.f6.f64, f30.f64)));
	// lfs f25,2064(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2064);
	f25.f64 = double(temp.f32);
	// stfsx f30,r27,r25
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + r25.u32, temp.u32);
	// lwz r27,2048(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// fmadds f6,f25,f30,f6
	ctx.f6.f64 = double(float(std::fma(f25.f64, f30.f64, ctx.f6.f64)));
	// stfs f6,2068(r25)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r25.u32 + 2068, temp.u32);
	// lwz r28,2052(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r27,r27,23
	r27.u64 = r27.u32 & 0x1FF;
	// clrlwi r28,r28,23
	r28.u64 = r28.u32 & 0x1FF;
	// stw r27,2048(r25)
	REX_STORE_U32(r25.u32 + 2048, r27.u32);
	// stw r28,2052(r25)
	REX_STORE_U32(r25.u32 + 2052, r28.u32);
	// lfs f30,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfsx f6,r31,r20
	temp.u32 = REX_LOAD_U32(r31.u32 + r20.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r28,8(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 8);
	// lfs f25,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	f25.f64 = double(temp.f32);
	// addis r27,r31,2
	r27.s64 = r31.s64 + 131072;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,-22336
	r27.s64 = r27.s64 + -22336;
	// lis r26,1
	r26.s64 = 65536;
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// ori r26,r26,59608
	r26.u64 = r26.u64 | 59608;
	// lfsx f23,r28,r22
	temp.u32 = REX_LOAD_U32(r28.u32 + r22.u32);
	f23.f64 = double(temp.f32);
	// lis r28,1
	r28.s64 = 65536;
	// fmadds f30,f23,f30,f24
	f30.f64 = double(float(std::fma(f23.f64, f30.f64, f24.f64)));
	// stfs f30,16(r22)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 16, temp.u32);
	// stfs f25,4(r22)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
	// ori r28,r28,59604
	r28.u64 = r28.u64 | 59604;
	// stfs f24,0(r22)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// addi r25,r25,-5920
	r25.s64 = r25.s64 + -5920;
	// lfs f30,16(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 16);
	f30.f64 = double(temp.f32);
	// lis r24,1
	r24.s64 = 65536;
	// lis r23,2
	r23.s64 = 131072;
	// ori r24,r24,59632
	r24.u64 = r24.u64 | 59632;
	// addis r22,r31,2
	r22.s64 = r31.s64 + 131072;
	// ori r23,r23,2324
	r23.u64 = r23.u64 | 2324;
	// addi r22,r22,2336
	r22.s64 = r22.s64 + 2336;
	// lwz r20,8(r19)
	r20.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lfsx f24,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f24.f64 = double(temp.f32);
	// lfs f22,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	f22.f64 = double(temp.f32);
	// lis r21,2
	r21.s64 = 131072;
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f23,20(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 20);
	f23.f64 = double(temp.f32);
	// lfs f25,12(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 12);
	f25.f64 = double(temp.f32);
	// ori r21,r21,10552
	r21.u64 = r21.u64 | 10552;
	// lfsx f21,r20,r19
	temp.u32 = REX_LOAD_U32(r20.u32 + r19.u32);
	f21.f64 = double(temp.f32);
	// fmuls f23,f23,f21
	f23.f64 = double(float(f23.f64 * f21.f64));
	// fmadds f6,f30,f21,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, f21.f64, ctx.f6.f64)));
	// stfs f6,0(r19)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// stfs f22,4(r19)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r19.u32 + 4, temp.u32);
	// fmadds f6,f25,f6,f23
	ctx.f6.f64 = double(float(std::fma(f25.f64, ctx.f6.f64, f23.f64)));
	// stfs f6,24(r19)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + 24, temp.u32);
	// lfs f23,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	f23.f64 = double(temp.f32);
	// lfs f30,12(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 12);
	f30.f64 = double(temp.f32);
	// lwz r20,8(r17)
	r20.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r20,r20,2,0,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f22,r20,r17
	temp.u32 = REX_LOAD_U32(r20.u32 + r17.u32);
	f22.f64 = double(temp.f32);
	// lfs f6,16(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f6,f6,f22,f24
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, f22.f64, f24.f64)));
	// lfsx f25,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	f25.f64 = double(temp.f32);
	// stfs f23,4(r17)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r17.u32 + 4, temp.u32);
	// fmuls f25,f25,f28
	f25.f64 = double(float(f25.f64 * f28.f64));
	// fmuls f30,f30,f6
	f30.f64 = double(float(f30.f64 * ctx.f6.f64));
	// stfs f30,20(r17)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r17.u32 + 20, temp.u32);
	// stfs f6,0(r17)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// lfsx f6,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r19,16392(r27)
	r19.u64 = REX_LOAD_U32(r27.u32 + 16392);
	// lfs f24,16400(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16400);
	f24.f64 = double(temp.f32);
	// lwz r18,16384(r27)
	r18.u64 = REX_LOAD_U32(r27.u32 + 16384);
	// lfsx f23,r31,r28
	temp.u32 = REX_LOAD_U32(r31.u32 + r28.u32);
	f23.f64 = double(temp.f32);
	// lwz r20,16388(r27)
	r20.u64 = REX_LOAD_U32(r27.u32 + 16388);
	// lfs f30,16396(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 16396);
	f30.f64 = double(temp.f32);
	// subf r28,r20,r18
	r28.u64 = r18.u64 - r20.u64;
	// subf r19,r19,r18
	r19.u64 = r18.u64 - r19.u64;
	// rlwinm r28,r28,2,18,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FFC;
	// rlwinm r26,r19,2,18,29
	r26.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0x3FFC;
	// rlwinm r17,r18,2,0,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f21,r28,r27
	temp.u32 = REX_LOAD_U32(r28.u32 + r27.u32);
	f21.f64 = double(temp.f32);
	// lfsx f22,r26,r27
	temp.u32 = REX_LOAD_U32(r26.u32 + r27.u32);
	f22.f64 = double(temp.f32);
	// fmuls f30,f21,f30
	f30.f64 = double(float(f21.f64 * f30.f64));
	// fmuls f24,f22,f24
	f24.f64 = double(float(f22.f64 * f24.f64));
	// stfs f30,16404(r27)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + 16404, temp.u32);
	// stfs f24,16408(r27)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r27.u32 + 16408, temp.u32);
	// stfsx f25,r17,r27
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r17.u32 + r27.u32, temp.u32);
	// lwz r28,16384(r27)
	r28.u64 = REX_LOAD_U32(r27.u32 + 16384);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r28,r28,20
	r28.u64 = r28.u32 & 0xFFF;
	// stw r28,16384(r27)
	REX_STORE_U32(r27.u32 + 16384, r28.u32);
	// lwz r28,8(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8);
	// lfs f30,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
	// lfs f24,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	f24.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r28,r25
	temp.u32 = REX_LOAD_U32(r28.u32 + r25.u32);
	f25.f64 = double(temp.f32);
	// fmuls f30,f30,f25
	f30.f64 = double(float(f30.f64 * f25.f64));
	// lfsx f25,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	f25.f64 = double(temp.f32);
	// stfs f24,4(r25)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r25.u32 + 4, temp.u32);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// stfs f23,0(r25)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// addis r24,r31,2
	r24.s64 = r31.s64 + 131072;
	// stfs f30,16(r25)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r25.u32 + 16, temp.u32);
	// addi r26,r26,10560
	r26.s64 = r26.s64 + 10560;
	// lis r25,2
	r25.s64 = 131072;
	// addi r24,r24,18784
	r24.s64 = r24.s64 + 18784;
	// ori r25,r25,18772
	r25.u64 = r25.u64 | 18772;
	// addis r20,r31,2
	r20.s64 = r31.s64 + 131072;
	// addi r20,r20,22912
	r20.s64 = r20.s64 + 22912;
	// lwz r27,8192(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 8192);
	// lfs f24,8204(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8204);
	f24.f64 = double(temp.f32);
	// lfs f22,8208(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8208);
	f22.f64 = double(temp.f32);
	// lwz r28,8196(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 8196);
	// lfsx f30,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	f30.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f30,f30,f0
	f30.f64 = double(float(f30.f64 + ctx.f0.f64));
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f21,8212(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 8212);
	f21.f64 = double(temp.f32);
	// lis r23,2
	r23.s64 = 131072;
	// lfsx f20,r28,r22
	temp.u32 = REX_LOAD_U32(r28.u32 + r22.u32);
	f20.f64 = double(temp.f32);
	// fmuls f21,f21,f20
	f21.f64 = double(float(f21.f64 * f20.f64));
	// lfsx f23,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f23.f64 = double(temp.f32);
	// fmadds f24,f24,f20,f30
	f24.f64 = double(float(std::fma(f24.f64, f20.f64, f30.f64)));
	// stfsx f24,r27,r22
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r27.u32 + r22.u32, temp.u32);
	// fmadds f30,f22,f30,f21
	f30.f64 = double(float(std::fma(f22.f64, f30.f64, f21.f64)));
	// stfs f30,8216(r22)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 8216, temp.u32);
	// lis r28,2
	r28.s64 = 131072;
	// ori r23,r23,39316
	r23.u64 = r23.u64 | 39316;
	// ori r21,r28,22900
	r21.u64 = r28.u64 | 22900;
	// lis r28,2
	r28.s64 = 131072;
	// ori r19,r28,39320
	r19.u64 = r28.u64 | 39320;
	// lwz r28,8196(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 8196);
	// lwz r27,8192(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 8192);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r28,r28,21
	r28.u64 = r28.u32 & 0x7FF;
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// stw r28,8196(r22)
	REX_STORE_U32(r22.u32 + 8196, r28.u32);
	// stw r27,8192(r22)
	REX_STORE_U32(r22.u32 + 8192, r27.u32);
	// lwz r27,8192(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// lwz r28,8196(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// lfs f30,8204(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8204);
	f30.f64 = double(temp.f32);
	// lfsx f24,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	f24.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f22,8208(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8208);
	f22.f64 = double(temp.f32);
	// lfsx f21,r28,r26
	temp.u32 = REX_LOAD_U32(r28.u32 + r26.u32);
	f21.f64 = double(temp.f32);
	// fmadds f30,f30,f21,f23
	f30.f64 = double(float(std::fma(f30.f64, f21.f64, f23.f64)));
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f30,r27,r26
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + r26.u32, temp.u32);
	// fmadds f30,f22,f30,f21
	f30.f64 = double(float(std::fma(f22.f64, f30.f64, f21.f64)));
	// stfs f30,8212(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 8212, temp.u32);
	// lwz r27,8192(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// lwz r28,8196(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// clrlwi r28,r28,21
	r28.u64 = r28.u32 & 0x7FF;
	// stw r27,8192(r26)
	REX_STORE_U32(r26.u32 + 8192, r27.u32);
	// stw r28,8196(r26)
	REX_STORE_U32(r26.u32 + 8196, r28.u32);
	// lfs f23,4108(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4108);
	f23.f64 = double(temp.f32);
	// lwz r27,4096(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 4096);
	// lwz r28,4100(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4100);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f21,r28,r24
	temp.u32 = REX_LOAD_U32(r28.u32 + r24.u32);
	f21.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f30,4112(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 4112);
	f30.f64 = double(temp.f32);
	// fmadds f24,f23,f21,f24
	f24.f64 = double(float(std::fma(f23.f64, f21.f64, f24.f64)));
	// lfsx f22,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f22.f64 = double(temp.f32);
	// fadds f24,f24,f0
	f24.f64 = double(float(f24.f64 + ctx.f0.f64));
	// stfsx f24,r27,r24
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r27.u32 + r24.u32, temp.u32);
	// lwz r28,4100(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 4100);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r27,4096(r24)
	r27.u64 = REX_LOAD_U32(r24.u32 + 4096);
	// fmadds f30,f30,f24,f21
	f30.f64 = double(float(std::fma(f30.f64, f24.f64, f21.f64)));
	// stfs f30,4116(r24)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r24.u32 + 4116, temp.u32);
	// clrlwi r28,r28,22
	r28.u64 = r28.u32 & 0x3FF;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r27,r27,22
	r27.u64 = r27.u32 & 0x3FF;
	// stw r27,4096(r24)
	REX_STORE_U32(r24.u32 + 4096, r27.u32);
	// stw r28,4100(r24)
	REX_STORE_U32(r24.u32 + 4100, r28.u32);
	// fadds f10,f22,f10
	ctx.f10.f64 = double(float(f22.f64 + ctx.f10.f64));
	// lwz r28,16384(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 16384);
	// rlwinm r25,r28,2,0,29
	r25.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,16388(r20)
	r27.u64 = REX_LOAD_U32(r20.u32 + 16388);
	// lfs f23,16396(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 16396);
	f23.f64 = double(temp.f32);
	// lwz r26,16392(r20)
	r26.u64 = REX_LOAD_U32(r20.u32 + 16392);
	// lfs f21,16400(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 16400);
	f21.f64 = double(temp.f32);
	// subf r27,r27,r28
	r27.u64 = r28.u64 - r27.u64;
	// lfsx f30,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	f30.f64 = double(temp.f32);
	// subf r28,r26,r28
	r28.u64 = r28.u64 - r26.u64;
	// lfsx f24,r31,r19
	temp.u32 = REX_LOAD_U32(r31.u32 + r19.u32);
	f24.f64 = double(temp.f32);
	// rlwinm r27,r27,2,18,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x3FFC;
	// rlwinm r28,r28,2,18,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FFC;
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// lis r24,2
	r24.s64 = 131072;
	// addi r26,r26,-26208
	r26.s64 = r26.s64 + -26208;
	// lfsx f22,r27,r20
	temp.u32 = REX_LOAD_U32(r27.u32 + r20.u32);
	f22.f64 = double(temp.f32);
	// ori r27,r24,39348
	r27.u64 = r24.u64 | 39348;
	// lfsx f20,r28,r20
	temp.u32 = REX_LOAD_U32(r28.u32 + r20.u32);
	f20.f64 = double(temp.f32);
	// fmuls f23,f22,f23
	f23.f64 = double(float(f22.f64 * f23.f64));
	// fmuls f22,f20,f21
	f22.f64 = double(float(f20.f64 * f21.f64));
	// stfs f23,16404(r20)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r20.u32 + 16404, temp.u32);
	// stfs f22,16408(r20)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r20.u32 + 16408, temp.u32);
	// lis r28,2
	r28.s64 = 131072;
	// stfsx f10,r25,r20
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + r20.u32, temp.u32);
	// lis r23,2
	r23.s64 = 131072;
	// ori r22,r28,55800
	r22.u64 = r28.u64 | 55800;
	// lis r28,2
	r28.s64 = 131072;
	// ori r24,r23,47572
	r24.u64 = r23.u64 | 47572;
	// ori r18,r28,64020
	r18.u64 = r28.u64 | 64020;
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// addi r25,r25,-17952
	r25.s64 = r25.s64 + -17952;
	// lis r21,3
	r21.s64 = 196608;
	// lis r19,3
	r19.s64 = 196608;
	// addis r17,r31,3
	r17.s64 = r31.s64 + 196608;
	// addis r16,r31,3
	r16.s64 = r31.s64 + 196608;
	// addi r23,r23,-9728
	r23.s64 = r23.s64 + -9728;
	// ori r21,r21,2612
	r21.u64 = r21.u64 | 2612;
	// addi r17,r17,-1504
	r17.s64 = r17.s64 + -1504;
	// ori r19,r19,19028
	r19.u64 = r19.u64 | 19028;
	// addi r16,r16,19040
	r16.s64 = r16.s64 + 19040;
	// lwz r28,16384(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 16384);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r28,r28,20
	r28.u64 = r28.u32 & 0xFFF;
	// stw r28,16384(r20)
	REX_STORE_U32(r20.u32 + 16384, r28.u32);
	// lfs f23,16(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16);
	f23.f64 = double(temp.f32);
	// lwz r28,8(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lfsx f22,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	f22.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f21,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	f21.f64 = double(temp.f32);
	// lfs f10,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f10,f30
	ctx.f10.f64 = double(float(ctx.f10.f64 * f30.f64));
	// lfsx f20,r28,r26
	temp.u32 = REX_LOAD_U32(r28.u32 + r26.u32);
	f20.f64 = double(temp.f32);
	// stfs f30,0(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fmadds f10,f23,f20,f10
	ctx.f10.f64 = double(float(std::fma(f23.f64, f20.f64, ctx.f10.f64)));
	// stfs f10,20(r26)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r26.u32 + 20, temp.u32);
	// stfs f21,4(r26)
	temp.f32 = float(f21.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// lfsx f10,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f23,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	f23.f64 = double(temp.f32);
	// lwz r28,8196(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lfs f30,8204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8204);
	f30.f64 = double(temp.f32);
	// lwz r27,8192(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f21,8208(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8208);
	f21.f64 = double(temp.f32);
	// lfs f20,8212(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8212);
	f20.f64 = double(temp.f32);
	// lfsx f19,r28,r25
	temp.u32 = REX_LOAD_U32(r28.u32 + r25.u32);
	f19.f64 = double(temp.f32);
	// fmuls f20,f20,f19
	f20.f64 = double(float(f20.f64 * f19.f64));
	// fmadds f30,f30,f19,f10
	f30.f64 = double(float(std::fma(f30.f64, f19.f64, ctx.f10.f64)));
	// stfsx f30,r27,r25
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r27.u32 + r25.u32, temp.u32);
	// fmadds f10,f21,f10,f20
	ctx.f10.f64 = double(float(std::fma(f21.f64, ctx.f10.f64, f20.f64)));
	// stfs f10,8216(r25)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + 8216, temp.u32);
	// lwz r28,8192(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// addi r27,r28,1
	r27.s64 = r28.s64 + 1;
	// lwz r28,8196(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// clrlwi r28,r28,21
	r28.u64 = r28.u32 & 0x7FF;
	// stw r27,8192(r25)
	REX_STORE_U32(r25.u32 + 8192, r27.u32);
	// lis r26,3
	r26.s64 = 196608;
	// stw r28,8196(r25)
	REX_STORE_U32(r25.u32 + 8196, r28.u32);
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// ori r26,r26,19060
	r26.u64 = r26.u64 | 19060;
	// fadds f20,f25,f29
	f20.f64 = double(float(f25.f64 + f29.f64));
	// addi r25,r25,2624
	r25.s64 = r25.s64 + 2624;
	// addis r22,r31,1
	r22.s64 = r31.s64 + 65536;
	// addis r20,r31,2
	r20.s64 = r31.s64 + 131072;
	// addi r22,r22,18272
	r22.s64 = r22.s64 + 18272;
	// addi r20,r20,-26576
	r20.s64 = r20.s64 + -26576;
	// lwz r28,8196(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 8196);
	// lfs f10,8204(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8204);
	ctx.f10.f64 = double(temp.f32);
	// lwz r27,8192(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 8192);
	// lfsx f21,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	f21.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f30,8208(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 8208);
	f30.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f19,r28,r23
	temp.u32 = REX_LOAD_U32(r28.u32 + r23.u32);
	f19.f64 = double(temp.f32);
	// lis r28,3
	r28.s64 = 196608;
	// fmadds f10,f10,f19,f23
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f19.f64, f23.f64)));
	// stfsx f10,r27,r23
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r27.u32 + r23.u32, temp.u32);
	// ori r24,r28,19032
	r24.u64 = r28.u64 | 19032;
	// lwz r28,8196(r23)
	r28.u64 = REX_LOAD_U32(r23.u32 + 8196);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r28,r28,21
	r28.u64 = r28.u32 & 0x7FF;
	// fmadds f10,f30,f10,f19
	ctx.f10.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, f19.f64)));
	// stfs f10,8212(r23)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r23.u32 + 8212, temp.u32);
	// lwz r27,8192(r23)
	r27.u64 = REX_LOAD_U32(r23.u32 + 8192);
	// stw r28,8196(r23)
	REX_STORE_U32(r23.u32 + 8196, r28.u32);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// stw r27,8192(r23)
	REX_STORE_U32(r23.u32 + 8192, r27.u32);
	// lwz r28,4100(r17)
	r28.u64 = REX_LOAD_U32(r17.u32 + 4100);
	// lfsx f30,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f30.f64 = double(temp.f32);
	// fadds f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 + ctx.f9.f64));
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,4108(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 4108);
	ctx.f10.f64 = double(temp.f32);
	// lwz r27,4096(r17)
	r27.u64 = REX_LOAD_U32(r17.u32 + 4096);
	// lfs f23,4112(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 4112);
	f23.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r28,r17
	temp.u32 = REX_LOAD_U32(r28.u32 + r17.u32);
	f30.f64 = double(temp.f32);
	// fmadds f10,f10,f30,f21
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f30.f64, f21.f64)));
	// fadds f10,f10,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// stfsx f10,r27,r17
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r27.u32 + r17.u32, temp.u32);
	// fmadds f10,f23,f10,f30
	ctx.f10.f64 = double(float(std::fma(f23.f64, ctx.f10.f64, f30.f64)));
	// stfs f10,4116(r17)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r17.u32 + 4116, temp.u32);
	// lwz r27,4096(r17)
	r27.u64 = REX_LOAD_U32(r17.u32 + 4096);
	// lwz r28,4100(r17)
	r28.u64 = REX_LOAD_U32(r17.u32 + 4100);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r28,r28,22
	r28.u64 = r28.u32 & 0x3FF;
	// clrlwi r27,r27,22
	r27.u64 = r27.u32 & 0x3FF;
	// stw r28,4100(r17)
	REX_STORE_U32(r17.u32 + 4100, r28.u32);
	// stw r27,4096(r17)
	REX_STORE_U32(r17.u32 + 4096, r27.u32);
	// lfs f30,12(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 12);
	f30.f64 = double(temp.f32);
	// lwz r28,8(r16)
	r28.u64 = REX_LOAD_U32(r16.u32 + 8);
	// lfsx f10,r31,r19
	temp.u32 = REX_LOAD_U32(r31.u32 + r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f30,f30,f10
	f30.f64 = double(float(f30.f64 * ctx.f10.f64));
	// lfsx f21,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	f21.f64 = double(temp.f32);
	// fadds f18,f21,f22
	f18.f64 = double(float(f21.f64 + f22.f64));
	// lfs f23,16(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 16);
	f23.f64 = double(temp.f32);
	// fsubs f22,f21,f22
	f22.f64 = double(float(f21.f64 - f22.f64));
	// lfsx f21,r28,r16
	temp.u32 = REX_LOAD_U32(r28.u32 + r16.u32);
	f21.f64 = double(temp.f32);
	// lfs f19,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	f19.f64 = double(temp.f32);
	// stfs f10,0(r16)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r16.u32 + 0, temp.u32);
	// stfs f19,4(r16)
	temp.f32 = float(f19.f64);
	REX_STORE_U32(r16.u32 + 4, temp.u32);
	// fmadds f10,f23,f21,f30
	ctx.f10.f64 = double(float(std::fma(f23.f64, f21.f64, f30.f64)));
	// stfs f10,20(r16)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r16.u32 + 20, temp.u32);
	// lwz r27,16388(r25)
	r27.u64 = REX_LOAD_U32(r25.u32 + 16388);
	// lfsx f30,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	f30.f64 = double(temp.f32);
	// lwz r26,16392(r25)
	r26.u64 = REX_LOAD_U32(r25.u32 + 16392);
	// lfs f10,16400(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 16400);
	ctx.f10.f64 = double(temp.f32);
	// lwz r28,16384(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// subf r27,r27,r28
	r27.u64 = r28.u64 - r27.u64;
	// subf r26,r26,r28
	r26.u64 = r28.u64 - r26.u64;
	// lfs f23,16396(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 16396);
	f23.f64 = double(temp.f32);
	// fadds f30,f30,f7
	f30.f64 = double(float(f30.f64 + ctx.f7.f64));
	// rlwinm r27,r27,2,18,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x3FFC;
	// rlwinm r26,r26,2,18,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FFC;
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f21,r27,r25
	temp.u32 = REX_LOAD_U32(r27.u32 + r25.u32);
	f21.f64 = double(temp.f32);
	// lfsx f19,r26,r25
	temp.u32 = REX_LOAD_U32(r26.u32 + r25.u32);
	f19.f64 = double(temp.f32);
	// fmuls f23,f21,f23
	f23.f64 = double(float(f21.f64 * f23.f64));
	// fmuls f10,f19,f10
	ctx.f10.f64 = double(float(f19.f64 * ctx.f10.f64));
	// stfs f10,16408(r25)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r25.u32 + 16408, temp.u32);
	// stfs f23,16404(r25)
	temp.f32 = float(f23.f64);
	REX_STORE_U32(r25.u32 + 16404, temp.u32);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// addis r19,r31,3
	r19.s64 = r31.s64 + 196608;
	// stfsx f9,r28,r25
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r28.u32 + r25.u32, temp.u32);
	// fsubs f9,f25,f29
	ctx.f9.f64 = double(float(f25.f64 - f29.f64));
	// fadds f29,f24,f6
	f29.f64 = double(float(f24.f64 + ctx.f6.f64));
	// addi r26,r26,-5888
	r26.s64 = r26.s64 + -5888;
	// addi r19,r19,-26176
	r19.s64 = r19.s64 + -26176;
	// lwz r28,16384(r25)
	r28.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// clrlwi r28,r28,20
	r28.u64 = r28.u32 & 0xFFF;
	// stw r28,16384(r25)
	REX_STORE_U32(r25.u32 + 16384, r28.u32);
	// lwz r28,2052(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 2052);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f24,r28,r22
	temp.u32 = REX_LOAD_U32(r28.u32 + r22.u32);
	f24.f64 = double(temp.f32);
	// lwz r27,2048(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 2048);
	// lfs f10,2060(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 2060);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f10,f10,f24,f18
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, f24.f64, f18.f64)));
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f25,2064(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 2064);
	f25.f64 = double(temp.f32);
	// fadds f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfsx f8,r27,r22
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r27.u32 + r22.u32, temp.u32);
	// fmadds f10,f25,f8,f24
	ctx.f10.f64 = double(float(std::fma(f25.f64, ctx.f8.f64, f24.f64)));
	// stfs f10,2068(r22)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r22.u32 + 2068, temp.u32);
	// lwz r28,2052(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 2052);
	// lwz r27,2048(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 2048);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r28,r28,23
	r28.u64 = r28.u32 & 0x1FF;
	// clrlwi r27,r27,23
	r27.u64 = r27.u32 & 0x1FF;
	// stw r28,2052(r22)
	REX_STORE_U32(r22.u32 + 2052, r28.u32);
	// stw r27,2048(r22)
	REX_STORE_U32(r22.u32 + 2048, r27.u32);
	// lfs f8,2060(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 2060);
	ctx.f8.f64 = double(temp.f32);
	// lwz r28,2052(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 2052);
	// lfs f10,2064(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 2064);
	ctx.f10.f64 = double(temp.f32);
	// lwz r27,2048(r20)
	r27.u64 = REX_LOAD_U32(r20.u32 + 2048);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r28,r20
	temp.u32 = REX_LOAD_U32(r28.u32 + r20.u32);
	f25.f64 = double(temp.f32);
	// fmadds f8,f8,f25,f22
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, f25.f64, f22.f64)));
	// fadds f4,f8,f4
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// stfsx f4,r27,r20
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(r27.u32 + r20.u32, temp.u32);
	// fmadds f10,f10,f4,f25
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f4.f64, f25.f64)));
	// stfs f10,2068(r20)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r20.u32 + 2068, temp.u32);
	// lwz r28,2052(r20)
	r28.u64 = REX_LOAD_U32(r20.u32 + 2052);
	// lwz r27,2048(r20)
	r27.u64 = REX_LOAD_U32(r20.u32 + 2048);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r28,r28,23
	r28.u64 = r28.u32 & 0x1FF;
	// clrlwi r27,r27,23
	r27.u64 = r27.u32 & 0x1FF;
	// stw r28,2052(r20)
	REX_STORE_U32(r20.u32 + 2052, r28.u32);
	// stw r27,2048(r20)
	REX_STORE_U32(r20.u32 + 2048, r27.u32);
	// lwz r28,8196(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// lfs f8,8204(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8204);
	ctx.f8.f64 = double(temp.f32);
	// lwz r27,8192(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// lfs f4,8208(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r28,r26
	temp.u32 = REX_LOAD_U32(r28.u32 + r26.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f8,f8,f10,f20
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, ctx.f10.f64, f20.f64)));
	// fadds f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfsx f12,r27,r26
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r27.u32 + r26.u32, temp.u32);
	// fmadds f10,f4,f12,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f4.f64, ctx.f12.f64, ctx.f10.f64)));
	// stfs f10,8212(r26)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r26.u32 + 8212, temp.u32);
	// lwz r28,8196(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// lwz r27,8192(r26)
	r27.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r28,r28,21
	r28.u64 = r28.u32 & 0x7FF;
	// clrlwi r27,r27,21
	r27.u64 = r27.u32 & 0x7FF;
	// stw r28,8196(r26)
	REX_STORE_U32(r26.u32 + 8196, r28.u32);
	// stw r27,8192(r26)
	REX_STORE_U32(r26.u32 + 8192, r27.u32);
	// lfs f8,8204(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8204);
	ctx.f8.f64 = double(temp.f32);
	// lwz r28,8196(r19)
	r28.u64 = REX_LOAD_U32(r19.u32 + 8196);
	// lwz r27,8192(r19)
	r27.u64 = REX_LOAD_U32(r19.u32 + 8192);
	// rlwinm r28,r28,2,0,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,8208(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 8208);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,100(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r22,84(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,88(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r24,176(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lfsx f12,r28,r19
	temp.u32 = REX_LOAD_U32(r28.u32 + r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// lwz r25,184(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// fmadds f10,f8,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// lwz r26,192(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r20,92(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfsx f9,r27,r19
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r27.u32 + r19.u32, temp.u32);
	// fmadds f8,f4,f9,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f9.f64, ctx.f12.f64)));
	// stfs f8,8212(r19)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r19.u32 + 8212, temp.u32);
	// lwz r28,8196(r19)
	r28.u64 = REX_LOAD_U32(r19.u32 + 8196);
	// lwz r27,8192(r19)
	r27.u64 = REX_LOAD_U32(r19.u32 + 8192);
	// addi r17,r28,1
	r17.s64 = r28.s64 + 1;
	// lwz r28,200(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// addi r16,r27,1
	r16.s64 = r27.s64 + 1;
	// lwz r27,628(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 628);
	// clrlwi r17,r17,21
	r17.u64 = r17.u32 & 0x7FF;
	// clrlwi r16,r16,21
	r16.u64 = r16.u32 & 0x7FF;
	// stw r17,8196(r19)
	REX_STORE_U32(r19.u32 + 8196, r17.u32);
	// stw r16,8192(r19)
	REX_STORE_U32(r19.u32 + 8192, r16.u32);
loc_8245AFE4:
	// fadds f12,f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f3.f64 + f30.f64));
	// lwz r19,2048(r20)
	r19.u64 = REX_LOAD_U32(r20.u32 + 2048);
	// fadds f10,f2,f29
	ctx.f10.f64 = double(float(ctx.f2.f64 + f29.f64));
	// lwz r17,2068(r20)
	r17.u64 = REX_LOAD_U32(r20.u32 + 2068);
	// std r10,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r10.u64);
	// lfs f0,2080(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 2080);
	ctx.f0.f64 = double(temp.f32);
	// subf r17,r17,r19
	r17.u64 = r19.u64 - r17.u64;
	// lwz r16,2064(r20)
	r16.u64 = REX_LOAD_U32(r20.u32 + 2064);
	// lwz r15,208(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// fsubs f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// addi r14,r17,-1
	r14.s64 = r17.s64 + -1;
	// lwz r18,620(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 620);
	// rlwinm r17,r17,2,21,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0x7FC;
	// std r11,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.r11.u64);
	// rlwinm r14,r14,2,21,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0x7FC;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// subf r16,r16,r19
	r16.u64 = r19.u64 - r16.u64;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// lfs f4,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f12,f12,f5
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f5.f64));
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// lfsx f3,r17,r20
	temp.u32 = REX_LOAD_U32(r17.u32 + r20.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f25,r14,r20
	temp.u32 = REX_LOAD_U32(r14.u32 + r20.u32);
	f25.f64 = double(temp.f32);
	// fmuls f24,f3,f0
	f24.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f25,f25,f0
	f25.f64 = double(float(f25.f64 * ctx.f0.f64));
	// rlwinm r16,r16,2,21,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x7FC;
	// rlwinm r15,r10,2,21,29
	r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7FC;
	// lfs f9,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f8,4(r18)
	ea = 4 + r18.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	r18.u32 = ea;
	// fmuls f4,f4,f5
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f5.f64));
	// lfs f3,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// ld r11,280(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// fmuls f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// lfsx f23,r16,r20
	temp.u32 = REX_LOAD_U32(r16.u32 + r20.u32);
	f23.f64 = double(temp.f32);
	// lfsx f22,r15,r20
	temp.u32 = REX_LOAD_U32(r15.u32 + r20.u32);
	f22.f64 = double(temp.f32);
	// stw r18,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, r18.u32);
	// fadds f21,f10,f12
	f21.f64 = double(float(ctx.f10.f64 + ctx.f12.f64));
	// fmadds f24,f23,f2,f24
	f24.f64 = double(float(std::fma(f23.f64, ctx.f2.f64, f24.f64)));
	// ld r10,296(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// fmadds f2,f22,f2,f25
	ctx.f2.f64 = double(float(std::fma(f22.f64, ctx.f2.f64, f25.f64)));
	// stfs f2,2088(r20)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r20.u32 + 2088, temp.u32);
	// stfs f24,2084(r20)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r20.u32 + 2084, temp.u32);
	// fmuls f2,f21,f31
	ctx.f2.f64 = double(float(f21.f64 * f31.f64));
	// ble cr6,0x8245b0a4
	if (!ctx.cr6.gt) goto loc_8245B0A4;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - f26.f64));
	// b 0x8245b0c8
	goto loc_8245B0C8;
loc_8245B0A4:
	// lwz r18,2072(r20)
	r18.u64 = REX_LOAD_U32(r20.u32 + 2072);
	// lwz r17,2064(r20)
	r17.u64 = REX_LOAD_U32(r20.u32 + 2064);
	// cmplw cr6,r18,r17
	ctx.cr6.compare<uint32_t>(r18.u32, r17.u32, ctx.xer);
	// beq cr6,0x8245b0bc
	if (ctx.cr6.eq) goto loc_8245B0BC;
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64;
	// b 0x8245b0c0
	goto loc_8245B0C0;
loc_8245B0BC:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
loc_8245B0C0:
	// stw r17,2068(r20)
	REX_STORE_U32(r20.u32 + 2068, r17.u32);
	// stw r18,2064(r20)
	REX_STORE_U32(r20.u32 + 2064, r18.u32);
loc_8245B0C8:
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,2080(r20)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r20.u32 + 2080, temp.u32);
	// lwz r18,224(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r17,232(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r16,240(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r15,248(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// stfsx f7,r19,r20
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r19.u32 + r20.u32, temp.u32);
	// lwz r19,2048(r20)
	r19.u64 = REX_LOAD_U32(r20.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// rlwinm r14,r19,2,0,29
	r14.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,2048(r20)
	REX_STORE_U32(r20.u32 + 2048, r19.u32);
	// stfsx f6,r14,r20
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r14.u32 + r20.u32, temp.u32);
	// lwz r19,2048(r20)
	r19.u64 = REX_LOAD_U32(r20.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r19,2048(r20)
	REX_STORE_U32(r20.u32 + 2048, r19.u32);
	// lwz r19,2052(r26)
	r19.u64 = REX_LOAD_U32(r26.u32 + 2052);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,2048(r26)
	r14.u64 = REX_LOAD_U32(r26.u32 + 2048);
	// lfsx f25,r19,r26
	temp.u32 = REX_LOAD_U32(r19.u32 + r26.u32);
	f25.f64 = double(temp.f32);
	// lfs f0,2060(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r14,r14,2,0,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f7,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,2064(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f0,f25,f0,f12
	ctx.f0.f64 = double(float(std::fma(f25.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsx f0,r14,r26
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r14.u32 + r26.u32, temp.u32);
	// fmadds f12,f0,f6,f25
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f25.f64)));
	// stfs f12,2068(r26)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r26.u32 + 2068, temp.u32);
	// lwz r19,2052(r26)
	r19.u64 = REX_LOAD_U32(r26.u32 + 2052);
	// lwz r18,2048(r26)
	r18.u64 = REX_LOAD_U32(r26.u32 + 2048);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r19,2052(r26)
	REX_STORE_U32(r26.u32 + 2052, r19.u32);
	// stw r18,2048(r26)
	REX_STORE_U32(r26.u32 + 2048, r18.u32);
	// lwz r19,2052(r25)
	r19.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// lfs f6,2060(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2060);
	ctx.f6.f64 = double(temp.f32);
	// lwz r18,2048(r25)
	r18.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// lfs f0,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,2064(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2064);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r19,r25
	temp.u32 = REX_LOAD_U32(r19.u32 + r25.u32);
	f25.f64 = double(temp.f32);
	// fmadds f7,f25,f6,f7
	ctx.f7.f64 = double(float(std::fma(f25.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfsx f7,r18,r25
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r18.u32 + r25.u32, temp.u32);
	// lwz r19,2052(r25)
	r19.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// fmadds f6,f12,f7,f25
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, f25.f64)));
	// lwz r18,2048(r25)
	r18.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// stfs f6,2068(r25)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r25.u32 + 2068, temp.u32);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r19,2052(r25)
	REX_STORE_U32(r25.u32 + 2052, r19.u32);
	// stw r18,2048(r25)
	REX_STORE_U32(r25.u32 + 2048, r18.u32);
	// lfs f12,2060(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2060);
	ctx.f12.f64 = double(temp.f32);
	// lwz r19,2052(r24)
	r19.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// lwz r18,2048(r24)
	r18.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r19,r24
	temp.u32 = REX_LOAD_U32(r19.u32 + r24.u32);
	f25.f64 = double(temp.f32);
	// lfs f7,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f12,f12,f25,f10
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f25.f64, ctx.f10.f64)));
	// lfs f6,2064(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// stfsx f12,r18,r24
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r18.u32 + r24.u32, temp.u32);
	// lwz r19,2052(r24)
	r19.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// lwz r18,2048(r24)
	r18.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// fmadds f10,f6,f12,f25
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f12.f64, f25.f64)));
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stfs f10,2068(r24)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r24.u32 + 2068, temp.u32);
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r18,2048(r24)
	REX_STORE_U32(r24.u32 + 2048, r18.u32);
	// stw r19,2052(r24)
	REX_STORE_U32(r24.u32 + 2052, r19.u32);
	// lfs f6,2064(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// lwz r19,2052(r23)
	r19.u64 = REX_LOAD_U32(r23.u32 + 2052);
	// lfs f12,0(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,2048(r23)
	r18.u64 = REX_LOAD_U32(r23.u32 + 2048);
	// lfsx f25,r19,r23
	temp.u32 = REX_LOAD_U32(r19.u32 + r23.u32);
	f25.f64 = double(temp.f32);
	// lfs f10,2060(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 2060);
	ctx.f10.f64 = double(temp.f32);
	// fadds f24,f8,f9
	f24.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f7,f10,f25,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f10.f64, f25.f64, ctx.f7.f64)));
	// fsubs f10,f1,f13
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lwz r17,256(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r16,264(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// fmuls f4,f4,f13
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f3,f3,f13
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// lwz r19,80(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfsx f7,r18,r23
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r18.u32 + r23.u32, temp.u32);
	// addi r19,r19,8
	r19.s64 = r19.s64 + 8;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// fmadds f7,f7,f6,f25
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, ctx.f6.f64, f25.f64)));
	// stfs f7,2068(r23)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r23.u32 + 2068, temp.u32);
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f8.f64));
	// fmuls f8,f24,f10
	ctx.f8.f64 = double(float(f24.f64 * ctx.f10.f64));
	// fmadds f7,f0,f13,f6
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f6.f64)));
	// stfs f7,0(r27)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// fmadds f6,f12,f13,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f12.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfsu f6,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// lwz r18,2048(r23)
	r18.u64 = REX_LOAD_U32(r23.u32 + 2048);
	// addi r15,r18,1
	r15.s64 = r18.s64 + 1;
	// lwz r18,2052(r23)
	r18.u64 = REX_LOAD_U32(r23.u32 + 2052);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r15,r15,23
	r15.u64 = r15.u32 & 0x1FF;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r15,2048(r23)
	REX_STORE_U32(r23.u32 + 2048, r15.u32);
	// stw r18,2052(r23)
	REX_STORE_U32(r23.u32 + 2052, r18.u32);
	// lwz r18,2052(r22)
	r18.u64 = REX_LOAD_U32(r22.u32 + 2052);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,2048(r22)
	r15.u64 = REX_LOAD_U32(r22.u32 + 2048);
	// lfs f12,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f9,r18,r22
	temp.u32 = REX_LOAD_U32(r18.u32 + r22.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r17,r15,2,0,29
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2060(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 2060);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,2064(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 2064);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f7,f0,f9,f2
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f2.f64)));
	// stfsx f7,r17,r22
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(r17.u32 + r22.u32, temp.u32);
	// fmadds f6,f10,f7,f9
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f7.f64, ctx.f9.f64)));
	// stfs f6,2068(r22)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r22.u32 + 2068, temp.u32);
	// lwz r17,2048(r22)
	r17.u64 = REX_LOAD_U32(r22.u32 + 2048);
	// lwz r18,2052(r22)
	r18.u64 = REX_LOAD_U32(r22.u32 + 2052);
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r17,r17,23
	r17.u64 = r17.u32 & 0x1FF;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r17,2048(r22)
	REX_STORE_U32(r22.u32 + 2048, r17.u32);
	// stw r18,2052(r22)
	REX_STORE_U32(r22.u32 + 2052, r18.u32);
	// lwz r18,2052(r21)
	r18.u64 = REX_LOAD_U32(r21.u32 + 2052);
	// lfs f2,2060(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 2060);
	ctx.f2.f64 = double(temp.f32);
	// lwz r17,2048(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + 2048);
	// lfs f0,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,2064(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 2064);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 + f27.f64));
	// lfsx f7,r18,r21
	temp.u32 = REX_LOAD_U32(r18.u32 + r21.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f6,f7,f2,f12
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f2.f64, ctx.f12.f64)));
	// stfsx f6,r17,r21
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r17.u32 + r21.u32, temp.u32);
	// fmadds f2,f8,f31,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, ctx.f9.f64)));
	// stfsu f2,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// stfsu f11,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// stfsu f4,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// stfsu f3,4(r27)
	ea = 4 + r27.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	r27.u32 = ea;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// fmadds f0,f10,f6,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f10.f64, ctx.f6.f64, ctx.f7.f64)));
	// stfs f0,2068(r21)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r21.u32 + 2068, temp.u32);
	// stw r27,628(r1)
	REX_STORE_U32(ctx.r1.u32 + 628, r27.u32);
	// lwz r18,2052(r21)
	r18.u64 = REX_LOAD_U32(r21.u32 + 2052);
	// lwz r17,2048(r21)
	r17.u64 = REX_LOAD_U32(r21.u32 + 2048);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// clrlwi r17,r17,23
	r17.u64 = r17.u32 & 0x1FF;
	// stw r18,2052(r21)
	REX_STORE_U32(r21.u32 + 2052, r18.u32);
	// stw r17,2048(r21)
	REX_STORE_U32(r21.u32 + 2048, r17.u32);
	// bdnz 0x8245a0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245A0E8;
loc_8245B354:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f5c
	ctx.lr = 0x8245B360;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824D1EE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26880
	ctx.r9.s64 = ctx.r11.s64 + -26880;
	// addi r11,r10,-22752
	ctx.r11.s64 = ctx.r10.s64 + -22752;
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

DEFINE_REX_FUNC(sub_824D20A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r10,r10,-21848
	ctx.r10.s64 = ctx.r10.s64 + -21848;
	// lwz r11,-28756(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -28756);
	// stw r11,172(r10)
	REX_STORE_U32(ctx.r10.u32 + 172, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2378) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20220
	ctx.r9.s64 = ctx.r10.s64 + 20220;
	// lis r8,-32179
	ctx.r8.s64 = -2108882944;
	// stw r11,20220(r10)
	REX_STORE_U32(ctx.r10.u32 + 20220, ctx.r11.u32);
	// addi r3,r8,14272
	ctx.r3.s64 = ctx.r8.s64 + 14272;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x822d5848
	sub_822D5848(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D29F0) {
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
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r3,r11,56
	ctx.r3.s64 = ctx.r11.s64 + 56;
	// bl 0x821f2e90
	ctx.lr = 0x824D2A0C;
	sub_821F2E90(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14552
	ctx.r3.s64 = ctx.r11.s64 + 14552;
	// bl 0x822d5848
	ctx.lr = 0x824D2A18;
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

DEFINE_REX_FUNC(sub_824D2D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-17992
	ctx.r11.s64 = ctx.r11.s64 + -17992;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r9,r9,11088
	ctx.r9.s64 = ctx.r9.s64 + 11088;
	// lfs f0,16288(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16288);
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

DEFINE_REX_FUNC(sub_824D3B78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25860
	ctx.r3.s64 = ctx.r11.s64 + 25860;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26492
	ctx.r3.s64 = ctx.r11.s64 + 26492;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3DB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29620
	ctx.r3.s64 = ctx.r11.s64 + 29620;
	// b 0x8227ac70
	sub_8227AC70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3F10) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000212
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4060) {
	REX_FUNC_PROLOGUE();
	// .long 0x20004b6
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D41C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100ff
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4340) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010110
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D44C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101c3
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4640) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101dc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D47C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001ea
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4940) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010141
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4AC0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100cd
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

