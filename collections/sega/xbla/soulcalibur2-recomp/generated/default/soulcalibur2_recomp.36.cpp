#include "soulcalibur2_funcs.36.h"

DEFINE_REX_FUNC(sub_820E1B28) {
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
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f0,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E72C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x820E72D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820e731c
	if (ctx.cr6.eq) goto loc_820E731C;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e731c
	if (ctx.cr6.eq) goto loc_820E731C;
	// mulli r31,r6,144
	r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(144));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x8229e988
	ctx.lr = 0x820E7300;
	sub_8229E988(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// bl 0x8229e9b0
	ctx.lr = 0x820E7314;
	sub_8229E9B0(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x820e7324
	goto loc_820E7324;
loc_820E731C:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_820E7324:
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820EAEE8) {
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
	ctx.lr = 0x820EAEF0;
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
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// li r28,0
	r28.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r28,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, r28.u32);
	// lbz r10,211(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 211);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820eaf24
	if (ctx.cr0.eq) goto loc_820EAF24;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r11.u32);
loc_820EAF24:
	// lwz r11,168(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 168);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,10140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 10140);
	// lfs f31,10532(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10532);
	f31.f64 = double(temp.f32);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lfs f30,10540(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10540);
	f30.f64 = double(temp.f32);
	// rlwinm r10,r10,14,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xFFFFC000;
	// lfs f29,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f29.f64 = double(temp.f32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,20348
	r30.s64 = ctx.r11.s64 + 20348;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lfs f0,228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// bne 0x820eaf64
	if (!ctx.cr0.eq) goto loc_820EAF64;
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
loc_820EAF64:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// stfs f31,76(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stfs f30,84(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// lfs f0,16200(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// bl 0x820e0088
	ctx.lr = 0x820EAF84;
	sub_820E0088(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f31.f64)));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2384(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,16204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820eafb4
	if (!ctx.cr6.lt) goto loc_820EAFB4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_820EAFB4:
	// stfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f1,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x820EAFC0;
	sub_820E0028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, f30.f64)));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// lfs f0,2356(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// bl 0x821fed88
	ctx.lr = 0x820EAFDC;
	sub_821FED88(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// fcmpu cr6,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bge cr6,0x820eaff0
	if (!ctx.cr6.lt) goto loc_820EAFF0;
	// stw r28,172(r31)
	REX_STORE_U32(r31.u32 + 172, r28.u32);
	// b 0x820eaff4
	goto loc_820EAFF4;
loc_820EAFF0:
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
loc_820EAFF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,136(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,172(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,2012(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2012);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f1,140(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// bne cr6,0x820eb034
	if (!ctx.cr6.eq) goto loc_820EB034;
	// bl 0x820e0088
	ctx.lr = 0x820EB018;
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
	ctx.lr = 0x820EB028;
	sub_820E0028(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x820eb058
	goto loc_820EB058;
loc_820EB034:
	// bl 0x820e0088
	ctx.lr = 0x820EB038;
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
	ctx.lr = 0x820EB04C;
	sub_820E0028(ctx, base);
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_820EB058:
	// lfs f12,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,76(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f10,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f10.f64 = double(temp.f32);
	// fadds f11,f31,f11
	ctx.f11.f64 = double(float(f31.f64 + ctx.f11.f64));
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// addi r3,r11,-28232
	ctx.r3.s64 = ctx.r11.s64 + -28232;
	// stfs f11,76(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// bl 0x82202540
	ctx.lr = 0x820EB098;
	sub_82202540(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f3,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f3.f64 = double(temp.f32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
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
	ctx.lr = 0x820EB0B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f3,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16604(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16604);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16600(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16600);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16596(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16596);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// stfs f12,148(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// stfs f11,144(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f0,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lfs f0,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,20(r31)
	REX_STORE_U32(r31.u32 + 20, r29.u32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820FC8B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820FC8C0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820fc970
	if (ctx.cr6.lt) goto loc_820FC970;
	// beq cr6,0x820fc93c
	if (ctx.cr6.eq) goto loc_820FC93C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fc908
	if (ctx.cr6.lt) goto loc_820FC908;
	// bne cr6,0x820fc9c4
	if (!ctx.cr6.eq) goto loc_820FC9C4;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8db8
	ctx.lr = 0x820FC8F8;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fc9c4
	if (!ctx.cr0.eq) goto loc_820FC9C4;
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
	// b 0x820fc9c4
	goto loc_820FC9C4;
loc_820FC908:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FC91C;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820fc9a4
	if (ctx.cr0.eq) goto loc_820FC9A4;
	// bl 0x820f8d58
	ctx.lr = 0x820FC934;
	sub_820F8D58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820fc9c0
	goto loc_820FC9C0;
loc_820FC93C:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FC950;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,4160
	ctx.r5.s64 = 4160;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq 0x820fc9a4
	if (ctx.cr0.eq) goto loc_820FC9A4;
	// bl 0x820f8d58
	ctx.lr = 0x820FC968;
	sub_820F8D58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x820fc9c0
	goto loc_820FC9C0;
loc_820FC970:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FC984;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fc9ac
	if (!ctx.cr0.eq) goto loc_820FC9AC;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fc9ac
	if (ctx.cr0.eq) goto loc_820FC9AC;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_820FC9A4:
	// bl 0x820f8d58
	ctx.lr = 0x820FC9A8;
	sub_820F8D58(ctx, base);
	// b 0x820fc9c4
	goto loc_820FC9C4;
loc_820FC9AC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FC9BC;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FC9C0:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FC9C4:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,176(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fca04
	if (!ctx.cr0.eq) goto loc_820FCA04;
	// lbz r11,177(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 177);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fca04
	if (!ctx.cr0.eq) goto loc_820FCA04;
	// lbz r11,178(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 178);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fca04
	if (!ctx.cr0.eq) goto loc_820FCA04;
	// lbz r11,179(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fca04
	if (!ctx.cr0.eq) goto loc_820FCA04;
	// lbz r11,180(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 180);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fca24
	if (ctx.cr0.eq) goto loc_820FCA24;
loc_820FCA04:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lhz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 588);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820fca24
	if (ctx.cr6.eq) goto loc_820FCA24;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FCA20;
	sub_820F8D58(ctx, base);
	// stw r29,32(r31)
	REX_STORE_U32(r31.u32 + 32, r29.u32);
loc_820FCA24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82102738) {
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
	// lwz r3,220(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82102764
	if (ctx.cr6.eq) goto loc_82102764;
	// bl 0x82108bc8
	ctx.lr = 0x82102764;
	sub_82108BC8(ctx, base);
loc_82102764:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r6,r11,22576
	ctx.r6.s64 = ctx.r11.s64 + 22576;
	// lwz r11,168(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 168);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r31.s32, ctx.xer);
	// beq cr6,0x8210277c
	if (ctx.cr6.eq) goto loc_8210277C;
	// bl 0x82100c80
	ctx.lr = 0x8210277C;
	sub_82100C80(ctx, base);
loc_8210277C:
	// stw r31,168(r6)
	REX_STORE_U32(ctx.r6.u32 + 168, r31.u32);
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

DEFINE_REX_FUNC(sub_82106CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82106CC8;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82106e24
	if (!ctx.cr6.eq) goto loc_82106E24;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,91
	ctx.r3.u64 = ctx.r3.u64 | 91;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82106CFC;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d55f8
	ctx.lr = 0x82106D08;
	sub_822D55F8(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,91
	ctx.r3.u64 = ctx.r3.u64 | 91;
	// bl 0x820e68b8
	ctx.lr = 0x82106D18;
	sub_820E68B8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f31,27544(r10)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 27544);
	// addi r30,r11,27512
	r30.s64 = ctx.r11.s64 + 27512;
	// lfd f2,27536(r9)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r9.u32 + 27536);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfd f30,27528(r6)
	f30.u64 = REX_LOAD_U64(ctx.r6.u32 + 27528);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x821eacb0
	ctx.lr = 0x82106D68;
	sub_821EACB0(ctx, base);
	// lwz r11,640(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 640);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82106dcc
	if (ctx.cr6.lt) goto loc_82106DCC;
	// beq cr6,0x82106dc0
	if (ctx.cr6.eq) goto loc_82106DC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82106db4
	if (ctx.cr6.lt) goto loc_82106DB4;
	// beq cr6,0x82106da8
	if (ctx.cr6.eq) goto loc_82106DA8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82106d9c
	if (ctx.cr6.lt) goto loc_82106D9C;
	// bne cr6,0x82106de8
	if (!ctx.cr6.eq) goto loc_82106DE8;
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,97
	ctx.r3.u64 = ctx.r3.u64 | 97;
	// b 0x82106dd4
	goto loc_82106DD4;
loc_82106D9C:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,96
	ctx.r3.u64 = ctx.r3.u64 | 96;
	// b 0x82106dd4
	goto loc_82106DD4;
loc_82106DA8:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,95
	ctx.r3.u64 = ctx.r3.u64 | 95;
	// b 0x82106dd4
	goto loc_82106DD4;
loc_82106DB4:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,94
	ctx.r3.u64 = ctx.r3.u64 | 94;
	// b 0x82106dd4
	goto loc_82106DD4;
loc_82106DC0:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,93
	ctx.r3.u64 = ctx.r3.u64 | 93;
	// b 0x82106dd4
	goto loc_82106DD4;
loc_82106DCC:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,92
	ctx.r3.u64 = ctx.r3.u64 | 92;
loc_82106DD4:
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82106DDC;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d55f8
	ctx.lr = 0x82106DE8;
	sub_822D55F8(ctx, base);
loc_82106DE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfd f2,27504(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27504);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82106E20;
	sub_821EACB0(ctx, base);
	// b 0x82107054
	goto loc_82107054;
loc_82106E24:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// addi r11,r11,22960
	ctx.r11.s64 = ctx.r11.s64 + 22960;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82106f98
	if (ctx.cr6.gt) goto loc_82106F98;
	// lis r12,-32256
	ctx.r12.s64 = -2113929216;
	// addi r12,r12,27144
	ctx.r12.s64 = ctx.r12.s64 + 27144;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32240
	ctx.r12.s64 = -2112880640;
	// nop 
	// addi r12,r12,28256
	ctx.r12.s64 = ctx.r12.s64 + 28256;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82106E60;
	case 1:
		goto loc_82106E6C;
	case 2:
		goto loc_82106E78;
	case 3:
		goto loc_82106E84;
	case 4:
		goto loc_82106E90;
	case 5:
		goto loc_82106E9C;
	case 6:
		goto loc_82106EA8;
	case 7:
		goto loc_82106EB4;
	case 8:
		goto loc_82106EC0;
	case 9:
		goto loc_82106ECC;
	case 10:
		goto loc_82106ED8;
	case 11:
		goto loc_82106EE4;
	case 12:
		goto loc_82106EF0;
	case 13:
		goto loc_82106EFC;
	case 14:
		goto loc_82106F08;
	case 15:
		goto loc_82106F14;
	case 16:
		goto loc_82106F20;
	case 17:
		goto loc_82106F2C;
	case 18:
		goto loc_82106F38;
	case 19:
		goto loc_82106F44;
	case 20:
		goto loc_82106F50;
	case 21:
		goto loc_82106F98;
	case 22:
		goto loc_82106F5C;
	case 23:
		goto loc_82106F98;
	case 24:
		goto loc_82106F98;
	case 25:
		goto loc_82106F68;
	case 26:
		goto loc_82106F74;
	case 27:
		goto loc_82106F98;
	case 28:
		goto loc_82106F98;
	case 29:
		goto loc_82106F98;
	case 30:
		goto loc_82106F98;
	case 31:
		goto loc_82106F80;
	case 32:
		goto loc_82106F8C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_82106E60:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,98
	ctx.r3.u64 = ctx.r3.u64 | 98;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106E6C:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,99
	ctx.r3.u64 = ctx.r3.u64 | 99;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106E78:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,100
	ctx.r3.u64 = ctx.r3.u64 | 100;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106E84:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,101
	ctx.r3.u64 = ctx.r3.u64 | 101;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106E90:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,102
	ctx.r3.u64 = ctx.r3.u64 | 102;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106E9C:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,103
	ctx.r3.u64 = ctx.r3.u64 | 103;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EA8:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,104
	ctx.r3.u64 = ctx.r3.u64 | 104;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EB4:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,105
	ctx.r3.u64 = ctx.r3.u64 | 105;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EC0:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,106
	ctx.r3.u64 = ctx.r3.u64 | 106;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106ECC:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,107
	ctx.r3.u64 = ctx.r3.u64 | 107;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106ED8:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,108
	ctx.r3.u64 = ctx.r3.u64 | 108;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EE4:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,109
	ctx.r3.u64 = ctx.r3.u64 | 109;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EF0:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,110
	ctx.r3.u64 = ctx.r3.u64 | 110;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106EFC:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,111
	ctx.r3.u64 = ctx.r3.u64 | 111;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F08:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,112
	ctx.r3.u64 = ctx.r3.u64 | 112;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F14:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,113
	ctx.r3.u64 = ctx.r3.u64 | 113;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F20:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,114
	ctx.r3.u64 = ctx.r3.u64 | 114;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F2C:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,115
	ctx.r3.u64 = ctx.r3.u64 | 115;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F38:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,116
	ctx.r3.u64 = ctx.r3.u64 | 116;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F44:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,117
	ctx.r3.u64 = ctx.r3.u64 | 117;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F50:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,118
	ctx.r3.u64 = ctx.r3.u64 | 118;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F5C:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,119
	ctx.r3.u64 = ctx.r3.u64 | 119;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F68:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,120
	ctx.r3.u64 = ctx.r3.u64 | 120;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F74:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,121
	ctx.r3.u64 = ctx.r3.u64 | 121;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F80:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// ori r3,r3,57
	ctx.r3.u64 = ctx.r3.u64 | 57;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F8C:
	// lis r3,512
	ctx.r3.s64 = 33554432;
	// ori r3,r3,58
	ctx.r3.u64 = ctx.r3.u64 | 58;
	// b 0x82106fa0
	goto loc_82106FA0;
loc_82106F98:
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82106FA0:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82106FB0;
	sub_820E68B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d55f8
	ctx.lr = 0x82106FBC;
	sub_822D55F8(ctx, base);
	// lis r3,1024
	ctx.r3.s64 = 67108864;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,90
	ctx.r3.u64 = ctx.r3.u64 | 90;
	// bl 0x820e68b8
	ctx.lr = 0x82106FCC;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lfd f30,27528(r11)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 27528);
	// addi r31,r6,27512
	r31.s64 = ctx.r6.s64 + 27512;
	// lfd f31,27544(r10)
	f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 27544);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lfd f2,27536(r9)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r9.u32 + 27536);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// stfd f31,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// bl 0x821eacb0
	ctx.lr = 0x8210701C;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 40, f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f30,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, f30.u64);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,16(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfd f2,27504(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 27504);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x82107054;
	sub_821EACB0(ctx, base);
loc_82107054:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821167D8) {
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
	// lwz r11,124(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82116930
	if (!ctx.cr6.lt) goto loc_82116930;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8211691c
	if (ctx.cr6.gt) goto loc_8211691C;
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821168d0
	if (ctx.cr6.eq) goto loc_821168D0;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lfs f30,31640(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31640);
	f30.f64 = double(temp.f32);
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82116854
	if (!ctx.cr6.eq) goto loc_82116854;
	// lbz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82116854
	if (!ctx.cr6.eq) goto loc_82116854;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,26876(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26876);
	f30.f64 = double(temp.f32);
	// b 0x82116868
	goto loc_82116868;
loc_82116854:
	// bl 0x82121c98
	ctx.lr = 0x82116858;
	sub_82121C98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82116868
	if (ctx.cr0.eq) goto loc_82116868;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f30,28076(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28076);
	f30.f64 = double(temp.f32);
loc_82116868:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,31632
	ctx.r6.s64 = ctx.r10.s64 + 31632;
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
	ctx.lr = 0x82116890;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821168d0
	if (ctx.cr0.eq) goto loc_821168D0;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r8,r31,80
	ctx.r8.s64 = r31.s64 + 80;
	// lfs f1,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// addi r10,r10,932
	ctx.r10.s64 = ctx.r10.s64 + 932;
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f5,f31
	ctx.f5.f64 = f31.f64;
	// li r4,10
	ctx.r4.s64 = 10;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82115fd8
	ctx.lr = 0x821168D0;
	sub_82115FD8(ctx, base);
loc_821168D0:
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f12,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// addi r7,r11,23
	ctx.r7.s64 = ctx.r11.s64 + 23;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16228);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f11,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r7,r31
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r11.u32);
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// fmadds f0,f11,f13,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f12.f64)));
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// b 0x82116930
	goto loc_82116930;
loc_8211691C:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// lfs f13,1840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
loc_82116930:
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

DEFINE_REX_FUNC(sub_8211B070) {
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
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,264(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211b0b4
	if (ctx.cr6.eq) goto loc_8211B0B4;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8211b1b8
	goto loc_8211B1B8;
loc_8211B0B4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,140(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lfs f0,2008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// lfs f13,244(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211b0f8
	if (!ctx.cr6.gt) goto loc_8211B0F8;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,292(r11)
	REX_STORE_U32(ctx.r11.u32 + 292, ctx.r9.u32);
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// sth r8,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r8.u16);
	// b 0x8211b1b8
	goto loc_8211B1B8;
loc_8211B0F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// lfs f30,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8211b130
	if (!ctx.cr6.lt) goto loc_8211B130;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f13,31220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31220);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// bl 0x82204ae0
	ctx.lr = 0x8211B12C;
	sub_82204AE0(ctx, base);
	// stfs f1,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_8211B130:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,256(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 256);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,96
	ctx.r5.s64 = ctx.r11.s64 + 96;
	// lfs f13,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f13,96(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// stfs f30,148(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,144(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// lfs f13,104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,152(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lfs f13,240(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,268(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x820e1cf8
	ctx.lr = 0x8211B180;
	sub_820E1CF8(ctx, base);
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// stfs f12,184(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 184, temp.u32);
	// stfs f31,188(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 188, temp.u32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 180, temp.u32);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 256);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// bl 0x820e0368
	ctx.lr = 0x8211B1B8;
	sub_820E0368(ctx, base);
loc_8211B1B8:
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

DEFINE_REX_FUNC(sub_82120958) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x82120960;
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r21,-32165
	r21.s64 = -2107965440;
	// li r23,1
	r23.s64 = 1;
	// mr r25,r23
	r25.u64 = r23.u64;
	// lwz r11,-32480(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -32480);
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// lbz r10,203(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 203);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82120994
	if (!ctx.cr0.eq) goto loc_82120994;
	// sth r23,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r23.u16);
	// b 0x82120c38
	goto loc_82120C38;
loc_82120994:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x821d6398
	ctx.lr = 0x821209A4;
	sub_821D6398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82120c38
	if (!ctx.cr0.eq) goto loc_82120C38;
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// lfs f13,148(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// li r24,0
	r24.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,144(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 144, temp.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82120bfc
	if (ctx.cr0.eq) goto loc_82120BFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lis r22,-32170
	r22.s64 = -2108293120;
	// lfs f30,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	f30.f64 = double(temp.f32);
	// lfs f31,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_821209E8:
	// lwz r11,160(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 160);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// add r29,r11,r26
	r29.u64 = ctx.r11.u64 + r26.u64;
	// lhz r11,142(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 142);
	// add r31,r10,r27
	r31.u64 = ctx.r10.u64 + r27.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r28,84(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x82120a34
	if (!ctx.cr6.eq) goto loc_82120A34;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bge cr6,0x82120a34
	if (!ctx.cr6.lt) goto loc_82120A34;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,76(r31)
	REX_STORE_U8(r31.u32 + 76, ctx.r11.u8);
	// lfs f0,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// b 0x82120bdc
	goto loc_82120BDC;
loc_82120A34:
	// stb r23,76(r31)
	REX_STORE_U8(r31.u32 + 76, r23.u8);
	// lfs f0,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 12, temp.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f13,64(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,64(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f13,92(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82120A9C;
	sub_820E1B70(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r5,r30,64
	ctx.r5.s64 = r30.s64 + 64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82120AD0;
	sub_820E1B70(ctx, base);
	// lfs f0,144(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// srawi r10,r28,31
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = r28.s32 >> 31;
	// stb r11,35(r31)
	REX_STORE_U8(r31.u32 + 35, ctx.r11.u8);
	// lha r9,116(r30)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r30.u32 + 116));
	// rlwinm r8,r9,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 140);
	// subfc r9,r9,r28
	ctx.xer.ca = r28.u32 >= ctx.r9.u32;
	ctx.r9.u64 = r28.u64 - ctx.r9.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// adde r10,r8,r10
	temp.u8 = (ctx.r8.u32 + ctx.r10.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mullw r25,r10,r25
	r25.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// beq cr6,0x82120b68
	if (ctx.cr6.eq) goto loc_82120B68;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82120b50
	if (!ctx.cr6.eq) goto loc_82120B50;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821e7948
	ctx.lr = 0x82120B24;
	sub_821E7948(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821e7948
	ctx.lr = 0x82120B30;
	sub_821E7948(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1ba8
	ctx.lr = 0x82120B40;
	sub_820E1BA8(ctx, base);
	// lfs f2,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x82120B4C;
	sub_820E0130(ctx, base);
	// stfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
loc_82120B50:
	// lha r11,102(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 102));
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82120b60
	if (ctx.cr6.gt) goto loc_82120B60;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82120B60:
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// b 0x82120bdc
	goto loc_82120BDC;
loc_82120B68:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,29428(r22)
	ctx.r3.u64 = REX_LOAD_U32(r22.u32 + 29428);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8211e968
	ctx.lr = 0x82120B78;
	sub_8211E968(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f1,168(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82120B88;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82120B98;
	sub_820E1B28(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e22e8
	ctx.lr = 0x82120BA0;
	sub_820E22E8(ctx, base);
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// stfs f1,172(r30)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 172, temp.u32);
	// bl 0x820e0088
	ctx.lr = 0x82120BAC;
	sub_820E0088(ctx, base);
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f1,176(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0088
	ctx.lr = 0x82120BC0;
	sub_820E0088(ctx, base);
	// lfs f0,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,176(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,176(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 176, temp.u32);
loc_82120BDC:
	// lhz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 8);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r27,r27,80
	r27.s64 = r27.s64 + 80;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821209e8
	if (ctx.cr6.lt) goto loc_821209E8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x82120c04
	if (ctx.cr6.eq) goto loc_82120C04;
loc_82120BFC:
	// lwz r11,-32480(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + -32480);
	// sth r23,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, r23.u16);
loc_82120C04:
	// lha r11,140(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 140));
	// lis r8,-32165
	ctx.r8.s64 = -2107965440;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r8,13128
	ctx.r11.s64 = ctx.r8.s64 + 13128;
	// addi r10,r10,29756
	ctx.r10.s64 = ctx.r10.s64 + 29756;
	// lwz r11,1856(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1856);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82120c38
	if (!ctx.cr6.gt) goto loc_82120C38;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lbz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x82120C38;
	sub_8218C0A8(ctx, base);
loc_82120C38:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8212C048) {
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
	ctx.lr = 0x8212C050;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8212c1d0
	if (!ctx.cr6.eq) goto loc_8212C1D0;
	// lhz r11,98(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 98);
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x8212c1d0
	if (ctx.cr6.eq) goto loc_8212C1D0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// mr r26,r27
	r26.u64 = r27.u64;
	// beq cr6,0x8212c094
	if (ctx.cr6.eq) goto loc_8212C094;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212c1d4
	goto loc_8212C1D4;
loc_8212C094:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8212a8e0
	ctx.lr = 0x8212C09C;
	sub_8212A8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8212c180
	if (ctx.cr0.eq) goto loc_8212C180;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// extsb r30,r11
	r30.s64 = ctx.r11.s8;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8212b520
	ctx.lr = 0x8212C0CC;
	sub_8212B520(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x8212c0f4
	if (!ctx.cr6.gt) goto loc_8212C0F4;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82129d78
	ctx.lr = 0x8212C0F4;
	sub_82129D78(ctx, base);
loc_8212C0F4:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-23000
	ctx.r9.s64 = ctx.r10.s64 + -23000;
	// cntlzw r7,r30
	ctx.r7.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lis r6,-32169
	ctx.r6.s64 = -2108227584;
	// addi r10,r8,-23008
	ctx.r10.s64 = ctx.r8.s64 + -23008;
	// stwx r27,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, r27.u32);
	// rlwinm r9,r7,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x4;
	// addi r7,r6,-22992
	ctx.r7.s64 = ctx.r6.s64 + -22992;
	// lha r8,98(r28)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r28.u32 + 98));
	// li r6,2
	ctx.r6.s64 = 2;
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r31.u32);
	// rlwimi r6,r8,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// stwx r6,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r6.u32);
	// bne cr6,0x8212c140
	if (!ctx.cr6.eq) goto loc_8212C140;
	// stwx r27,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, r27.u32);
loc_8212C140:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,-23032(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -23032);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8212c15c
	if (!ctx.cr6.eq) goto loc_8212C15C;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r27,-23032(r9)
	REX_STORE_U32(ctx.r9.u32 + -23032, r27.u32);
loc_8212C15C:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,20172
	ctx.r11.s64 = ctx.r11.s64 + 20172;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8212c180
	if (!ctx.cr6.eq) goto loc_8212C180;
	// li r9,-2
	ctx.r9.s64 = -2;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r27.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_8212C180:
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,16
	ctx.r11.s64 = 16;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r9,20220
	ctx.r9.s64 = ctx.r9.s64 + 20220;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stwx r27,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r27.u32);
loc_8212C1A4:
	// lbzx r8,r11,r31
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + r31.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lwzx r7,r10,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bdnz 0x8212c1a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8212C1A4;
	// addic r11,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	ctx.r11.s64 = r26.s64 + -1;
	// rlwinm r10,r26,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// subfze r3,r10
	temp.u8 = ~ctx.r10.u32 + ctx.xer.ca < ~ctx.r10.u32;
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8212c1d4
	goto loc_8212C1D4;
loc_8212C1D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8212C1D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_821319A8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821319d8
	if (ctx.cr6.eq) goto loc_821319D8;
	// bl 0x82101d68
	ctx.lr = 0x821319D0;
	sub_82101D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821319D8:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r11,r11,20992
	ctx.r11.s64 = ctx.r11.s64 + 20992;
	// lwz r10,-28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821319fc
	if (ctx.cr6.eq) goto loc_821319FC;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,-28(r11)
	REX_STORE_U32(ctx.r11.u32 + -28, ctx.r10.u32);
loc_821319FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82131a14
	if (ctx.cr6.eq) goto loc_82131A14;
	// stb r9,36(r10)
	REX_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82131A14:
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r31,23888(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 23888);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82131a3c
	if (ctx.cr6.eq) goto loc_82131A3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82131A2C;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82131A34;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23888(r30)
	REX_STORE_U32(r30.u32 + 23888, ctx.r11.u32);
loc_82131A3C:
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

DEFINE_REX_FUNC(sub_82133AD0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r10,r10,614
	ctx.r10.s64 = ctx.r10.s64 + 614;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r10,r9
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// mulli r9,r10,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// b 0x82133b14
	goto loc_82133B14;
loc_82133B08:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mulli r9,r9,24
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(24));
loc_82133B14:
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,255
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 255, ctx.xer);
	// bne cr6,0x82133b08
	if (!ctx.cr6.eq) goto loc_82133B08;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134E80) {
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
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r31,23908(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 23908);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82134ebc
	if (ctx.cr6.eq) goto loc_82134EBC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e48c0
	ctx.lr = 0x82134EAC;
	sub_820E48C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82134EB4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23908(r30)
	REX_STORE_U32(r30.u32 + 23908, ctx.r11.u32);
loc_82134EBC:
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

DEFINE_REX_FUNC(sub_82135EB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r11,23912
	ctx.r11.s64 = ctx.r11.s64 + 23912;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// beq cr6,0x82135ee8
	if (ctx.cr6.eq) goto loc_82135EE8;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mulli r11,r10,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(324));
	// addi r9,r9,22000
	ctx.r9.s64 = ctx.r9.s64 + 22000;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82133da8
	sub_82133DA8(ctx, base);
	return;
loc_82135EE8:
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mulli r11,r10,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(88));
	// addi r9,r9,21824
	ctx.r9.s64 = ctx.r9.s64 + 21824;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x821331e8
	sub_821331E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82137518) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,23000
	ctx.r9.s64 = ctx.r11.s64 + 23000;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r8,32(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 32);
loc_82137530:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82137554
	if (ctx.cr6.lt) goto loc_82137554;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r9,804
	ctx.r7.s64 = ctx.r9.s64 + 804;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82137530
	if (!ctx.cr6.gt) goto loc_82137530;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82137554:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r3,-8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213B408) {
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
	// bl 0x822d4e58
	ctx.lr = 0x8213B410;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f0c
	ctx.lr = 0x8213B418;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r30,0
	r30.s64 = 0;
	// addi r22,r10,23912
	r22.s64 = ctx.r10.s64 + 23912;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// lwz r10,23912(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 23912);
	// stw r30,64(r22)
	REX_STORE_U32(r22.u32 + 64, r30.u32);
	// lhz r11,524(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 524);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82131e08
	ctx.lr = 0x8213B440;
	sub_82131E08(ctx, base);
	// lis r31,-32169
	r31.s64 = -2108227584;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,100(r22)
	REX_STORE_U32(r22.u32 + 100, ctx.r3.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// lwz r29,23892(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 23892);
	// lfs f26,-24192(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24192);
	f26.f64 = double(temp.f32);
	// lfs f21,-24452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24452);
	f21.f64 = double(temp.f32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8213b480
	if (ctx.cr6.eq) goto loc_8213B480;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e48c0
	ctx.lr = 0x8213B470;
	sub_820E48C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822c80a8
	ctx.lr = 0x8213B478;
	sub_822C80A8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,23892(r31)
	REX_STORE_U32(r31.u32 + 23892, r30.u32);
loc_8213B480:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r29,r11,432
	r29.s64 = ctx.r11.s64 + 432;
	// lwz r3,444(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 444);
	// bl 0x820e4bb0
	ctx.lr = 0x8213B490;
	sub_820E4BB0(ctx, base);
	// stw r3,23892(r31)
	REX_STORE_U32(r31.u32 + 23892, ctx.r3.u32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r27,23876(r11)
	r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 23876);
	// bl 0x82130e40
	ctx.lr = 0x8213B4A8;
	sub_82130E40(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r28,r11,-8304
	r28.s64 = ctx.r11.s64 + -8304;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r31,r11,20320
	r31.s64 = ctx.r11.s64 + 20320;
	// lfs f17,16656(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16656);
	f17.f64 = double(temp.f32);
	// addi r7,r9,-24204
	ctx.r7.s64 = ctx.r9.s64 + -24204;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f17
	ctx.f1.f64 = f17.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,66
	ctx.r6.s64 = 66;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// addis r5,r11,56
	ctx.r5.s64 = ctx.r11.s64 + 3670016;
	// bl 0x82138a78
	ctx.lr = 0x8213B4E4;
	sub_82138A78(ctx, base);
	// lwz r11,344(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 344);
	// stw r3,192(r22)
	REX_STORE_U32(r22.u32 + 192, ctx.r3.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8213b51c
	if (ctx.cr6.eq) goto loc_8213B51C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8213b514
	if (ctx.cr6.eq) goto loc_8213B514;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8213b50c
	if (ctx.cr6.eq) goto loc_8213B50C;
	// li r10,59
	ctx.r10.s64 = 59;
	// b 0x8213b520
	goto loc_8213B520;
loc_8213B50C:
	// li r10,63
	ctx.r10.s64 = 63;
	// b 0x8213b520
	goto loc_8213B520;
loc_8213B514:
	// li r10,65
	ctx.r10.s64 = 65;
	// b 0x8213b520
	goto loc_8213B520;
loc_8213B51C:
	// li r10,61
	ctx.r10.s64 = 61;
loc_8213B520:
	// li r16,7
	r16.s64 = 7;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r30.u32);
	// divw r11,r17,r16
	ctx.r11.u64 = uint32_t((r16.s32 && !(r17.s32 == INT32_MIN && r16.s32 == -1)) ? r17.s32 / r16.s32 : 0);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// divw r8,r17,r16
	ctx.r8.u64 = uint32_t((r16.s32 && !(r17.s32 == INT32_MIN && r16.s32 == -1)) ? r17.s32 / r16.s32 : 0);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mulli r7,r11,7
	ctx.r7.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(7));
	// lwz r11,220(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 220);
	// lfs f19,29404(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29404);
	f19.f64 = double(temp.f32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// subf r9,r7,r17
	ctx.r9.u64 = r17.u64 - ctx.r7.u64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,-24208(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24208);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f3,17064(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	ctx.f3.f64 = double(temp.f32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lfs f18,28900(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28900);
	f18.f64 = double(temp.f32);
	// addi r11,r3,-24220
	ctx.r11.s64 = ctx.r3.s64 + -24220;
	// fmadds f12,f12,f19,f0
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f19.f64, ctx.f0.f64)));
	// lfs f0,28548(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 28548);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// li r25,1
	r25.s64 = 1;
	// lfs f13,-24212(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -24212);
	ctx.f13.f64 = double(temp.f32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f4,2384(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2384);
	ctx.f4.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r25,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r25.u8);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// fsubs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmadds f1,f11,f18,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f11.f64, f18.f64, ctx.f13.f64)));
	// bl 0x82138e60
	ctx.lr = 0x8213B5E8;
	sub_82138E60(ctx, base);
	// lis r11,85
	ctx.r11.s64 = 5570560;
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r11,r11,8692
	ctx.r11.u64 = ctx.r11.u64 | 8692;
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x8213b610
	if (ctx.cr0.eq) goto loc_8213B610;
	// lbz r9,186(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 186);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// ori r10,r9,192
	ctx.r10.u64 = ctx.r9.u64 | 192;
	// stb r10,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r10.u8);
loc_8213B610:
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f29,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f29.f64 = double(temp.f32);
	// stfs f29,144(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f29,148(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stfs f29,152(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// beq cr6,0x8213b670
	if (ctx.cr6.eq) goto loc_8213B670;
	// lbz r8,186(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 186);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// rlwimi r8,r25,2,26,23
	ctx.r8.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFFFFFFFF3F) | (ctx.r8.u64 & 0xC0);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stb r8,186(r11)
	REX_STORE_U8(ctx.r11.u32 + 186, ctx.r8.u8);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r8,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r8.u32);
	// stw r7,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r7.u32);
	// stw r9,156(r11)
	REX_STORE_U32(ctx.r11.u32 + 156, ctx.r9.u32);
loc_8213B670:
	// addi r11,r31,52
	ctx.r11.s64 = r31.s64 + 52;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// lis r11,-8531
	ctx.r11.s64 = -559087616;
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// ori r11,r11,43690
	ctx.r11.u64 = ctx.r11.u64 | 43690;
	// stw r30,56(r31)
	REX_STORE_U32(r31.u32 + 56, r30.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// addi r7,r9,-24352
	ctx.r7.s64 = ctx.r9.s64 + -24352;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f1,-24340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24340);
	ctx.f1.f64 = double(temp.f32);
	// li r6,75
	ctx.r6.s64 = 75;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82138a78
	ctx.lr = 0x8213B6C0;
	sub_82138A78(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// stfs f29,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,188(r22)
	REX_STORE_U32(r22.u32 + 188, ctx.r3.u32);
	// addi r21,r11,15212
	r21.s64 = ctx.r11.s64 + 15212;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f25,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	f25.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfs f22,29700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29700);
	f22.f64 = double(temp.f32);
	// lfs f20,-24224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24224);
	f20.f64 = double(temp.f32);
	// lis r29,85
	r29.s64 = 5570560;
	// lfs f23,-24388(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24388);
	f23.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f24,-24376(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24376);
	f24.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f27,15968(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 15968);
	f27.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f28,-24228(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -24228);
	f28.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// mr r23,r30
	r23.u64 = r30.u64;
	// ori r29,r29,8524
	r29.u64 = r29.u64 | 8524;
	// addi r19,r11,-24396
	r19.s64 = ctx.r11.s64 + -24396;
	// addi r18,r10,-24384
	r18.s64 = ctx.r10.s64 + -24384;
	// addi r20,r9,-24368
	r20.s64 = ctx.r9.s64 + -24368;
	// addi r26,r8,-6312
	r26.s64 = ctx.r8.s64 + -6312;
loc_8213B748:
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(r23.s32, r17.s32, ctx.xer);
	// bne cr6,0x8213b768
	if (!ctx.cr6.eq) goto loc_8213B768;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// lhz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U16(r21.u32 + 0);
	// lbz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 524);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// sth r10,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r10.u16);
	// b 0x8213b774
	goto loc_8213B774;
loc_8213B768:
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// sth r11,0(r21)
	REX_STORE_U16(r21.u32 + 0, ctx.r11.u16);
loc_8213B774:
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// rlwinm r4,r11,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82152228
	ctx.lr = 0x8213B784;
	sub_82152228(ctx, base);
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x821dcfb8
	ctx.lr = 0x8213B794;
	sub_821DCFB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8213b7a0
	if (!ctx.cr0.eq) goto loc_8213B7A0;
	// li r27,74
	r27.s64 = 74;
loc_8213B7A0:
	// fadds f31,f21,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f21.f64 + f28.f64));
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// fadds f30,f26,f27
	f30.f64 = double(float(f26.f64 + f27.f64));
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f4,f17
	ctx.f4.f64 = f17.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stb r25,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r25.u8);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x82138e60
	ctx.lr = 0x8213B7EC;
	sub_82138E60(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r3,-84(r11)
	REX_STORE_U32(ctx.r11.u32 + -84, ctx.r3.u32);
	// beq 0x8213b810
	if (ctx.cr0.eq) goto loc_8213B810;
	// lbz r10,186(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 186);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// ori r11,r10,192
	ctx.r11.u64 = ctx.r10.u64 | 192;
	// stb r11,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
loc_8213B810:
	// stb r25,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r25.u8);
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f4,f24
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f24.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r6,71
	ctx.r6.s64 = 71;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r18.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82138e60
	ctx.lr = 0x8213B854;
	sub_82138E60(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r11,r29
	REX_STORE_U32(ctx.r11.u32 + r29.u32, ctx.r3.u32);
	// beq 0x8213b874
	if (ctx.cr0.eq) goto loc_8213B874;
	// lbz r10,186(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 186);
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// ori r11,r10,192
	ctx.r11.u64 = ctx.r10.u64 | 192;
	// stb r11,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
loc_8213B874:
	// addi r11,r31,24
	ctx.r11.s64 = r31.s64 + 24;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// stw r30,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,72
	ctx.r6.s64 = 72;
	// fmr f4,f23
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f23.f64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// stb r25,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r25.u8);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r26.u32);
	// bl 0x82138e60
	ctx.lr = 0x8213B8B8;
	sub_82138E60(ctx, base);
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// stw r3,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r3.u32);
	// beq 0x8213b910
	if (ctx.cr0.eq) goto loc_8213B910;
	// lbz r10,186(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 186);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stb r10,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r10.u8);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// stw r10,148(r3)
	REX_STORE_U32(ctx.r3.u32 + 148, ctx.r10.u32);
	// stw r8,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r8.u32);
	// stw r9,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r9.u32);
	// lbz r11,186(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 186);
	// rlwimi r11,r25,2,26,23
	ctx.r11.u64 = (__builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFFFFFFFF3F) | (ctx.r11.u64 & 0xC0);
	// stb r11,186(r3)
	REX_STORE_U8(ctx.r3.u32 + 186, ctx.r11.u8);
loc_8213B910:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 48);
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// cmpw cr6,r23,r17
	ctx.cr6.compare<int32_t>(r23.s32, r17.s32, ctx.xer);
	// ori r10,r10,8696
	ctx.r10.u64 = ctx.r10.u64 | 8696;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// stbx r30,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, r30.u8);
	// bne cr6,0x8213b934
	if (!ctx.cr6.eq) goto loc_8213B934;
	// fmr f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f25.f64;
	// b 0x8213b938
	goto loc_8213B938;
loc_8213B934:
	// fmr f0,f20
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f20.f64;
loc_8213B938:
	// lwz r10,48(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 48);
	// addi r11,r23,1
	ctx.r11.s64 = r23.s64 + 1;
	// fadds f26,f26,f18
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f26.f64 + f18.f64));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// divw r9,r11,r16
	ctx.r9.u64 = uint32_t((r16.s32 && !(ctx.r11.s32 == INT32_MIN && r16.s32 == -1)) ? ctx.r11.s32 / r16.s32 : 0);
	// mulli r9,r9,7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(7));
	// stfs f0,236(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 236, temp.u32);
	// subf. r10,r9,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8213b964
	if (!ctx.cr0.eq) goto loc_8213B964;
	// fsubs f26,f26,f22
	f26.f64 = double(float(f26.f64 - f22.f64));
	// fadds f21,f21,f19
	f21.f64 = double(float(f21.f64 + f19.f64));
loc_8213B964:
	// lis r10,85
	ctx.r10.s64 = 5570560;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// ori r10,r10,8608
	ctx.r10.u64 = ctx.r10.u64 | 8608;
	// mr r23,r11
	r23.u64 = ctx.r11.u64;
	// addi r21,r21,2
	r21.s64 = r21.s64 + 2;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8213b748
	if (ctx.cr6.lt) goto loc_8213B748;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-24232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24232);
	f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82204c20
	ctx.lr = 0x8213B990;
	sub_82204C20(ctx, base);
	// fsubs f0,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmuls f31,f0,f25
	f31.f64 = double(float(ctx.f0.f64 * f25.f64));
	// bl 0x82204c20
	ctx.lr = 0x8213B9A0;
	sub_82204C20(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f7,2332(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lfs f0,-24236(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24236);
	ctx.f0.f64 = double(temp.f32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 + ctx.f0.f64));
	// lfs f3,26856(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-24240(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24240);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,29400(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29400);
	ctx.f5.f64 = double(temp.f32);
	// bl 0x82104548
	ctx.lr = 0x8213B9F0;
	sub_82104548(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// stw r3,148(r22)
	REX_STORE_U32(r22.u32 + 148, ctx.r3.u32);
	// addi r11,r11,13128
	ctx.r11.s64 = ctx.r11.s64 + 13128;
	// stw r30,56(r22)
	REX_STORE_U32(r22.u32 + 56, r30.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1840(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20484(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,60(r22)
	REX_STORE_U32(r22.u32 + 60, ctx.r11.u32);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x822d4f58
	ctx.lr = 0x8213BA2C;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8215DC60) {
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
	// bl 0x82135d18
	ctx.lr = 0x8215DC70;
	sub_82135D18(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215F380) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-19520
	ctx.r11.s64 = ctx.r11.s64 + -19520;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8215f3ac
	if (ctx.cr0.eq) goto loc_8215F3AC;
	// bl 0x822c80a8
	ctx.lr = 0x8215F3AC;
	sub_822C80A8(ctx, base);
loc_8215F3AC:
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

DEFINE_REX_FUNC(sub_821616F0) {
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
	// lbz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U8(r30.u32 + 4);
	// bl 0x82161498
	ctx.lr = 0x82161718;
	sub_82161498(ctx, base);
	// lbz r11,5(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 5);
	// addi r10,r30,6
	ctx.r10.s64 = r30.s64 + 6;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82161740
	goto loc_82161740;
loc_82161730:
	// lhz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82161748
	if (!ctx.cr6.gt) goto loc_82161748;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_82161740:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82161730
	if (ctx.cr6.lt) goto loc_82161730;
loc_82161748:
	// lbz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 4);
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4);
	// srawi r7,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 3;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bge 0x82161788
	if (!ctx.cr0.lt) goto loc_82161788;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_82161788:
	// lbz r3,3(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
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

DEFINE_REX_FUNC(sub_821679F8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,24536
	ctx.r8.s64 = ctx.r9.s64 + 24536;
	// li r10,2
	ctx.r10.s64 = 2;
	// sth r10,24536(r9)
	REX_STORE_U16(ctx.r9.u32 + 24536, ctx.r10.u16);
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167A58) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r9,24536
	ctx.r8.s64 = ctx.r9.s64 + 24536;
	// li r10,5
	ctx.r10.s64 = 5;
	// sth r10,24536(r9)
	REX_STORE_U16(ctx.r9.u32 + 24536, ctx.r10.u16);
	// sth r11,2(r8)
	REX_STORE_U16(ctx.r8.u32 + 2, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169520) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82169528;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,24584(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82169680
	if (!ctx.cr6.eq) goto loc_82169680;
	// lwz r30,124(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821695a4
	if (!ctx.cr6.eq) goto loc_821695A4;
	// lha r11,22(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 22));
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x82169578
	if (ctx.cr6.eq) goto loc_82169578;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r30,4
	ctx.r5.s64 = r30.s64 + 4;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1df8
	ctx.lr = 0x82169574;
	sub_820E1DF8(ctx, base);
	// b 0x821695cc
	goto loc_821695CC;
loc_82169578:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// b 0x821695cc
	goto loc_821695CC;
loc_821695A4:
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_821695CC:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82169628
	if (!ctx.cr6.eq) goto loc_82169628;
	// lha r11,22(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 22));
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// beq cr6,0x821695fc
	if (ctx.cr6.eq) goto loc_821695FC;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1df8
	ctx.lr = 0x821695F8;
	sub_820E1DF8(ctx, base);
	// b 0x82169650
	goto loc_82169650;
loc_821695FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r8,r31,4
	ctx.r8.s64 = r31.s64 + 4;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// b 0x82169650
	goto loc_82169650;
loc_82169628:
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r11,92
	ctx.r8.s64 = ctx.r11.s64 + 92;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
loc_82169650:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,92
	ctx.r4.s64 = r30.s64 + 92;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// bl 0x820e1ba8
	ctx.lr = 0x82169660;
	sub_820E1BA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e2290
	ctx.lr = 0x82169668;
	sub_820E2290(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lfs f1,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e1cc0
	ctx.lr = 0x82169674;
	sub_820E1CC0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// bl 0x820e1b28
	ctx.lr = 0x82169680;
	sub_820E1B28(ctx, base);
loc_82169680:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8216D558) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8216D560;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8216ca30
	ctx.lr = 0x8216D56C;
	sub_8216CA30(ctx, base);
	// bl 0x821afdb0
	ctx.lr = 0x8216D570;
	sub_821AFDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216d6c8
	if (!ctx.cr0.eq) goto loc_8216D6C8;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r31,r11,13128
	r31.s64 = ctx.r11.s64 + 13128;
	// lbz r11,1888(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8216d5b0
	if (ctx.cr0.eq) goto loc_8216D5B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d1d90
	ctx.lr = 0x8216D594;
	sub_821D1D90(ctx, base);
	// lbz r11,1889(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 1889);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r10.u32);
	// stw r9,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r9.u32);
	// stw r11,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r11.u32);
	// b 0x8216d6c8
	goto loc_8216D6C8;
loc_8216D5B0:
	// lis r30,-32169
	r30.s64 = -2108227584;
	// lwz r3,24620(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24620);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8216D5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r4,1100(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1100);
	// lwz r3,24620(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24620);
	// lwz r5,160(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 160);
	// bl 0x8216c7d0
	ctx.lr = 0x8216D5DC;
	sub_8216C7D0(ctx, base);
	// cmpw cr6,r3,r6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x8216d664
	if (!ctx.cr6.eq) goto loc_8216D664;
	// lwz r11,1092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1092);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216d6ac
	if (ctx.cr0.eq) goto loc_8216D6AC;
	// lwz r11,24620(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24620);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lha r11,4(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 4));
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
loc_8216D618:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216d63c
	if (!ctx.cr0.eq) goto loc_8216D63C;
	// addi r9,r9,136
	ctx.r9.s64 = ctx.r9.s64 + 136;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,136
	ctx.r7.s64 = ctx.r7.s64 + 136;
	// cmplwi cr6,r9,544
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 544, ctx.xer);
	// blt cr6,0x8216d618
	if (ctx.cr6.lt) goto loc_8216D618;
	// b 0x8216d640
	goto loc_8216D640;
loc_8216D63C:
	// stw r8,92(r29)
	REX_STORE_U32(r29.u32 + 92, ctx.r8.u32);
loc_8216D640:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821d1d90
	ctx.lr = 0x8216D648;
	sub_821D1D90(ctx, base);
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 96);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r11,15
	ctx.r11.s64 = 15;
	// beq cr6,0x8216d65c
	if (ctx.cr6.eq) goto loc_8216D65C;
	// li r11,5
	ctx.r11.s64 = 5;
loc_8216D65C:
	// stw r11,80(r29)
	REX_STORE_U32(r29.u32 + 80, ctx.r11.u32);
	// b 0x8216d6ac
	goto loc_8216D6AC;
loc_8216D664:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,12
	ctx.r3.s64 = 12;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8216D674;
	sub_8212BC38(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r11,r11,24628
	ctx.r11.s64 = ctx.r11.s64 + 24628;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwz r11,24624(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24624);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x8216d6ac
	goto loc_8216D6AC;
loc_8216D698:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8216d6ac
	if (!ctx.cr6.eq) goto loc_8216D6AC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8216c1b0
	ctx.lr = 0x8216D6AC;
	sub_8216C1B0(ctx, base);
loc_8216D6AC:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,100(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 100);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x824d3eac
	ctx.lr = 0x8216D6C0;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216d698
	if (!ctx.cr0.eq) goto loc_8216D698;
loc_8216D6C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82171EB8) {
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
	// addi r8,r11,168
	ctx.r8.s64 = ctx.r11.s64 + 168;
	// addi r7,r11,144
	ctx.r7.s64 = ctx.r11.s64 + 144;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82171358
	ctx.lr = 0x82171EF0;
	sub_82171358(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-7232
	ctx.r11.s64 = ctx.r11.s64 + -7232;
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

DEFINE_REX_FUNC(sub_82173A58) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82173a6c
	if (!ctx.cr6.eq) goto loc_82173A6C;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173A6C:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82173a7c
	if (!ctx.cr6.eq) goto loc_82173A7C;
	// addi r11,r3,1180
	ctx.r11.s64 = ctx.r3.s64 + 1180;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173A7C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x82173a8c
	if (!ctx.cr6.eq) goto loc_82173A8C;
	// addi r11,r3,1768
	ctx.r11.s64 = ctx.r3.s64 + 1768;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173A8C:
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82173a9c
	if (!ctx.cr6.eq) goto loc_82173A9C;
	// addi r11,r3,2356
	ctx.r11.s64 = ctx.r3.s64 + 2356;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173A9C:
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x82173aac
	if (!ctx.cr6.eq) goto loc_82173AAC;
	// addi r11,r3,4708
	ctx.r11.s64 = ctx.r3.s64 + 4708;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173AAC:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82173abc
	if (!ctx.cr6.eq) goto loc_82173ABC;
	// addi r11,r3,7060
	ctx.r11.s64 = ctx.r3.s64 + 7060;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173ABC:
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// bne cr6,0x82173acc
	if (!ctx.cr6.eq) goto loc_82173ACC;
	// addi r11,r3,592
	ctx.r11.s64 = ctx.r3.s64 + 592;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173ACC:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// bne cr6,0x82173adc
	if (!ctx.cr6.eq) goto loc_82173ADC;
	// addi r11,r3,2944
	ctx.r11.s64 = ctx.r3.s64 + 2944;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173ADC:
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bne cr6,0x82173aec
	if (!ctx.cr6.eq) goto loc_82173AEC;
	// addi r11,r3,3532
	ctx.r11.s64 = ctx.r3.s64 + 3532;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173AEC:
	// cmpwi cr6,r4,9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 9, ctx.xer);
	// bne cr6,0x82173afc
	if (!ctx.cr6.eq) goto loc_82173AFC;
	// addi r11,r3,4120
	ctx.r11.s64 = ctx.r3.s64 + 4120;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173AFC:
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x82173b0c
	if (!ctx.cr6.eq) goto loc_82173B0C;
	// addi r11,r3,5296
	ctx.r11.s64 = ctx.r3.s64 + 5296;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173B0C:
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// bne cr6,0x82173b1c
	if (!ctx.cr6.eq) goto loc_82173B1C;
	// addi r11,r3,5884
	ctx.r11.s64 = ctx.r3.s64 + 5884;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173B1C:
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x82173b2c
	if (!ctx.cr6.eq) goto loc_82173B2C;
	// addi r11,r3,6472
	ctx.r11.s64 = ctx.r3.s64 + 6472;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173B2C:
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// bne cr6,0x82173b3c
	if (!ctx.cr6.eq) goto loc_82173B3C;
	// addi r11,r3,7648
	ctx.r11.s64 = ctx.r3.s64 + 7648;
	// b 0x82173b58
	goto loc_82173B58;
loc_82173B3C:
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// beq cr6,0x82173b54
	if (ctx.cr6.eq) goto loc_82173B54;
	// cmpwi cr6,r4,15
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 15, ctx.xer);
	// beq cr6,0x82173b54
	if (ctx.cr6.eq) goto loc_82173B54;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// bne cr6,0x82173b58
	if (!ctx.cr6.eq) goto loc_82173B58;
loc_82173B54:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82173B58:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82176320) {
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
	ctx.lr = 0x82176328;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f34
	ctx.lr = 0x82176330;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r8.u32);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// stw r9,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// addi r11,r11,-5888
	ctx.r11.s64 = ctx.r11.s64 + -5888;
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lfs f30,1996(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	f30.f64 = double(temp.f32);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// ori r7,r6,2
	ctx.r7.u64 = ctx.r6.u64 | 2;
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// li r27,1
	r27.s64 = 1;
	// stb r7,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lfs f29,-30972(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -30972);
	f29.f64 = double(temp.f32);
	// stw r5,136(r3)
	REX_STORE_U32(ctx.r3.u32 + 136, ctx.r5.u32);
	// lfs f0,15620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15620);
	ctx.f0.f64 = double(temp.f32);
	// stb r27,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, r27.u8);
	// lfs f13,16196(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16196);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stfs f30,144(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stfs f30,148(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f30,152(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821763D0;
	sub_820E1B70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lis r29,-32169
	r29.s64 = -2108227584;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// addi r4,r9,-5896
	ctx.r4.s64 = ctx.r9.s64 + -5896;
	// lfs f0,32100(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32100);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lfs f0,-5892(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -5892);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r6,27284(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 27284);
	// li r5,1
	ctx.r5.s64 = 1;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r26.u32);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821761e0
	ctx.lr = 0x8217642C;
	sub_821761E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217643c
	if (ctx.cr0.eq) goto loc_8217643C;
	// li r11,2
	ctx.r11.s64 = 2;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
loc_8217643C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,-5900(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5900);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x82176464;
	sub_820E1B70(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r6,27284(r29)
	ctx.r6.u64 = REX_LOAD_U32(r29.u32 + 27284);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,100(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 100);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r3,r9,-6376
	ctx.r3.s64 = ctx.r9.s64 + -6376;
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,-5904(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5904);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r7,-5908
	ctx.r4.s64 = ctx.r7.s64 + -5908;
	// lfs f13,29476(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29476);
	ctx.f13.f64 = double(temp.f32);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821761e0
	ctx.lr = 0x821764C0;
	sub_821761E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f31,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f0,-17548(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -17548);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f13,31448(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31448);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16200(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16200);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x820e1b70
	ctx.lr = 0x821764F8;
	sub_820E1B70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,108(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f30,16896(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16896);
	f30.f64 = double(temp.f32);
	// stfs f30,96(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r30,104(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lwz r29,100(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 100);
	// bl 0x821b30e0
	ctx.lr = 0x82176520;
	sub_821B30E0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82152228
	ctx.lr = 0x82176528;
	sub_82152228(ctx, base);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r26,r11,432
	r26.s64 = ctx.r11.s64 + 432;
	// addi r10,r10,-6312
	ctx.r10.s64 = ctx.r10.s64 + -6312;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r4,r11,-5912
	ctx.r4.s64 = ctx.r11.s64 + -5912;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r6,448(r26)
	ctx.r6.u64 = REX_LOAD_U32(r26.u32 + 448);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bl 0x821761e0
	ctx.lr = 0x82176568;
	sub_821761E0(ctx, base);
	// stw r3,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8217657c
	if (ctx.cr0.eq) goto loc_8217657C;
	// li r11,7
	ctx.r11.s64 = 7;
	// std r11,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r11.u64);
loc_8217657C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f31,152(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f29,2348(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2348);
	f29.f64 = double(temp.f32);
	// addi r29,r11,-5924
	r29.s64 = ctx.r11.s64 + -5924;
	// lfs f28,-5916(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -5916);
	f28.f64 = double(temp.f32);
	// fadds f0,f13,f29
	ctx.f0.f64 = double(float(ctx.f13.f64 + f29.f64));
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 144, temp.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stfs f28,148(r31)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
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
	// addi r30,r31,140
	r30.s64 = r31.s64 + 140;
	// bl 0x821f7d50
	ctx.lr = 0x821765D8;
	sub_821F7D50(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-6192
	r28.s64 = ctx.r11.s64 + -6192;
	// lfs f27,-24284(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24284);
	f27.f64 = double(temp.f32);
	// beq 0x82176660
	if (ctx.cr0.eq) goto loc_82176660;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82176614
	if (ctx.cr6.eq) goto loc_82176614;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// b 0x82176618
	goto loc_82176618;
loc_82176614:
	// li r10,192
	ctx.r10.s64 = 192;
loc_82176618:
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r8,r3,80
	ctx.r8.s64 = ctx.r3.s64 + 80;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r8,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r8.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r8,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f29,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f30,104(r3)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r8,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// std r27,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, r27.u64);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stb r27,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, r27.u8);
loc_82176660:
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lfs f13,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + f29.f64));
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + f30.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f13,4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f28,8(r30)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stfs f31,12(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821766A0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82176720
	if (ctx.cr0.eq) goto loc_82176720;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821766cc
	if (ctx.cr6.eq) goto loc_821766CC;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lbz r10,103(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 103);
	// b 0x821766d0
	goto loc_821766D0;
loc_821766CC:
	// li r10,192
	ctx.r10.s64 = 192;
loc_821766D0:
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// addi r7,r3,80
	ctx.r7.s64 = ctx.r3.s64 + 80;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f0,-24140(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -24140);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 0);
	// stw r7,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r7,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r7.u32);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r8,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r8.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 12);
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f29,104(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stw r10,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// std r27,112(r3)
	REX_STORE_U64(ctx.r3.u32 + 112, r27.u64);
	// stw r9,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r9.u32);
	// stw r11,120(r3)
	REX_STORE_U32(ctx.r3.u32 + 120, ctx.r11.u32);
	// stw r8,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r8.u32);
	// stb r27,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, r27.u8);
loc_82176720:
	// addi r10,r31,112
	ctx.r10.s64 = r31.s64 + 112;
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// subf r10,r25,r10
	ctx.r10.u64 = ctx.r10.u64 - r25.u64;
loc_8217672C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8217672c
	if (!ctx.cr0.eq) goto loc_8217672C;
	// addis r3,r24,1792
	ctx.r3.s64 = r24.s64 + 117440512;
	// lwz r4,344(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 344);
	// addi r3,r3,61
	ctx.r3.s64 = ctx.r3.s64 + 61;
	// bl 0x820e68b8
	ctx.lr = 0x82176750;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21804
	ctx.r4.s64 = ctx.r11.s64 + 21804;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x822d55f8
	ctx.lr = 0x82176764;
	sub_822D55F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f80
	ctx.lr = 0x82176774;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82184098) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821840A0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82183e18
	ctx.lr = 0x821840B0;
	sub_82183E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821840e4
	if (ctx.cr0.eq) goto loc_821840E4;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
loc_821840BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82184038
	ctx.lr = 0x821840C8;
	sub_82184038(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82181828
	ctx.lr = 0x821840D4;
	sub_82181828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82183e18
	ctx.lr = 0x821840DC;
	sub_82183E18(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821840bc
	if (!ctx.cr0.eq) goto loc_821840BC;
loc_821840E4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82184F28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82184F30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,76(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82184f7c
	if (ctx.cr6.eq) goto loc_82184F7C;
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82184390
	ctx.lr = 0x82184F50;
	sub_82184390(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x82184f7c
	if (ctx.cr0.eq) goto loc_82184F7C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// bl 0x82187f28
	ctx.lr = 0x82184F64;
	sub_82187F28(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 16);
	// lwz r3,492(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 492);
	// bl 0x82189b38
	ctx.lr = 0x82184F70;
	sub_82189B38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,76(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 76);
	// bl 0x82184750
	ctx.lr = 0x82184F7C;
	sub_82184750(ctx, base);
loc_82184F7C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821869C0) {
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
	ctx.lr = 0x821869C8;
	// stwu r1,-1456(r1)
	ea = -1456 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,436(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 436);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82186ae4
	if (!ctx.cr0.eq) goto loc_82186AE4;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r28,r3,404
	r28.s64 = ctx.r3.s64 + 404;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stb r10,437(r3)
	REX_STORE_U8(ctx.r3.u32 + 437, ctx.r10.u8);
	// li r5,28
	ctx.r5.s64 = 28;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r27,r11,46
	r27.s64 = ctx.r11.s64 + 46;
	// bl 0x822d5870
	ctx.lr = 0x82186A0C;
	sub_822D5870(ctx, base);
	// lwz r11,432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 432);
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r29,r31,96
	r29.s64 = r31.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// beq cr6,0x82186a30
	if (ctx.cr6.eq) goto loc_82186A30;
	// bl 0x82208848
	ctx.lr = 0x82186A28;
	sub_82208848(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82186A30:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82186A38;
	sub_82188300(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x82208998
	ctx.lr = 0x82186A48;
	sub_82208998(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82186a64
	if (!ctx.cr6.eq) goto loc_82186A64;
	// bl 0x82188300
	ctx.lr = 0x82186A5C;
	sub_82188300(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82186a6c
	goto loc_82186A6C;
loc_82186A64:
	// bl 0x82188300
	ctx.lr = 0x82186A68;
	sub_82188300(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
loc_82186A6C:
	// lis r4,0
	ctx.r4.s64 = 0;
	// ori r4,r4,32778
	ctx.r4.u64 = ctx.r4.u64 | 32778;
	// bl 0x82208998
	ctx.lr = 0x82186A78;
	sub_82208998(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// addi r30,r31,102
	r30.s64 = r31.s64 + 102;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82186A90;
	sub_822D4FA0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r26,r31,168
	r26.s64 = r31.s64 + 168;
	// bl 0x82188300
	ctx.lr = 0x82186A9C;
	sub_82188300(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bl 0x82233a90
	ctx.lr = 0x82186AC0;
	sub_82233A90(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82186ad8
	if (ctx.cr6.eq) goto loc_82186AD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x82186c44
	goto loc_82186C44;
loc_82186AD8:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r11.u8);
	// b 0x82186c40
	goto loc_82186C40;
loc_82186AE4:
	// lwz r11,404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 404);
	// addi r3,r31,404
	ctx.r3.s64 = r31.s64 + 404;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82186c40
	if (ctx.cr6.eq) goto loc_82186C40;
	// bl 0x82209598
	ctx.lr = 0x82186AF8;
	sub_82209598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82186b38
	if (!ctx.cr0.lt) goto loc_82186B38;
	// lis r11,-32747
	ctx.r11.s64 = -2146107392;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r11,r11,20993
	ctx.r11.u64 = ctx.r11.u64 | 20993;
	// stb r10,436(r31)
	REX_STORE_U8(r31.u32 + 436, ctx.r10.u8);
	// stw r9,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82186b30
	if (!ctx.cr6.eq) goto loc_82186B30;
	// li r4,15
	ctx.r4.s64 = 15;
loc_82186B24:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187d00
	ctx.lr = 0x82186B2C;
	sub_82187D00(ctx, base);
	// b 0x82186c40
	goto loc_82186C40;
loc_82186B30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82186c44
	goto loc_82186C44;
loc_82186B38:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,102
	ctx.r4.s64 = r31.s64 + 102;
	// addi r3,r31,110
	ctx.r3.s64 = r31.s64 + 110;
	// bl 0x822339c0
	ctx.lr = 0x82186B48;
	sub_822339C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82186b68
	if (ctx.cr0.eq) goto loc_82186B68;
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
	// b 0x82186c44
	goto loc_82186C44;
loc_82186B68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82184a50
	ctx.lr = 0x82186B70;
	sub_82184A50(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x82186B7C;
	sub_82184A00(ctx, base);
	// ld r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 88);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82188300
	ctx.lr = 0x82186B8C;
	sub_82188300(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// bl 0x82208cc8
	ctx.lr = 0x82186B94;
	sub_82208CC8(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x82186B9C;
	sub_82188300(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82208a60
	ctx.lr = 0x82186BA8;
	sub_82208A60(ctx, base);
	// lbz r11,437(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 437);
	// li r29,0
	r29.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stb r29,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r29.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stb r11,144(r1)
	REX_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821855a0
	ctx.lr = 0x82186BCC;
	sub_821855A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82186be8
	if (!ctx.cr0.eq) goto loc_82186BE8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r29,436(r31)
	REX_STORE_U8(r31.u32 + 436, r29.u8);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x82186b24
	goto loc_82186B24;
loc_82186BE8:
	// bl 0x822094c8
	ctx.lr = 0x82186BEC;
	sub_822094C8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,480(r31)
	REX_STORE_U32(r31.u32 + 480, ctx.r10.u32);
	// stw r10,476(r31)
	REX_STORE_U32(r31.u32 + 476, ctx.r10.u32);
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x82186828
	ctx.lr = 0x82186C08;
	sub_82186828(ctx, base);
	// stw r3,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82186c28
	if (ctx.cr6.eq) goto loc_82186C28;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,40(r30)
	REX_STORE_U32(r30.u32 + 40, ctx.r11.u32);
	// bl 0x822094c8
	ctx.lr = 0x82186C24;
	sub_822094C8(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(r30.u32 + 48, ctx.r3.u32);
loc_82186C28:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r29,436(r31)
	REX_STORE_U8(r31.u32 + 436, r29.u8);
	// lwz r4,76(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 76);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82187ed8
	ctx.lr = 0x82186C40;
	sub_82187ED8(ctx, base);
loc_82186C40:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82186C44:
	// addi r1,r1,1456
	ctx.r1.s64 = ctx.r1.s64 + 1456;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8218F7D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8218F7E0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8218f708
	ctx.lr = 0x8218F804;
	sub_8218F708(ctx, base);
	// bl 0x821feec8
	ctx.lr = 0x8218F808;
	sub_821FEEC8(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmadds f1,f1,f0,f13
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f13.f64)));
	// bl 0x820e1cf8
	ctx.lr = 0x8218F820;
	sub_820E1CF8(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e1b70
	ctx.lr = 0x8218F830;
	sub_820E1B70(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821915C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lhz r8,224(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 224);
	// rlwimi r8,r9,14,0,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0xFFFFC000) | (ctx.r8.u64 & 0xFFFFFFFF00003FFF);
	// sth r8,224(r11)
	REX_STORE_U16(ctx.r11.u32 + 224, ctx.r8.u16);
	// lwz r11,7840(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7840);
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// stfs f0,112(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 112, temp.u32);
	// addi r10,r11,108
	ctx.r10.s64 = ctx.r11.s64 + 108;
	// stfs f0,116(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 116, temp.u32);
	// stfs f13,120(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 120, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82192CF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82192d44
	if (!ctx.cr6.eq) goto loc_82192D44;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// stw r9,140(r3)
	REX_STORE_U32(ctx.r3.u32 + 140, ctx.r9.u32);
	// b 0x82192ea4
	goto loc_82192EA4;
loc_82192D44:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82192ea4
	if (ctx.cr6.eq) goto loc_82192EA4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82192ea4
	if (ctx.cr6.eq) goto loc_82192EA4;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82191bb0
	ctx.lr = 0x82192D5C;
	sub_82191BB0(ctx, base);
	// bl 0x821fe068
	ctx.lr = 0x82192D60;
	sub_821FE068(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// lwz r30,148(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 148);
	// bl 0x82191bb0
	ctx.lr = 0x82192D6C;
	sub_82191BB0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// subfic r11,r11,360
	ctx.xer.ca = ctx.r11.u32 <= 360;
	ctx.r11.u64 = static_cast<uint64_t>(360) - ctx.r11.u64;
	// lfs f29,2340(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2340);
	f29.f64 = double(temp.f32);
	// addi r5,r10,3672
	ctx.r5.s64 = ctx.r10.s64 + 3672;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lfs f31,15632(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 15632);
	f31.f64 = double(temp.f32);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r6,-1
	ctx.r6.s64 = -1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmadds f0,f0,f30,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, ctx.f13.f64)));
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82192DE8;
	sub_821EAF80(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82192E00;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82191bb0
	ctx.lr = 0x82192E0C;
	sub_82191BB0(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,360
	ctx.r11.s64 = ctx.r11.s64 + 360;
	// addi r5,r10,3688
	ctx.r5.s64 = ctx.r10.s64 + 3688;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// li r6,-1
	ctx.r6.s64 = -1;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r8,1
	ctx.r8.s64 = 1;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// fnmsubs f0,f0,f30,f13
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f30.f64, -ctx.f13.f64)));
	// fsubs f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 - f29.f64));
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x82192E74;
	sub_821EAF80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821fe068
	ctx.lr = 0x82192E80;
	sub_821FE068(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82192ea4
	if (ctx.cr0.eq) goto loc_82192EA4;
	// lbz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 152);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82192ea4
	if (ctx.cr0.eq) goto loc_82192EA4;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x82192EA4;
	sub_82101D68(ctx, base);
loc_82192EA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_8219BA70) {
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
	ctx.lr = 0x8219BA78;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r30,r11,r7
	r30.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// beq cr6,0x8219baf0
	if (ctx.cr6.eq) goto loc_8219BAF0;
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
	ctx.lr = 0x8219BAF0;
	sub_820E20B0(ctx, base);
loc_8219BAF0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8219bb1c
	if (ctx.cr6.eq) goto loc_8219BB1C;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f0,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// lfs f13,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// stfs f0,12(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
loc_8219BB1C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8219bb34
	if (ctx.cr6.eq) goto loc_8219BB34;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1df8
	ctx.lr = 0x8219BB34;
	sub_820E1DF8(ctx, base);
loc_8219BB34:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8219FAC4) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219FE70) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8219FE78;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r6,r8,6492
	ctx.r6.s64 = ctx.r8.s64 + 6492;
	// addi r9,r11,-1392
	ctx.r9.s64 = ctx.r11.s64 + -1392;
	// addi r8,r10,-472
	ctx.r8.s64 = ctx.r10.s64 + -472;
	// addi r7,r7,-528
	ctx.r7.s64 = ctx.r7.s64 + -528;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,905
	ctx.r4.s64 = 905;
	// bl 0x821f7d50
	ctx.lr = 0x8219FEAC;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219fec8
	if (ctx.cr0.eq) goto loc_8219FEC8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,31764
	ctx.r11.s64 = ctx.r11.s64 + 31764;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8219fecc
	goto loc_8219FECC;
loc_8219FEC8:
	// li r30,0
	r30.s64 = 0;
loc_8219FECC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8219fedc
	if (!ctx.cr6.eq) goto loc_8219FEDC;
loc_8219FED4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219ff20
	goto loc_8219FF20;
loc_8219FEDC:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r30,80
	r31.s64 = r30.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// mulli r4,r29,4224
	ctx.r4.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(4224));
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// bl 0x82190558
	ctx.lr = 0x8219FEF8;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219ff0c
	if (!ctx.cr0.eq) goto loc_8219FF0C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218cb20
	ctx.lr = 0x8219FF08;
	sub_8218CB20(ctx, base);
	// b 0x8219fed4
	goto loc_8219FED4;
loc_8219FF0C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_8219FF20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A2648) {
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
	// addi r11,r5,7
	ctx.r11.s64 = ctx.r5.s64 + 7;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bgt cr6,0x821a2698
	if (ctx.cr6.gt) goto loc_821A2698;
	// subf r11,r5,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r5.u64;
	// addi r30,r10,-4
	r30.s64 = ctx.r10.s64 + -4;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
loc_821A2684:
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x821a3a28
	ctx.lr = 0x821A2690;
	sub_821A3A28(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x821a2684
	if (!ctx.cr0.eq) goto loc_821A2684;
loc_821A2698:
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

DEFINE_REX_FUNC(sub_821A3A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f3,40(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3A30) {
	REX_FUNC_PROLOGUE();
	// stb r4,108(r3)
	REX_STORE_U8(ctx.r3.u32 + 108, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3A48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f2,68(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f3,72(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A3E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821A3E80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// stb r4,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r4.u8);
	// stb r6,25(r31)
	REX_STORE_U8(r31.u32 + 25, ctx.r6.u8);
	// addi r7,r31,116
	ctx.r7.s64 = r31.s64 + 116;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r11.u8);
	// addi r8,r31,120
	ctx.r8.s64 = r31.s64 + 120;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821f7970
	ctx.lr = 0x821A3ED8;
	sub_821F7970(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r10,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// addi r11,r11,15584
	ctx.r11.s64 = ctx.r11.s64 + 15584;
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 128);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A6830) {
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
	ctx.lr = 0x821A6838;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// addi r8,r10,25832
	ctx.r8.s64 = ctx.r10.s64 + 25832;
	// addi r7,r9,26528
	ctx.r7.s64 = ctx.r9.s64 + 26528;
	// addi r6,r6,26424
	ctx.r6.s64 = ctx.r6.s64 + 26424;
	// li r5,896
	ctx.r5.s64 = 896;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x8218e5c0
	ctx.lr = 0x821A6874;
	sub_8218E5C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x821a69fc
	if (ctx.cr0.eq) goto loc_821A69FC;
	// stw r31,80(r29)
	REX_STORE_U32(r29.u32 + 80, r31.u32);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// sth r30,124(r29)
	REX_STORE_U16(r29.u32 + 124, r30.u16);
	// addi r28,r29,80
	r28.s64 = r29.s64 + 80;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// li r4,3072
	ctx.r4.s64 = 3072;
	// addi r5,r28,48
	ctx.r5.s64 = r28.s64 + 48;
	// lwz r3,496(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 496);
	// bl 0x82190558
	ctx.lr = 0x821A68A0;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a69f4
	if (ctx.cr0.eq) goto loc_821A69F4;
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r11,494
	ctx.r9.s64 = ctx.r11.s64 + 494;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// mulli r9,r9,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// stwx r29,r9,r31
	REX_STORE_U32(ctx.r9.u32 + r31.u32, r29.u32);
	// sth r10,40(r29)
	REX_STORE_U16(r29.u32 + 40, ctx.r10.u16);
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,28068
	ctx.r9.s64 = ctx.r9.s64 + 28068;
	// lha r10,92(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x821a68e0
	if (!ctx.cr6.eq) goto loc_821A68E0;
	// addi r9,r9,600
	ctx.r9.s64 = ctx.r9.s64 + 600;
loc_821A68E0:
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bgt cr6,0x821a69c0
	if (ctx.cr6.gt) goto loc_821A69C0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x821a6980
	if (!ctx.cr6.lt) goto loc_821A6980;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x821a6928
	if (ctx.cr6.lt) goto loc_821A6928;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x821a69f4
	if (!ctx.cr6.lt) goto loc_821A69F4;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addi r11,r10,27840
	ctx.r11.s64 = ctx.r10.s64 + 27840;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821A6920:
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// b 0x821a69e0
	goto loc_821A69E0;
loc_821A6928:
	// lha r6,92(r31)
	ctx.r6.s64 = int16_t(REX_LOAD_U16(r31.u32 + 92));
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// mulli r10,r6,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(5));
	// lha r9,142(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 142));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r8,23880
	ctx.r10.s64 = ctx.r8.s64 + 23880;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r7,14984
	ctx.r11.s64 = ctx.r7.s64 + 14984;
	// cmpwi cr6,r6,11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 11, ctx.xer);
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x821a6920
	if (!ctx.cr6.eq) goto loc_821A6920;
	// addi r7,r5,16
	ctx.r7.s64 = ctx.r5.s64 + 16;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,29
	ctx.r5.s64 = 29;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x8219bec8
	ctx.lr = 0x821A697C;
	sub_8219BEC8(ctx, base);
	// b 0x821a69e4
	goto loc_821A69E4;
loc_821A6980:
	// mulli r10,r10,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5));
	// lha r9,142(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 142));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,23880
	ctx.r9.s64 = ctx.r9.s64 + 23880;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// addi r10,r10,14984
	ctx.r10.s64 = ctx.r10.s64 + 14984;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x821a6920
	goto loc_821A6920;
loc_821A69C0:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x821a69f4
	if (ctx.cr6.lt) goto loc_821A69F4;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bgt cr6,0x821a69f4
	if (ctx.cr6.gt) goto loc_821A69F4;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r11,r11,27840
	ctx.r11.s64 = ctx.r11.s64 + 27840;
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
loc_821A69E0:
	// bl 0x8219be48
	ctx.lr = 0x821A69E4;
	sub_8219BE48(ctx, base);
loc_821A69E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,46(r28)
	REX_STORE_U16(r28.u32 + 46, ctx.r11.u16);
	// b 0x821a6a00
	goto loc_821A6A00;
loc_821A69F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8218cb20
	ctx.lr = 0x821A69FC;
	sub_8218CB20(ctx, base);
loc_821A69FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A6A00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821AE428) {
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
	ctx.lr = 0x821AE430;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f2c
	ctx.lr = 0x821AE438;
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lwz r23,-32480(r10)
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821aec5c
	if (!ctx.cr6.eq) goto loc_821AEC5C;
	// bl 0x821ab048
	ctx.lr = 0x821AE45C;
	sub_821AB048(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821ae494
	if (ctx.cr6.eq) goto loc_821AE494;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ae494
	if (ctx.cr6.eq) goto loc_821AE494;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ae494
	if (ctx.cr6.eq) goto loc_821AE494;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,135
	ctx.r3.u64 = ctx.r3.u64 | 135;
	// bl 0x820e68b8
	ctx.lr = 0x821AE488;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821AE48C;
	sub_821AAC50(ctx, base);
	// li r30,1
	r30.s64 = 1;
	// b 0x821ae4ac
	goto loc_821AE4AC;
loc_821AE494:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,134
	ctx.r3.u64 = ctx.r3.u64 | 134;
	// bl 0x820e68b8
	ctx.lr = 0x821AE4A4;
	sub_820E68B8(ctx, base);
	// bl 0x821aac50
	ctx.lr = 0x821AE4A8;
	sub_821AAC50(ctx, base);
	// li r30,0
	r30.s64 = 0;
loc_821AE4AC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfs f25,15632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f25.f64 = double(temp.f32);
	// beq cr6,0x821ae5b0
	if (ctx.cr6.eq) goto loc_821AE5B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x821ae54c
	if (ctx.cr6.eq) goto loc_821AE54C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821ae4e8
	if (ctx.cr6.eq) goto loc_821AE4E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821ae5b0
	if (ctx.cr6.eq) goto loc_821AE5B0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821ae54c
	if (ctx.cr6.eq) goto loc_821AE54C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821ae610
	if (!ctx.cr6.eq) goto loc_821AE610;
loc_821AE4E8:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,18
	ctx.r3.u64 = ctx.r3.u64 | 18;
	// bl 0x820e68b8
	ctx.lr = 0x821AE4F8;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// addi r5,r8,7992
	ctx.r5.s64 = ctx.r8.s64 + 7992;
	// lfd f4,27088(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 27088);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lfs f2,8384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8384);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// bl 0x821eaf80
	ctx.lr = 0x821AE548;
	sub_821EAF80(ctx, base);
	// b 0x821ae610
	goto loc_821AE610;
loc_821AE54C:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,17
	ctx.r3.u64 = ctx.r3.u64 | 17;
	// bl 0x820e68b8
	ctx.lr = 0x821AE55C;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// addi r5,r8,7992
	ctx.r5.s64 = ctx.r8.s64 + 7992;
	// lfd f4,27088(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 27088);
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lfs f2,8384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8384);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x821eaf80
	ctx.lr = 0x821AE5AC;
	sub_821EAF80(ctx, base);
	// b 0x821ae610
	goto loc_821AE610;
loc_821AE5B0:
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
	// bl 0x820e68b8
	ctx.lr = 0x821AE5C0;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// lis r6,-256
	ctx.r6.s64 = -16777216;
	// lfd f3,27088(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 27088);
	// addi r5,r8,7992
	ctx.r5.s64 = ctx.r8.s64 + 7992;
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f2,8384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8384);
	ctx.f2.f64 = double(temp.f32);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE610;
	sub_821EAF80(ctx, base);
loc_821AE610:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// lha r3,88(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// lfs f0,8872(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8872);
	ctx.f0.f64 = double(temp.f32);
	// lha r4,100(r11)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 100));
	// lfs f29,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lha r5,140(r11)
	ctx.r5.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 140));
	// lfs f13,8868(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8868);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f29,120(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821aad08
	ctx.lr = 0x821AE658;
	sub_821AAD08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-10032(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10032);
	// stb r10,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r10.u8);
	// lha r3,32(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// bl 0x821d8e90
	ctx.lr = 0x821AE670;
	sub_821D8E90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r8,3(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lha r3,32(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// mulli r10,r9,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d8e30
	ctx.lr = 0x821AE6A8;
	sub_821D8E30(ctx, base);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// li r9,6000
	ctx.r9.s64 = 6000;
	// lbz r10,2(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// li r8,100
	ctx.r8.s64 = 100;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lbz r6,3(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r10,r7,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(60));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf r11,r27,r28
	ctx.r11.u64 = r28.u64 - r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r26,r10,r9
	r26.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mulli r11,r26,6000
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(6000));
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulli r11,r26,60
	ctx.r11.s64 = static_cast<int64_t>(r26.u64 * static_cast<uint64_t>(60));
	// divw r25,r9,r8
	r25.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// subf r24,r11,r10
	r24.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bge cr6,0x821ae71c
	if (!ctx.cr6.lt) goto loc_821AE71C;
	// lwz r3,68(r23)
	ctx.r3.u64 = REX_LOAD_U32(r23.u32 + 68);
	// bl 0x821aafa0
	ctx.lr = 0x821AE71C;
	sub_821AAFA0(ctx, base);
loc_821AE71C:
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// cmpwi cr6,r11,70
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 70, ctx.xer);
	// ble cr6,0x821af1bc
	if (!ctx.cr6.gt) goto loc_821AF1BC;
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// lbz r22,3(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 3);
	// ori r3,r3,40
	ctx.r3.u64 = ctx.r3.u64 | 40;
	// lbz r21,2(r30)
	r21.u64 = REX_LOAD_U8(r30.u32 + 2);
	// lbz r20,1(r30)
	r20.u64 = REX_LOAD_U8(r30.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AE744;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfd f4,-25048(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + -25048);
	// extsb r11,r21
	ctx.r11.s64 = r21.s8;
	// stfd f4,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f4.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f2,8864(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8864);
	ctx.f2.f64 = double(temp.f32);
	// extsb r10,r22
	ctx.r10.s64 = r22.s8;
	// stfd f4,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// addi r21,r6,8296
	r21.s64 = ctx.r6.s64 + 8296;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// extsb r10,r20
	ctx.r10.s64 = r20.s8;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821AE7A8;
	sub_821EAF80(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,40
	ctx.r3.u64 = ctx.r3.u64 | 40;
	// lbz r22,3(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 3);
	// lbz r20,2(r30)
	r20.u64 = REX_LOAD_U8(r30.u32 + 2);
	// lbz r30,1(r30)
	r30.u64 = REX_LOAD_U8(r30.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AE7C4;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r19,r11,8460
	r19.s64 = ctx.r11.s64 + 8460;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// extsb r6,r30
	ctx.r6.s64 = r30.s8;
	// extsb r7,r20
	ctx.r7.s64 = r20.s8;
	// extsb r8,r22
	ctx.r8.s64 = r22.s8;
	// bl 0x822d55f8
	ctx.lr = 0x821AE7E8;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AE7F8;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f8,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f27,16336(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16336);
	f27.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * f27.f64));
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fmuls f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 * f31.f64));
	// lfs f30,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	f30.f64 = double(temp.f32);
	// fmuls f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 * f27.f64));
	// lfs f0,16676(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16676);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// fmuls f13,f12,f31
	ctx.f13.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f10,f12,f31
	ctx.f10.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fmuls f9,f12,f31
	ctx.f9.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fsubs f7,f30,f8
	ctx.f7.f64 = double(float(f30.f64 - ctx.f8.f64));
	// fsubs f6,f30,f8
	ctx.f6.f64 = double(float(f30.f64 - ctx.f8.f64));
	// fmuls f5,f12,f31
	ctx.f5.f64 = double(float(ctx.f12.f64 * f31.f64));
	// fsubs f3,f30,f8
	ctx.f3.f64 = double(float(f30.f64 - ctx.f8.f64));
	// fadd f4,f13,f11
	ctx.f4.f64 = ctx.f13.f64 + ctx.f11.f64;
	// lfd f28,8856(r11)
	f28.u64 = REX_LOAD_U64(ctx.r11.u32 + 8856);
	// fadd f11,f5,f11
	ctx.f11.f64 = ctx.f5.f64 + ctx.f11.f64;
	// fadd f10,f10,f28
	ctx.f10.f64 = ctx.f10.f64 + f28.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// fadd f9,f9,f28
	ctx.f9.f64 = ctx.f9.f64 + f28.f64;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lfd f13,8848(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 8848);
	// fnmsubs f0,f3,f31,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f3.f64, f31.f64, -f30.f64)));
	// fsubs f8,f30,f8
	ctx.f8.f64 = double(float(f30.f64 - ctx.f8.f64));
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// fnmsubs f6,f6,f31,f30
	ctx.f6.f64 = double(float(-std::fma(ctx.f6.f64, f31.f64, -f30.f64)));
	// lfs f26,-8492(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -8492);
	f26.f64 = double(temp.f32);
	// li r10,128
	ctx.r10.s64 = 128;
	// fmsubs f7,f7,f31,f26
	ctx.f7.f64 = double(float(std::fma(ctx.f7.f64, f31.f64, -f26.f64)));
	// stfs f7,112(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadd f7,f4,f28
	ctx.f7.f64 = ctx.f4.f64 + f28.f64;
	// ori r11,r6,255
	ctx.r11.u64 = ctx.r6.u64 | 255;
	// lfd f12,8840(r8)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r8.u32 + 8840);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// fadd f11,f11,f28
	ctx.f11.f64 = ctx.f11.f64 + f28.f64;
	// stfs f6,128(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fsub f10,f10,f13
	ctx.f10.f64 = ctx.f10.f64 - ctx.f13.f64;
	// stfs f29,172(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fsub f9,f9,f13
	ctx.f9.f64 = ctx.f9.f64 - ctx.f13.f64;
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// fmuls f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 * f31.f64));
	// stfs f8,144(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// fsub f8,f7,f13
	ctx.f8.f64 = ctx.f7.f64 - ctx.f13.f64;
	// li r3,4
	ctx.r3.s64 = 4;
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsub f0,f10,f12
	ctx.f0.f64 = ctx.f10.f64 - ctx.f12.f64;
	// fsub f10,f9,f12
	ctx.f10.f64 = ctx.f9.f64 - ctx.f12.f64;
	// fsub f11,f8,f12
	ctx.f11.f64 = ctx.f8.f64 - ctx.f12.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// frsp f0,f10
	ctx.f0.f64 = double(float(ctx.f10.f64));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fsub f0,f13,f12
	ctx.f0.f64 = ctx.f13.f64 - ctx.f12.f64;
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// bl 0x821e7d98
	ctx.lr = 0x821AE93C;
	sub_821E7D98(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f12,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmuls f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 * f27.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r9,0
	ctx.r9.s64 = 0;
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-30128(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30128);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r9,32832
	ctx.r6.u64 = ctx.r9.u64 | 32832;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f13,28452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f13.f64 = double(temp.f32);
	// stw r6,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// lfs f2,8832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8832);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fsubs f11,f30,f12
	ctx.f11.f64 = double(float(f30.f64 - ctx.f12.f64));
	// fadds f1,f12,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmsubs f12,f11,f31,f26
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, -f26.f64)));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fadd f13,f0,f28
	ctx.f13.f64 = ctx.f0.f64 + f28.f64;
	// lfd f0,8824(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8824);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// lfs f13,26632(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26632);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821e8898
	ctx.lr = 0x821AE9BC;
	sub_821E8898(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,143
	ctx.r3.u64 = ctx.r3.u64 | 143;
	// lbz r30,3(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r22,2(r29)
	r22.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r20,1(r29)
	r20.u64 = REX_LOAD_U8(r29.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AE9D8;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// extsb r8,r22
	ctx.r8.s64 = r22.s8;
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// lfd f29,26672(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lfs f2,8816(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8816);
	ctx.f2.f64 = double(temp.f32);
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// extsb r10,r20
	ctx.r10.s64 = r20.s8;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// bl 0x821eaf80
	ctx.lr = 0x821AEA3C;
	sub_821EAF80(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,143
	ctx.r3.u64 = ctx.r3.u64 | 143;
	// lbz r31,3(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r30,2(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r29,1(r29)
	r29.u64 = REX_LOAD_U8(r29.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AEA58;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// extsb r7,r30
	ctx.r7.s64 = r30.s8;
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// bl 0x822d55f8
	ctx.lr = 0x821AEA74;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AEA84;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lfs f28,16232(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fnmsubs f0,f0,f28,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f30.f64)));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,8792
	ctx.r4.s64 = ctx.r11.s64 + 8792;
	// fnmsubs f31,f0,f31,f30
	f31.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// bge cr6,0x821aeb30
	if (!ctx.cr6.lt) goto loc_821AEB30;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x822d55f8
	ctx.lr = 0x821AEAC0;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AEAD0;
	sub_821EB1A0(ctx, base);
	// stfd f29,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfd f2,8784(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8784);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r9,45
	ctx.r9.s64 = 45;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821AEB2C;
	sub_821EACB0(ctx, base);
	// b 0x821aec20
	goto loc_821AEC20;
loc_821AEB30:
	// ble cr6,0x821aebac
	if (!ctx.cr6.gt) goto loc_821AEBAC;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x822d55f8
	ctx.lr = 0x821AEB3C;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AEB4C;
	sub_821EB1A0(ctx, base);
	// stfd f29,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfd f2,8784(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8784);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r9,43
	ctx.r9.s64 = 43;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821AEBA8;
	sub_821EACB0(ctx, base);
	// b 0x821aec20
	goto loc_821AEC20;
loc_821AEBAC:
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d55f8
	ctx.lr = 0x821AEBB4;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AEBC4;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f2,8784(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8784);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r9,32
	ctx.r9.s64 = 32;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821AEC20;
	sub_821EACB0(ctx, base);
loc_821AEC20:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r31,r11,-10096
	r31.s64 = ctx.r11.s64 + -10096;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821aec4c
	if (!ctx.cr6.eq) goto loc_821AEC4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,26
	ctx.r3.s64 = 26;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x821AEC44;
	sub_8212BC38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
loc_821AEC4C:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-10104(r10)
	REX_STORE_U8(ctx.r10.u32 + -10104, ctx.r11.u8);
	// b 0x821af1bc
	goto loc_821AF1BC;
loc_821AEC5C:
	// lha r3,32(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// bl 0x821d8e90
	ctx.lr = 0x821AEC64;
	sub_821D8E90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lha r3,32(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 32));
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lbz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 2);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbz r8,3(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mulli r10,r9,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(60));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// add r27,r10,r11
	r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x821d8e30
	ctx.lr = 0x821AEC9C;
	sub_821D8E30(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// li r9,6000
	ctx.r9.s64 = 6000;
	// lbz r22,3(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 3);
	// li r8,100
	ctx.r8.s64 = 100;
	// lbz r21,2(r30)
	r21.u64 = REX_LOAD_U8(r30.u32 + 2);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lbz r20,1(r30)
	r20.u64 = REX_LOAD_U8(r30.u32 + 1);
	// lbz r11,1(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 1);
	// ori r3,r3,144
	ctx.r3.u64 = ctx.r3.u64 | 144;
	// lbz r10,2(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 2);
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lbz r6,3(r29)
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + 3);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// mulli r10,r7,60
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(60));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsb r11,r6
	ctx.r11.s64 = ctx.r6.s8;
	// mulli r10,r10,100
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(100));
	// add r26,r10,r11
	r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r26,r27
	ctx.r11.u64 = r27.u64 - r26.u64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// divw r28,r10,r9
	r28.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mulli r11,r28,6000
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(6000));
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mulli r11,r28,60
	ctx.r11.s64 = static_cast<int64_t>(r28.u64 * static_cast<uint64_t>(60));
	// divw r25,r9,r8
	r25.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(100));
	// subf r24,r11,r10
	r24.u64 = ctx.r10.u64 - ctx.r11.u64;
	// bl 0x820e68b8
	ctx.lr = 0x821AED1C;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfd f3,-25048(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + -25048);
	// extsb r11,r21
	ctx.r11.s64 = r21.s8;
	// lfs f25,15632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15632);
	f25.f64 = double(temp.f32);
	// extsb r10,r22
	ctx.r10.s64 = r22.s8;
	// lfs f2,8748(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8748);
	ctx.f2.f64 = double(temp.f32);
	// addi r21,r6,8296
	r21.s64 = ctx.r6.s64 + 8296;
	// stfd f3,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.f3.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfs f25,20(r1)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfd f3,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// extsb r10,r20
	ctx.r10.s64 = r20.s8;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821eaf80
	ctx.lr = 0x821AED88;
	sub_821EAF80(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,144
	ctx.r3.u64 = ctx.r3.u64 | 144;
	// lbz r22,3(r30)
	r22.u64 = REX_LOAD_U8(r30.u32 + 3);
	// lbz r20,2(r30)
	r20.u64 = REX_LOAD_U8(r30.u32 + 2);
	// lbz r30,1(r30)
	r30.u64 = REX_LOAD_U8(r30.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AEDA4;
	sub_820E68B8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r19,r11,8460
	r19.s64 = ctx.r11.s64 + 8460;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// extsb r6,r30
	ctx.r6.s64 = r30.s8;
	// extsb r7,r20
	ctx.r7.s64 = r20.s8;
	// extsb r8,r22
	ctx.r8.s64 = r22.s8;
	// bl 0x822d55f8
	ctx.lr = 0x821AEDC8;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AEDD8;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,16676(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16676);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// li r10,128
	ctx.r10.s64 = 128;
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// ori r11,r11,255
	ctx.r11.u64 = ctx.r11.u64 | 255;
	// lfs f27,16336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16336);
	f27.f64 = double(temp.f32);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lfs f31,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fmuls f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 * f27.f64));
	// lfs f28,28240(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28240);
	f28.f64 = double(temp.f32);
	// stw r10,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// lfs f30,16036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16036);
	f30.f64 = double(temp.f32);
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lfs f26,-8492(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -8492);
	f26.f64 = double(temp.f32);
	// stw r11,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// lfs f29,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	f29.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f29,124(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stfs f29,140(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stfs f29,156(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// li r3,4
	ctx.r3.s64 = 4;
	// stfs f29,172(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 * f27.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f9,f30,f13
	ctx.f9.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fmadds f11,f12,f31,f28
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, f28.f64)));
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f8,f12,f31,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f0.f64)));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, ctx.f0.f64)));
	// fsubs f11,f30,f13
	ctx.f11.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fsubs f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fmadds f12,f12,f31,f28
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, f31.f64, f28.f64)));
	// stfs f12,132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fadds f0,f0,f28
	ctx.f0.f64 = double(float(ctx.f0.f64 + f28.f64));
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmsubs f12,f11,f31,f26
	ctx.f12.f64 = double(float(std::fma(ctx.f11.f64, f31.f64, -f26.f64)));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fnmsubs f0,f13,f31,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, f31.f64, -f30.f64)));
	// fnmsubs f12,f10,f31,f30
	ctx.f12.f64 = double(float(-std::fma(ctx.f10.f64, f31.f64, -f30.f64)));
	// stfs f12,128(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fmuls f12,f9,f31
	ctx.f12.f64 = double(float(ctx.f9.f64 * f31.f64));
	// stfs f12,144(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// fadds f12,f8,f28
	ctx.f12.f64 = double(float(ctx.f8.f64 + f28.f64));
	// stfs f12,148(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// fadds f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 + f26.f64));
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x821e7d98
	ctx.lr = 0x821AEED4;
	sub_821E7D98(ctx, base);
	// stfs f29,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f10,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f10.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f9,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f27
	ctx.f10.f64 = double(float(ctx.f10.f64 * f27.f64));
	// fmuls f9,f9,f27
	ctx.f9.f64 = double(float(ctx.f9.f64 * f27.f64));
	// lfs f12,26632(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,-23944(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23944);
	ctx.f13.f64 = double(temp.f32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lfs f11,-18584(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -18584);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-30128(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -30128);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// ori r6,r7,32832
	ctx.r6.u64 = ctx.r7.u64 | 32832;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,28452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r6.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f2,8832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8832);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f8,f30,f10
	ctx.f8.f64 = double(float(f30.f64 - ctx.f10.f64));
	// fmadds f9,f9,f31,f28
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, f31.f64, f28.f64)));
	// fadds f1,f10,f0
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmsubs f0,f8,f31,f26
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, f31.f64, -f26.f64)));
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bl 0x821e8898
	ctx.lr = 0x821AEF58;
	sub_821E8898(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,143
	ctx.r3.u64 = ctx.r3.u64 | 143;
	// lbz r30,3(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r22,2(r29)
	r22.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r20,1(r29)
	r20.u64 = REX_LOAD_U8(r29.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AEF74;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f25,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = f25.f64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// extsb r22,r22
	r22.s64 = r22.s8;
	// lfd f29,26672(r11)
	f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 26672);
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// lfs f2,8744(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8744);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// extsb r10,r20
	ctx.r10.s64 = r20.s8;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821eaf80
	ctx.lr = 0x821AEFD8;
	sub_821EAF80(ctx, base);
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,143
	ctx.r3.u64 = ctx.r3.u64 | 143;
	// lbz r31,3(r29)
	r31.u64 = REX_LOAD_U8(r29.u32 + 3);
	// lbz r30,2(r29)
	r30.u64 = REX_LOAD_U8(r29.u32 + 2);
	// lbz r29,1(r29)
	r29.u64 = REX_LOAD_U8(r29.u32 + 1);
	// bl 0x820e68b8
	ctx.lr = 0x821AEFF4;
	sub_820E68B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// extsb r6,r29
	ctx.r6.s64 = r29.s8;
	// extsb r7,r30
	ctx.r7.s64 = r30.s8;
	// extsb r8,r31
	ctx.r8.s64 = r31.s8;
	// bl 0x822d55f8
	ctx.lr = 0x821AF010;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AF020;
	sub_821EB1A0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// lfs f28,16232(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16232);
	f28.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// fnmsubs f0,f0,f28,f30
	ctx.f0.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f30.f64)));
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,8792
	ctx.r4.s64 = ctx.r11.s64 + 8792;
	// fnmsubs f31,f0,f31,f30
	f31.f64 = double(float(-std::fma(ctx.f0.f64, f31.f64, -f30.f64)));
	// bge cr6,0x821af0cc
	if (!ctx.cr6.lt) goto loc_821AF0CC;
	// li r5,45
	ctx.r5.s64 = 45;
	// bl 0x822d55f8
	ctx.lr = 0x821AF05C;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AF06C;
	sub_821EB1A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f29,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfd f2,8736(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8736);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r9,45
	ctx.r9.s64 = 45;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// bl 0x821eacb0
	ctx.lr = 0x821AF0C8;
	sub_821EACB0(ctx, base);
	// b 0x821af1bc
	goto loc_821AF1BC;
loc_821AF0CC:
	// ble cr6,0x821af148
	if (!ctx.cr6.gt) goto loc_821AF148;
	// li r5,43
	ctx.r5.s64 = 43;
	// bl 0x822d55f8
	ctx.lr = 0x821AF0D8;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AF0E8;
	sub_821EB1A0(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfd f2,8736(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8736);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// li r9,43
	ctx.r9.s64 = 43;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821AF144;
	sub_821EACB0(ctx, base);
	// b 0x821af1bc
	goto loc_821AF1BC;
loc_821AF148:
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d55f8
	ctx.lr = 0x821AF150;
	sub_822D55F8(ctx, base);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821eb1a0
	ctx.lr = 0x821AF160;
	sub_821EB1A0(ctx, base);
	// stfd f29,56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 56, f29.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 56);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// fnmsubs f1,f0,f28,f31
	ctx.f1.f64 = double(float(-std::fma(ctx.f0.f64, f28.f64, -f31.f64)));
	// stfd f29,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, f29.u64);
	// stfd f1,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.f1.u64);
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfd f2,8736(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 8736);
	// lis r6,255
	ctx.r6.s64 = 16711680;
	// stfd f2,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.f2.u64);
	// addi r3,r9,8752
	ctx.r3.s64 = ctx.r9.s64 + 8752;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// li r9,32
	ctx.r9.s64 = 32;
	// ori r6,r6,255
	ctx.r6.u64 = ctx.r6.u64 | 255;
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// ld r4,24(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 24);
	// ld r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x821eacb0
	ctx.lr = 0x821AF1BC;
	sub_821EACB0(ctx, base);
loc_821AF1BC:
	// lwz r11,68(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 68);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r23)
	REX_STORE_U32(r23.u32 + 68, ctx.r11.u32);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f78
	ctx.lr = 0x821AF1D4;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_821E93B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x821e93dc
	if (!ctx.cr6.eq) goto loc_821E93DC;
	// lbz r11,1(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// bne cr6,0x821e93dc
	if (!ctx.cr6.eq) goto loc_821E93DC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_821E93DC:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e93f8
	if (ctx.cr0.eq) goto loc_821E93F8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r8,32
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 32, ctx.xer);
	// blt cr6,0x821e93dc
	if (ctx.cr6.lt) goto loc_821E93DC;
loc_821E93F8:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x821e9404
	if (ctx.cr6.lt) goto loc_821E9404;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_821E9404:
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x821e9414
	if (ctx.cr6.lt) goto loc_821E9414;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x821e9424
	if (!ctx.cr6.gt) goto loc_821E9424;
loc_821E9414:
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x821e9450
	if (ctx.cr6.lt) goto loc_821E9450;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// bgt cr6,0x821e9450
	if (ctx.cr6.gt) goto loc_821E9450;
loc_821E9424:
	// li r8,65
	ctx.r8.s64 = 65;
	// rlwinm r7,r9,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subfc r9,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r9,r9,0,31,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// addi r9,r9,55
	ctx.r9.s64 = ctx.r9.s64 + 55;
	// subf r9,r9,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// b 0x821e93f8
	goto loc_821E93F8;
loc_821E9450:
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x821e945c
	if (ctx.cr6.eq) goto loc_821E945C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_821E945C:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC5C8) {
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
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x821ec5ec
	if (!ctx.cr6.lt) goto loc_821EC5EC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,26936(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26936);
	ctx.f1.f64 = double(temp.f32);
loc_821EC5EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f3,15624(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15624);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,16908(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16908);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82204ae0
	ctx.lr = 0x821EC600;
	sub_82204AE0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stfs f1,-264(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -264, temp.u32);
	// bl 0x821ed290
	ctx.lr = 0x821EC60C;
	sub_821ED290(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stfs f1,-256(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + -256, temp.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF180) {
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
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// addi r10,r3,6276
	ctx.r10.s64 = ctx.r3.s64 + 6276;
	// stw r9,6272(r3)
	REX_STORE_U32(ctx.r3.u32 + 6272, ctx.r9.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821EF1B0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821ef1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821EF1B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821faf58
	ctx.lr = 0x821EF1C0;
	sub_821FAF58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_821F03A0) {
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
	ctx.lr = 0x821F03B4;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r31,r11,-32032
	r31.s64 = ctx.r11.s64 + -32032;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f27,f5
	f27.f64 = ctx.f5.f64;
	// bl 0x821f28a0
	ctx.lr = 0x821F03E0;
	sub_821F28A0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,7792(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7792);
	// lwz r4,1684(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1684);
	// bl 0x821f2908
	ctx.lr = 0x821F03F4;
	sub_821F2908(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f2bf0
	ctx.lr = 0x821F0404;
	sub_821F2BF0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,4
	ctx.r11.s64 = 4;
	// fneg f12,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = f29.u64 ^ 0x8000000000000000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f12,104(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f12,72(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stfs f12,40(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f28,f13
	ctx.f11.f64 = double(float(f28.f64 * ctx.f13.f64));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(f27.f64 * ctx.f13.f64));
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,108(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f0,f31,f11
	ctx.f0.f64 = double(float(f31.f64 - ctx.f11.f64));
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f12,f30,f13
	ctx.f12.f64 = double(float(f30.f64 - ctx.f13.f64));
	// fadds f0,f31,f11
	ctx.f0.f64 = double(float(f31.f64 + ctx.f11.f64));
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// fadds f13,f30,f13
	ctx.f13.f64 = double(float(f30.f64 + ctx.f13.f64));
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,100(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// stfs f13,68(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 68, temp.u32);
loc_821F0484:
	// stfs f0,100(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 100, temp.u32);
	// stfs f0,68(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f0,36(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821f0484
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F0484;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x821f2c50
	ctx.lr = 0x821F04B8;
	sub_821F2C50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x822d4f80
	ctx.lr = 0x821F04C4;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F6900) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x821F6908;
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32165
	r24.s64 = -2107965440;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r25,r10,-32032
	r25.s64 = ctx.r10.s64 + -32032;
	// stb r11,1272(r24)
	REX_STORE_U8(r24.u32 + 1272, ctx.r11.u8);
	// lbz r11,480(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 480);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6998
	if (ctx.cr0.eq) goto loc_821F6998;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f2330
	ctx.lr = 0x821F6940;
	sub_821F2330(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f6990
	if (!ctx.cr6.gt) goto loc_821F6990;
	// li r31,0
	r31.s64 = 0;
loc_821F6954:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r11,r31,r11
	ctx.r11.u64 = r31.u64 + ctx.r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821f697c
	if (!ctx.cr6.eq) goto loc_821F697C;
	// lbz r10,7(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 7);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f697c
	if (!ctx.cr0.eq) goto loc_821F697C;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x821f3de8
	ctx.lr = 0x821F697C;
	sub_821F3DE8(ctx, base);
loc_821F697C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6954
	if (ctx.cr6.lt) goto loc_821F6954;
loc_821F6990:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f2370
	ctx.lr = 0x821F6998;
	sub_821F2370(ctx, base);
loc_821F6998:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// lwz r31,508(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 508);
	// bl 0x821fa860
	ctx.lr = 0x821F69AC;
	sub_821FA860(ctx, base);
	// addi r11,r3,336
	ctx.r11.s64 = ctx.r3.s64 + 336;
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// lwz r28,2956(r10)
	r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 2956);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,16308(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16308);
	ctx.f0.f64 = double(temp.f32);
	// li r26,0
	r26.s64 = 0;
	// lfs f13,2356(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2356);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f10,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f30,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f30.f64 = double(temp.f32);
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_821F6A14:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f6b5c
	if (!ctx.cr6.gt) goto loc_821F6B5C;
	// li r30,0
	r30.s64 = 0;
loc_821F6A28:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// lbz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6afc
	if (ctx.cr0.eq) goto loc_821F6AFC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821f6ac4
	if (ctx.cr6.eq) goto loc_821F6AC4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x821f6a8c
	if (ctx.cr6.eq) goto loc_821F6A8C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x821f6a78
	if (ctx.cr6.eq) goto loc_821F6A78;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bne cr6,0x821f6b48
	if (!ctx.cr6.eq) goto loc_821F6B48;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F6A74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821f6b48
	goto loc_821F6B48;
loc_821F6A78:
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,192
	ctx.r5.s64 = 192;
	// bl 0x822d4fa0
	ctx.lr = 0x821F6A88;
	sub_822D4FA0(ctx, base);
	// b 0x821f6b48
	goto loc_821F6B48;
loc_821F6A8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x821f2ba8
	ctx.lr = 0x821F6AC0;
	sub_821F2BA8(ctx, base);
	// b 0x821f6b48
	goto loc_821F6B48;
loc_821F6AC4:
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821f6ae8
	if (ctx.cr0.eq) goto loc_821F6AE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f2,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// b 0x821f6af4
	goto loc_821F6AF4;
loc_821F6AE8:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
loc_821F6AF4:
	// bl 0x821f2b30
	ctx.lr = 0x821F6AF8;
	sub_821F2B30(ctx, base);
	// b 0x821f6b48
	goto loc_821F6B48;
loc_821F6AFC:
	// lbz r11,7(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 7);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f6b48
	if (!ctx.cr0.eq) goto loc_821F6B48;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// bl 0x821f2970
	ctx.lr = 0x821F6B14;
	sub_821F2970(ctx, base);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// beq cr6,0x821f6b2c
	if (ctx.cr6.eq) goto loc_821F6B2C;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_821F6B2C:
	// bl 0x822a5980
	ctx.lr = 0x821F6B30;
	sub_822A5980(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x821f6b44
	if (!ctx.cr6.eq) goto loc_821F6B44;
	// bl 0x821f3de8
	ctx.lr = 0x821F6B40;
	sub_821F3DE8(ctx, base);
	// b 0x821f6b48
	goto loc_821F6B48;
loc_821F6B44:
	// bl 0x821f3e10
	ctx.lr = 0x821F6B48;
	sub_821F3E10(ctx, base);
loc_821F6B48:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 8);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6a28
	if (ctx.cr6.lt) goto loc_821F6A28;
loc_821F6B5C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(r26.s32, 2, ctx.xer);
	// blt cr6,0x821f6a14
	if (ctx.cr6.lt) goto loc_821F6A14;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r11,1272(r24)
	REX_STORE_U8(r24.u32 + 1272, ctx.r11.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a5980
	ctx.lr = 0x821F6B7C;
	sub_822A5980(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r11,1280
	r31.s64 = ctx.r11.s64 + 1280;
	// lwz r11,1280(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821f6bdc
	if (!ctx.cr6.gt) goto loc_821F6BDC;
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
	// addi r28,r29,32
	r28.s64 = r29.s64 + 32;
	// addi r29,r11,-12
	r29.s64 = ctx.r11.s64 + -12;
loc_821F6BA0:
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821f6bb8
	if (ctx.cr6.eq) goto loc_821F6BB8;
	// li r5,192
	ctx.r5.s64 = 192;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x821F6BB8;
	sub_822D4FA0(ctx, base);
loc_821F6BB8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x821f2970
	ctx.lr = 0x821F6BC4;
	sub_821F2970(ctx, base);
	// lwzu r3,16(r29)
	ea = 16 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x821f43e8
	ctx.lr = 0x821F6BCC;
	sub_821F43E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821f6ba0
	if (ctx.cr6.lt) goto loc_821F6BA0;
loc_821F6BDC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822031B8) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82202fd8
	sub_82202FD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822032E0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82203364
	if (ctx.cr6.lt) goto loc_82203364;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82203364
	if (!ctx.cr6.lt) goto loc_82203364;
	// lwz r11,180(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf. r11,r11,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82203320
	if (!ctx.cr0.lt) goto loc_82203320;
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 + ctx.r5.u64;
	// blr 
	return;
loc_82203320:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82203344
	if (!ctx.cr0.lt) goto loc_82203344;
	// addi r11,r4,21
	ctx.r11.s64 = ctx.r4.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blr 
	return;
loc_82203344:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// subf. r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82203364
	if (!ctx.cr0.lt) goto loc_82203364;
	// addi r10,r4,29
	ctx.r10.s64 = ctx.r4.s64 + 29;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82203364:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822053D0) {
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
	// lwz r5,16(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r31,r3,4632
	r31.s64 = ctx.r3.s64 + 4632;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82205438
	if (!ctx.cr6.eq) goto loc_82205438;
	// lwz r9,24(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// b 0x82205424
	goto loc_82205424;
loc_82205400:
	// cmpwi cr6,r10,97
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 97, ctx.xer);
	// blt cr6,0x82205418
	if (ctx.cr6.lt) goto loc_82205418;
	// cmpwi cr6,r10,122
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 122, ctx.xer);
	// bgt cr6,0x82205418
	if (ctx.cr6.gt) goto loc_82205418;
	// addi r11,r10,-32
	ctx.r11.s64 = ctx.r10.s64 + -32;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
loc_82205418:
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
loc_82205424:
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82205400
	if (!ctx.cr0.eq) goto loc_82205400;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r8)
	REX_STORE_U8(ctx.r8.u32 + 0, ctx.r11.u8);
	// b 0x8220546c
	goto loc_8220546C;
loc_82205438:
	// lwz r6,20(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8220545c
	if (!ctx.cr6.eq) goto loc_8220545C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,24(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r4,r11,21560
	ctx.r4.s64 = ctx.r11.s64 + 21560;
	// bl 0x822d55f8
	ctx.lr = 0x82205458;
	sub_822D55F8(ctx, base);
	// b 0x8220546c
	goto loc_8220546C;
loc_8220545C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r4,r11,21552
	ctx.r4.s64 = ctx.r11.s64 + 21552;
	// bl 0x822d55f8
	ctx.lr = 0x8220546C;
	sub_822D55F8(ctx, base);
loc_8220546C:
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

DEFINE_REX_FUNC(sub_822086B8) {
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
	ctx.lr = 0x822086C0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x821f3e38
	ctx.lr = 0x822086D0;
	sub_821F3E38(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// li r31,0
	r31.s64 = 0;
	// ble 0x82208744
	if (!ctx.cr0.gt) goto loc_82208744;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r27,r11,4152
	r27.s64 = ctx.r11.s64 + 4152;
loc_822086E4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3e60
	ctx.lr = 0x822086F0;
	sub_821F3E60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82208738
	if (ctx.cr0.eq) goto loc_82208738;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821f3e98
	ctx.lr = 0x82208704;
	sub_821F3E98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220871c
	if (ctx.cr6.eq) goto loc_8220871C;
	// lbz r11,3(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bge cr6,0x82208738
	if (!ctx.cr6.lt) goto loc_82208738;
loc_8220871C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82208738
	if (ctx.cr6.eq) goto loc_82208738;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82208738:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(r31.s32, r29.s32, ctx.xer);
	// blt cr6,0x822086e4
	if (ctx.cr6.lt) goto loc_822086E4;
loc_82208744:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_8220A878) {
	REX_FUNC_PROLOGUE();
	// lwz r11,336(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 336);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8220a890
	if (!ctx.cr6.eq) goto loc_8220A890;
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// blr 
	return;
loc_8220A890:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220BAB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r12,128
	ctx.r12.s64 = 128;
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// bltlr 
	if (ctx.cr0.lt) return;
loc_8220BAD4:
	// cmplwi cr7,r5,256
	ctx.cr7.compare<uint32_t>(ctx.r5.u32, 256, ctx.xer);
	// cmplwi r5,1024
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr7,0x8220baec
	if (ctx.cr7.lt) goto loc_8220BAEC;
	// ble 0x8220bae8
	if (!ctx.cr0.gt) goto loc_8220BAE8;
	// dcbt r10,r4
loc_8220BAE8:
	// dcbzl r12,r3
	ea = (ctx.r12.u32 + ctx.r3.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
loc_8220BAEC:
	// lvx v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v1,v1,v2,v0
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v2,v2,v3,v0
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v3,v3,v4,v0
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v4,v4,v5,v0
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v5,v5,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v6,v6,v7,v0
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx v9,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v7,v7,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v1,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm v8,v8,v9,v0
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx v2,r6,r3
	ea = (ctx.r6.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// stvx v3,r7,r3
	ea = (ctx.r7.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvx v4,r8,r3
	ea = (ctx.r8.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvx v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// stvx v6,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi r5,128
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 128, ctx.xer);
	// stvx v7,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx v8,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bge 0x8220bad4
	if (!ctx.cr0.lt) goto loc_8220BAD4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211E98) {
	REX_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,10890(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 10890);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212378) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82213880) {
	REX_FUNC_PROLOGUE();
	// stw r4,11088(r3)
	REX_STORE_U32(ctx.r3.u32 + 11088, ctx.r4.u32);
	// sync 
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r4,1812(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 1812, ctx.r4.u32);
	// eieio 
	// sync 
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822139F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82213A00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,15320(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82213af8
	if (ctx.cr0.eq) goto loc_82213AF8;
	// bne cr6,0x82213a2c
	if (!ctx.cr6.eq) goto loc_82213A2C;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,68
	ctx.r11.s64 = ctx.r11.s64 + 68;
loc_82213A2C:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,15312(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15312);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,15324(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15324);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82213a94
	if (ctx.cr6.gt) goto loc_82213A94;
	// lwz r10,13600(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82213a8c
	if (ctx.cr6.eq) goto loc_82213A8C;
	// lwz r11,13604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13604);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82213a84
	if (ctx.cr6.eq) goto loc_82213A84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82213a8c
	if (!ctx.cr6.eq) goto loc_82213A8C;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82213a8c
	if (!ctx.cr6.lt) goto loc_82213A8C;
loc_82213A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82213c20
	goto loc_82213C20;
loc_82213A8C:
	// stw r4,15320(r3)
	REX_STORE_U32(ctx.r3.u32 + 15320, ctx.r4.u32);
	// b 0x82213aec
	goto loc_82213AEC;
loc_82213A94:
	// lwz r9,15328(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15328);
	// lwz r8,13600(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13600);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x82213ad8
	if (ctx.cr6.eq) goto loc_82213AD8;
	// lwz r11,13604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13604);
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82213a84
	if (ctx.cr6.eq) goto loc_82213A84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82213ad8
	if (!ctx.cr6.eq) goto loc_82213AD8;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82213a84
	if (ctx.cr6.lt) goto loc_82213A84;
loc_82213AD8:
	// lwz r11,15332(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15332);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82213a84
	if (ctx.cr6.gt) goto loc_82213A84;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,15328(r3)
	REX_STORE_U32(ctx.r3.u32 + 15328, ctx.r4.u32);
loc_82213AEC:
	// bl 0x82213620
	ctx.lr = 0x82213AF0;
	sub_82213620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82213c20
	goto loc_82213C20;
loc_82213AF8:
	// bne cr6,0x82213b04
	if (!ctx.cr6.eq) goto loc_82213B04;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82213B04:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82213b18
	if (!ctx.cr6.eq) goto loc_82213B18;
	// li r7,56
	ctx.r7.s64 = 56;
loc_82213B18:
	// lwz r11,15316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15316);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82213b2c
	if (!ctx.cr6.gt) goto loc_82213B2C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82213B2C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15312);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82213b44
	if (!ctx.cr6.gt) goto loc_82213B44;
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
loc_82213B44:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// lwz r10,15308(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15308);
	// lwz r6,15340(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 15340);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subfc r9,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r9.u64 = ctx.r11.u64 - ctx.r7.u64;
	// eqv r5,r7,r11
	ctx.r5.u64 = ~(ctx.r7.u64 ^ ctx.r11.u64);
	// lwz r11,15328(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 15328);
	// rlwinm r9,r5,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// subf r5,r10,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82213b84
	if (!ctx.cr6.gt) goto loc_82213B84;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82213B84:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82213bb4
	if (ctx.cr6.eq) goto loc_82213BB4;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// lwz r9,15324(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 15324);
	// lbz r6,11070(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 11070);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,15328(r3)
	REX_STORE_U32(ctx.r3.u32 + 15328, ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// ori r11,r6,4
	ctx.r11.u64 = ctx.r6.u64 | 4;
	// stw r9,15324(r3)
	REX_STORE_U32(ctx.r3.u32 + 15324, ctx.r9.u32);
	// add r31,r8,r30
	r31.u64 = ctx.r8.u64 + r30.u64;
	// stb r11,11070(r3)
	REX_STORE_U8(ctx.r3.u32 + 11070, ctx.r11.u8);
loc_82213BB4:
	// lwz r8,13600(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 13600);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82213c00
	if (ctx.cr6.eq) goto loc_82213C00;
	// lwz r11,13604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13604);
	// lwz r10,15324(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15324);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82213be4
	if (ctx.cr6.eq) goto loc_82213BE4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82213c00
	if (!ctx.cr6.eq) goto loc_82213C00;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, ctx.xer);
	// bge cr6,0x82213c00
	if (!ctx.cr6.lt) goto loc_82213C00;
loc_82213BE4:
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82213a84
	if (!ctx.cr6.eq) goto loc_82213A84;
	// subf r11,r30,r8
	ctx.r11.u64 = ctx.r8.u64 - r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82213a84
	if (ctx.cr6.lt) goto loc_82213A84;
loc_82213C00:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,15324(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 15324);
	// bl 0x82213620
	ctx.lr = 0x82213C0C;
	sub_82213620(ctx, base);
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82213C20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8221F248) {
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
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r8,20
	ctx.r11.u64 = ctx.r8.u32 & 0xFFF;
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r7,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r7.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r7.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r3
	r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r5,25,3,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 25) & 0x1F000000) | (ctx.r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8221F2C0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221f2e8
	if (ctx.cr6.eq) goto loc_8221F2E8;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822d4fa0
	ctx.lr = 0x8221F2E8;
	sub_822D4FA0(ctx, base);
loc_8221F2E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8221f2fc
	if (!ctx.cr0.eq) goto loc_8221F2FC;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8221f2c0
	goto loc_8221F2C0;
loc_8221F2FC:
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

DEFINE_REX_FUNC(sub_82222B40) {
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
	ctx.lr = 0x82222B48;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r25,r5,26
	r25.u64 = ctx.r5.u32 & 0x3F;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r25,22
	ctx.cr6.compare<uint32_t>(r25.u32, 22, ctx.xer);
	// beq cr6,0x82222b88
	if (ctx.cr6.eq) goto loc_82222B88;
	// cmplwi cr6,r25,23
	ctx.cr6.compare<uint32_t>(r25.u32, 23, ctx.xer);
	// li r26,0
	r26.s64 = 0;
	// bne cr6,0x82222b8c
	if (!ctx.cr6.eq) goto loc_82222B8C;
loc_82222B88:
	// mr r26,r22
	r26.u64 = r22.u64;
loc_82222B8C:
	// cmplwi cr6,r25,54
	ctx.cr6.compare<uint32_t>(r25.u32, 54, ctx.xer);
	// bne cr6,0x82222b98
	if (!ctx.cr6.eq) goto loc_82222B98;
	// li r25,7
	r25.s64 = 7;
loc_82222B98:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r22,4(r31)
	REX_STORE_U32(r31.u32 + 4, r22.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r24,-1
	r24.s64 = -1;
	// bl 0x822213f0
	ctx.lr = 0x82222BC4;
	sub_822213F0(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82222c08
	if (ctx.cr6.eq) goto loc_82222C08;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// blt cr6,0x82222be0
	if (ctx.cr6.lt) goto loc_82222BE0;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82222BE0:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(r29.s32, 2, ctx.xer);
	// bne cr6,0x82222bec
	if (!ctx.cr6.eq) goto loc_82222BEC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_82222BEC:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r7,r11,9
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFF;
	// b 0x82222c0c
	goto loc_82222C0C;
loc_82222C08:
	// li r7,0
	ctx.r7.s64 = 0;
loc_82222C0C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82222c24
	if (ctx.cr6.eq) goto loc_82222C24;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r24,4(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 4);
	// lwz r8,8(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 8);
	// b 0x82222c48
	goto loc_82222C48;
loc_82222C24:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x82222c48
	if (ctx.cr6.eq) goto loc_82222C48;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,-7296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7296);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r11,r24
	r24.u64 = ctx.r11.u64 & r24.u64;
loc_82222C48:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x82222c58
	if (ctx.cr6.eq) goto loc_82222C58;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(r29.s32, 1, ctx.xer);
	// bne cr6,0x82222c74
	if (!ctx.cr6.eq) goto loc_82222C74;
loc_82222C58:
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r11,r30,79
	ctx.r11.s64 = r30.s64 + 79;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r11,80
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(80));
	// addi r11,r30,31
	ctx.r11.s64 = r30.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x82222c8c
	goto loc_82222C8C;
loc_82222C74:
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r30,39
	ctx.r11.s64 = r30.s64 + 39;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r11,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// addi r11,r30,15
	ctx.r11.s64 = r30.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_82222C8C:
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r5,r30,-1
	ctx.r5.s64 = r30.s64 + -1;
	// rlwimi r29,r11,2,0,29
	r29.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC) | (r29.u64 & 0xFFFFFFFF00000003);
	// stw r28,40(r31)
	REX_STORE_U32(r31.u32 + 40, r28.u32);
	// rlwinm r11,r5,18,0,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 18) & 0xFFFC0000;
	// clrlwi r6,r6,29
	ctx.r6.u64 = ctx.r6.u32 & 0x7;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// rlwinm r4,r29,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// addi r5,r5,27512
	ctx.r5.s64 = ctx.r5.s64 + 27512;
	// rlwinm r30,r25,1,0,30
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r11,r6,3,14,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0x3FFF8) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0007);
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// lhzx r11,r30,r5
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + ctx.r5.u32);
	// rlwinm r11,r11,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// beq cr6,0x82222d44
	if (ctx.cr6.eq) goto loc_82222D44;
	// rlwinm r11,r11,16,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x10000;
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(r24.s32, -1, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// beq cr6,0x82222d38
	if (ctx.cr6.eq) goto loc_82222D38;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82222d14
	if (ctx.cr6.eq) goto loc_82222D14;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82222d14
	if (ctx.cr6.eq) goto loc_82222D14;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82222d20
	goto loc_82222D20;
loc_82222D14:
	// addi r11,r25,-22
	ctx.r11.s64 = r25.s64 + -22;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82222D20:
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r10,r24,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 13) & 0xFFFFE000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r22,r11,4,0,27
	r22.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0) | (r22.u64 & 0xFFFFFFFF0000000F);
	// stw r22,32(r31)
	REX_STORE_U32(r31.u32 + 32, r22.u32);
	// b 0x82222d98
	goto loc_82222D98;
loc_82222D38:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// b 0x82222d98
	goto loc_82222D98;
loc_82222D44:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82222d84
	if (!ctx.cr6.eq) goto loc_82222D84;
	// rlwinm. r10,r28,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82222d84
	if (!ctx.cr0.eq) goto loc_82222D84;
	// rlwinm r10,r28,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x600;
	// cmpwi cr6,r10,1536
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1536, ctx.xer);
	// bne cr6,0x82222d84
	if (!ctx.cr6.eq) goto loc_82222D84;
	// rlwinm r10,r28,0,19,20
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1800;
	// cmpwi cr6,r10,6144
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6144, ctx.xer);
	// bne cr6,0x82222d84
	if (!ctx.cr6.eq) goto loc_82222D84;
	// rlwinm r10,r28,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x6000;
	// cmpwi cr6,r10,24576
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24576, ctx.xer);
	// bne cr6,0x82222d84
	if (!ctx.cr6.eq) goto loc_82222D84;
	// rlwinm. r10,r28,0,15,16
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x18000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82222d84
	if (!ctx.cr0.eq) goto loc_82222D84;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_82222D84:
	// rlwimi r11,r8,4,22,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3F0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,16,6,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
loc_82222D98:
	// mulli r11,r3,5120
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(5120));
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// stw r3,0(r21)
	REX_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// stw r7,0(r20)
	REX_STORE_U32(r20.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_8222E1D0) {
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
	// rlwinm r11,r4,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r10,-8531
	ctx.r10.s64 = -559087616;
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// ori r10,r10,48879
	ctx.r10.u64 = ctx.r10.u64 | 48879;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82213768
	ctx.lr = 0x8222E228;
	sub_82213768(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222F888) {
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
	ctx.lr = 0x8222F890;
	// stwu r1,-2320(r1)
	ea = -2320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,24380(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 24380);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r3,23772
	r31.s64 = ctx.r3.s64 + 23772;
	// li r27,0
	r27.s64 = 0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222fc10
	if (ctx.cr0.eq) goto loc_8222FC10;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8222fbe8
	if (ctx.cr6.eq) goto loc_8222FBE8;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r28,-1
	r28.s64 = -1;
	// beq 0x8222f9d8
	if (ctx.cr0.eq) goto loc_8222F9D8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222f8d4
	if (ctx.cr0.eq) goto loc_8222F8D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8220aa00
	ctx.lr = 0x8222F8D4;
	sub_8220AA00(ctx, base);
loc_8222F8D4:
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r3,588(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 588);
	// bl 0x82213cf8
	ctx.lr = 0x8222F8E0;
	sub_82213CF8(ctx, base);
	// lis r8,-32161
	ctx.r8.s64 = -2107703296;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r8,r8,6656
	ctx.r8.s64 = ctx.r8.s64 + 6656;
	// addi r29,r11,11008
	r29.s64 = ctx.r11.s64 + 11008;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_8222F8F8:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8222f8f8
	if (!ctx.cr0.eq) goto loc_8222F8F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r10,6144
	ctx.r10.s64 = 6144;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// blt cr6,0x8222f930
	if (ctx.cr6.lt) goto loc_8222F930;
	// li r10,14
	ctx.r10.s64 = 14;
loc_8222F930:
	// lwz r11,584(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mulli r9,r10,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lwz r6,596(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 596);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 12);
	// lwz r5,380(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 380);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r6,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0x3F;
	// rlwinm r4,r4,2,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-25768
	ctx.r7.s64 = -1688731648;
	// lwzx r4,r4,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + r31.u32);
	// rlwinm r24,r6,4,30,31
	r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0x3;
	// ori r25,r7,59162
	r25.u64 = ctx.r7.u64 | 59162;
	// stw r5,356(r31)
	REX_STORE_U32(r31.u32 + 356, ctx.r5.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// stw r27,360(r31)
	REX_STORE_U32(r31.u32 + 360, r27.u32);
	// rlwinm r23,r9,9,0,22
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// lwzx r3,r8,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r24.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bl 0x822098d0
	ctx.lr = 0x8222F9A0;
	sub_822098D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222f7d0
	ctx.lr = 0x8222F9AC;
	sub_8222F7D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x8220aa00
	ctx.lr = 0x8222F9B8;
	sub_8220AA00(ctx, base);
	// lis r30,-32161
	r30.s64 = -2107703296;
	// b 0x8222f9c8
	goto loc_8222F9C8;
loc_8222F9C0:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823cd320
	ctx.lr = 0x8222F9C8;
	sub_823CD320(ctx, base);
loc_8222F9C8:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,6664(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 6664);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222f9c0
	if (!ctx.cr6.eq) goto loc_8222F9C0;
loc_8222F9D8:
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rlwinm. r11,r11,0,12,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222fa50
	if (ctx.cr0.eq) goto loc_8222FA50;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
loc_8222F9F0:
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222fa20
	if (!ctx.cr0.eq) goto loc_8222FA20;
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222fa20
	if (ctx.cr6.lt) goto loc_8222FA20;
	// ble cr6,0x8222fa18
	if (!ctx.cr6.gt) goto loc_8222FA18;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8222fa24
	goto loc_8222FA24;
loc_8222FA18:
	// lwz r4,380(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 380);
	// b 0x8222fa24
	goto loc_8222FA24;
loc_8222FA20:
	// lwz r4,168(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 168);
loc_8222FA24:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x823cd720
	ctx.lr = 0x8222FA34;
	sub_823CD720(ctx, base);
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// bl 0x823cd678
	ctx.lr = 0x8222FA3C;
	sub_823CD678(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3F;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8222f9f0
	if (ctx.cr6.lt) goto loc_8222F9F0;
loc_8222FA50:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824d45fc
	ctx.lr = 0x8222FA58;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lwz r11,604(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 604);
	// srawi. r11,r11,29
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 29;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222fa70
	if (!ctx.cr0.eq) goto loc_8222FA70;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8884
	ctx.r10.u64 = ctx.r10.u64 | 8884;
	// b 0x8222fa94
	goto loc_8222FA94;
loc_8222FA70:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8222fa84
	if (!ctx.cr6.eq) goto loc_8222FA84;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8885
	ctx.r10.u64 = ctx.r10.u64 | 8885;
	// b 0x8222fa94
	goto loc_8222FA94;
loc_8222FA84:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8222fa98
	if (!ctx.cr6.eq) goto loc_8222FA98;
	// lis r10,21415
	ctx.r10.s64 = 1403453440;
	// ori r10,r10,8886
	ctx.r10.u64 = ctx.r10.u64 | 8886;
loc_8222FA94:
	// stw r10,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_8222FA98:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// beq cr6,0x8222fad8
	if (ctx.cr6.eq) goto loc_8222FAD8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8222fad8
	if (ctx.cr6.eq) goto loc_8222FAD8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8222faf8
	if (!ctx.cr6.eq) goto loc_8222FAF8;
	// li r10,400
	ctx.r10.s64 = 400;
	// li r11,224
	ctx.r11.s64 = 224;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r11,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r11.u32);
	// stw r10,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// stw r11,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// b 0x8222faf8
	goto loc_8222FAF8;
loc_8222FAD8:
	// lhz r11,368(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 368);
	// lhz r10,370(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 370);
	// lhz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 168);
	// lhz r8,170(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// stw r9,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r9.u32);
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
loc_8222FAF8:
	// bl 0x824d451c
	ctx.lr = 0x8222FAFC;
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r11,596(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r3,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm. r8,r11,6,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r27,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r27.u32);
	// rlwinm r10,r11,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3F;
	// beq 0x8222fb20
	if (ctx.cr0.eq) goto loc_8222FB20;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_8222FB20:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222fb30
	if (ctx.cr0.eq) goto loc_8222FB30;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_8222FB30:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222fb40
	if (ctx.cr0.eq) goto loc_8222FB40;
	// lwz r4,592(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 592);
	// b 0x8222fb44
	goto loc_8222FB44;
loc_8222FB40:
	// addi r4,r26,15408
	ctx.r4.s64 = r26.s64 + 15408;
loc_8222FB44:
	// lbz r11,101(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8222fb68
	if (!ctx.cr6.eq) goto loc_8222FB68;
	// ori r11,r9,4
	ctx.r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// bl 0x82217690
	ctx.lr = 0x8222FB64;
	sub_82217690(ctx, base);
	// b 0x8222fb6c
	goto loc_8222FB6C;
loc_8222FB68:
	// bl 0x822175f8
	ctx.lr = 0x8222FB6C;
	sub_822175F8(ctx, base);
loc_8222FB6C:
	// lwz r30,596(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// rlwinm. r11,r30,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r26,14128
	ctx.r4.s64 = r26.s64 + 14128;
	// bne 0x8222fb88
	if (!ctx.cr0.eq) goto loc_8222FB88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_8222FB88:
	// bl 0x822d4fa0
	ctx.lr = 0x8222FB8C;
	sub_822D4FA0(ctx, base);
	// lbz r11,608(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 608);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222fba8
	if (ctx.cr0.eq) goto loc_8222FBA8;
	// rlwinm r10,r30,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x3F;
	// lwz r11,380(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 380);
	// stw r10,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r10.u32);
	// b 0x8222fbb0
	goto loc_8222FBB0;
loc_8222FBA8:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r27,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, r27.u32);
loc_8222FBB0:
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// stw r27,356(r31)
	REX_STORE_U32(r31.u32 + 356, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,360(r31)
	REX_STORE_U32(r31.u32 + 360, r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// bl 0x822098d0
	ctx.lr = 0x8222FBD4;
	sub_822098D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x8220aa00
	ctx.lr = 0x8222FBE0;
	sub_8220AA00(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 364);
	// bl 0x82208848
	ctx.lr = 0x8222FBE8;
	sub_82208848(ctx, base);
loc_8222FBE8:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_8222FBF0:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8222fc10
	if (ctx.cr6.eq) goto loc_8222FC10;
	// bl 0x82208848
	ctx.lr = 0x8222FC00;
	sub_82208848(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,41
	ctx.cr6.compare<uint32_t>(r30.u32, 41, ctx.xer);
	// blt cr6,0x8222fbf0
	if (ctx.cr6.lt) goto loc_8222FBF0;
loc_8222FC10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1444(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222fc40
	if (ctx.cr6.eq) goto loc_8222FC40;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fc6c
	if (ctx.cr6.eq) goto loc_8222FC6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fc6c
	if (ctx.cr6.eq) goto loc_8222FC6C;
	// b 0x8222fc58
	goto loc_8222FC58;
loc_8222FC40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1572);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fc6c
	if (ctx.cr6.eq) goto loc_8222FC6C;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_8222FC58:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-17600
	ctx.r4.s64 = ctx.r10.s64 + -17600;
	// bctrl 
	ctx.lr = 0x8222FC6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8222FC6C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8222efb0
	ctx.lr = 0x8222FC74;
	sub_8222EFB0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r3,r11,11032
	ctx.r3.s64 = ctx.r11.s64 + 11032;
	// bl 0x824d46dc
	ctx.lr = 0x8222FC80;
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// addi r7,r8,-5890
	ctx.r7.s64 = ctx.r8.s64 + -5890;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stb r27,-5890(r8)
	REX_STORE_U8(ctx.r8.u32 + -5890, r27.u8);
	// stb r27,-2(r7)
	REX_STORE_U8(ctx.r7.u32 + -2, r27.u8);
	// stb r27,-1(r7)
	REX_STORE_U8(ctx.r7.u32 + -1, r27.u8);
	// addi r1,r1,2320
	ctx.r1.s64 = ctx.r1.s64 + 2320;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82245338) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// b 0x82256c60
	sub_82256C60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822453B8) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r5,4
	ctx.r4.s64 = ctx.r5.s64 + 4;
	// b 0x82256da0
	sub_82256DA0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822455D0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245678
	if (ctx.cr6.eq) goto loc_82245678;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82245644
	if (ctx.cr6.eq) goto loc_82245644;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x82245670
	if (!ctx.cr6.eq) goto loc_82245670;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r7,r3,20
	ctx.r7.s64 = ctx.r3.s64 + 20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82245670
	if (!ctx.cr6.eq) goto loc_82245670;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245670
	if (ctx.cr6.eq) goto loc_82245670;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x822830c0
	ctx.lr = 0x82245638;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245670
	if (!ctx.cr0.lt) goto loc_82245670;
	// b 0x822456e0
	goto loc_822456E0;
loc_82245644:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82245670
	if (!ctx.cr6.eq) goto loc_82245670;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82245670
	if (ctx.cr6.eq) goto loc_82245670;
	// bl 0x82282a68
	ctx.lr = 0x82245668;
	sub_82282A68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
loc_82245670:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822456e0
	goto loc_822456E0;
loc_82245678:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r31,20
	ctx.r7.s64 = r31.s64 + 20;
	// stw r11,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822456b8
	if (!ctx.cr6.eq) goto loc_822456B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822456b8
	if (ctx.cr6.eq) goto loc_822456B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822830c0
	ctx.lr = 0x822456B0;
	sub_822830C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822456e0
	if (ctx.cr0.lt) goto loc_822456E0;
loc_822456B8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r6,24(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822627e0
	ctx.lr = 0x822456E0;
	sub_822627E0(ctx, base);
loc_822456E0:
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

DEFINE_REX_FUNC(sub_82247338) {
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
	ctx.lr = 0x82247350;
	sub_82246220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247388
	if (ctx.cr0.lt) goto loc_82247388;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247380
	if (ctx.cr6.eq) goto loc_82247380;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x82247380
	if (!ctx.cr6.eq) goto loc_82247380;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x822472a8
	ctx.lr = 0x8224737C;
	sub_822472A8(ctx, base);
	// b 0x82247388
	goto loc_82247388;
loc_82247380:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247388:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822480C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822480C8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-10672
	r31.s64 = ctx.r11.s64 + -10672;
	// lwz r11,24696(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 24696);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822481a4
	if (!ctx.cr0.eq) goto loc_822481A4;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-4680
	ctx.r9.s64 = ctx.r10.s64 + -4680;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,24696(r8)
	REX_STORE_U32(ctx.r8.u32 + 24696, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x82248124;
	sub_8225A078(ctx, base);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// addi r9,r9,-32656
	ctx.r9.s64 = ctx.r9.s64 + -32656;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r9,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-4720
	ctx.r9.s64 = ctx.r11.s64 + -4720;
	// std r30,40(r31)
	REX_STORE_U64(r31.u32 + 40, r30.u64);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// addi r11,r31,40
	ctx.r11.s64 = r31.s64 + 40;
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x82248180;
	sub_8225A078(ctx, base);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// std r30,88(r31)
	REX_STORE_U64(r31.u32 + 88, r30.u64);
	// addi r11,r31,88
	ctx.r11.s64 = r31.s64 + 88;
loc_822481A4:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224B340) {
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
	// addi r31,r11,25308
	r31.s64 = ctx.r11.s64 + 25308;
	// lwz r11,25328(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25328);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224b388
	if (!ctx.cr0.eq) goto loc_8224B388;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,25328(r10)
	REX_STORE_U32(ctx.r10.u32 + 25328, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227ad08
	ctx.lr = 0x8224B37C;
	sub_8227AD08(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,14984
	ctx.r3.s64 = ctx.r11.s64 + 14984;
	// bl 0x822d5848
	ctx.lr = 0x8224B388;
	sub_822D5848(ctx, base);
loc_8224B388:
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

DEFINE_REX_FUNC(sub_8224C8B0) {
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
	// addi r31,r11,26080
	r31.s64 = ctx.r11.s64 + 26080;
	// lwz r11,26100(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 26100);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224c8f8
	if (!ctx.cr0.eq) goto loc_8224C8F8;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,26100(r10)
	REX_STORE_U32(ctx.r10.u32 + 26100, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227ad18
	ctx.lr = 0x8224C8EC;
	sub_8227AD18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15336
	ctx.r3.s64 = ctx.r11.s64 + 15336;
	// bl 0x822d5848
	ctx.lr = 0x8224C8F8;
	sub_822D5848(ctx, base);
loc_8224C8F8:
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

DEFINE_REX_FUNC(sub_8224DF28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224DF30;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,36
	ctx.r3.s64 = 36;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224DF44;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8224df60
	if (ctx.cr0.eq) goto loc_8224DF60;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// bl 0x8224b3a0
	ctx.lr = 0x8224DF5C;
	sub_8224B3A0(ctx, base);
	// b 0x8224df64
	goto loc_8224DF64;
loc_8224DF60:
	// li r31,0
	r31.s64 = 0;
loc_8224DF64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8224df78
	if (!ctx.cr6.eq) goto loc_8224DF78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224df84
	goto loc_8224DF84;
loc_8224DF78:
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	REX_STORE_U32(r29.u32 + 0, r31.u32);
loc_8224DF84:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8224F630) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8224F638;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32163
	ctx.r8.s64 = -2107834368;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,26784
	r31.s64 = ctx.r11.s64 + 26784;
	// lwz r11,27120(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 27120);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8224f8bc
	if (!ctx.cr0.eq) goto loc_8224F8BC;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r9,r10,-3688
	ctx.r9.s64 = ctx.r10.s64 + -3688;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,27120(r8)
	REX_STORE_U32(ctx.r8.u32 + 27120, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,12(r31)
	REX_STORE_U32(r31.u32 + 12, r30.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// bl 0x8224b198
	ctx.lr = 0x8224F694;
	sub_8224B198(ctx, base);
	// stw r3,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// addi r9,r11,-3720
	ctx.r9.s64 = ctx.r11.s64 + -3720;
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r9,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r9.u32);
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r10,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,48(r31)
	REX_STORE_U32(r31.u32 + 48, r30.u32);
	// addi r11,r31,28
	ctx.r11.s64 = r31.s64 + 28;
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r9,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r9.u32);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
	// bl 0x8224b208
	ctx.lr = 0x8224F6E4;
	sub_8224B208(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,80(r31)
	REX_STORE_U32(r31.u32 + 80, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,84(r31)
	REX_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r9,r11,-3740
	ctx.r9.s64 = ctx.r11.s64 + -3740;
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r30,92(r31)
	REX_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r9,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r9.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r10,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,108(r31)
	REX_STORE_U32(r31.u32 + 108, r30.u32);
	// addi r11,r31,76
	ctx.r11.s64 = r31.s64 + 76;
	// stw r9,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// bl 0x8224b278
	ctx.lr = 0x8224F738;
	sub_8224B278(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,124(r31)
	REX_STORE_U32(r31.u32 + 124, r30.u32);
	// addi r9,r9,31456
	ctx.r9.s64 = ctx.r9.s64 + 31456;
	// stw r30,128(r31)
	REX_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r3,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r9.u32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// std r30,136(r31)
	REX_STORE_U64(r31.u32 + 136, r30.u64);
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// stw r10,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r10.u32);
	// addi r9,r8,-3752
	ctx.r9.s64 = ctx.r8.s64 + -3752;
	// stw r30,144(r31)
	REX_STORE_U32(r31.u32 + 144, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r9,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r9.u32);
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// stw r10,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r10.u32);
	// bl 0x8224dc30
	ctx.lr = 0x8224F794;
	sub_8224DC30(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// addi r9,r9,29496
	ctx.r9.s64 = ctx.r9.s64 + 29496;
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// stw r9,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-3772
	ctx.r9.s64 = ctx.r11.s64 + -3772;
	// std r30,184(r31)
	REX_STORE_U64(r31.u32 + 184, r30.u64);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r10,196(r31)
	REX_STORE_U32(r31.u32 + 196, ctx.r10.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,192(r31)
	REX_STORE_U32(r31.u32 + 192, ctx.r11.u32);
	// stw r30,204(r31)
	REX_STORE_U32(r31.u32 + 204, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r9,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r9.u32);
	// addi r11,r31,184
	ctx.r11.s64 = r31.s64 + 184;
	// stw r10,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r10.u32);
	// bl 0x8224b2e0
	ctx.lr = 0x8224F7F4;
	sub_8224B2E0(ctx, base);
	// lis r9,-32220
	ctx.r9.s64 = -2111569920;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,220(r31)
	REX_STORE_U32(r31.u32 + 220, r30.u32);
	// addi r9,r9,31552
	ctx.r9.s64 = ctx.r9.s64 + 31552;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r3.u32);
	// stw r9,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r9.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,-3808
	ctx.r9.s64 = ctx.r11.s64 + -3808;
	// std r30,232(r31)
	REX_STORE_U64(r31.u32 + 232, r30.u64);
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r9,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,240(r31)
	REX_STORE_U32(r31.u32 + 240, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,252(r31)
	REX_STORE_U32(r31.u32 + 252, r30.u32);
	// addi r11,r31,232
	ctx.r11.s64 = r31.s64 + 232;
	// stw r9,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r9.u32);
	// stw r10,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r10.u32);
	// bl 0x8224b340
	ctx.lr = 0x8224F850;
	sub_8224B340(ctx, base);
	// stw r3,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r3.u32);
	// stw r30,268(r31)
	REX_STORE_U32(r31.u32 + 268, r30.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r30,272(r31)
	REX_STORE_U32(r31.u32 + 272, r30.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r30,276(r31)
	REX_STORE_U32(r31.u32 + 276, r30.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r30,280(r31)
	REX_STORE_U32(r31.u32 + 280, r30.u32);
	// addi r8,r11,-4628
	ctx.r8.s64 = ctx.r11.s64 + -4628;
	// stw r30,284(r31)
	REX_STORE_U32(r31.u32 + 284, r30.u32);
	// stw r10,292(r31)
	REX_STORE_U32(r31.u32 + 292, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r30,288(r31)
	REX_STORE_U32(r31.u32 + 288, r30.u32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r30,300(r31)
	REX_STORE_U32(r31.u32 + 300, r30.u32);
	// addi r11,r31,268
	ctx.r11.s64 = r31.s64 + 268;
	// stw r9,296(r31)
	REX_STORE_U32(r31.u32 + 296, ctx.r9.u32);
	// stw r8,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r8.u32);
	// stw r10,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r10.u32);
	// bl 0x8225a078
	ctx.lr = 0x8224F8A0;
	sub_8225A078(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(r31.u32 + 312, ctx.r3.u32);
	// stw r30,316(r31)
	REX_STORE_U32(r31.u32 + 316, r30.u32);
	// addi r11,r31,316
	ctx.r11.s64 = r31.s64 + 316;
	// stw r30,320(r31)
	REX_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	REX_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	REX_STORE_U32(r31.u32 + 332, r30.u32);
loc_8224F8BC:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822586E0) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8225870c
	if (!ctx.cr6.eq) goto loc_8225870C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82258778
	goto loc_82258778;
loc_8225870C:
	// li r31,0
	r31.s64 = 0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// lwz r4,23556(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23556);
	// bl 0x82246920
	ctx.lr = 0x82258720;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82258734
	if (!ctx.cr0.eq) goto loc_82258734;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// b 0x82258778
	goto loc_82258778;
loc_82258734:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x82256990
	ctx.lr = 0x82258740;
	sub_82256990(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x82258758
	if (!ctx.cr6.eq) goto loc_82258758;
loc_8225874C:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x82258778
	goto loc_82258778;
loc_82258758:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,23560(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23560);
	// bl 0x82246920
	ctx.lr = 0x82258768;
	sub_82246920(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225874c
	if (ctx.cr0.eq) goto loc_8225874C;
	// stw r31,0(r30)
	REX_STORE_U32(r30.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82258778:
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

DEFINE_REX_FUNC(sub_8225C658) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8225C660;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r31,24(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// b 0x8225c69c
	goto loc_8225C69C;
loc_8225C67C:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8225c698
	if (ctx.cr6.eq) goto loc_8225C698;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d7938
	ctx.lr = 0x8225C690;
	sub_822D7938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c6b4
	if (ctx.cr0.eq) goto loc_8225C6B4;
loc_8225C698:
	// lwz r31,32(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 32);
loc_8225C69C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8225c67c
	if (!ctx.cr6.eq) goto loc_8225C67C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
loc_8225C6AC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8225C6B4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x8225C6BC;
	sub_822469C0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225c6ac
	goto loc_8225C6AC;
}

DEFINE_REX_FUNC(sub_8225D878) {
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
	// blt cr6,0x8225d8e0
	if (ctx.cr6.lt) goto loc_8225D8E0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8225d8e0
	if (!ctx.cr6.lt) goto loc_8225D8E0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8225d8cc
	if (ctx.cr6.eq) goto loc_8225D8CC;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r10,r4,168
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(168));
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mulli r11,r11,168
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(168));
	// addi r4,r3,168
	ctx.r4.s64 = ctx.r3.s64 + 168;
	// addi r5,r11,-168
	ctx.r5.s64 = ctx.r11.s64 + -168;
	// bl 0x822d6840
	ctx.lr = 0x8225D8CC;
	sub_822D6840(ctx, base);
loc_8225D8CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x8225d8e4
	goto loc_8225D8E4;
loc_8225D8E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225D8E4:
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

DEFINE_REX_FUNC(sub_8225EBD8) {
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
	// bl 0x8225e2c8
	ctx.lr = 0x8225EBFC;
	sub_8225E2C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EC08;
	sub_8224DA00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
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

DEFINE_REX_FUNC(sub_82260088) {
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
	// bl 0x8225feb0
	ctx.lr = 0x822600A8;
	sub_8225FEB0(ctx, base);
	// lfs f0,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,104(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f0,108(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// lfs f0,112(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// lfs f0,116(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f0,120(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// lfs f0,124(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// lfs f0,128(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// lfs f0,132(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 32, temp.u32);
	// lfs f0,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 36, temp.u32);
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 40, temp.u32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// lfs f0,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 48, temp.u32);
	// lfs f0,152(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 52, temp.u32);
	// lfs f0,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 56, temp.u32);
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 60, temp.u32);
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

DEFINE_REX_FUNC(sub_82266B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82266B80;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82266bf8
	if (ctx.cr6.eq) goto loc_82266BF8;
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82266be4
	if (ctx.cr6.eq) goto loc_82266BE4;
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// bne cr6,0x82266c40
	if (!ctx.cr6.eq) goto loc_82266C40;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// addi r30,r31,168
	r30.s64 = r31.s64 + 168;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82266bc0
	if (ctx.cr6.eq) goto loc_82266BC0;
	// bl 0x82255b70
	ctx.lr = 0x82266BBC;
	sub_82255B70(ctx, base);
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
loc_82266BC0:
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256918
	ctx.lr = 0x82266BD0;
	sub_82256918(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,248(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x822635f0
	ctx.lr = 0x82266BE0;
	sub_822635F0(ctx, base);
	// b 0x82266c40
	goto loc_82266C40;
loc_82266BE4:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82266c40
	if (!ctx.cr6.eq) goto loc_82266C40;
loc_82266BF8:
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82266c1c
	if (ctx.cr6.eq) goto loc_82266C1C;
	// bl 0x82255b70
	ctx.lr = 0x82266C0C;
	sub_82255B70(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,168(r31)
	REX_STORE_U32(r31.u32 + 168, r29.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82266C1C:
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82266c40
	if (ctx.cr6.eq) goto loc_82266C40;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82289098
	ctx.lr = 0x82266C30;
	sub_82289098(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r29,172(r31)
	REX_STORE_U32(r31.u32 + 172, r29.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
loc_82266C40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8226BD68) {
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
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// lfs f30,2388(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2388);
	f30.f64 = double(temp.f32);
	// bne cr6,0x8226be18
	if (!ctx.cr6.eq) goto loc_8226BE18;
	// lfs f0,168(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8226be18
	if (ctx.cr6.eq) goto loc_8226BE18;
	// bl 0x822094c8
	ctx.lr = 0x8226BDB4;
	sub_822094C8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lfs f13,72(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x8226bde0
	if (!ctx.cr6.lt) goto loc_8226BDE0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x8226bdec
	goto loc_8226BDEC;
loc_8226BDE0:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_8226BDEC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226be00
	if (!ctx.cr6.gt) goto loc_8226BE00;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_8226BE00:
	// fmuls f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * f30.f64));
	// lfs f12,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// b 0x8226be24
	goto loc_8226BE24;
loc_8226BE18:
	// lfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_8226BE24:
	// stfs f13,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8226be98
	if (!ctx.cr6.gt) goto loc_8226BE98;
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x8226bf0c
	if (ctx.cr6.lt) goto loc_8226BF0C;
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x82278790
	ctx.lr = 0x8226BE54;
	sub_82278790(ctx, base);
	// lfs f0,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - f30.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r11.u8);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8226be80
	if (!ctx.cr6.gt) goto loc_8226BE80;
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8226be80
	if (!ctx.cr6.lt) goto loc_8226BE80;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226BE80:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// b 0x8226bf04
	goto loc_8226BF04;
loc_8226BE98:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8226bf14
	if (!ctx.cr6.lt) goto loc_8226BF14;
	// lfs f0,160(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,156(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8226bf0c
	if (ctx.cr6.gt) goto loc_8226BF0C;
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 156, temp.u32);
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// stfs f31,168(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x82278790
	ctx.lr = 0x8226BEC8;
	sub_82278790(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,156(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// stb r11,188(r31)
	REX_STORE_U8(r31.u32 + 188, ctx.r11.u8);
	// lfs f13,16808(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16808);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226bef0
	if (!ctx.cr6.gt) goto loc_8226BEF0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x8226bef0
	if (!ctx.cr6.lt) goto loc_8226BEF0;
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226BEF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_8226BF04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822650b0
	ctx.lr = 0x8226BF0C;
	sub_822650B0(ctx, base);
loc_8226BF0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226b6f8
	ctx.lr = 0x8226BF14;
	sub_8226B6F8(ctx, base);
loc_8226BF14:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8226bfb0
	if (!ctx.cr6.eq) goto loc_8226BFB0;
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// beq cr6,0x8226bfb0
	if (ctx.cr6.eq) goto loc_8226BFB0;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x8226bf6c
	if (!ctx.cr6.gt) goto loc_8226BF6C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f13,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// blt cr6,0x8226bfac
	if (ctx.cr6.lt) goto loc_8226BFAC;
	// b 0x8226bfa8
	goto loc_8226BFA8;
loc_8226BF6C:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8226bfb0
	if (!ctx.cr6.lt) goto loc_8226BFB0;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lfs f12,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,176(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bgt cr6,0x8226bfac
	if (ctx.cr6.gt) goto loc_8226BFAC;
loc_8226BFA8:
	// fadds f12,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_8226BFAC:
	// stfs f12,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
loc_8226BFB0:
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

DEFINE_REX_FUNC(sub_822785D8) {
	REX_FUNC_PROLOGUE();
	// b 0x82278550
	sub_82278550(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822785E0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30028(r10)
	REX_STORE_U32(ctx.r10.u32 + 30028, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82278A08) {
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
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82278a34
	if (ctx.cr6.eq) goto loc_82278A34;
loc_82278A2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82278a5c
	goto loc_82278A5C;
loc_82278A34:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82278a2c
	if (!ctx.cr6.lt) goto loc_82278A2C;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82278A58;
	sub_822D4FA0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82278A5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227A778) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8227a7bc
	if (ctx.cr6.eq) goto loc_8227A7BC;
	// lis r4,-21829
	ctx.r4.s64 = -1430585344;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r4,52445
	ctx.r4.u64 = ctx.r4.u64 | 52445;
	// bl 0x822786c8
	ctx.lr = 0x8227A7B0;
	sub_822786C8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
loc_8227A7BC:
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

DEFINE_REX_FUNC(sub_8227AE88) {
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
	// bl 0x8227ad60
	ctx.lr = 0x8227AEA8;
	sub_8227AD60(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8227BF88) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227C388) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8227C390;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227c3e0
	if (ctx.cr6.eq) goto loc_8227C3E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8227c3d4
	if (!ctx.cr6.gt) goto loc_8227C3D4;
loc_8227C3B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227c308
	ctx.lr = 0x8227C3C4;
	sub_8227C308(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8227c3b8
	if (ctx.cr6.lt) goto loc_8227C3B8;
loc_8227C3D4:
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82255b70
	ctx.lr = 0x8227C3DC;
	sub_82255B70(ctx, base);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
loc_8227C3E0:
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8227D288) {
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
	ctx.lr = 0x8227D290;
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8227d384
	if (ctx.cr6.lt) goto loc_8227D384;
	// lis r11,2340
	ctx.r11.s64 = 153354240;
	// ori r11,r11,37449
	ctx.r11.u64 = ctx.r11.u64 | 37449;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8227d384
	if (!ctx.cr6.lt) goto loc_8227D384;
	// lis r11,3276
	ctx.r11.s64 = 214695936;
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8227d384
	if (!ctx.cr6.lt) goto loc_8227D384;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x8227d384
	if (ctx.cr6.lt) goto loc_8227D384;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8227d2f4
	if (!ctx.cr6.gt) goto loc_8227D2F4;
	// mulli r11,r3,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(20));
	// li r10,-1
	ctx.r10.s64 = -1;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r10,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8227d384
	if (!ctx.cr6.lt) goto loc_8227D384;
loc_8227D2F4:
	// mulli r11,r25,20
	ctx.r11.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(20));
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mullw r3,r11,r30
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// bl 0x82255b48
	ctx.lr = 0x8227D304;
	sub_82255B48(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x8227d384
	if (ctx.cr0.eq) goto loc_8227D384;
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(28));
	// add r29,r11,r27
	r29.u64 = ctx.r11.u64 + r27.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// ble cr6,0x8227d37c
	if (!ctx.cr6.gt) goto loc_8227D37C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r27,20
	r31.s64 = r27.s64 + 20;
	// li r26,0
	r26.s64 = 0;
	// lfs f31,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8227D330:
	// stw r26,-20(r31)
	REX_STORE_U32(r31.u32 + -20, r26.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r26,-16(r31)
	REX_STORE_U32(r31.u32 + -16, r26.u32);
	// stfs f31,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -12, temp.u32);
	// stfs f31,-8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -8, temp.u32);
	// stfs f31,-4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stw r26,4(r31)
	REX_STORE_U32(r31.u32 + 4, r26.u32);
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// ble cr6,0x8227d370
	if (!ctx.cr6.gt) goto loc_8227D370;
	// mr r28,r25
	r28.u64 = r25.u64;
loc_8227D35C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227acf8
	ctx.lr = 0x8227D364;
	sub_8227ACF8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// bne 0x8227d35c
	if (!ctx.cr0.eq) goto loc_8227D35C;
loc_8227D370:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bne 0x8227d330
	if (!ctx.cr0.eq) goto loc_8227D330;
loc_8227D37C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x8227d388
	goto loc_8227D388;
loc_8227D384:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8227D388:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82280C78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280c90
	if (ctx.cr6.eq) goto loc_82280C90;
	// lwz r10,76(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x82280c98
	goto loc_82280C98;
loc_82280C90:
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// stw r11,204(r3)
	REX_STORE_U32(ctx.r3.u32 + 204, ctx.r11.u32);
loc_82280C98:
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280cb0
	if (ctx.cr6.eq) goto loc_82280CB0;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// b 0x82280cb8
	goto loc_82280CB8;
loc_82280CB0:
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// stw r11,208(r3)
	REX_STORE_U32(ctx.r3.u32 + 208, ctx.r11.u32);
loc_82280CB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,76(r4)
	REX_STORE_U32(ctx.r4.u32 + 76, ctx.r11.u32);
	// stw r11,80(r4)
	REX_STORE_U32(ctx.r4.u32 + 80, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82282A98) {
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
	ctx.lr = 0x82282AA0;
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x82282d9c
	if (ctx.cr6.eq) goto loc_82282D9C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282d9c
	if (ctx.cr6.eq) goto loc_82282D9C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82282d9c
	if (ctx.cr6.eq) goto loc_82282D9C;
	// lbz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282b0c
	if (ctx.cr0.eq) goto loc_82282B0C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82282da4
	goto loc_82282DA4;
loc_82282B0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822554f0
	ctx.lr = 0x82282B14;
	sub_822554F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82282d80
	if (ctx.cr0.lt) goto loc_82282D80;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82255450
	ctx.lr = 0x82282B24;
	sub_82255450(ctx, base);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// stfs f31,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// lbz r10,-6912(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -6912);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// beq 0x82282b58
	if (ctx.cr0.eq) goto loc_82282B58;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82282B58:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r28,r31,36
	r28.s64 = r31.s64 + 36;
	// addi r27,r11,30496
	r27.s64 = ctx.r11.s64 + 30496;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282B8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82282d80
	if (ctx.cr0.lt) goto loc_82282D80;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// stb r26,40(r31)
	REX_STORE_U8(r31.u32 + 40, r26.u8);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82282bcc
	if (ctx.cr6.eq) goto loc_82282BCC;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282bcc
	if (ctx.cr0.eq) goto loc_82282BCC;
	// addi r7,r31,28
	ctx.r7.s64 = r31.s64 + 28;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822830c0
	ctx.lr = 0x82282BCC;
	sub_822830C0(ctx, base);
loc_82282BCC:
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82282BEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82282d80
	if (ctx.cr0.lt) goto loc_82282D80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lfs f0,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// b 0x82282c34
	goto loc_82282C34;
loc_82282C18:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82282c2c
	if (ctx.cr6.gt) goto loc_82282C2C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82282C2C:
	// stfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_82282C34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282c18
	if (!ctx.cr6.eq) goto loc_82282C18;
	// bl 0x822d60f0
	ctx.lr = 0x82282C40;
	sub_822D60F0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// lfs f1,244(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 244);
	ctx.f1.f64 = double(temp.f32);
	// sth r11,56(r31)
	REX_STORE_U16(r31.u32 + 56, ctx.r11.u16);
	// bl 0x822d60f0
	ctx.lr = 0x82282C5C;
	sub_822D60F0(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U8(r27.u32 + 0);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// sth r10,48(r31)
	REX_STORE_U16(r31.u32 + 48, ctx.r10.u16);
	// beq 0x82282d68
	if (ctx.cr0.eq) goto loc_82282D68;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2348(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2348);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x82282c90
	if (!ctx.cr6.lt) goto loc_82282C90;
	// li r11,128
	ctx.r11.s64 = 128;
	// b 0x82282ca8
	goto loc_82282CA8;
loc_82282C90:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-8496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8496);
	ctx.f0.f64 = double(temp.f32);
	// li r11,256
	ctx.r11.s64 = 256;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x82282ca8
	if (ctx.cr6.lt) goto loc_82282CA8;
	// li r11,512
	ctx.r11.s64 = 512;
loc_82282CA8:
	// sth r11,70(r31)
	REX_STORE_U16(r31.u32 + 70, ctx.r11.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,72(r31)
	REX_STORE_U16(r31.u32 + 72, ctx.r11.u16);
	// bl 0x82281e70
	ctx.lr = 0x82282CB8;
	sub_82281E70(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// blt 0x82282d80
	if (ctx.cr0.lt) goto loc_82282D80;
	// lhz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 72);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lhz r9,70(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f13,216(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 216, temp.u32);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,220(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 220, temp.u32);
	// bl 0x822825e8
	ctx.lr = 0x82282D1C;
	sub_822825E8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82282d38
	if (ctx.cr0.eq) goto loc_82282D38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822820a0
	ctx.lr = 0x82282D30;
	sub_822820A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r26,84(r29)
	REX_STORE_U8(r29.u32 + 84, r26.u8);
loc_82282D38:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-2
	ctx.r4.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822825e8
	ctx.lr = 0x82282D4C;
	sub_822825E8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82282d68
	if (ctx.cr0.eq) goto loc_82282D68;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822820a0
	ctx.lr = 0x82282D60;
	sub_822820A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r26,84(r29)
	REX_STORE_U8(r29.u32 + 84, r26.u8);
loc_82282D68:
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,30516
	ctx.r3.s64 = ctx.r11.s64 + 30516;
	// bl 0x82282580
	ctx.lr = 0x82282D78;
	sub_82282580(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x82282d8c
	if (!ctx.cr6.lt) goto loc_82282D8C;
loc_82282D80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82281410
	ctx.lr = 0x82282D88;
	sub_82281410(ctx, base);
	// b 0x82282d94
	goto loc_82282D94;
loc_82282D8C:
	// stw r26,12(r31)
	REX_STORE_U32(r31.u32 + 12, r26.u32);
	// stb r26,20(r31)
	REX_STORE_U8(r31.u32 + 20, r26.u8);
loc_82282D94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82282da4
	goto loc_82282DA4;
loc_82282D9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82282DA4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8228FBA0) {
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
	// lwz r3,164(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,12748
	ctx.r11.s64 = ctx.r11.s64 + 12748;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x82255b70
	ctx.lr = 0x8228FBCC;
	sub_82255B70(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 168);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// beq cr6,0x8228fbec
	if (ctx.cr6.eq) goto loc_8228FBEC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82289098
	ctx.lr = 0x8228FBE8;
	sub_82289098(ctx, base);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
loc_8228FBEC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8228f988
	ctx.lr = 0x8228FBF4;
	sub_8228F988(ctx, base);
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

DEFINE_REX_FUNC(sub_82291518) {
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
	ctx.lr = 0x82291520;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,48
	r30.s64 = 48;
	// lvlx128 v63,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r26,64
	r26.s64 = 64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvlx128 v62,r30,r5
	temp.u32 = r30.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvrx128 v61,r26,r5
	temp.u32 = r26.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// li r28,16
	r28.s64 = 16;
	// li r29,32
	r29.s64 = 32;
	// lvrx128 v61,r30,r5
	temp.u32 = r30.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvrx128 v62,r28,r11
	temp.u32 = r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// lvrx128 v60,r29,r11
	temp.u32 = r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v62,r28,r11
	temp.u32 = r28.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx128 v59,r29,r11
	temp.u32 = r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v62,v62,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vor128 v61,v59,v61
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bl 0x822d4fa0
	ctx.lr = 0x822915A0;
	sub_822D4FA0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// ld r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// ld r7,112(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// ld r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// ld r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// ld r10,136(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82290d50
	ctx.lr = 0x822915C4;
	sub_82290D50(ctx, base);
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lvx128 v62,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r28
	ea = r31.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r31,r28
	ea = r31.u32 + r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r29
	ea = r31.u32 + r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v61,r31,r29
	ea = r31.u32 + r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r31,r30
	ea = r31.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvlx128 v60,r31,r30
	ea = r31.u32 + r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r31,r26
	ea = r31.u32 + r26.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// beq cr6,0x82291604
	if (ctx.cr6.eq) goto loc_82291604;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_82291604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8229AA00) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x8229aa8c
	if (!ctx.cr6.gt) goto loc_8229AA8C;
	// addi r11,r4,-257
	ctx.r11.s64 = ctx.r4.s64 + -257;
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
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x8229aaa8
	goto loc_8229AAA8;
loc_8229AA8C:
	// addis r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-257
	ctx.r11.s64 = ctx.r11.s64 + -257;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8229AAA8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// ble cr6,0x8229ab20
	if (!ctx.cr6.gt) goto loc_8229AB20;
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
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
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-11
	ctx.r11.s64 = ctx.r11.s64 + -11;
	// srw r10,r9,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// b 0x8229ab3c
	goto loc_8229AB3C;
loc_8229AB20:
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_8229AB3C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lhz r9,5808(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// ble cr6,0x8229abb0
	if (!ctx.cr6.gt) goto loc_8229ABB0;
	// addi r11,r6,-4
	ctx.r11.s64 = ctx.r6.s64 + -4;
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
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// b 0x8229abc8
	goto loc_8229ABC8;
loc_8229ABB0:
	// addis r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 65536;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_8229ABC8:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8229ac84
	if (!ctx.cr6.gt) goto loc_8229AC84;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r11,14444
	ctx.r8.s64 = ctx.r11.s64 + 14444;
loc_8229ABE4:
	// lbzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,2678(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 2678);
	// ble cr6,0x8229ac64
	if (!ctx.cr6.gt) goto loc_8229AC64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lhz r7,5808(r3)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r5,8(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r5
	REX_STORE_U8(ctx.r6.u32 + ctx.r5.u32, ctx.r11.u8);
	// lbz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// srw r11,r7,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// b 0x8229ac78
	goto loc_8229AC78;
loc_8229AC64:
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// lhz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// stw r7,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r7.u32);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_8229AC78:
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8229abe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8229ABE4;
loc_8229AC84:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x824000c0
	ctx.lr = 0x8229AC90;
	sub_824000C0(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// bl 0x824000c0
	ctx.lr = 0x8229AC9C;
	sub_824000C0(ctx, base);
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

DEFINE_REX_FUNC(sub_822A58E0) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a33c8
	ctx.lr = 0x822A590C;
	sub_822A33C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f2,508(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 508);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,504(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822a1600
	ctx.lr = 0x822A591C;
	sub_822A1600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r4,14
	ctx.r4.s64 = 14;
	// lbz r5,512(r31)
	ctx.r5.u64 = REX_LOAD_U8(r31.u32 + 512);
	// bl 0x822a1098
	ctx.lr = 0x822A592C;
	sub_822A1098(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,452(r30)
	REX_STORE_U32(r30.u32 + 452, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,492(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 492);
	// lwz r6,488(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r5,484(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 484);
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 480);
	// bl 0x822a11e8
	ctx.lr = 0x822A5950;
	sub_822A11E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r7,492(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 492);
	// lwz r6,488(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 488);
	// lwz r5,484(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 484);
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 480);
	// bl 0x822a1550
	ctx.lr = 0x822A5968;
	sub_822A1550(ctx, base);
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

DEFINE_REX_FUNC(sub_822A9368) {
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
	ctx.lr = 0x822A9370;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822a9398
	if (!ctx.cr6.gt) goto loc_822A9398;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-4224
	ctx.r3.s64 = ctx.r11.s64 + -4224;
	// bl 0x822d4588
	ctx.lr = 0x822A9398;
	sub_822D4588(ctx, base);
loc_822A9398:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bge cr6,0x822a9438
	if (!ctx.cr6.lt) goto loc_822A9438;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822a59a8
	ctx.lr = 0x822A93BC;
	sub_822A59A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r31,12
	ctx.r6.s64 = r31.s64 + 12;
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x822a8458
	ctx.lr = 0x822A93DC;
	sub_822A8458(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r29
	ctx.r10.u64 = r29.u64 - ctx.r11.u64;
	// srawi r26,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	r26.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x822a941c
	if (ctx.cr6.eq) goto loc_822A941C;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x822a9414
	if (ctx.cr6.eq) goto loc_822A9414;
loc_822A9400:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822a7b10
	ctx.lr = 0x822A9408;
	sub_822A7B10(ctx, base);
	// addi r27,r27,16
	r27.s64 = r27.s64 + 16;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(r27.u32, r29.u32, ctx.xer);
	// bne cr6,0x822a9400
	if (!ctx.cr6.eq) goto loc_822A9400;
loc_822A9414:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x822c80a8
	ctx.lr = 0x822A941C;
	sub_822C80A8(ctx, base);
loc_822A941C:
	// rlwinm r10,r28,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_822A9438:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822AB110) {
	REX_FUNC_PROLOGUE();
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,268(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x822b9ed8
	sub_822B9ED8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AB57C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB604) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822AB630) {
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
	ctx.lr = 0x822AB638;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// bl 0x822d6450
	ctx.lr = 0x822AB658;
	sub_822D6450(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// lwz r11,116(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 116);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r11,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r11.u32);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 124);
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 128);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,140(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 140);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f12,88(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 88, temp.u32);
	// lfs f0,148(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,152(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 152);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,156(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 156);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f13,100(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 100, temp.u32);
	// stfs f12,104(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 104, temp.u32);
	// lfs f0,164(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,168(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,172(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 172);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,112(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 112, temp.u32);
	// stfs f13,116(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f12,120(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// lfs f0,180(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lwz r11,216(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 216);
	// stw r11,144(r31)
	REX_STORE_U32(r31.u32 + 144, ctx.r11.u32);
	// lbz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 4);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x822ab720
	if (ctx.cr6.gt) goto loc_822AB720;
	// lbz r11,5(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 5);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822ab720
	if (ctx.cr0.gt) goto loc_822AB720;
	// lbz r11,6(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 6);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x822ab720
	if (ctx.cr0.gt) goto loc_822AB720;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,2344(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2344);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
loc_822AB720:
	// lwz r4,188(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 188);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab778
	if (ctx.cr6.lt) goto loc_822AB778;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab744
	if (ctx.cr6.eq) goto loc_822AB744;
	// bl 0x822ac210
	ctx.lr = 0x822AB740;
	sub_822AC210(ctx, base);
	// b 0x822ab748
	goto loc_822AB748;
loc_822AB744:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB748:
	// lbz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 140);
	// stw r3,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822ab778
	if (ctx.cr6.eq) goto loc_822AB778;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab76c
	if (!ctx.cr6.eq) goto loc_822AB76C;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab778
	if (ctx.cr6.eq) goto loc_822AB778;
loc_822AB76C:
	// stb r29,140(r31)
	REX_STORE_U8(r31.u32 + 140, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AB778;
	sub_822AB3D8(ctx, base);
loc_822AB778:
	// lfs f0,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 148, temp.u32);
	// lfs f0,208(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 152, temp.u32);
	// lwz r4,200(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 200);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab7d0
	if (ctx.cr6.lt) goto loc_822AB7D0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab7a8
	if (ctx.cr6.eq) goto loc_822AB7A8;
	// bl 0x822ac210
	ctx.lr = 0x822AB7A4;
	sub_822AC210(ctx, base);
	// b 0x822ab7ac
	goto loc_822AB7AC;
loc_822AB7A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB7AC:
	// lbz r11,254(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 254);
	// stw r3,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822ab7d0
	if (ctx.cr6.eq) goto loc_822AB7D0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab7d0
	if (ctx.cr6.eq) goto loc_822AB7D0;
	// stb r29,254(r31)
	REX_STORE_U8(r31.u32 + 254, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AB7D0;
	sub_822AB3D8(ctx, base);
loc_822AB7D0:
	// lwz r4,192(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 192);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab818
	if (ctx.cr6.lt) goto loc_822AB818;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab7f0
	if (ctx.cr6.eq) goto loc_822AB7F0;
	// bl 0x822ac210
	ctx.lr = 0x822AB7EC;
	sub_822AC210(ctx, base);
	// b 0x822ab7f4
	goto loc_822AB7F4;
loc_822AB7F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB7F4:
	// lbz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 256);
	// stw r3,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822ab818
	if (ctx.cr6.eq) goto loc_822AB818;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab818
	if (ctx.cr6.eq) goto loc_822AB818;
	// stb r29,256(r31)
	REX_STORE_U8(r31.u32 + 256, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AB818;
	sub_822AB3D8(ctx, base);
loc_822AB818:
	// lwz r4,204(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 204);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab86c
	if (ctx.cr6.lt) goto loc_822AB86C;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab838
	if (ctx.cr6.eq) goto loc_822AB838;
	// bl 0x822ac210
	ctx.lr = 0x822AB834;
	sub_822AC210(ctx, base);
	// b 0x822ab83c
	goto loc_822AB83C;
loc_822AB838:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB83C:
	// lbz r11,255(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 255);
	// stw r3,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822ab86c
	if (ctx.cr6.eq) goto loc_822AB86C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822ab860
	if (!ctx.cr6.eq) goto loc_822AB860;
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ab86c
	if (ctx.cr6.eq) goto loc_822AB86C;
loc_822AB860:
	// stb r29,255(r31)
	REX_STORE_U8(r31.u32 + 255, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AB86C;
	sub_822AB3D8(ctx, base);
loc_822AB86C:
	// lwz r4,212(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 212);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab894
	if (ctx.cr6.lt) goto loc_822AB894;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab88c
	if (ctx.cr6.eq) goto loc_822AB88C;
	// bl 0x822ac2a0
	ctx.lr = 0x822AB888;
	sub_822AC2A0(ctx, base);
	// b 0x822ab890
	goto loc_822AB890;
loc_822AB88C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB890:
	// stw r3,244(r31)
	REX_STORE_U32(r31.u32 + 244, ctx.r3.u32);
loc_822AB894:
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822AB8A8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ab8f8
	if (ctx.cr0.eq) goto loc_822AB8F8;
	// lwz r4,220(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 220);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822ab8f8
	if (ctx.cr6.lt) goto loc_822AB8F8;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab8d0
	if (ctx.cr6.eq) goto loc_822AB8D0;
	// bl 0x822ac210
	ctx.lr = 0x822AB8CC;
	sub_822AC210(ctx, base);
	// b 0x822ab8d4
	goto loc_822AB8D4;
loc_822AB8D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB8D4:
	// lbz r11,257(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 257);
	// stw r3,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822ab8f8
	if (ctx.cr6.eq) goto loc_822AB8F8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab8f8
	if (ctx.cr6.eq) goto loc_822AB8F8;
	// stb r29,257(r31)
	REX_STORE_U8(r31.u32 + 257, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822AB8F8;
	sub_822AB3D8(ctx, base);
loc_822AB8F8:
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822AB90C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ab958
	if (ctx.cr0.eq) goto loc_822AB958;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lwz r11,240(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 240);
	// stw r11,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r11.u32);
	// lwz r11,244(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 244);
	// stw r11,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r11.u32);
	// lwz r11,248(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 248);
	// stw r11,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r11.u32);
	// lwz r11,252(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 252);
	// stw r11,188(r31)
	REX_STORE_U32(r31.u32 + 188, ctx.r11.u32);
	// b 0x822ab99c
	goto loc_822AB99C;
loc_822AB958:
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822AB96C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ab9a4
	if (ctx.cr0.eq) goto loc_822AB9A4;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 224);
	// stw r11,160(r31)
	REX_STORE_U32(r31.u32 + 160, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 228);
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
	// lwz r11,232(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 232);
	// stw r11,168(r31)
	REX_STORE_U32(r31.u32 + 168, ctx.r11.u32);
	// lwz r11,236(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 236);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
loc_822AB99C:
	// addi r10,r30,224
	ctx.r10.s64 = r30.s64 + 224;
	// addi r10,r31,160
	ctx.r10.s64 = r31.s64 + 160;
loc_822AB9A4:
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822AB9B8;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aba18
	if (ctx.cr0.eq) goto loc_822ABA18;
	// lwz r4,256(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 256);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x822aba18
	if (ctx.cr6.lt) goto loc_822ABA18;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ab9e0
	if (ctx.cr6.eq) goto loc_822AB9E0;
	// bl 0x822ac210
	ctx.lr = 0x822AB9DC;
	sub_822AC210(ctx, base);
	// b 0x822ab9e4
	goto loc_822AB9E4;
loc_822AB9E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AB9E4:
	// lbz r11,258(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 258);
	// stw r3,248(r31)
	REX_STORE_U32(r31.u32 + 248, ctx.r3.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822aba08
	if (ctx.cr6.eq) goto loc_822ABA08;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aba08
	if (ctx.cr6.eq) goto loc_822ABA08;
	// stb r29,258(r31)
	REX_STORE_U8(r31.u32 + 258, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822ABA08;
	sub_822AB3D8(ctx, base);
loc_822ABA08:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,248(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 248);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822b2460
	ctx.lr = 0x822ABA18;
	sub_822B2460(ctx, base);
loc_822ABA18:
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822ABA2C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822aba4c
	if (!ctx.cr0.eq) goto loc_822ABA4C;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x822aba4c
	if (!ctx.cr6.eq) goto loc_822ABA4C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 176, temp.u32);
loc_822ABA4C:
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822ABA60;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822abb00
	if (ctx.cr0.eq) goto loc_822ABB00;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r9,16383
	ctx.r9.s64 = 1073676288;
	// lwz r10,264(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 264);
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 260);
	// add r27,r10,r30
	r27.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,264(r31)
	REX_STORE_U32(r31.u32 + 264, ctx.r11.u32);
	// ble cr6,0x822aba98
	if (!ctx.cr6.gt) goto loc_822ABA98;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822ABA98:
	// bl 0x822c80d0
	ctx.lr = 0x822ABA9C;
	sub_822C80D0(ctx, base);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// stw r3,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r3.u32);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822abb00
	if (!ctx.cr6.gt) goto loc_822ABB00;
	// li r28,0
	r28.s64 = 0;
loc_822ABAB4:
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x822ac200
	ctx.lr = 0x822ABAC0;
	sub_822AC200(ctx, base);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 260);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stwx r3,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lwz r10,268(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 268);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 260);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,264(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 264);
	// divw r11,r10,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// andc r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r8.u64;
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r7.u32, ctx.xer);
	// add r27,r11,r27
	r27.u64 = ctx.r11.u64 + r27.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// blt cr6,0x822abab4
	if (ctx.cr6.lt) goto loc_822ABAB4;
loc_822ABB00:
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822b8668
	ctx.lr = 0x822ABB14;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822abb5c
	if (ctx.cr0.eq) goto loc_822ABB5C;
	// lfs f0,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f0,276(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
	// lwz r11,280(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 280);
	// stw r11,200(r31)
	REX_STORE_U32(r31.u32 + 200, ctx.r11.u32);
	// lfs f0,284(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,204(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 204, temp.u32);
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// stw r11,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r11.u32);
	// lwz r11,292(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 292);
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
	// lwz r11,296(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 296);
	// stw r11,216(r31)
	REX_STORE_U32(r31.u32 + 216, ctx.r11.u32);
	// lwz r11,300(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 300);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
loc_822ABB5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822ab3d8
	ctx.lr = 0x822ABB64;
	sub_822AB3D8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822C62E8) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32172
	ctx.r7.s64 = -2108424192;
	// lis r6,-32172
	ctx.r6.s64 = -2108424192;
	// lfs f0,-5236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -5236);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f11,-5240(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -5240);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-5244(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -5244);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f10,88(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bctrl 
	ctx.lr = 0x822C6348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6FF8) {
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
	ctx.lr = 0x822C7020;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3f40
	ctx.lr = 0x822C702C;
	sub_821F3F40(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821f3f40
	ctx.lr = 0x822C7038;
	sub_821F3F40(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822ca328
	ctx.lr = 0x822C7044;
	sub_822CA328(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C705C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822C8F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822C8F38;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822c8f58
	if (!ctx.cr6.eq) goto loc_822C8F58;
loc_822C8F50:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c9028
	goto loc_822C9028;
loc_822C8F58:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x822c8f50
	if (ctx.cr6.eq) goto loc_822C8F50;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c8f50
	if (ctx.cr6.eq) goto loc_822C8F50;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822c8f80
	if (ctx.cr6.eq) goto loc_822C8F80;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822c8f50
	if (!ctx.cr6.eq) goto loc_822C8F50;
loc_822C8F80:
	// clrlwi. r11,r28,30
	ctx.r11.u64 = r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c8f50
	if (!ctx.cr0.eq) goto loc_822C8F50;
	// clrlwi. r11,r29,21
	ctx.r11.u64 = r29.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bne 0x822c9028
	if (!ctx.cr0.eq) goto loc_822C9028;
	// li r30,0
	r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822095c0
	ctx.lr = 0x822C8FB0;
	sub_822095C0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x822098d0
	ctx.lr = 0x822C8FD0;
	sub_822098D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c8fe4
	if (!ctx.cr0.eq) goto loc_822C8FE4;
	// bl 0x822098c8
	ctx.lr = 0x822C8FDC;
	sub_822098C8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x822c8f50
	if (!ctx.cr6.eq) goto loc_822C8F50;
loc_822C8FE4:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823cdf60
	ctx.lr = 0x822C8FF8;
	sub_823CDF60(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c9020
	if (ctx.cr6.eq) goto loc_822C9020;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x823cd720
	ctx.lr = 0x822C9020;
	sub_823CD720(ctx, base);
loc_822C9020:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
loc_822C9028:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822CBBC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CC588) {
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
	// lwz r30,0(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x822cc5cc
	goto loc_822CC5CC;
loc_822CC5A8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc5c8
	if (ctx.cr6.eq) goto loc_822CC5C8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CC5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CC5C8:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_822CC5CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cc5a8
	if (!ctx.cr6.eq) goto loc_822CC5A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cc5e8
	if (ctx.cr6.eq) goto loc_822CC5E8;
	// bl 0x822c80a8
	ctx.lr = 0x822CC5E8;
	sub_822C80A8(ctx, base);
loc_822CC5E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822CDD80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CDD88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822cddb0
	if (ctx.cr6.gt) goto loc_822CDDB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cdb40
	ctx.lr = 0x822CDDB0;
	sub_822CDB40(ctx, base);
loc_822CDDB0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822cddcc
	if (ctx.cr6.gt) goto loc_822CDDCC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
loc_822CDDCC:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cddf8
	if (!ctx.cr6.eq) goto loc_822CDDF8;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x822c80d0
	ctx.lr = 0x822CDDE8;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cde3c
	if (ctx.cr0.eq) goto loc_822CDE3C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stwx r3,r11,r30
	REX_STORE_U32(ctx.r11.u32 + r30.u32, ctx.r3.u32);
loc_822CDDF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cde28
	if (ctx.cr6.eq) goto loc_822CDE28;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_822CDE28:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
loc_822CDE3C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-4172
	ctx.r11.s64 = ctx.r11.s64 + -4172;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82184290
	ctx.lr = 0x822CDE58;
	sub_82184290(ctx, base);
}

DEFINE_REX_FUNC(sub_822D1648) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,16
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16, ctx.xer);
	// blt cr6,0x822d1658
	if (ctx.cr6.lt) goto loc_822D1658;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822D1658:
	// mulli r11,r4,264
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(264));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D1A40) {
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
	ctx.lr = 0x822D1A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,12(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bctrl 
	ctx.lr = 0x822D1A88;
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

DEFINE_REX_FUNC(sub_822D2D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D2D60;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d2db0
	if (ctx.cr6.eq) goto loc_822D2DB0;
	// bl 0x822d1ba0
	ctx.lr = 0x822D2D78;
	sub_822D1BA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2db0
	if (!ctx.cr0.eq) goto loc_822D2DB0;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,8(r31)
	REX_STORE_U32(r31.u32 + 8, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2DB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D2DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822D4448) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,26408
	ctx.r11.s64 = ctx.r11.s64 + 26408;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822d447c
	if (ctx.cr0.eq) goto loc_822D447C;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x822d98f0
	ctx.lr = 0x822D447C;
	sub_822D98F0(ctx, base);
loc_822D447C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// stb r11,8(r31)
	REX_STORE_U8(r31.u32 + 8, ctx.r11.u8);
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

DEFINE_REX_FUNC(__restgprlr_14) {
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
	// ld r14,-152(r1)
	r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// ld r20,-104(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
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

DEFINE_REX_FUNC(sub_822D55A8) {
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
	// lwz r11,31864(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31864);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d55cc
	if (ctx.cr0.eq) goto loc_822D55CC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D55CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822D55CC:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x822db858
	ctx.lr = 0x822D55D4;
	sub_822DB858(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822db7f0
	ctx.lr = 0x822D55E0;
	sub_822DB7F0(ctx, base);
	// bl 0x822db7a0
	ctx.lr = 0x822D55E4;
	sub_822DB7A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D6E98) {
	REX_FUNC_PROLOGUE();
	// b 0x824d49dc
	__imp__KeTlsGetValue(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6EB8) {
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
	// lis r31,-32172
	r31.s64 = -2108424192;
	// lwz r3,-2160(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + -2160);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822d6ee4
	if (ctx.cr6.eq) goto loc_822D6EE4;
	// bl 0x824d49ac
	ctx.lr = 0x822D6EDC;
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-2160(r31)
	REX_STORE_U32(r31.u32 + -2160, ctx.r11.u32);
loc_822D6EE4:
	// bl 0x822dba90
	ctx.lr = 0x822D6EE8;
	sub_822DBA90(ctx, base);
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

DEFINE_REX_FUNC(__savevmx_18) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__savevmx_106) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_30) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v30{};
	PPCVRegister v31{};
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_68) {
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
	// lvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_822E60FC) {
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

DEFINE_REX_FUNC(sub_822E7568) {
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
	// b 0x822e75a0
	goto loc_822E75A0;
loc_822E75A0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5ce0
	ctx.lr = 0x822E75A8;
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

DEFINE_REX_FUNC(sub_822E8D50) {
	REX_FUNC_PROLOGUE();
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E8D70) {
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
	// bl 0x822eef38
	ctx.lr = 0x822E8D88;
	sub_822EEF38(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-29896
	ctx.r10.s64 = ctx.r11.s64 + -29896;
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x822eef08
	ctx.lr = 0x822E8D9C;
	sub_822EEF08(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lfs f0,16788(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
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

DEFINE_REX_FUNC(sub_822EA5D0) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	REX_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822EA614;
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

DEFINE_REX_FUNC(sub_822EC020) {
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
	ctx.lr = 0x822EC028;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// lis r26,1
	r26.s64 = 65536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r27,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r27.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, r26.u32, ctx.xer);
	// bgt cr6,0x822ec11c
	if (ctx.cr6.gt) goto loc_822EC11C;
	// lwz r10,664(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 664);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ec0b8
	if (ctx.cr6.lt) goto loc_822EC0B8;
	// lwz r11,668(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 668);
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822ec1ac
	if (!ctx.cr6.gt) goto loc_822EC1AC;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822ec0b8
	if (ctx.cr6.lt) goto loc_822EC0B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822ec0b8
	if (!ctx.cr6.lt) goto loc_822EC0B8;
	// subf r30,r4,r10
	r30.u64 = ctx.r10.u64 - ctx.r4.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x822ec0b0
	if (ctx.cr6.gt) goto loc_822EC0B0;
	// bl 0x822d4fa0
	ctx.lr = 0x822EC0AC;
	sub_822D4FA0(ctx, base);
	// b 0x822ec0bc
	goto loc_822EC0BC;
loc_822EC0B0:
	// bl 0x822d6840
	ctx.lr = 0x822EC0B4;
	sub_822D6840(ctx, base);
	// b 0x822ec0bc
	goto loc_822EC0BC;
loc_822EC0B8:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_822EC0BC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ec0dc
	if (ctx.cr6.eq) goto loc_822EC0DC;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC0DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC0DC:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822ec128
	if (!ctx.cr6.lt) goto loc_822EC128;
loc_822EC0FC:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
loc_822EC100:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ec11c
	if (ctx.cr6.eq) goto loc_822EC11C;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_822EC128:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// clrldi r4,r11,32
	ctx.r4.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,52(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822EC144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ec0fc
	if (ctx.cr6.lt) goto loc_822EC0FC;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// subf r5,r30,r26
	ctx.r5.u64 = r26.u64 - r30.u64;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822ec100
	if (ctx.cr6.lt) goto loc_822EC100;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822ec19c
	if (ctx.cr6.eq) goto loc_822EC19C;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822EC19C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822EC19C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,664(r31)
	REX_STORE_U32(r31.u32 + 664, r29.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,668(r31)
	REX_STORE_U32(r31.u32 + 668, ctx.r11.u32);
loc_822EC1AC:
	// lwz r10,668(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 668);
	// lwz r11,664(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 664);
	// subf r10,r29,r10
	ctx.r10.u64 = ctx.r10.u64 - r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822ec1c8
	if (!ctx.cr6.lt) goto loc_822EC1C8;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_822EC1C8:
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + r29.u64;
	// stw r8,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822F4468) {
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
	// addi r10,r11,-26152
	ctx.r10.s64 = ctx.r11.s64 + -26152;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x822fb6c8
	ctx.lr = 0x822F4494;
	sub_822FB6C8(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f44b4
	if (ctx.cr6.eq) goto loc_822F44B4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x823cd250
	ctx.lr = 0x822F44B0;
	sub_823CD250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822F44B4:
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

DEFINE_REX_FUNC(sub_822F5160) {
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
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F5184;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,288(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 288);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x822F519C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,292(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 292);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x822F51B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,276(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F51CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,280(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 280);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F51E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,196(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 196);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F51F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,200(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 200);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x822F520C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,204(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822F5220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,208(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 208);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x822F5234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,20(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x822F5248;
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

DEFINE_REX_FUNC(sub_822F9928) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// stb r11,512(r3)
	REX_STORE_U8(ctx.r3.u32 + 512, ctx.r11.u8);
loc_822F9944:
	// lwzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9974
	if (!ctx.cr6.eq) goto loc_822F9974;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x822f9944
	if (ctx.cr6.lt) goto loc_822F9944;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// blr 
	return;
loc_822F9974:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stb r10,512(r3)
	REX_STORE_U8(ctx.r3.u32 + 512, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB200) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB418) {
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
	ctx.lr = 0x822FB420;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,20(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fb458
	if (!ctx.cr6.eq) goto loc_822FB458;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822fb210
	ctx.lr = 0x822FB450;
	sub_822FB210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb468
	if (ctx.cr6.lt) goto loc_822FB468;
loc_822FB458:
	// lwz r30,68(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 68);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,68(r31)
	REX_STORE_U32(r31.u32 + 68, ctx.r10.u32);
loc_822FB468:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822fb4a8
	if (ctx.cr6.lt) goto loc_822FB4A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 60);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// bl 0x822eb160
	ctx.lr = 0x822FB494;
	sub_822EB160(ctx, base);
	// lis r10,-32688
	ctx.r10.s64 = -2142240768;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822fb4d0
	if (!ctx.cr6.eq) goto loc_822FB4D0;
	// lis r28,-32688
	r28.s64 = -2142240768;
loc_822FB4A8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb4c4
	if (ctx.cr6.eq) goto loc_822FB4C4;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 20);
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r30,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r30.u32);
loc_822FB4C4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822FB4D0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x822fb4e4
	if (!ctx.cr6.eq) goto loc_822FB4E4;
loc_822FB4D8:
	// lis r28,-32688
	r28.s64 = -2142240768;
	// ori r28,r28,1
	r28.u64 = r28.u64 | 1;
	// b 0x822fb4a8
	goto loc_822FB4A8;
loc_822FB4E4:
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fb4d8
	if (ctx.cr6.eq) goto loc_822FB4D8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822fb504
	if (ctx.cr6.eq) goto loc_822FB504;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822FB504;
	sub_822D4FA0(ctx, base);
loc_822FB504:
	// stw r29,4(r30)
	REX_STORE_U32(r30.u32 + 4, r29.u32);
	// clrldi r11,r29,32
	ctx.r11.u64 = r29.u64 & 0xFFFFFFFF;
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r10,8(r30)
	REX_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,0(r26)
	REX_STORE_U32(r26.u32 + 0, r30.u32);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r9,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82304620) {
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
	ctx.lr = 0x82304628;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// sth r10,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// sth r10,82(r1)
	REX_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8230468c
	if (ctx.cr6.eq) goto loc_8230468C;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// bgt cr6,0x8230468c
	if (ctx.cr6.gt) goto loc_8230468C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8230468c
	if (ctx.cr6.lt) goto loc_8230468C;
	// cmpwi cr6,r5,32
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32, ctx.xer);
	// bgt cr6,0x8230468c
	if (ctx.cr6.gt) goto loc_8230468C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8230468c
	if (ctx.cr6.lt) goto loc_8230468C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230468c
	if (ctx.cr6.eq) goto loc_8230468C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8230469c
	if (!ctx.cr6.eq) goto loc_8230469C;
loc_8230468C:
	// lis r28,-32764
	r28.s64 = -2147221504;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_8230469C:
	// rlwinm r10,r25,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230468c
	if (!ctx.cr6.eq) goto loc_8230468C;
	// rlwinm r10,r24,0,0,20
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFF800;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8230468c
	if (!ctx.cr6.eq) goto loc_8230468C;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_823046D8:
	// and r31,r11,r25
	r31.u64 = ctx.r11.u64 & r25.u64;
	// and r30,r11,r24
	r30.u64 = ctx.r11.u64 & r24.u64;
	// addic r29,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r29.s64 = r31.s64 + -1;
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r11,r29,r31
	temp.u8 = (~r29.u32 + r31.u32 < ~r29.u32) | (~r29.u32 + r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r29.u64 + r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r31,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r31.s64 = r30.s64 + -1;
	// and r29,r28,r25
	r29.u64 = r28.u64 & r25.u64;
	// subfe r31,r31,r30
	temp.u8 = (~r31.u32 + r30.u32 < ~r31.u32) | (~r31.u32 + r30.u32 + ctx.xer.ca < ctx.xer.ca);
	r31.u64 = ~r31.u64 + r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r30,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r30.s64 = r29.s64 + -1;
	// and r27,r28,r24
	r27.u64 = r28.u64 & r24.u64;
	// rlwinm r28,r28,1,0,30
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r30,r30,r29
	temp.u8 = (~r30.u32 + r29.u32 < ~r30.u32) | (~r30.u32 + r29.u32 + ctx.xer.ca < ctx.xer.ca);
	r30.u64 = ~r30.u64 + r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r29,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r29.s64 = r27.s64 + -1;
	// and r26,r28,r25
	r26.u64 = r28.u64 & r25.u64;
	// subfe r29,r29,r27
	temp.u8 = (~r29.u32 + r27.u32 < ~r29.u32) | (~r29.u32 + r27.u32 + ctx.xer.ca < ctx.xer.ca);
	r29.u64 = ~r29.u64 + r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r27.s64 = r26.s64 + -1;
	// and r19,r28,r24
	r19.u64 = r28.u64 & r24.u64;
	// rlwinm r18,r28,1,0,30
	r18.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r28,r27,r26
	temp.u8 = (~r27.u32 + r26.u32 < ~r27.u32) | (~r27.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r28.u64 = ~r27.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r27,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r27.s64 = r19.s64 + -1;
	// and r26,r18,r25
	r26.u64 = r18.u64 & r25.u64;
	// subfe r27,r27,r19
	temp.u8 = (~r27.u32 + r19.u32 < ~r27.u32) | (~r27.u32 + r19.u32 + ctx.xer.ca < ctx.xer.ca);
	r27.u64 = ~r27.u64 + r19.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r19.s64 = r26.s64 + -1;
	// and r17,r18,r24
	r17.u64 = r18.u64 & r24.u64;
	// subfe r26,r19,r26
	temp.u8 = (~r19.u32 + r26.u32 < ~r19.u32) | (~r19.u32 + r26.u32 + ctx.xer.ca < ctx.xer.ca);
	r26.u64 = ~r19.u64 + r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r19,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r19.s64 = r17.s64 + -1;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfe r11,r19,r17
	temp.u8 = (~r19.u32 + r17.u32 < ~r19.u32) | (~r19.u32 + r17.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~r19.u64 + r17.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r9,r31,r9
	ctx.r9.u64 = r31.u64 + ctx.r9.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// add r7,r29,r7
	ctx.r7.u64 = r29.u64 + ctx.r7.u64;
	// add r6,r28,r6
	ctx.r6.u64 = r28.u64 + ctx.r6.u64;
	// add r5,r27,r5
	ctx.r5.u64 = r27.u64 + ctx.r5.u64;
	// add r4,r26,r4
	ctx.r4.u64 = r26.u64 + ctx.r4.u64;
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x823046d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823046D8;
	// add r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bne cr6,0x82304794
	if (!ctx.cr6.eq) goto loc_82304794;
	// cmpw cr6,r10,r22
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r22.s32, ctx.xer);
	// beq cr6,0x823047a8
	if (ctx.cr6.eq) goto loc_823047A8;
loc_82304794:
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,87
	r28.u64 = r28.u64 | 87;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_823047A8:
	// rlwinm r11,r25,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823047c4
	if (ctx.cr6.eq) goto loc_823047C4;
	// rlwinm r4,r25,0,29,27
	ctx.r4.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r3,r21,-1
	ctx.r3.s64 = r21.s64 + -1;
loc_823047C4:
	// rlwinm r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823047e0
	if (ctx.cr6.eq) goto loc_823047E0;
	// rlwinm r6,r24,0,29,27
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r5,r22,-1
	ctx.r5.s64 = r22.s64 + -1;
loc_823047E0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8230468c
	if (ctx.cr6.lt) goto loc_8230468C;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// blt cr6,0x8230468c
	if (ctx.cr6.lt) goto loc_8230468C;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// bl 0x82303ec0
	ctx.lr = 0x823047F8;
	sub_82303EC0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82304ea4
	if (ctx.cr6.lt) goto loc_82304EA4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82304890
	if (!ctx.cr6.gt) goto loc_82304890;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
loc_8230481C:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82304860
	if (ctx.cr6.lt) goto loc_82304860;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r6,r21,-3
	ctx.r6.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304834:
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// stfs f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,-4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + -4, temp.u32);
	// stfsx f0,r10,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82304834
	if (ctx.cr6.lt) goto loc_82304834;
loc_82304860:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304884
	if (!ctx.cr6.lt) goto loc_82304884;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82304878:
	// stfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304878
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304878;
loc_82304884:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8230481c
	if (!ctx.cr0.eq) goto loc_8230481C;
loc_82304890:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x823177a0
	ctx.lr = 0x823048A0;
	sub_823177A0(ctx, base);
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823177a0
	ctx.lr = 0x823048B0;
	sub_823177A0(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r9,82(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82304b10
	if (ctx.cr6.eq) goto loc_82304B10;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82304b08
	if (ctx.cr6.eq) goto loc_82304B08;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,0
	r31.s64 = 0;
	// lwzx r7,r11,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// lhz r6,82(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823049f0
	if (!ctx.cr6.gt) goto loc_823049F0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82304900:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82304940
	if (!ctx.cr6.gt) goto loc_82304940;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_8230491C:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8230491c
	if (ctx.cr6.lt) goto loc_8230491C;
loc_82304940:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x823049d8
	if (!ctx.cr6.lt) goto loc_823049D8;
	// subf r11,r10,r21
	ctx.r11.u64 = r21.u64 - ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x823049a8
	if (ctx.cr6.lt) goto loc_823049A8;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82304964:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r9,r8
	r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// lfs f0,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x82304964
	if (ctx.cr6.lt) goto loc_82304964;
loc_823049A8:
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r21.s32, ctx.xer);
	// bge cr6,0x823049d8
	if (!ctx.cr6.lt) goto loc_823049D8;
	// subf r8,r10,r21
	ctx.r8.u64 = r21.u64 - ctx.r10.u64;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823049C0:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823049c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823049C0;
loc_823049D8:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82304900
	if (ctx.cr6.lt) goto loc_82304900;
loc_823049F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82304ea4
	if (!ctx.cr6.lt) goto loc_82304EA4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r11,r22
	r30.u64 = r22.u64 - ctx.r11.u64;
loc_82304A04:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82304a4c
	if (!ctx.cr6.gt) goto loc_82304A4C;
	// lwzx r7,r6,r20
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
loc_82304A24:
	// lwz r9,-4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r8,r6,r23
	ctx.r8.u64 = ctx.r6.u64 + r23.u64;
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// lhz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82304a24
	if (ctx.cr6.lt) goto loc_82304A24;
loc_82304A4C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304af0
	if (!ctx.cr6.lt) goto loc_82304AF0;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82304abc
	if (ctx.cr6.lt) goto loc_82304ABC;
	// lwzx r10,r6,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
loc_82304A74:
	// lwz r7,-4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// add r4,r6,r23
	ctx.r4.u64 = ctx.r6.u64 + r23.u64;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r31.s32, ctx.xer);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f13,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r10,r8
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f11,r8,r7
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,4(r29)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// blt cr6,0x82304a74
	if (ctx.cr6.lt) goto loc_82304A74;
loc_82304ABC:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304af0
	if (!ctx.cr6.lt) goto loc_82304AF0;
	// subf r10,r9,r21
	ctx.r10.u64 = r21.u64 - ctx.r9.u64;
	// lwzx r8,r6,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82304AD4:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + r23.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304ad4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304AD4;
loc_82304AF0:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bne 0x82304a04
	if (!ctx.cr0.eq) goto loc_82304A04;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82304B08:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82304c94
	if (!ctx.cr6.eq) goto loc_82304C94;
loc_82304B10:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82304c8c
	if (ctx.cr6.eq) goto loc_82304C8C;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82304bcc
	if (!ctx.cr6.gt) goto loc_82304BCC;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82304B2C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82304b88
	if (ctx.cr6.lt) goto loc_82304B88;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304B44:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r8,r10
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82304b44
	if (ctx.cr6.lt) goto loc_82304B44;
loc_82304B88:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304bb4
	if (!ctx.cr6.lt) goto loc_82304BB4;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82304BA0:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304BA0;
loc_82304BB4:
	// lhz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 82);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82304b2c
	if (ctx.cr6.lt) goto loc_82304B2C;
loc_82304BCC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r22.s32, ctx.xer);
	// bge cr6,0x82304ea4
	if (!ctx.cr6.lt) goto loc_82304EA4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r11,r22
	r29.u64 = r22.u64 - ctx.r11.u64;
loc_82304BE0:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82304c44
	if (ctx.cr6.lt) goto loc_82304C44;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r30,r21,-3
	r30.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
loc_82304BFC:
	// lwz r10,-4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + -4);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r31,r11,r10
	r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r4,r5,r23
	ctx.r4.u64 = ctx.r5.u64 + r23.u64;
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r30
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r30.s32, ctx.xer);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82304bfc
	if (ctx.cr6.lt) goto loc_82304BFC;
loc_82304C44:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304c74
	if (!ctx.cr6.lt) goto loc_82304C74;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82304C5C:
	// add r9,r5,r23
	ctx.r9.u64 = ctx.r5.u64 + r23.u64;
	// lwz r8,-4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// lfsx f0,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304c5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304C5C;
loc_82304C74:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82304be0
	if (!ctx.cr0.eq) goto loc_82304BE0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82304C8C:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82304e00
	if (ctx.cr6.eq) goto loc_82304E00;
loc_82304C94:
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82304e00
	if (!ctx.cr6.eq) goto loc_82304E00;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82304ea4
	if (!ctx.cr6.gt) goto loc_82304EA4;
	// extsw r11,r22
	ctx.r11.s64 = r22.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r22
	r31.u64 = r22.u64;
	// lfs f12,16308(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// fadds f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_82304CD4:
	// lhz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82304d1c
	if (!ctx.cr6.gt) goto loc_82304D1C;
	// lwzx r8,r5,r20
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304CF0:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f11,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r8,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// lhz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82304cf0
	if (ctx.cr6.lt) goto loc_82304CF0;
loc_82304D1C:
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f12,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lhz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 80);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304de8
	if (!ctx.cr6.lt) goto loc_82304DE8;
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82304db4
	if (ctx.cr6.lt) goto loc_82304DB4;
	// addi r3,r21,-3
	ctx.r3.s64 = r21.s64 + -3;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82304D50:
	// lwzx r7,r5,r23
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// add r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// lfs f11,-4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// lfsx f8,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// fmuls f7,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fdivs f6,f7,f13
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f13.f64));
	// stfs f6,4(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f5,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fdivs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 / ctx.f13.f64));
	// stfsx f3,r10,r8
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lfsx f2,r7,r8
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fdivs f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 / ctx.f13.f64));
	// stfs f11,4(r30)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// blt cr6,0x82304d50
	if (ctx.cr6.lt) goto loc_82304D50;
loc_82304DB4:
	// cmpw cr6,r9,r21
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304de8
	if (!ctx.cr6.lt) goto loc_82304DE8;
	// subf r8,r9,r21
	ctx.r8.u64 = r21.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82304DC8:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f11,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fdivs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 / ctx.f13.f64));
	// stfsx f9,r10,r11
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304dc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304DC8;
loc_82304DE8:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82304cd4
	if (!ctx.cr0.eq) goto loc_82304CD4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
loc_82304E00:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(r22.s32, 0, ctx.xer);
	// ble cr6,0x82304ea4
	if (!ctx.cr6.gt) goto loc_82304EA4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r22
	r30.u64 = r22.u64;
loc_82304E10:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(r21.s32, 4, ctx.xer);
	// blt cr6,0x82304e6c
	if (ctx.cr6.lt) goto loc_82304E6C;
	// lwzx r9,r5,r20
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// addi r31,r21,-3
	r31.s64 = r21.s64 + -3;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82304E28:
	// lwzx r10,r5,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r6,r8,-4
	ctx.r6.s64 = ctx.r8.s64 + -4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r31.s32, ctx.xer);
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r4)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfsx f12,r10,r6
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f12,r9,r6
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, temp.u32);
	// lfsx f11,r10,r8
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsx f11,r9,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// blt cr6,0x82304e28
	if (ctx.cr6.lt) goto loc_82304E28;
loc_82304E6C:
	// cmpw cr6,r7,r21
	ctx.cr6.compare<int32_t>(ctx.r7.s32, r21.s32, ctx.xer);
	// bge cr6,0x82304e98
	if (!ctx.cr6.lt) goto loc_82304E98;
	// subf r9,r7,r21
	ctx.r9.u64 = r21.u64 - ctx.r7.u64;
	// lwzx r10,r5,r20
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82304E84:
	// lwzx r9,r5,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + r23.u32);
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r11
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82304e84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82304E84;
loc_82304E98:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x82304e10
	if (!ctx.cr0.eq) goto loc_82304E10;
loc_82304EA4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x822d4eac
	return;
}

DEFINE_REX_FUNC(sub_823310D8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82331170
	if (ctx.cr6.eq) goto loc_82331170;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82331170
	if (ctx.cr6.eq) goto loc_82331170;
loc_82331110:
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 44);
	// bl 0x82366ea0
	ctx.lr = 0x82331130;
	sub_82366EA0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,40(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 40);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r10,15536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x82331164
	if (!ctx.cr6.eq) goto loc_82331164;
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x823666f8
	ctx.lr = 0x82331164;
	sub_823666F8(ctx, base);
loc_82331164:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82331110
	if (!ctx.cr6.eq) goto loc_82331110;
loc_82331170:
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82335F20) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x82335F28;
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82335f58
	if (!ctx.cr6.eq) goto loc_82335F58;
	// li r3,-3
	ctx.r3.s64 = -3;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
loc_82335F58:
	// lwz r31,736(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 736);
	// lwz r11,3724(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3724);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335f74
	if (!ctx.cr6.eq) goto loc_82335F74;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
loc_82335F74:
	// lwz r11,3744(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// li r17,0
	r17.s64 = 0;
	// stw r17,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r17.u32);
	// lwz r10,3980(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82336000
	if (ctx.cr6.eq) goto loc_82336000;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82335fd8
	if (ctx.cr6.eq) goto loc_82335FD8;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82335fd8
	if (ctx.cr6.eq) goto loc_82335FD8;
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(r19.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82335fd8
	if (ctx.cr6.eq) goto loc_82335FD8;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// beq cr6,0x82335fe0
	if (ctx.cr6.eq) goto loc_82335FE0;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// beq cr6,0x82335fd8
	if (ctx.cr6.eq) goto loc_82335FD8;
loc_82335FCC:
	// li r3,-5
	ctx.r3.s64 = -5;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
loc_82335FD8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(r19.u32, 0, ctx.xer);
	// bne cr6,0x82335fec
	if (!ctx.cr6.eq) goto loc_82335FEC;
loc_82335FE0:
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82335fcc
	if (ctx.cr6.eq) goto loc_82335FCC;
loc_82335FEC:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bne cr6,0x82336000
	if (!ctx.cr6.eq) goto loc_82336000;
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82335fcc
	if (ctx.cr6.eq) goto loc_82335FCC;
loc_82336000:
	// lwz r11,22132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22132);
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233601c
	if (!ctx.cr6.eq) goto loc_8233601C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823316b0
	ctx.lr = 0x82336018;
	sub_823316B0(ctx, base);
	// b 0x82336964
	goto loc_82336964;
loc_8233601C:
	// lwz r11,3464(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3464);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82336044
	if (!ctx.cr6.eq) goto loc_82336044;
	// lwz r11,22092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22092);
	// stw r17,3464(r31)
	REX_STORE_U32(r31.u32 + 3464, r17.u32);
	// sth r18,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, r18.u16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82336964
	if (!ctx.cr6.eq) goto loc_82336964;
	// stw r17,22092(r31)
	REX_STORE_U32(r31.u32 + 22092, r17.u32);
	// b 0x8233654c
	goto loc_8233654C;
loc_82336044:
	// lhz r11,3740(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 3740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233605c
	if (!ctx.cr6.eq) goto loc_8233605C;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
loc_8233605C:
	// lwz r11,15364(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(r16.u32, 0, ctx.xer);
	// bne cr6,0x823362b0
	if (!ctx.cr6.eq) goto loc_823362B0;
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336080
	if (!ctx.cr6.eq) goto loc_82336080;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336088
	if (ctx.cr6.eq) goto loc_82336088;
loc_82336080:
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
	// b 0x8233608c
	goto loc_8233608C;
loc_82336088:
	// stw r17,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r17.u32);
loc_8233608C:
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336120
	if (ctx.cr6.eq) goto loc_82336120;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823360ac
	if (ctx.cr6.eq) goto loc_823360AC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823360f4
	if (!ctx.cr6.eq) goto loc_823360F4;
loc_823360AC:
	// lwz r10,14836(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823360c4
	if (!ctx.cr6.eq) goto loc_823360C4;
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// stw r11,14864(r31)
	REX_STORE_U32(r31.u32 + 14864, ctx.r11.u32);
	// b 0x823360f4
	goto loc_823360F4;
loc_823360C4:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823360f4
	if (ctx.cr6.eq) goto loc_823360F4;
	// lwz r11,14864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823360ec
	if (!ctx.cr6.eq) goto loc_823360EC;
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823360ec
	if (!ctx.cr6.eq) goto loc_823360EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347f10
	ctx.lr = 0x823360EC;
	sub_82347F10(ctx, base);
loc_823360EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a8d8
	ctx.lr = 0x823360F4;
	sub_8238A8D8(ctx, base);
loc_823360F4:
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336120
	if (ctx.cr6.eq) goto loc_82336120;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336118
	if (!ctx.cr6.eq) goto loc_82336118;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e8a0
	ctx.lr = 0x82336114;
	sub_8235E8A0(ctx, base);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_82336118:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a9f8
	ctx.lr = 0x82336120;
	sub_8238A9F8(ctx, base);
loc_82336120:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82336150
	if (!ctx.cr6.eq) goto loc_82336150;
	// lwz r11,21916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336144
	if (!ctx.cr6.eq) goto loc_82336144;
	// lwz r11,21920(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336150
	if (ctx.cr6.eq) goto loc_82336150;
loc_82336144:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ade8
	ctx.lr = 0x8233614C;
	sub_8238ADE8(ctx, base);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_82336150:
	// lwz r11,14884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14884);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336240
	if (ctx.cr6.eq) goto loc_82336240;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336240
	if (ctx.cr6.eq) goto loc_82336240;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82392200
	ctx.lr = 0x82336174;
	sub_82392200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823952d8
	ctx.lr = 0x8233617C;
	sub_823952D8(ctx, base);
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r29,14888(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// lwz r28,14892(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// rotlwi r11,r29,0
	ctx.r11.u64 = __builtin_rotateleft32(r29.u32, 0);
	// stw r17,14888(r31)
	REX_STORE_U32(r31.u32 + 14888, r17.u32);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// stw r29,14892(r31)
	REX_STORE_U32(r31.u32 + 14892, r29.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// beq cr6,0x823361f8
	if (ctx.cr6.eq) goto loc_823361F8;
	// lwz r9,3808(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r6,3800(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14968(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r5,3840(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3836(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r30,3832(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x823930c8
	ctx.lr = 0x823361EC;
	sub_823930C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347d38
	ctx.lr = 0x823361F4;
	sub_82347D38(ctx, base);
	// b 0x82336234
	goto loc_82336234;
loc_823361F8:
	// lwz r9,3840(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r8,3836(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r6,3832(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,14968(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r5,3784(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r4,3780(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r30,3776(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// lwz r11,14964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x823930c8
	ctx.lr = 0x82336234;
	sub_823930C8(ctx, base);
loc_82336234:
	// stw r28,14892(r31)
	REX_STORE_U32(r31.u32 + 14892, r28.u32);
	// stw r29,14888(r31)
	REX_STORE_U32(r31.u32 + 14888, r29.u32);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_82336240:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823362a0
	if (!ctx.cr6.gt) goto loc_823362A0;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82336260
	if (ctx.cr6.eq) goto loc_82336260;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82336280
	if (!ctx.cr6.eq) goto loc_82336280;
loc_82336260:
	// lwz r11,3492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336298
	if (ctx.cr6.eq) goto loc_82336298;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82336298
	if (ctx.cr6.eq) goto loc_82336298;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82336298
	if (ctx.cr6.eq) goto loc_82336298;
loc_82336280:
	// stw r18,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r18,15564(r31)
	REX_STORE_U32(r31.u32 + 15564, r18.u32);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// bl 0x82331710
	ctx.lr = 0x82336294;
	sub_82331710(ctx, base);
	// b 0x82336da8
	goto loc_82336DA8;
loc_82336298:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
	// stw r17,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, r17.u32);
loc_823362A0:
	// stw r18,15564(r31)
	REX_STORE_U32(r31.u32 + 15564, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331710
	ctx.lr = 0x823362AC;
	sub_82331710(ctx, base);
	// b 0x82336da8
	goto loc_82336DA8;
loc_823362B0:
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,15616(r31)
	REX_STORE_U32(r31.u32 + 15616, ctx.r10.u32);
	// bne cr6,0x823362cc
	if (!ctx.cr6.eq) goto loc_823362CC;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336464
	if (ctx.cr6.eq) goto loc_82336464;
loc_823362CC:
	// lwz r11,15372(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// lwz r10,15376(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// stw r17,220(r31)
	REX_STORE_U32(r31.u32 + 220, r17.u32);
	// srawi r8,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 4;
	// stw r17,224(r31)
	REX_STORE_U32(r31.u32 + 224, r17.u32);
	// srawi r3,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 4;
	// stw r9,208(r31)
	REX_STORE_U32(r31.u32 + 208, ctx.r9.u32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,140(r31)
	REX_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// stw r11,204(r31)
	REX_STORE_U32(r31.u32 + 204, ctx.r11.u32);
	// stw r7,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r7.u32);
	// stw r6,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r6.u32);
	// stw r8,136(r31)
	REX_STORE_U32(r31.u32 + 136, ctx.r8.u32);
	// lwz r4,3392(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3392);
	// bl 0x823904d0
	ctx.lr = 0x82336318;
	sub_823904D0(ctx, base);
	// lwz r8,3392(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3392);
	// lwz r5,204(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 204);
	// li r18,1
	r18.s64 = 1;
	// lwz r4,208(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 208);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// rlwinm r9,r5,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r6,216(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 216);
	// divwu r8,r10,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r10.u32 / ctx.r8.u32 : 0);
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
	// stw r3,3868(r31)
	REX_STORE_U32(r31.u32 + 3868, ctx.r3.u32);
	// stw r3,3904(r31)
	REX_STORE_U32(r31.u32 + 3904, ctx.r3.u32);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// stw r8,3872(r31)
	REX_STORE_U32(r31.u32 + 3872, ctx.r8.u32);
	// stw r5,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r5.u32);
	// stw r4,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r4.u32);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r6,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r6.u32);
	// stw r9,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// stw r7,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r7.u32);
	// bne cr6,0x82336384
	if (!ctx.cr6.eq) goto loc_82336384;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// beq cr6,0x82336388
	if (ctx.cr6.eq) goto loc_82336388;
loc_82336384:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82336388:
	// lwz r9,15372(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15372);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,15376(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15376);
	// addi r6,r9,15
	ctx.r6.s64 = ctx.r9.s64 + 15;
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// addi r5,r8,15
	ctx.r5.s64 = ctx.r8.s64 + 15;
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// mullw r4,r10,r11
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r4,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r4.u32);
	// bne cr6,0x823363d4
	if (!ctx.cr6.eq) goto loc_823363D4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823363d8
	if (ctx.cr6.eq) goto loc_823363D8;
loc_823363D4:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_823363D8:
	// stw r11,152(r31)
	REX_STORE_U32(r31.u32 + 152, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r19,15552(r31)
	REX_STORE_U32(r31.u32 + 15552, r19.u32);
	// sth r20,15556(r31)
	REX_STORE_U16(r31.u32 + 15556, r20.u16);
	// stw r30,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r30.u32);
	// beq cr6,0x823363fc
	if (ctx.cr6.eq) goto loc_823363FC;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x823363fc
	if (ctx.cr6.eq) goto loc_823363FC;
	// stw r17,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r17.u32);
loc_823363FC:
	// lwz r11,15568(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15568);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82336424
	if (ctx.cr6.eq) goto loc_82336424;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82336424
	if (ctx.cr6.eq) goto loc_82336424;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x82336434
	if (!ctx.cr6.eq) goto loc_82336434;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x82336434
	goto loc_82336434;
loc_82336424:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// bne cr6,0x82336434
	if (!ctx.cr6.eq) goto loc_82336434;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82336434:
	// stw r11,15560(r31)
	REX_STORE_U32(r31.u32 + 15560, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238e988
	ctx.lr = 0x82336440;
	sub_8238E988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336dbc
	if (!ctx.cr6.eq) goto loc_82336DBC;
	// stw r18,15548(r31)
	REX_STORE_U32(r31.u32 + 15548, r18.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238d7b8
	ctx.lr = 0x82336458;
	sub_8238D7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336dbc
	if (!ctx.cr6.eq) goto loc_82336DBC;
	// b 0x82336da8
	goto loc_82336DA8;
loc_82336464:
	// stw r19,15552(r31)
	REX_STORE_U32(r31.u32 + 15552, r19.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// sth r20,15556(r31)
	REX_STORE_U16(r31.u32 + 15556, r20.u16);
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
	// stw r30,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r30.u32);
	// bne cr6,0x82336480
	if (!ctx.cr6.eq) goto loc_82336480;
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_82336480:
	// stw r11,15560(r31)
	REX_STORE_U32(r31.u32 + 15560, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82336498
	if (ctx.cr6.eq) goto loc_82336498;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// beq cr6,0x82336498
	if (ctx.cr6.eq) goto loc_82336498;
	// stw r17,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r17.u32);
loc_82336498:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238e988
	ctx.lr = 0x823364A0;
	sub_8238E988(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336dbc
	if (!ctx.cr6.eq) goto loc_82336DBC;
	// stw r18,15548(r31)
	REX_STORE_U32(r31.u32 + 15548, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823323e8
	ctx.lr = 0x823364B4;
	sub_823323E8(ctx, base);
	// lwz r11,3700(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3700);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x823364e0
	if (!ctx.cr6.eq) goto loc_823364E0;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823364fc
	if (!ctx.cr6.eq) goto loc_823364FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235ee30
	ctx.lr = 0x823364D4;
	sub_8235EE30(ctx, base);
	// lwz r11,15612(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15612);
	// stw r11,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, ctx.r11.u32);
	// b 0x823364fc
	goto loc_823364FC;
loc_823364E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823364f4
	if (ctx.cr6.lt) goto loc_823364F4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x823364f4
	if (ctx.cr6.gt) goto loc_823364F4;
	// stw r11,15612(r31)
	REX_STORE_U32(r31.u32 + 15612, ctx.r11.u32);
loc_823364F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235ee30
	ctx.lr = 0x823364FC;
	sub_8235EE30(ctx, base);
loc_823364FC:
	// lwz r11,15572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233654c
	if (ctx.cr6.eq) goto loc_8233654C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e7c0
	ctx.lr = 0x82336510;
	sub_8232E7C0(ctx, base);
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 140);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x82336538
	if (ctx.cr6.eq) goto loc_82336538;
	// lwz r11,15924(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15924);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82336534;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82336540
	goto loc_82336540;
loc_82336538:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8235ea08
	ctx.lr = 0x82336540;
	sub_8235EA08(ctx, base);
loc_82336540:
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8232e820
	ctx.lr = 0x8233654C;
	sub_8232E820(ctx, base);
loc_8233654C:
	// lwz r11,14856(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14856);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823365e0
	if (ctx.cr6.eq) goto loc_823365E0;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233656c
	if (ctx.cr6.eq) goto loc_8233656C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x823365b4
	if (!ctx.cr6.eq) goto loc_823365B4;
loc_8233656C:
	// lwz r10,14836(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82336584
	if (!ctx.cr6.eq) goto loc_82336584;
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// stw r11,14864(r31)
	REX_STORE_U32(r31.u32 + 14864, ctx.r11.u32);
	// b 0x823365b4
	goto loc_823365B4;
loc_82336584:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x823365b4
	if (ctx.cr6.eq) goto loc_823365B4;
	// lwz r11,14864(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823365ac
	if (!ctx.cr6.eq) goto loc_823365AC;
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823365ac
	if (!ctx.cr6.eq) goto loc_823365AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347f10
	ctx.lr = 0x823365AC;
	sub_82347F10(ctx, base);
loc_823365AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238a8d8
	ctx.lr = 0x823365B4;
	sub_8238A8D8(ctx, base);
loc_823365B4:
	// lwz r11,14860(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14860);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823365e0
	if (ctx.cr6.eq) goto loc_823365E0;
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823365d8
	if (!ctx.cr6.eq) goto loc_823365D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8235e8a0
	ctx.lr = 0x823365D4;
	sub_8235E8A0(ctx, base);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_823365D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82378d50
	ctx.lr = 0x823365E0;
	sub_82378D50(ctx, base);
loc_823365E0:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82336610
	if (!ctx.cr6.eq) goto loc_82336610;
	// lwz r11,21916(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21916);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336604
	if (!ctx.cr6.eq) goto loc_82336604;
	// lwz r11,21920(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21920);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336610
	if (ctx.cr6.eq) goto loc_82336610;
loc_82336604:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238ade8
	ctx.lr = 0x8233660C;
	sub_8238ADE8(ctx, base);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_82336610:
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336908
	if (ctx.cr6.eq) goto loc_82336908;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82392200
	ctx.lr = 0x82336628;
	sub_82392200(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823952d8
	ctx.lr = 0x82336630;
	sub_823952D8(ctx, base);
	// lwz r11,15628(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,14888(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// lwz r28,14892(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// lwz r11,15964(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15964);
	// stw r17,14888(r31)
	REX_STORE_U32(r31.u32 + 14888, r17.u32);
	// stw r29,14892(r31)
	REX_STORE_U32(r31.u32 + 14892, r29.u32);
	// beq cr6,0x823367a8
	if (ctx.cr6.eq) goto loc_823367A8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336748
	if (ctx.cr6.eq) goto loc_82336748;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336748
	if (!ctx.cr6.eq) goto loc_82336748;
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// li r8,8
	ctx.r8.s64 = 8;
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3760(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14964(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14964);
	// stw r3,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// lwz r10,14892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,14968(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14968);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r7,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,14888(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// stw r5,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,14892(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,14892(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,14948(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14948);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,14892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// addi r8,r10,178
	ctx.r8.s64 = ctx.r10.s64 + 178;
	// mulli r7,r8,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r6,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14936(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14936);
	// stw r3,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 200);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// b 0x823368fc
	goto loc_823368FC;
loc_82336748:
	// lwz r11,14892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3808(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3808);
	// lwz r8,3804(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3804);
	// lwz r7,3800(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3800);
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,3840(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r5,3836(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r4,3832(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// lwz r10,14968(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r11,14964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x823930c8
	ctx.lr = 0x8233679C;
	sub_823930C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82347d38
	ctx.lr = 0x823367A4;
	sub_82347D38(ctx, base);
	// b 0x823368fc
	goto loc_823368FC;
loc_823367A8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823368a8
	if (ctx.cr6.eq) goto loc_823368A8;
	// lwz r11,20416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823368a8
	if (!ctx.cr6.eq) goto loc_823368A8;
	// lwz r11,3760(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// li r8,8
	ctx.r8.s64 = 8;
	// stw r17,592(r11)
	REX_STORE_U32(ctx.r11.u32 + 592, r17.u32);
	// lwz r10,3760(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3760);
	// lwz r9,592(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 592);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,592(r10)
	REX_STORE_U32(ctx.r10.u32 + 592, ctx.r7.u32);
	// mulli r11,r9,68
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(68));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// lwz r6,3744(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3744);
	// stw r6,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14964(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14964);
	// stw r3,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r3.u32);
	// lwz r10,14892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r10,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(84));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + r31.u64;
	// lwz r8,14968(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 14968);
	// stw r8,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// lwz r7,220(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 220);
	// stw r7,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r7.u32);
	// lwz r6,224(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 224);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// lwz r5,14888(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// stw r5,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// lwz r4,14892(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// stw r4,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r4.u32);
	// lwz r3,14892(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r3,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(84));
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r9,14948(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 14948);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r10,14892(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// addi r8,r10,178
	ctx.r8.s64 = ctx.r10.s64 + 178;
	// mulli r7,r8,84
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(84));
	// lwzx r6,r7,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r6,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// lwz r5,14892(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mulli r10,r5,84
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(84));
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// lwz r3,14936(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 14936);
	// stw r3,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lwz r9,208(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 208);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r8,180(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 180);
	// stw r8,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r8.u32);
	// lwz r7,192(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// lwz r6,188(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 188);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// lwz r5,200(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 200);
	// stw r5,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r5.u32);
	// b 0x823368fc
	goto loc_823368FC;
loc_823368A8:
	// lwz r11,14892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14892);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// mulli r11,r11,84
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(84));
	// lwz r9,3840(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3840);
	// lwz r8,3836(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3836);
	// lwz r7,3832(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3832);
	// lwz r30,220(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r6,3784(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r5,3780(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r4,3776(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 + r30.u64;
	// lwz r10,14968(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 14968);
	// lwz r11,14964(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 14964);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x823930c8
	ctx.lr = 0x823368FC;
	sub_823930C8(ctx, base);
loc_823368FC:
	// stw r28,14892(r31)
	REX_STORE_U32(r31.u32 + 14892, r28.u32);
	// stw r29,14888(r31)
	REX_STORE_U32(r31.u32 + 14888, r29.u32);
	// stw r18,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r18.u32);
loc_82336908:
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// stw r17,22136(r31)
	REX_STORE_U32(r31.u32 + 22136, r17.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233695c
	if (!ctx.cr6.gt) goto loc_8233695C;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233692c
	if (ctx.cr6.eq) goto loc_8233692C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8233694c
	if (!ctx.cr6.eq) goto loc_8233694C;
loc_8233692C:
	// lwz r11,3492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336954
	if (ctx.cr6.eq) goto loc_82336954;
	// lwz r11,296(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 296);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82336954
	if (ctx.cr6.eq) goto loc_82336954;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82336954
	if (ctx.cr6.eq) goto loc_82336954;
loc_8233694C:
	// mr r11,r18
	ctx.r11.u64 = r18.u64;
	// b 0x82336958
	goto loc_82336958;
loc_82336954:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82336958:
	// stw r11,3432(r31)
	REX_STORE_U32(r31.u32 + 3432, ctx.r11.u32);
loc_8233695C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82331710
	ctx.lr = 0x82336964;
	sub_82331710(ctx, base);
loc_82336964:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82331c88
	ctx.lr = 0x82336974;
	sub_82331C88(ctx, base);
	// lwz r24,15536(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(r24.s32, 7, ctx.xer);
	// beq cr6,0x82336988
	if (ctx.cr6.eq) goto loc_82336988;
	// cmpwi cr6,r24,6
	ctx.cr6.compare<int32_t>(r24.s32, 6, ctx.xer);
	// bne cr6,0x82336d90
	if (!ctx.cr6.eq) goto loc_82336D90;
loc_82336988:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82336d90
	if (!ctx.cr6.eq) goto loc_82336D90;
	// lwz r11,3772(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3772);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r10,21888(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21888);
	// stw r17,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r17.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r22,4(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r21,8(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r23,0(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x823369dc
	if (!ctx.cr6.eq) goto loc_823369DC;
	// lwz r11,14836(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823369dc
	if (!ctx.cr6.gt) goto loc_823369DC;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x823369dc
	if (!ctx.cr6.gt) goto loc_823369DC;
	// lwz r10,22084(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22084);
	// lwz r25,22088(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 22088);
	// b 0x823369e4
	goto loc_823369E4;
loc_823369DC:
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r25,160(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 160);
loc_823369E4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// bne cr6,0x823369f4
	if (!ctx.cr6.eq) goto loc_823369F4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823369F4:
	// lwz r9,15364(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15364);
	// stw r8,15560(r31)
	REX_STORE_U32(r31.u32 + 15560, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82336a28
	if (!ctx.cr6.eq) goto loc_82336A28;
	// addi r11,r10,15
	ctx.r11.s64 = ctx.r10.s64 + 15;
	// addi r7,r25,15
	ctx.r7.s64 = r25.s64 + 15;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r3,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 4;
	// rlwinm r30,r4,4,0,27
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r29,r11,4,0,27
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82336a30
	goto loc_82336A30;
loc_82336A28:
	// lwz r30,132(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r29,132(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82336A30:
	// lwz r4,3980(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82336a60
	if (ctx.cr6.eq) goto loc_82336A60;
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// addi r28,r10,64
	r28.s64 = ctx.r10.s64 + 64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// b 0x82336a74
	goto loc_82336A74;
loc_82336A60:
	// mr r28,r17
	r28.u64 = r17.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// mr r26,r17
	r26.u64 = r17.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
loc_82336A74:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82336a88
	if (!ctx.cr6.eq) goto loc_82336A88;
	// lwz r11,15432(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336a94
	if (ctx.cr6.eq) goto loc_82336A94;
loc_82336A88:
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_82336A94:
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(r19.u32, 3, ctx.xer);
	// bne cr6,0x82336b0c
	if (!ctx.cr6.eq) goto loc_82336B0C;
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// li r9,31
	ctx.r9.s64 = 31;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82336ac4
	if (!ctx.cr6.eq) goto loc_82336AC4;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r15,2016
	r15.s64 = 2016;
	// ori r3,r3,63488
	ctx.r3.u64 = ctx.r3.u64 | 63488;
	// stw r15,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, r15.u32);
	// stw r3,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r3.u32);
loc_82336AC4:
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82336ae4
	if (!ctx.cr6.eq) goto loc_82336AE4;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// li r11,31744
	ctx.r11.s64 = 31744;
	// li r9,992
	ctx.r9.s64 = 992;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// li r20,16
	r20.s64 = 16;
	// stw r9,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
loc_82336AE4:
	// clrlwi r11,r20,16
	ctx.r11.u64 = r20.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82336b0c
	if (!ctx.cr6.eq) goto loc_82336B0C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r9,255
	ctx.r9.s64 = 16711680;
	// ori r3,r11,65280
	ctx.r3.u64 = ctx.r11.u64 | 65280;
	// li r11,255
	ctx.r11.s64 = 255;
	// stw r9,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r9.u32);
	// stw r3,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
loc_82336B0C:
	// lwz r11,22040(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22040);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r8,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// bne cr6,0x82336b2c
	if (!ctx.cr6.eq) goto loc_82336B2C;
	// lwz r11,22120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22120);
loc_82336B2C:
	// clrlwi r3,r20,16
	ctx.r3.u64 = r20.u32 & 0xFFFF;
	// lwz r15,15568(r31)
	r15.u64 = REX_LOAD_U32(r31.u32 + 15568);
	// sth r20,206(r1)
	REX_STORE_U16(ctx.r1.u32 + 206, r20.u16);
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// stw r19,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, r19.u32);
	// sth r18,204(r1)
	REX_STORE_U16(ctx.r1.u32 + 204, r18.u16);
	// stw r17,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, r17.u32);
	// stw r17,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, r17.u32);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// stw r17,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, r17.u32);
	// stw r17,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, r17.u32);
	// mullw r3,r8,r25
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// rlwinm r8,r3,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r15,2
	ctx.cr6.compare<int32_t>(r15.s32, 2, ctx.xer);
	// stw r8,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r8.u32);
	// bne cr6,0x82336b74
	if (!ctx.cr6.eq) goto loc_82336B74;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
loc_82336B74:
	// stw r9,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r3,21656(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21656);
	// add r11,r30,r5
	ctx.r11.u64 = r30.u64 + ctx.r5.u64;
	// add r9,r29,r5
	ctx.r9.u64 = r29.u64 + ctx.r5.u64;
	// sth r18,156(r1)
	REX_STORE_U16(ctx.r1.u32 + 156, r18.u16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r8,158(r1)
	REX_STORE_U16(ctx.r1.u32 + 158, ctx.r8.u16);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// bne cr6,0x82336c54
	if (!ctx.cr6.eq) goto loc_82336C54;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82336bb8
	if (ctx.cr6.eq) goto loc_82336BB8;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// b 0x82336bc4
	goto loc_82336BC4;
loc_82336BB8:
	// lis r8,-32172
	ctx.r8.s64 = -2108424192;
	// lwz r8,2368(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 2368);
	// stw r8,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
loc_82336BC4:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(r24.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x82336c08
	if (!ctx.cr6.eq) goto loc_82336C08;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x82336bf8
	if (!ctx.cr6.gt) goto loc_82336BF8;
	// lwz r11,21680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21680);
	// b 0x82336bfc
	goto loc_82336BFC;
loc_82336BF8:
	// lwz r11,21676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21676);
loc_82336BFC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82336c0c
	if (ctx.cr6.eq) goto loc_82336C0C;
loc_82336C08:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82336C0C:
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// bl 0x8238c668
	ctx.lr = 0x82336C38;
	sub_8238C668(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,21656(r31)
	REX_STORE_U32(r31.u32 + 21656, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336cf0
	if (ctx.cr6.eq) goto loc_82336CF0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
loc_82336C54:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82336c68
	if (ctx.cr6.eq) goto loc_82336C68;
	// lis r8,12593
	ctx.r8.s64 = 825294848;
	// ori r5,r8,13392
	ctx.r5.u64 = ctx.r8.u64 | 13392;
	// b 0x82336c70
	goto loc_82336C70;
loc_82336C68:
	// lis r8,12338
	ctx.r8.s64 = 808583168;
	// ori r5,r8,13385
	ctx.r5.u64 = ctx.r8.u64 | 13385;
loc_82336C70:
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r24,7
	ctx.cr6.compare<int32_t>(r24.s32, 7, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r8.u32);
	// bne cr6,0x82336cb8
	if (!ctx.cr6.eq) goto loc_82336CB8;
	// ld r11,3632(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 3632);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// ble cr6,0x82336ca8
	if (!ctx.cr6.gt) goto loc_82336CA8;
	// lwz r11,21680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21680);
	// b 0x82336cac
	goto loc_82336CAC;
loc_82336CA8:
	// lwz r11,21676(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21676);
loc_82336CAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82336cbc
	if (ctx.cr6.eq) goto loc_82336CBC;
loc_82336CB8:
	// mr r11,r17
	ctx.r11.u64 = r17.u64;
loc_82336CBC:
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// bl 0x8238c1f0
	ctx.lr = 0x82336CE4;
	sub_8238C1F0(ctx, base);
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336dbc
	if (!ctx.cr6.eq) goto loc_82336DBC;
loc_82336CF0:
	// lwz r8,21656(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21656);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82335fcc
	if (ctx.cr6.eq) goto loc_82335FCC;
	// lwz r11,3980(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82336d2c
	if (ctx.cr6.eq) goto loc_82336D2C;
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// addi r7,r26,1
	ctx.r7.s64 = r26.s64 + 1;
	// rlwinm r9,r11,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// add r22,r10,r22
	r22.u64 = ctx.r10.u64 + r22.u64;
	// add r21,r11,r21
	r21.u64 = ctx.r11.u64 + r21.u64;
loc_82336D2C:
	// lwz r11,22144(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// stw r11,52(r8)
	REX_STORE_U32(ctx.r8.u32 + 52, ctx.r11.u32);
	// lwz r10,22144(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22144);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82336d70
	if (!ctx.cr6.eq) goto loc_82336D70;
	// lwz r11,22148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22148);
	// stw r11,40(r8)
	REX_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// lwz r10,22152(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 22152);
	// stw r10,44(r8)
	REX_STORE_U32(ctx.r8.u32 + 44, ctx.r10.u32);
	// lwz r9,22156(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 22156);
	// stw r9,48(r8)
	REX_STORE_U32(ctx.r8.u32 + 48, ctx.r9.u32);
	// lwz r7,22160(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 22160);
	// stw r7,14624(r8)
	REX_STORE_U32(ctx.r8.u32 + 14624, ctx.r7.u32);
	// lwz r6,22164(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 22164);
	// stw r6,14628(r8)
	REX_STORE_U32(ctx.r8.u32 + 14628, ctx.r6.u32);
	// lwz r5,22168(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 22168);
	// stw r5,14632(r8)
	REX_STORE_U32(ctx.r8.u32 + 14632, ctx.r5.u32);
loc_82336D70:
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lwz r3,21656(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 21656);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8238c1c0
	ctx.lr = 0x82336D88;
	sub_8238C1C0(ctx, base);
	// stw r17,21888(r31)
	REX_STORE_U32(r31.u32 + 21888, r17.u32);
	// b 0x82336dac
	goto loc_82336DAC;
loc_82336D90:
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238d7b8
	ctx.lr = 0x82336D9C;
	sub_8238D7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82336dbc
	if (!ctx.cr6.eq) goto loc_82336DBC;
	// stw r17,21888(r31)
	REX_STORE_U32(r31.u32 + 21888, r17.u32);
loc_82336DA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82336DAC:
	// lhz r11,3740(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 3740);
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sth r10,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, ctx.r10.u16);
loc_82336DBC:
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8237DAD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8237DAE0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,1784(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1784);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lhzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// cmpwi cr6,r10,16384
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16384, ctx.xer);
	// bne cr6,0x8237db58
	if (!ctx.cr6.eq) goto loc_8237DB58;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8237DB24:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r9,128
	ctx.r9.s64 = 128;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8237DB40:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x8237db40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8237DB40;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// blt cr6,0x8237db24
	if (ctx.cr6.lt) goto loc_8237DB24;
	// b 0x8237dbc0
	goto loc_8237DBC0;
loc_8237DB58:
	// lwz r9,1788(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1788);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r8,15536(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r8,7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 7, ctx.xer);
	// lhzx r7,r9,r11
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bne cr6,0x8237db9c
	if (!ctx.cr6.eq) goto loc_8237DB9C;
	// lwz r11,22184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 22184);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x8237db98
	if (ctx.cr6.eq) goto loc_8237DB98;
	// bl 0x823a4b90
	ctx.lr = 0x8237DB94;
	sub_823A4B90(ctx, base);
	// b 0x8237db9c
	goto loc_8237DB9C;
loc_8237DB98:
	// bl 0x823a4c80
	ctx.lr = 0x8237DB9C;
	sub_823A4C80(ctx, base);
loc_8237DB9C:
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d50
	ctx.lr = 0x8237DBC0;
	sub_823A4D50(ctx, base);
loc_8237DBC0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8237dbe8
	if (ctx.cr6.eq) goto loc_8237DBE8;
	// lwz r11,3184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3184);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r7,264(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 264);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,208(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 208);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8237DBE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8237DBE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82384460) {
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
	ctx.lr = 0x82384468;
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,3776(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 3776);
	// lwz r9,220(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 220);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lwz r6,228(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r3,232(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r10,3784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// addi r9,r1,260
	ctx.r9.s64 = ctx.r1.s64 + 260;
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// addi r30,r1,192
	r30.s64 = ctx.r1.s64 + 192;
	// stw r5,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r6,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r6.u32);
	// addi r28,r1,280
	r28.s64 = ctx.r1.s64 + 280;
	// stw r29,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, r29.u32);
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, r29.u32);
	// lwz r10,3792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// addi r27,r1,300
	r27.s64 = ctx.r1.s64 + 300;
	// stw r8,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r8.u32);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// stw r30,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, r30.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, r29.u32);
	// addi r26,r1,320
	r26.s64 = ctx.r1.s64 + 320;
	// stw r3,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r30,r1,208
	r30.s64 = ctx.r1.s64 + 208;
	// lwz r23,3812(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// addi r25,r1,340
	r25.s64 = ctx.r1.s64 + 340;
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// lwz r10,2964(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 2964);
	// addi r24,r1,204
	r24.s64 = ctx.r1.s64 + 204;
	// stw r5,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r5.u32);
	// addi r22,r1,176
	r22.s64 = ctx.r1.s64 + 176;
	// stw r4,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// addi r5,r10,735
	ctx.r5.s64 = ctx.r10.s64 + 735;
	// stw r29,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, r29.u32);
	// addi r10,r10,738
	ctx.r10.s64 = ctx.r10.s64 + 738;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// li r21,24
	r21.s64 = 24;
	// stw r29,0(r28)
	REX_STORE_U32(r28.u32 + 0, r29.u32);
	// lwz r9,3796(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// addi r4,r1,360
	ctx.r4.s64 = ctx.r1.s64 + 360;
	// stw r7,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r7.u32);
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r6.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r23,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, r23.u32);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, r29.u32);
	// stw r29,0(r27)
	REX_STORE_U32(r27.u32 + 0, r29.u32);
	// lwz r11,2092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 2092);
	// lwz r5,272(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 272);
	// stw r8,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r8.u32);
	// addi r10,r11,263
	ctx.r10.s64 = ctx.r11.s64 + 263;
	// stw r30,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, r30.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, r29.u32);
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// stw r29,0(r26)
	REX_STORE_U32(r26.u32 + 0, r29.u32);
	// stw r24,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, r24.u32);
	// stw r9,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r9.u32);
	// stw r29,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, r29.u32);
	// stw r3,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// stw r29,0(r25)
	REX_STORE_U32(r25.u32 + 0, r29.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + r31.u32);
	// stw r5,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r5.u32);
	// stw r22,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, r22.u32);
	// stw r7,2916(r31)
	REX_STORE_U32(r31.u32 + 2916, ctx.r7.u32);
	// addi r5,r1,376
	ctx.r5.s64 = ctx.r1.s64 + 376;
	// lwzx r3,r6,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + r31.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r3,2928(r31)
	REX_STORE_U32(r31.u32 + 2928, ctx.r3.u32);
	// li r28,1
	r28.s64 = 1;
	// lwzx r10,r8,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// mr r16,r28
	r16.u64 = r28.u64;
	// stw r10,2096(r31)
	REX_STORE_U32(r31.u32 + 2096, ctx.r10.u32);
	// mr r17,r28
	r17.u64 = r28.u64;
	// stw r21,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, r21.u32);
	// mr r15,r29
	r15.u64 = r29.u64;
	// stw r29,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, r29.u32);
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r29.u32);
	// lwz r9,4016(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// stw r29,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, r29.u32);
	// stw r29,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, r29.u32);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r29,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, r29.u32);
	// lwz r8,2108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 2108);
	// std r29,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, r29.u64);
	// stw r8,2100(r31)
	REX_STORE_U32(r31.u32 + 2100, ctx.r8.u32);
	// bne cr6,0x823845fc
	if (!ctx.cr6.eq) goto loc_823845FC;
	// stw r29,460(r31)
	REX_STORE_U32(r31.u32 + 460, r29.u32);
	// b 0x82384600
	goto loc_82384600;
loc_823845FC:
	// stw r28,460(r31)
	REX_STORE_U32(r31.u32 + 460, r28.u32);
loc_82384600:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// bl 0x82340178
	ctx.lr = 0x8238460C;
	sub_82340178(ctx, base);
	// lwz r11,4016(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4016);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82384624
	if (ctx.cr6.eq) goto loc_82384624;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// bne cr6,0x82384628
	if (!ctx.cr6.eq) goto loc_82384628;
loc_82384624:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82384628:
	// lwz r10,1976(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 248);
	// lwz r3,1976(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 1976);
	// bl 0x82397a10
	ctx.lr = 0x82384640;
	sub_82397A10(ctx, base);
	// lwz r11,248(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 248);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x8238465c
	if (!ctx.cr6.lt) goto loc_8238465C;
	// addi r11,r31,2468
	ctx.r11.s64 = r31.s64 + 2468;
	// addi r10,r31,2484
	ctx.r10.s64 = r31.s64 + 2484;
	// addi r9,r31,2524
	ctx.r9.s64 = r31.s64 + 2524;
	// b 0x82384680
	goto loc_82384680;
loc_8238465C:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x82384674
	if (!ctx.cr6.lt) goto loc_82384674;
	// addi r11,r31,2456
	ctx.r11.s64 = r31.s64 + 2456;
	// addi r10,r31,2496
	ctx.r10.s64 = r31.s64 + 2496;
	// addi r9,r31,2536
	ctx.r9.s64 = r31.s64 + 2536;
	// b 0x82384680
	goto loc_82384680;
loc_82384674:
	// addi r11,r31,2444
	ctx.r11.s64 = r31.s64 + 2444;
	// addi r10,r31,2508
	ctx.r10.s64 = r31.s64 + 2508;
	// addi r9,r31,2548
	ctx.r9.s64 = r31.s64 + 2548;
loc_82384680:
	// stw r10,2520(r31)
	REX_STORE_U32(r31.u32 + 2520, ctx.r10.u32);
	// mr r26,r29
	r26.u64 = r29.u64;
	// stw r9,2560(r31)
	REX_STORE_U32(r31.u32 + 2560, ctx.r9.u32);
	// mr r19,r29
	r19.u64 = r29.u64;
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r10,3776(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// stw r11,2480(r31)
	REX_STORE_U32(r31.u32 + 2480, ctx.r11.u32);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r7,3784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r8,3780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r10,3792(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,3796(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r8,3812(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r10,272(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 272);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// stw r29,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r6,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r4.u32);
	// stw r3,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r3.u32);
	// stw r29,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// stw r7,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r7.u32);
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r9,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r9.u32);
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// stw r5,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r5.u32);
	// ble cr6,0x82384d78
	if (!ctx.cr6.gt) goto loc_82384D78;
	// lis r14,16384
	r14.s64 = 1073741824;
loc_82384708:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 344);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,21940(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 21940);
	// neg r7,r10
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r22,188(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// subf r6,r26,r9
	ctx.r6.u64 = ctx.r9.u64 - r26.u64;
	// lwz r23,192(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r25,196(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// cntlzw r5,r6
	ctx.r5.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// lwz r24,200(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r21,208(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r20,204(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// rlwinm r18,r5,27,31,31
	r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// stw r7,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r7.u32);
	// beq cr6,0x823848cc
	if (ctx.cr6.eq) goto loc_823848CC;
	// lwz r11,21968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21968);
	// rlwinm r27,r26,2,0,29
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823848b8
	if (ctx.cr6.eq) goto loc_823848B8;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21976);
	// lwz r30,84(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,21976(r31)
	REX_STORE_U32(r31.u32 + 21976, ctx.r11.u32);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823847f0
	if (ctx.cr6.eq) goto loc_823847F0;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x823847cc
	if (!ctx.cr6.lt) goto loc_823847CC;
loc_8238478C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823847cc
	if (ctx.cr6.eq) goto loc_823847CC;
	// ld r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r28,r11,r28
	r28.u64 = r28.u64 - ctx.r11.u64;
	// std r6,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r6.u64);
	// stw r7,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r7.u32);
	// bge 0x823847bc
	if (!ctx.cr0.lt) goto loc_823847BC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x823847BC;
	sub_823380C8(ctx, base);
loc_823847BC:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8238478c
	if (ctx.cr6.gt) goto loc_8238478C;
loc_823847CC:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 0);
	// clrldi r9,r28,32
	ctx.r9.u64 = r28.u64 & 0xFFFFFFFF;
	// subf. r8,r28,r10
	ctx.r8.u64 = ctx.r10.u64 - r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r30)
	REX_STORE_U64(r30.u32 + 0, ctx.r7.u64);
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// bge 0x823847f0
	if (!ctx.cr0.lt) goto loc_823847F0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823380c8
	ctx.lr = 0x823847F0;
	sub_823380C8(ctx, base);
loc_823847F0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82337f50
	ctx.lr = 0x82384800;
	sub_82337F50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238f5c8
	ctx.lr = 0x8238480C;
	sub_8238F5C8(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,1948(r31)
	REX_STORE_U32(r31.u32 + 1948, r28.u32);
	// beq cr6,0x82384890
	if (ctx.cr6.eq) goto loc_82384890;
	// stw r29,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r29,20684(r31)
	REX_STORE_U32(r31.u32 + 20684, r29.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r28,288(r31)
	REX_STORE_U32(r31.u32 + 288, r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237cd58
	ctx.lr = 0x82384850;
	sub_8237CD58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384d9c
	if (!ctx.cr6.eq) goto loc_82384D9C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x82384868
	if (ctx.cr6.eq) goto loc_82384868;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(r15.s32, 1, ctx.xer);
	// bne cr6,0x8238486c
	if (!ctx.cr6.eq) goto loc_8238486C;
loc_82384868:
	// mr r15,r30
	r15.u64 = r30.u64;
loc_8238486C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82384d78
	if (ctx.cr6.eq) goto loc_82384D78;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21976);
	// mr r17,r29
	r17.u64 = r29.u64;
	// lwz r26,180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r19,184(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,21976(r31)
	REX_STORE_U32(r31.u32 + 21976, ctx.r11.u32);
	// b 0x82384d58
	goto loc_82384D58;
loc_82384890:
	// lwz r11,20680(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82384aec
	if (!ctx.cr6.eq) goto loc_82384AEC;
	// lwz r11,20684(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82384aec
	if (!ctx.cr6.eq) goto loc_82384AEC;
	// lwz r11,288(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82384aec
	if (!ctx.cr6.eq) goto loc_82384AEC;
	// mr r17,r28
	r17.u64 = r28.u64;
loc_823848B8:
	// lwz r11,21968(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21968);
	// lwzx r10,r11,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823848cc
	if (ctx.cr6.eq) goto loc_823848CC;
	// mr r16,r28
	r16.u64 = r28.u64;
loc_823848CC:
	// lwz r11,3988(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823848ec
	if (ctx.cr6.eq) goto loc_823848EC;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238f9b8
	ctx.lr = 0x823848E4;
	sub_8238F9B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384f10
	if (!ctx.cr6.eq) goto loc_82384F10;
loc_823848EC:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r28,r29
	r28.u64 = r29.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82384c7c
	if (!ctx.cr6.gt) goto loc_82384C7C;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// subf r21,r25,r21
	r21.u64 = r21.u64 - r25.u64;
loc_82384908:
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// clrlwi r8,r30,29
	ctx.r8.u64 = r30.u32 & 0x7;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// addi r7,r11,32
	ctx.r7.s64 = ctx.r11.s64 + 32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// dcbt r6,r24
	// rlwinm r11,r30,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1C;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addi r3,r10,128
	ctx.r3.s64 = ctx.r10.s64 + 128;
	// dcbt r3,r24
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r8,r10,128
	ctx.r8.s64 = ctx.r10.s64 + 128;
	// dcbt r8,r24
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// mullw r11,r7,r9
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r6,r11,128
	ctx.r6.s64 = ctx.r11.s64 + 128;
	// dcbt r6,r24
	// lwz r5,208(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 208);
	// clrlwi r3,r30,28
	ctx.r3.u64 = r30.u32 & 0xF;
	// add r10,r21,r25
	ctx.r10.u64 = r21.u64 + r25.u64;
	// mullw r11,r3,r5
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// dcbt r11,r10
	// dcbt r11,r20
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r29,328(r31)
	REX_STORE_U32(r31.u32 + 328, r29.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82390678
	ctx.lr = 0x82384984;
	sub_82390678(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x82384c2c
	if (!ctx.cr6.eq) goto loc_82384C2C;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,21,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x700;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r27,r8,27,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bl 0x823a43c8
	ctx.lr = 0x823849B8;
	sub_823A43C8(ctx, base);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82384bb8
	if (ctx.cr6.eq) goto loc_82384BB8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r14.u32, ctx.xer);
	// bne cr6,0x82384b84
	if (!ctx.cr6.eq) goto loc_82384B84;
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r10,1784(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r26.s32);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + r30.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r7,16384
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16384, ctx.xer);
	// beq cr6,0x82384b84
	if (ctx.cr6.eq) goto loc_82384B84;
	// sth r29,14(r4)
	REX_STORE_U16(ctx.r4.u32 + 14, r29.u16);
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// sth r29,16(r4)
	REX_STORE_U16(ctx.r4.u32 + 16, r29.u16);
	// srawi r8,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	ctx.r8.s64 = r19.s32 >> 1;
	// sth r29,18(r4)
	REX_STORE_U16(ctx.r4.u32 + 18, r29.u16);
	// srawi r7,r28,1
	ctx.xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x1) != 0);
	ctx.r7.s64 = r28.s32 >> 1;
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,8(r10)
	REX_STORE_U8(ctx.r10.u32 + 8, r29.u8);
	// lwz r9,176(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,9(r9)
	REX_STORE_U8(ctx.r9.u32 + 9, r29.u8);
	// lwz r6,176(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,10(r6)
	REX_STORE_U8(ctx.r6.u32 + 10, r29.u8);
	// lwz r5,176(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,11(r5)
	REX_STORE_U8(ctx.r5.u32 + 11, r29.u8);
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,12(r4)
	REX_STORE_U8(ctx.r4.u32 + 12, r29.u8);
	// lwz r3,176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// stb r29,13(r3)
	REX_STORE_U8(ctx.r3.u32 + 13, r29.u8);
	// lwz r11,20404(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20404);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r6,1776(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1776);
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mullw r4,r5,r26
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(r26.s32);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhzx r4,r6,r9
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82384b54
	if (!ctx.cr6.eq) goto loc_82384B54;
	// lwz r8,1780(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1780);
	// lhzx r7,r8,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82384b54
	if (!ctx.cr6.eq) goto loc_82384B54;
	// lwz r6,3156(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 3156);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,204(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r4,3812(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 3812);
	// mullw r9,r3,r19
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(r19.s32);
	// lwz r8,3796(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3796);
	// lwz r7,3792(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 3792);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// add r6,r9,r28
	ctx.r6.u64 = ctx.r9.u64 + r28.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x82384AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r4,r5,32768
	ctx.r4.u64 = ctx.r5.u64 | 2147483648;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r3,2
	ctx.r10.u64 = ctx.r3.u64 | 131072;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82384bf4
	goto loc_82384BF4;
loc_82384AEC:
	// stw r29,20680(r31)
	REX_STORE_U32(r31.u32 + 20680, r29.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r29,20684(r31)
	REX_STORE_U32(r31.u32 + 20684, r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,288(r31)
	REX_STORE_U32(r31.u32 + 288, r28.u32);
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237cd58
	ctx.lr = 0x82384B1C;
	sub_8237CD58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384da8
	if (!ctx.cr6.eq) goto loc_82384DA8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// bne cr6,0x82384b30
	if (!ctx.cr6.eq) goto loc_82384B30;
	// mr r15,r28
	r15.u64 = r28.u64;
loc_82384B30:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82384d78
	if (ctx.cr6.eq) goto loc_82384D78;
	// lwz r11,21976(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 21976);
	// mr r17,r29
	r17.u64 = r29.u64;
	// lwz r26,180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r19,184(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r11,21976(r31)
	REX_STORE_U32(r31.u32 + 21976, ctx.r11.u32);
	// b 0x82384d58
	goto loc_82384D58;
loc_82384B54:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237d850
	ctx.lr = 0x82384B70;
	sub_8237D850(ctx, base);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82384bf4
	goto loc_82384BF4;
loc_82384B84:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82382088
	ctx.lr = 0x82384BB4;
	sub_82382088(ctx, base);
	// b 0x82384be8
	goto loc_82384BE8;
loc_82384BB8:
	// rlwinm r11,r19,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r19,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237f240
	ctx.lr = 0x82384BE8;
	sub_8237F240(ctx, base);
loc_82384BE8:
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384c34
	if (!ctx.cr6.eq) goto loc_82384C34;
loc_82384BF4:
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r22,r22,16
	r22.s64 = r22.s64 + 16;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r4,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
	// addi r20,r20,8
	r20.s64 = r20.s64 + 8;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82384908
	if (ctx.cr6.lt) goto loc_82384908;
	// b 0x82384c7c
	goto loc_82384C7C;
loc_82384C2C:
	// li r5,-1
	ctx.r5.s64 = -1;
	// b 0x82384c3c
	goto loc_82384C3C;
loc_82384C34:
	// li r5,-2
	ctx.r5.s64 = -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82384C3C:
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,184
	ctx.r8.s64 = ctx.r1.s64 + 184;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8237cd58
	ctx.lr = 0x82384C58;
	sub_8237CD58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82384db4
	if (!ctx.cr6.eq) goto loc_82384DB4;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(r15.s32, 0, ctx.xer);
	// beq cr6,0x82384c70
	if (ctx.cr6.eq) goto loc_82384C70;
	// cmpwi cr6,r15,1
	ctx.cr6.compare<int32_t>(r15.s32, 1, ctx.xer);
	// bne cr6,0x82384c74
	if (!ctx.cr6.eq) goto loc_82384C74;
loc_82384C70:
	// mr r15,r27
	r15.u64 = r27.u64;
loc_82384C74:
	// lwz r26,180(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r19,184(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_82384C7C:
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82384cac
	if (ctx.cr6.eq) goto loc_82384CAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5f78
	ctx.lr = 0x82384CAC;
	sub_823A5F78(ctx, base);
loc_82384CAC:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r16,r29
	r16.u64 = r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82384cdc
	if (!ctx.cr6.lt) goto loc_82384CDC;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// lwz r10,21968(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 21968);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82384cdc
	if (ctx.cr6.eq) goto loc_82384CDC;
	// li r18,1
	r18.s64 = 1;
loc_82384CDC:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// lwz r9,192(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r8,188(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r3,208(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// add r8,r4,r10
	ctx.r8.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwz r9,204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r6,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r6.u32);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stw r7,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r7.u32);
	// stw r8,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r8.u32);
	// stw r4,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r4.u32);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// beq cr6,0x82384d58
	if (ctx.cr6.eq) goto loc_82384D58;
	// lwz r11,3004(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3004);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82384d58
	if (ctx.cr6.eq) goto loc_82384D58;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5f78
	ctx.lr = 0x82384D58;
	sub_823A5F78(ctx, base);
loc_82384D58:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r19,r19,16
	r19.s64 = r19.s64 + 16;
	// stw r26,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, r26.u32);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// stw r19,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, r19.u32);
	// li r28,1
	r28.s64 = 1;
	// blt cr6,0x82384708
	if (ctx.cr6.lt) goto loc_82384708;
loc_82384D78:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82384e50
	if (ctx.cr6.eq) goto loc_82384E50;
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82384dc0
	if (!ctx.cr6.eq) goto loc_82384DC0;
	// bl 0x8237f088
	ctx.lr = 0x82384D98;
	sub_8237F088(ctx, base);
	// b 0x82384dc4
	goto loc_82384DC4;
loc_82384D9C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822d4ea0
	return;
loc_82384DA8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822d4ea0
	return;
loc_82384DB4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822d4ea0
	return;
loc_82384DC0:
	// bl 0x8237efc0
	ctx.lr = 0x82384DC4;
	sub_8237EFC0(ctx, base);
loc_82384DC4:
	// lwz r10,3868(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3868);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,15760(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15760);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// lwz r8,3784(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3784);
	// lwz r30,3972(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 3972);
	// stw r10,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r27,15824(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 15824);
	// lwz r26,15808(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 15808);
	// lwz r25,15816(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 15816);
	// lwz r24,15776(r31)
	r24.u64 = REX_LOAD_U32(r31.u32 + 15776);
	// lwz r23,15792(r31)
	r23.u64 = REX_LOAD_U32(r31.u32 + 15792);
	// lwz r22,15800(r31)
	r22.u64 = REX_LOAD_U32(r31.u32 + 15800);
	// lwz r21,15784(r31)
	r21.u64 = REX_LOAD_U32(r31.u32 + 15784);
	// lwz r10,3780(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 3780);
	// lwz r9,220(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r8,3776(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3776);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,15744(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15744);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,15768(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 15768);
	// lwz r8,15752(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 15752);
	// lwz r7,15736(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 15736);
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r30.u32);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r27.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r26.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stw r24,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// stw r29,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r29.u32);
	// stw r23,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r23.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r22.u32);
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// bl 0x8238bc60
	ctx.lr = 0x82384E50;
	sub_8238BC60(ctx, base);
loc_82384E50:
	// lwz r11,14852(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82384ed4
	if (ctx.cr6.eq) goto loc_82384ED4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r9,280(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82384ed4
	if (!ctx.cr6.gt) goto loc_82384ED4;
loc_82384E70:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82384ec4
	if (!ctx.cr6.gt) goto loc_82384EC4;
loc_82384E80:
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// lwz r7,1784(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1784);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r4,r5,r7
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r7,r10,0,15,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFDFFFF;
	// cmplwi cr6,r4,16384
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16384, ctx.xer);
	// beq cr6,0x82384eac
	if (ctx.cr6.eq) goto loc_82384EAC;
	// oris r7,r10,2
	ctx.r7.u64 = ctx.r10.u64 | 131072;
loc_82384EAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 136);
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82384e80
	if (ctx.cr6.lt) goto loc_82384E80;
loc_82384EC4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82384e70
	if (ctx.cr6.lt) goto loc_82384E70;
loc_82384ED4:
	// lwz r11,3948(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82384efc
	if (!ctx.cr6.eq) goto loc_82384EFC;
	// lwz r11,14888(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 14888);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82384efc
	if (!ctx.cr6.eq) goto loc_82384EFC;
	// lwz r11,15260(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15260);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// beq cr6,0x82384f00
	if (ctx.cr6.eq) goto loc_82384F00;
loc_82384EFC:
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
loc_82384F00:
	// stw r11,15624(r31)
	REX_STORE_U32(r31.u32 + 15624, ctx.r11.u32);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r29,15628(r31)
	REX_STORE_U32(r31.u32 + 15628, r29.u32);
	// stw r28,15600(r31)
	REX_STORE_U32(r31.u32 + 15600, r28.u32);
loc_82384F10:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823AB740) {
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
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// ble cr6,0x823ab75c
	if (!ctx.cr6.gt) goto loc_823AB75C;
	// li r4,3
	ctx.r4.s64 = 3;
loc_823AB75C:
	// lwz r11,21704(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 21704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// addi r11,r11,8424
	ctx.r11.s64 = ctx.r11.s64 + 8424;
	// bne cr6,0x823ab7e0
	if (!ctx.cr6.eq) goto loc_823AB7E0;
	// mulli r8,r4,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// addi r7,r11,-112
	ctx.r7.s64 = ctx.r11.s64 + -112;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// lwzx r5,r8,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// addi r7,r9,8
	ctx.r7.s64 = ctx.r9.s64 + 8;
	// addi r9,r11,-112
	ctx.r9.s64 = ctx.r11.s64 + -112;
	// addi r31,r10,12
	r31.s64 = ctx.r10.s64 + 12;
	// addi r10,r11,-112
	ctx.r10.s64 = ctx.r11.s64 + -112;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// stw r5,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r5.u32);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// lwzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 + 20;
	// stw r6,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r6.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// stw r10,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r10.u32);
	// lwzx r7,r8,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r8,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// b 0x823ab830
	goto loc_823AB830;
loc_823AB7E0:
	// mulli r10,r4,28
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// addi r7,r11,12
	ctx.r7.s64 = ctx.r11.s64 + 12;
	// stw r6,21820(r3)
	REX_STORE_U32(ctx.r3.u32 + 21820, ctx.r6.u32);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r31,r11,20
	r31.s64 = ctx.r11.s64 + 20;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stw r9,21824(r3)
	REX_STORE_U32(ctx.r3.u32 + 21824, ctx.r9.u32);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// stw r8,21828(r3)
	REX_STORE_U32(ctx.r3.u32 + 21828, ctx.r8.u32);
	// lwzx r7,r10,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r7,21832(r3)
	REX_STORE_U32(ctx.r3.u32 + 21832, ctx.r7.u32);
	// lwzx r6,r10,r5
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r6,21836(r3)
	REX_STORE_U32(ctx.r3.u32 + 21836, ctx.r6.u32);
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stw r5,21840(r3)
	REX_STORE_U32(ctx.r3.u32 + 21840, ctx.r5.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_823AB830:
	// stw r11,21844(r3)
	REX_STORE_U32(ctx.r3.u32 + 21844, ctx.r11.u32);
	// bl 0x823ab0b8
	ctx.lr = 0x823AB838;
	sub_823AB0B8(ctx, base);
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

DEFINE_REX_FUNC(sub_823AF558) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e54
	ctx.lr = 0x823AF560;
	// li r31,1
	r31.s64 = 1;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// slw r20,r31,r11
	r20.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823af588
	if (ctx.cr6.eq) goto loc_823AF588;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823af588
	if (ctx.cr6.eq) goto loc_823AF588;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x823af79c
	if (!ctx.cr6.eq) goto loc_823AF79C;
loc_823AF588:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r9,r6,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,23736
	ctx.r11.s64 = ctx.r11.s64 + 23736;
	// rlwinm r8,r7,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// li r18,0
	r18.s64 = 0;
	// add r28,r9,r11
	r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r23,r8,r11
	r23.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x823af5e0
	if (!ctx.cr6.eq) goto loc_823AF5E0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x823af5bc
	if (ctx.cr6.eq) goto loc_823AF5BC;
	// li r27,6
	r27.s64 = 6;
loc_823AF5BC:
	// rlwinm r9,r20,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r1,-220
	ctx.r8.s64 = ctx.r1.s64 + -220;
	// addi r7,r1,-222
	ctx.r7.s64 = ctx.r1.s64 + -222;
	// mr r25,r18
	r25.u64 = r18.u64;
	// mr r24,r18
	r24.u64 = r18.u64;
	// addi r21,r20,1
	r21.s64 = r20.s64 + 1;
	// sthx r18,r9,r8
	REX_STORE_U16(ctx.r9.u32 + ctx.r8.u32, r18.u16);
	// sthx r18,r9,r7
	REX_STORE_U16(ctx.r9.u32 + ctx.r7.u32, r18.u16);
	// b 0x823af648
	goto loc_823AF648;
loc_823AF5E0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823af614
	if (!ctx.cr6.eq) goto loc_823AF614;
	// mr r27,r18
	r27.u64 = r18.u64;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r25,4
	r25.s64 = 4;
	// beq cr6,0x823af5fc
	if (ctx.cr6.eq) goto loc_823AF5FC;
	// li r25,6
	r25.s64 = 6;
loc_823AF5FC:
	// addi r11,r25,-1
	ctx.r11.s64 = r25.s64 + -1;
	// mr r26,r18
	r26.u64 = r18.u64;
	// slw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// subf r24,r10,r9
	r24.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r21,r20,3
	r21.s64 = r20.s64 + 3;
	// b 0x823af658
	goto loc_823AF658;
loc_823AF614:
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// li r9,4
	ctx.r9.s64 = 4;
	// beq cr6,0x823af624
	if (ctx.cr6.eq) goto loc_823AF624;
	// li r9,6
	ctx.r9.s64 = 6;
loc_823AF624:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// beq cr6,0x823af634
	if (ctx.cr6.eq) goto loc_823AF634;
	// li r11,6
	ctx.r11.s64 = 6;
loc_823AF634:
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// li r25,7
	r25.s64 = 7;
	// addi r27,r11,-7
	r27.s64 = ctx.r11.s64 + -7;
	// subfic r24,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	r24.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// addi r21,r20,3
	r21.s64 = r20.s64 + 3;
loc_823AF648:
	// addi r11,r27,-1
	ctx.r11.s64 = r27.s64 + -1;
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r11.u8 & 0x3F));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r26,r11,-1
	r26.s64 = ctx.r11.s64 + -1;
loc_823AF658:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x823af79c
	if (!ctx.cr6.gt) goto loc_823AF79C;
	// subf r11,r4,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r4.u64;
	// mr r19,r20
	r19.u64 = r20.u64;
	// addi r22,r11,-1
	r22.s64 = ctx.r11.s64 + -1;
loc_823AF66C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// ble cr6,0x823af6f0
	if (!ctx.cr6.gt) goto loc_823AF6F0;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r9,6(r23)
	ctx.r9.u64 = REX_LOAD_U16(r23.u32 + 6);
	// lhz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U16(r23.u32 + 4);
	// addi r10,r1,-226
	ctx.r10.s64 = ctx.r1.s64 + -226;
	// add r7,r4,r11
	ctx.r7.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// lhz r30,2(r23)
	r30.u64 = REX_LOAD_U16(r23.u32 + 2);
	// mtctr r21
	ctx.ctr.u64 = r21.u64;
	// extsh r29,r11
	r29.s64 = ctx.r11.s16;
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r31,r8
	r31.s64 = ctx.r8.s16;
	// extsh r30,r30
	r30.s64 = r30.s16;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_823AF6AC:
	// lbzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// lbzx r17,r11,r7
	r17.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// mullw r8,r9,r31
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(r31.s32);
	// lbzx r16,r11,r4
	r16.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r15,0(r11)
	r15.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mullw r9,r17,r6
	ctx.r9.s64 = int64_t(r17.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mullw r8,r16,r30
	ctx.r8.s64 = int64_t(r16.s32) * int64_t(r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mullw r8,r15,r29
	ctx.r8.s64 = int64_t(r15.s32) * int64_t(r29.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r9,r26
	ctx.r8.u64 = ctx.r9.u64 + r26.u64;
	// sraw r9,r8,r27
	temp.u32 = r27.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r9.s64 = ctx.r8.s32 >> temp.u32;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sthu r8,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x823af6ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF6AC;
loc_823AF6F0:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mtctr r20
	ctx.ctr.u64 = r20.u64;
	// addi r11,r1,-220
	ctx.r11.s64 = ctx.r1.s64 + -220;
loc_823AF6FC:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,6(r28)
	ctx.r7.u64 = REX_LOAD_U16(r28.u32 + 6);
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// lhz r3,4(r28)
	ctx.r3.u64 = REX_LOAD_U16(r28.u32 + 4);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhz r7,-2(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r31,2(r28)
	r31.u64 = REX_LOAD_U16(r28.u32 + 2);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lhz r30,-4(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r29,0(r28)
	r29.u64 = REX_LOAD_U16(r28.u32 + 0);
	// mullw r9,r6,r3
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r3.s32);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// extsh r6,r31
	ctx.r6.s64 = r31.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r6
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// extsh r3,r30
	ctx.r3.s64 = r30.s16;
	// extsh r7,r29
	ctx.r7.s64 = r29.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r3,r7
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r24
	ctx.r6.u64 = ctx.r10.u64 + r24.u64;
	// sraw. r10,r6,r25
	temp.u32 = r25.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x823af76c
	if (!ctx.cr0.lt) goto loc_823AF76C;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x823af778
	goto loc_823AF778;
loc_823AF76C:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x823af778
	if (!ctx.cr6.gt) goto loc_823AF778;
	// li r10,255
	ctx.r10.s64 = 255;
loc_823AF778:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stbx r10,r8,r5
	REX_STORE_U8(ctx.r8.u32 + ctx.r5.u32, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x823af6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823AF6FC;
	// addic. r19,r19,-1
	ctx.xer.ca = r19.u32 > 0;
	r19.s64 = r19.s64 + -1;
	ctx.cr0.compare<int32_t>(r19.s32, 0, ctx.xer);
	// add r22,r22,r4
	r22.u64 = r22.u64 + ctx.r4.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bne 0x823af66c
	if (!ctx.cr0.eq) goto loc_823AF66C;
loc_823AF79C:
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_823BDA28) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823BDA30;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r28)
	r30.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// ble cr6,0x823bdabc
	if (!ctx.cr6.gt) goto loc_823BDABC;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r29,4(r10)
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x823bdabc
	if (!ctx.cr6.gt) goto loc_823BDABC;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(r28.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823bda64
	if (ctx.cr6.eq) goto loc_823BDA64;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x823bda78
	if (!ctx.cr6.eq) goto loc_823BDA78;
loc_823BDA64:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823bdc1c
	if (ctx.cr6.eq) goto loc_823BDC1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x823bdc1c
	if (ctx.cr6.eq) goto loc_823BDC1C;
loc_823BDA78:
	// lwz r11,14580(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823bdac4
	if (ctx.cr6.eq) goto loc_823BDAC4;
	// lwz r11,14572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14572);
	// lwz r9,14564(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 14564);
	// subf r7,r9,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r9.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,14576(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 14576);
	// srawi r9,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r31.s32 >> 31;
	// lwz r7,14568(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 14568);
	// xor r6,r31,r9
	ctx.r6.u64 = r31.u64 ^ ctx.r9.u64;
	// subf r5,r7,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x823bdaf4
	if (ctx.cr6.eq) goto loc_823BDAF4;
loc_823BDABC:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x822d4ed8
	return;
loc_823BDAC4:
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r31,8(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// srawi r7,r31,31
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = r31.s32 >> 31;
	// xor r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// xor r5,r31,r7
	ctx.r5.u64 = r31.u64 ^ ctx.r7.u64;
	// subf r4,r9,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r9.u64;
	// subf r3,r7,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r7.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
loc_823BDAF4:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bdb18
	if (!ctx.cr6.eq) goto loc_823BDB18;
	// srawi r9,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r9.s64 = r30.s32 >> 2;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r30
	ctx.r5.u64 = r30.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x823bdabc
	if (!ctx.cr0.eq) goto loc_823BDABC;
loc_823BDB18:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823bdb38
	if (!ctx.cr6.eq) goto loc_823BDB38;
	// srawi r11,r29,2
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r11.s64 = r29.s32 >> 2;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r7,r29
	ctx.r6.u64 = r29.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x823bdabc
	if (!ctx.cr0.eq) goto loc_823BDABC;
loc_823BDB38:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r9,22870
	ctx.r9.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r7,21849
	ctx.r7.s64 = 1431896064;
	// lis r6,22101
	ctx.r6.s64 = 1448411136;
	// lis r5,12338
	ctx.r5.s64 = 808583168;
	// lis r4,12850
	ctx.r4.s64 = 842137600;
	// ori r9,r9,22869
	ctx.r9.u64 = ctx.r9.u64 | 22869;
	// ori r7,r7,22105
	ctx.r7.u64 = ctx.r7.u64 | 22105;
	// ori r6,r6,22857
	ctx.r6.u64 = ctx.r6.u64 | 22857;
	// ori r5,r5,13385
	ctx.r5.u64 = ctx.r5.u64 | 13385;
	// ori r4,r4,13392
	ctx.r4.u64 = ctx.r4.u64 | 13392;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823bdb98
	if (ctx.cr6.eq) goto loc_823BDB98;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823bdb98
	if (ctx.cr6.eq) goto loc_823BDB98;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823bdb98
	if (ctx.cr6.eq) goto loc_823BDB98;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823bdb98
	if (ctx.cr6.eq) goto loc_823BDB98;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823bdb98
	if (ctx.cr6.eq) goto loc_823BDB98;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823bdba4
	if (!ctx.cr6.eq) goto loc_823BDBA4;
loc_823BDB98:
	// clrlwi r3,r30,31
	ctx.r3.u64 = r30.u32 & 0x1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
loc_823BDBA4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823bdbd4
	if (ctx.cr6.eq) goto loc_823BDBD4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823bdbd4
	if (ctx.cr6.eq) goto loc_823BDBD4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x823bdbd4
	if (ctx.cr6.eq) goto loc_823BDBD4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823bdbd4
	if (ctx.cr6.eq) goto loc_823BDBD4;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x823bdbd4
	if (ctx.cr6.eq) goto loc_823BDBD4;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823bdbe0
	if (!ctx.cr6.eq) goto loc_823BDBE0;
loc_823BDBD4:
	// clrlwi r11,r29,31
	ctx.r11.u64 = r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
loc_823BDBE0:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823bdbf0
	if (ctx.cr6.eq) goto loc_823BDBF0;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823bdc00
	if (!ctx.cr6.eq) goto loc_823BDC00;
loc_823BDBF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
loc_823BDC00:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823bdc10
	if (ctx.cr6.eq) goto loc_823BDC10;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823bdc1c
	if (!ctx.cr6.eq) goto loc_823BDC1C;
loc_823BDC10:
	// clrlwi r11,r31,31
	ctx.r11.u64 = r31.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823bdabc
	if (!ctx.cr6.eq) goto loc_823BDABC;
loc_823BDC1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823C1538) {
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
	ctx.lr = 0x823C1540;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,356(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// stw r4,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// srawi r11,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 31;
	// stw r9,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// xor r10,r30,r11
	ctx.r10.u64 = r30.u64 ^ ctx.r11.u64;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// beq cr6,0x823c1588
	if (ctx.cr6.eq) goto loc_823C1588;
	// srawi r6,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	ctx.r6.s64 = r30.s32 >> 1;
loc_823C1588:
	// lwz r24,364(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// srawi r11,r24,31
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r24.s32 >> 31;
	// xor r10,r24,r11
	ctx.r10.u64 = r24.u64 ^ ctx.r11.u64;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x823c15a4
	if (ctx.cr6.eq) goto loc_823C15A4;
	// srawi r24,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r24.s64 = r24.s32 >> 1;
loc_823C15A4:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lwz r29,340(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r10,r18,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 16) & 0xFFFF0000;
	// lwz r26,380(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r11,r17,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 16) & 0xFFFF0000;
	// lwz r7,348(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subf r31,r9,r11
	r31.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rotlwi r9,r3,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// rotlwi r8,r31,1
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 1);
	// addi r28,r29,-1
	r28.s64 = r29.s64 + -1;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r27,r26,1
	r27.s64 = r26.s64 + 1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lis r25,0
	r25.s64 = 0;
	// clrlwi r23,r27,30
	r23.u64 = r27.u32 & 0x3;
	// andc r9,r28,r9
	ctx.r9.u64 = r28.u64 & ~ctx.r9.u64;
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// ori r27,r25,32768
	r27.u64 = r25.u64 | 32768;
	// divw r25,r3,r28
	r25.u64 = uint32_t((r28.s32 && !(ctx.r3.s32 == INT32_MIN && r28.s32 == -1)) ? ctx.r3.s32 / r28.s32 : 0);
	// twllei r28,0
	if (r28.s32 == 0 || r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// divw r15,r31,r7
	r15.u64 = uint32_t((ctx.r7.s32 && !(r31.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? r31.s32 / ctx.r7.s32 : 0);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(r23.s32, 0, ctx.xer);
	// bne cr6,0x823c1674
	if (!ctx.cr6.eq) goto loc_823C1674;
	// srawi r9,r29,1
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1) != 0);
	ctx.r9.s64 = r29.s32 >> 1;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,30
	ctx.r7.u64 = ctx.r8.u32 & 0x3;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x823c1674
	if (!ctx.cr6.eq) goto loc_823C1674;
	// rlwinm r28,r15,1,0,30
	r28.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r25,1,0,30
	r24.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// li r31,17
	r31.s64 = 17;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// addi r3,r26,-3
	ctx.r3.s64 = r26.s64 + -3;
	// bl 0x823c07c0
	ctx.lr = 0x823C1650;
	sub_823C07C0(ctx, base);
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// bl 0x823c07c0
	ctx.lr = 0x823C166C;
	sub_823C07C0(ctx, base);
	// lwz r16,96(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x823c1724
	goto loc_823C1724;
loc_823C1674:
	// srawi r9,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	ctx.r9.s64 = r15.s32 >> 4;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// mr r23,r27
	r23.u64 = r27.u64;
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r20,r27,r8
	r20.u64 = ctx.r8.u64 - r27.u64;
	// cmpw cr6,r20,r27
	ctx.cr6.compare<int32_t>(r20.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1724
	if (ctx.cr6.lt) goto loc_823C1724;
	// srawi r11,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	ctx.r11.s64 = r25.s32 >> 4;
	// lwz r22,388(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// rlwinm r21,r15,1,0,30
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r28,r27,r10
	r28.u64 = ctx.r10.u64 - r27.u64;
loc_823C16B4:
	// srawi r9,r23,17
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = r23.s32 >> 17;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1710
	if (ctx.cr6.lt) goto loc_823C1710;
	// mullw r3,r9,r5
	ctx.r3.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// add r31,r3,r19
	r31.u64 = ctx.r3.u64 + r19.u64;
	// add r30,r7,r22
	r30.u64 = ctx.r7.u64 + r22.u64;
	// rlwinm r29,r25,1,0,30
	r29.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
loc_823C16DC:
	// srawi r9,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 17;
	// add r10,r29,r10
	ctx.r10.u64 = r29.u64 + ctx.r10.u64;
	// add r14,r3,r9
	r14.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r28.s32, ctx.xer);
	// lbzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + ctx.r9.u32);
	// lbzx r14,r14,r4
	r14.u64 = REX_LOAD_U8(r14.u32 + ctx.r4.u32);
	// stbx r14,r8,r26
	REX_STORE_U8(ctx.r8.u32 + r26.u32, r14.u8);
	// stbx r9,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r9.u8);
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + r24.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// ble cr6,0x823c16dc
	if (!ctx.cr6.gt) goto loc_823C16DC;
	// lwz r14,276(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r30,356(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
loc_823C1710:
	// add r23,r21,r23
	r23.u64 = r21.u64 + r23.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(r23.s32, r20.s32, ctx.xer);
	// ble cr6,0x823c16b4
	if (!ctx.cr6.gt) goto loc_823C16B4;
	// lwz r29,340(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
loc_823C1724:
	// addi r11,r14,1
	ctx.r11.s64 = r14.s64 + 1;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823c1774
	if (!ctx.cr6.eq) goto loc_823C1774;
	// clrlwi r11,r29,30
	ctx.r11.u64 = r29.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823c1774
	if (!ctx.cr6.eq) goto loc_823C1774;
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r5,324(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// lwz r4,284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r3,r14,-3
	ctx.r3.s64 = r14.s64 + -3;
	// bl 0x823c07c0
	ctx.lr = 0x823C176C;
	sub_823C07C0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
loc_823C1774:
	// srawi r11,r15,4
	ctx.xer.ca = (r15.s32 < 0) & ((r15.u32 & 0xF) != 0);
	ctx.r11.s64 = r15.s32 >> 4;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r29,r27,r9
	r29.u64 = ctx.r9.u64 - r27.u64;
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(r29.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1824
	if (ctx.cr6.lt) goto loc_823C1824;
	// srawi r11,r25,4
	ctx.xer.ca = (r25.s32 < 0) & ((r25.u32 & 0xF) != 0);
	ctx.r11.s64 = r25.s32 >> 4;
	// rlwinm r31,r15,1,0,30
	r31.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r16
	ctx.r10.u64 = ctx.r11.u64 + r16.u64;
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// subf r4,r27,r10
	ctx.r4.u64 = ctx.r10.u64 - r27.u64;
loc_823C17B0:
	// add r11,r3,r15
	ctx.r11.u64 = ctx.r3.u64 + r15.u64;
	// srawi r9,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 16;
	// srawi r6,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r27.s32, ctx.xer);
	// blt cr6,0x823c1814
	if (ctx.cr6.lt) goto loc_823C1814;
	// lwz r5,324(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r28,356(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mullw r7,r9,r5
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// mullw r9,r6,r5
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// lwz r6,284(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r5,r8,r28
	ctx.r5.u64 = ctx.r8.u64 + r28.u64;
loc_823C17EC:
	// srawi r9,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 16;
	// lwz r28,364(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// lbzx r26,r7,r9
	r26.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r9.u32);
	// lbzx r9,r6,r9
	ctx.r9.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r9.u32);
	// stbx r26,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r26.u8);
	// stbx r9,r5,r10
	REX_STORE_U8(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u8);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// ble cr6,0x823c17ec
	if (!ctx.cr6.gt) goto loc_823C17EC;
loc_823C1814:
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r29.s32, ctx.xer);
	// ble cr6,0x823c17b0
	if (!ctx.cr6.gt) goto loc_823C17B0;
loc_823C1824:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823CCD88) {
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
	ctx.lr = 0x823CCD90;
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823CCDB4;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x823cd0c0
	ctx.lr = 0x823CCDC4;
	sub_823CD0C0(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823cd0c0
	ctx.lr = 0x823CCDD4;
	sub_823CD0C0(ctx, base);
	// addi r4,r29,28
	ctx.r4.s64 = r29.s64 + 28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x822d4fa0
	ctx.lr = 0x823CCDE4;
	sub_822D4FA0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r31,24
	ctx.r4.s64 = r31.s64 + 24;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823cd088
	ctx.lr = 0x823CCDF4;
	sub_823CD088(ctx, base);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f5,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,21056(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// lfs f3,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// fmadds f2,f12,f7,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f7.f64, ctx.f9.f64)));
	// fmadds f1,f5,f12,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f5.f64, ctx.f12.f64, ctx.f6.f64)));
	// fmadds f31,f11,f4,f2
	f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f4.f64, ctx.f2.f64)));
	// fmadds f2,f3,f11,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f3.f64, ctx.f11.f64, ctx.f1.f64)));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x823cce88
	if (ctx.cr6.gt) goto loc_823CCE88;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x823cce88
	if (ctx.cr6.gt) goto loc_823CCE88;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,-13836(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13836);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// blt cr6,0x823cce88
	if (ctx.cr6.lt) goto loc_823CCE88;
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x823cce88
	if (ctx.cr6.lt) goto loc_823CCE88;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_823CCE88:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822d48b8
	ctx.lr = 0x823CCE90;
	sub_822D48B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x823ccecc
	if (!ctx.cr6.gt) goto loc_823CCECC;
	// bl 0x822d4c88
	ctx.lr = 0x823CCEA8;
	sub_822D4C88(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stfs f30,4(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
loc_823CCECC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// fneg f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// bl 0x822d4c88
	ctx.lr = 0x823CCEDC;
	sub_822D4C88(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-48(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823CF128) {
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
	ctx.lr = 0x823CF130;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r5,261
	r27.s64 = ctx.r5.s64 + 261;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r11,r27,r6
	ctx.r11.u64 = r27.u64 + ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// clrlwi. r26,r7,31
	r26.u64 = ctx.r7.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ori r28,r10,32768
	r28.u64 = ctx.r10.u64 | 32768;
	// addi r11,r11,12304
	ctx.r11.s64 = ctx.r11.s64 + 12304;
	// beq 0x823cf164
	if (ctx.cr0.eq) goto loc_823CF164;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-26614
	ctx.r11.s64 = ctx.r11.s64 + -26614;
	// b 0x823cf170
	goto loc_823CF170;
loc_823CF164:
	// rlwinm. r10,r25,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823cf170
	if (ctx.cr0.eq) goto loc_823CF170;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
loc_823CF170:
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823cf228
	if (ctx.cr6.eq) goto loc_823CF228;
	// add r31,r3,r6
	r31.u64 = ctx.r3.u64 + ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r31,12304
	r29.s64 = r31.s64 + 12304;
	// bl 0x823cee08
	ctx.lr = 0x823CF190;
	sub_823CEE08(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
	// addi r9,r30,-1
	ctx.r9.s64 = r30.s64 + -1;
	// stw r11,11992(r31)
	REX_STORE_U32(r31.u32 + 11992, ctx.r11.u32);
	// stw r11,11996(r31)
	REX_STORE_U32(r31.u32 + 11996, ctx.r11.u32);
	// stw r9,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stw r11,12000(r31)
	REX_STORE_U32(r31.u32 + 12000, ctx.r11.u32);
	// stb r10,11957(r31)
	REX_STORE_U8(r31.u32 + 11957, ctx.r10.u8);
loc_823CF1B4:
	// lbz r9,11957(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11957);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + r31.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r7,12004(r7)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + 12004);
	// stb r9,11957(r31)
	REX_STORE_U8(r31.u32 + 11957, ctx.r9.u8);
	// slw r9,r8,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, ctx.xer);
	// blt cr6,0x823cf1b4
	if (ctx.cr6.lt) goto loc_823CF1B4;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// stw r29,0(r31)
	REX_STORE_U32(r31.u32 + 0, r29.u32);
	// stw r11,12268(r31)
	REX_STORE_U32(r31.u32 + 12268, ctx.r11.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// stw r10,12264(r31)
	REX_STORE_U32(r31.u32 + 12264, ctx.r10.u32);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// stw r11,12272(r31)
	REX_STORE_U32(r31.u32 + 12272, ctx.r11.u32);
	// stw r11,12276(r31)
	REX_STORE_U32(r31.u32 + 12276, ctx.r11.u32);
	// stw r11,12280(r31)
	REX_STORE_U32(r31.u32 + 12280, ctx.r11.u32);
	// stw r11,12284(r31)
	REX_STORE_U32(r31.u32 + 12284, ctx.r11.u32);
	// stw r11,12288(r31)
	REX_STORE_U32(r31.u32 + 12288, ctx.r11.u32);
	// stw r11,12292(r31)
	REX_STORE_U32(r31.u32 + 12292, ctx.r11.u32);
	// stw r11,12296(r31)
	REX_STORE_U32(r31.u32 + 12296, ctx.r11.u32);
	// beq cr6,0x823cf21c
	if (ctx.cr6.eq) goto loc_823CF21C;
	// stw r10,12276(r31)
	REX_STORE_U32(r31.u32 + 12276, ctx.r10.u32);
	// b 0x823cf228
	goto loc_823CF228;
loc_823CF21C:
	// rlwinm. r11,r25,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823cf228
	if (ctx.cr0.eq) goto loc_823CF228;
	// stw r10,12300(r31)
	REX_STORE_U32(r31.u32 + 12300, ctx.r10.u32);
loc_823CF228:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823D3E98) {
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
	ctx.lr = 0x823D3EA0;
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// ble cr6,0x823d4290
	if (!ctx.cr6.gt) goto loc_823D4290;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-9380
	ctx.r11.s64 = ctx.r11.s64 + -9380;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_823D3EC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d3ee0
	if (!ctx.cr0.eq) goto loc_823D3EE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d3ec0
	if (!ctx.cr6.eq) goto loc_823D3EC0;
loc_823D3EE0:
	// li r28,1
	r28.s64 = 1;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d3ef4
	if (!ctx.cr0.eq) goto loc_823D3EF4;
	// li r26,0
	r26.s64 = 0;
	// b 0x823d3f30
	goto loc_823D3F30;
loc_823D3EF4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,-9384
	ctx.r11.s64 = ctx.r11.s64 + -9384;
	// addi r8,r11,3
	ctx.r8.s64 = ctx.r11.s64 + 3;
loc_823D3F04:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d3f24
	if (!ctx.cr0.eq) goto loc_823D3F24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x823d3f04
	if (!ctx.cr6.eq) goto loc_823D3F04;
loc_823D3F24:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823d4290
	if (!ctx.cr0.eq) goto loc_823D4290;
	// mr r26,r28
	r26.u64 = r28.u64;
loc_823D3F30:
	// addi r30,r5,-3
	r30.s64 = ctx.r5.s64 + -3;
	// addi r29,r4,3
	r29.s64 = ctx.r4.s64 + 3;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// bgt cr6,0x823d3f48
	if (ctx.cr6.gt) goto loc_823D3F48;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_823D3F48:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823d3f6c
	if (ctx.cr6.eq) goto loc_823D3F6C;
loc_823D3F54:
	// lbzx r10,r31,r29
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + r29.u32);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// beq cr6,0x823d3f70
	if (ctx.cr6.eq) goto loc_823D3F70;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823d3f54
	if (ctx.cr6.lt) goto loc_823D3F54;
loc_823D3F6C:
	// li r31,0
	r31.s64 = 0;
loc_823D3F70:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823d4290
	if (ctx.cr6.eq) goto loc_823D4290;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d39f8
	ctx.lr = 0x823D3F88;
	sub_823D39F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-9392
	ctx.r4.s64 = ctx.r11.s64 + -9392;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8247cd90
	ctx.lr = 0x823D3FA4;
	sub_8247CD90(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823d4290
	if (!ctx.cr6.eq) goto loc_823D4290;
	// subf r10,r31,r30
	ctx.r10.u64 = r30.u64 - r31.u64;
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addic. r30,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r29,r11,1
	r29.s64 = ctx.r11.s64 + 1;
	// beq 0x823d4290
	if (ctx.cr0.eq) goto loc_823D4290;
	// cmplwi cr6,r30,256
	ctx.cr6.compare<uint32_t>(r30.u32, 256, ctx.xer);
	// li r10,256
	ctx.r10.s64 = 256;
	// bgt cr6,0x823d3fd0
	if (ctx.cr6.gt) goto loc_823D3FD0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823D3FD0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823d3ff4
	if (ctx.cr6.eq) goto loc_823D3FF4;
loc_823D3FDC:
	// lbzx r9,r11,r29
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + r29.u32);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// beq cr6,0x823d40cc
	if (ctx.cr6.eq) goto loc_823D40CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823d3fdc
	if (ctx.cr6.lt) goto loc_823D3FDC;
loc_823D3FF4:
	// li r31,0
	r31.s64 = 0;
loc_823D3FF8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823d4290
	if (ctx.cr6.eq) goto loc_823D4290;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823d39f8
	ctx.lr = 0x823D4010;
	sub_823D39F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-9400
	ctx.r4.s64 = ctx.r11.s64 + -9400;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8247cd90
	ctx.lr = 0x823D4028;
	sub_8247CD90(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x823d4290
	if (!ctx.cr6.eq) goto loc_823D4290;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// li r27,0
	r27.s64 = 0;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x823d404c
	if (ctx.cr6.lt) goto loc_823D404C;
	// mr r27,r28
	r27.u64 = r28.u64;
loc_823D404C:
	// cntlzw r8,r26
	ctx.r8.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// subf r9,r31,r30
	ctx.r9.u64 = r30.u64 - r31.u64;
	// rlwinm r8,r8,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x2;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823d4290
	if (ctx.cr6.lt) goto loc_823D4290;
	// lis r9,6690
	ctx.r9.s64 = 438435840;
	// stw r11,12(r25)
	REX_STORE_U32(r25.u32 + 12, ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,16(r25)
	REX_STORE_U32(r25.u32 + 16, ctx.r10.u32);
	// ori r9,r9,43686
	ctx.r9.u64 = ctx.r9.u64 | 43686;
	// stw r28,20(r25)
	REX_STORE_U32(r25.u32 + 20, r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,48(r25)
	REX_STORE_U32(r25.u32 + 48, ctx.r11.u32);
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// mullw r3,r11,r10
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r8,52(r25)
	REX_STORE_U32(r25.u32 + 52, ctx.r8.u32);
	// stw r28,56(r25)
	REX_STORE_U32(r25.u32 + 56, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x823cd118
	ctx.lr = 0x823D40B4;
	sub_823CD118(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r25)
	REX_STORE_U32(r25.u32 + 4, ctx.r3.u32);
	// bne 0x823d40d4
	if (!ctx.cr0.eq) goto loc_823D40D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d4298
	goto loc_823D4298;
loc_823D40CC:
	// mr r31,r11
	r31.u64 = ctx.r11.u64;
	// b 0x823d3ff8
	goto loc_823D3FF8;
loc_823D40D4:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r31,r29
	ctx.r11.u64 = r31.u64 + r29.u64;
	// addic. r4,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r4.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// blt 0x823d4288
	if (ctx.cr0.lt) goto loc_823D4288;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
loc_823D40F4:
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 4);
	// mullw r9,r4,r8
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x823d41a4
	if (ctx.cr6.eq) goto loc_823D41A4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823d4198
	if (ctx.cr6.eq) goto loc_823D4198;
	// b 0x823d4170
	goto loc_823D4170;
loc_823D4124:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r9,0,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r6,r9,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823D4170:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d4124
	if (!ctx.cr6.eq) goto loc_823D4124;
	// b 0x823d4280
	goto loc_823D4280;
loc_823D417C:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823D4198:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d417c
	if (!ctx.cr6.eq) goto loc_823D417C;
	// b 0x823d4280
	goto loc_823D4280;
loc_823D41A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x823d4278
	if (ctx.cr6.eq) goto loc_823D4278;
	// b 0x823d424c
	goto loc_823D424C;
loc_823D41B0:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lfs f13,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// rlwinm r5,r9,0,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r6,r9,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF00;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwinm r9,r5,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823D424C:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d41b0
	if (!ctx.cr6.eq) goto loc_823D41B0;
	// b 0x823d4280
	goto loc_823D4280;
loc_823D4258:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfs f13,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfsu f13,12(r10)
	ea = 12 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_823D4278:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x823d4258
	if (!ctx.cr6.eq) goto loc_823D4258;
loc_823D4280:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x823d40f4
	if (!ctx.cr0.lt) goto loc_823D40F4;
loc_823D4288:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d4298
	goto loc_823D4298;
loc_823D4290:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823D4298:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823E2218) {
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
	ctx.lr = 0x823E2220;
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
	// beq cr6,0x823e2248
	if (ctx.cr6.eq) goto loc_823E2248;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E2244;
	sub_823DC0B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_823E2248:
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
	// ble cr6,0x823e22a0
	if (!ctx.cr6.gt) goto loc_823E22A0;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
loc_823E2278:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e7070
	ctx.lr = 0x823E2288;
	sub_823E7070(ctx, base);
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e2278
	if (ctx.cr6.lt) goto loc_823E2278;
loc_823E22A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_823E2420) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E2428;
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e2450
	if (ctx.cr6.eq) goto loc_823E2450;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E244C;
	sub_823DC0B0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_823E2450:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r9,100(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 100);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r7,104(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 104);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ble cr6,0x823e24a4
	if (!ctx.cr6.gt) goto loc_823E24A4;
	// addi r11,r6,-12
	ctx.r11.s64 = ctx.r6.s64 + -12;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_823E2484:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfsu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823e2484
	if (ctx.cr6.lt) goto loc_823E2484;
loc_823E24A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823E31C8) {
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
	// bge cr6,0x823e32ac
	if (!ctx.cr6.lt) goto loc_823E32AC;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-30112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30112);
	ctx.f0.f64 = double(temp.f32);
loc_823E3224:
	// lbz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// rlwinm r10,r10,28,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lhz r10,2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,8(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,20,12,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFFFF;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,12(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e3224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E3224;
loc_823E32AC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e32c8
	if (ctx.cr6.eq) goto loc_823E32C8;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E32C8;
	sub_82413D40(ctx, base);
loc_823E32C8:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e32e4
	if (ctx.cr6.eq) goto loc_823E32E4;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E32E4;
	sub_823DC3F0(ctx, base);
loc_823E32E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E40D0) {
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
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823e41d0
	if (!ctx.cr6.lt) goto loc_823E41D0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,21348(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 21348);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,-13044(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -13044);
	ctx.f12.f64 = double(temp.f32);
loc_823E413C:
	// lwz r10,3(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 3);
	// stfs f13,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// extsb r7,r10
	ctx.r7.s64 = ctx.r10.s8;
	// addi r8,r8,128
	ctx.r8.s64 = ctx.r8.s64 + 128;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,88(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,4(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lbzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f11,12(r6)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 12, temp.u32);
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// bdnz 0x823e413c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E413C;
loc_823E41D0:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e41ec
	if (ctx.cr6.eq) goto loc_823E41EC;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x82413d40
	ctx.lr = 0x823E41EC;
	sub_82413D40(ctx, base);
loc_823E41EC:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e4208
	if (ctx.cr6.eq) goto loc_823E4208;
	// lwz r11,104(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 104);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r11,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r11.u64;
	// bl 0x823dc3f0
	ctx.lr = 0x823E4208;
	sub_823DC3F0(ctx, base);
loc_823E4208:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823E7C88) {
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
	// bl 0x822265f0
	ctx.lr = 0x823E7C9C;
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

DEFINE_REX_FUNC(sub_823E8000) {
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
	// bl 0x82226648
	ctx.lr = 0x823E8014;
	sub_82226648(ctx, base);
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

DEFINE_REX_FUNC(sub_823E82B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823E82B8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823e82fc
	if (ctx.cr0.eq) goto loc_823E82FC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E82DC:
	// lwax r9,r11,r10
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823e82dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E82DC;
loc_823E82FC:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823E830C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r5,r30,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x822d4fa0
	ctx.lr = 0x823E8320;
	sub_822D4FA0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EC540) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823EC548;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r29,r4,r5
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823f45f0
	ctx.lr = 0x823EC558;
	sub_823F45F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x823ec568
	if (!ctx.cr0.eq) goto loc_823EC568;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ec5a4
	goto loc_823EC5A4;
loc_823EC568:
	// cmplwi cr6,r29,32768
	ctx.cr6.compare<uint32_t>(r29.u32, 32768, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ble cr6,0x823ec598
	if (!ctx.cr6.gt) goto loc_823EC598;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r31,r11,32768
	r31.u64 = ctx.r11.u64 | 32768;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x822d5870
	ctx.lr = 0x823EC588;
	sub_822D5870(ctx, base);
	// subf r5,r31,r29
	ctx.r5.u64 = r29.u64 - r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// b 0x823ec59c
	goto loc_823EC59C;
loc_823EC598:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_823EC59C:
	// bl 0x822d5870
	ctx.lr = 0x823EC5A0;
	sub_822D5870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823EC5A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823EF038) {
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
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823EF064;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// stw r3,444(r31)
	REX_STORE_U32(r31.u32 + 444, ctx.r3.u32);
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// lis r6,-32193
	ctx.r6.s64 = -2109800448;
	// lis r5,-32193
	ctx.r5.s64 = -2109800448;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r7,-5440
	ctx.r10.s64 = ctx.r7.s64 + -5440;
	// addi r4,r8,-4080
	ctx.r4.s64 = ctx.r8.s64 + -4080;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r8,r6,-4656
	ctx.r8.s64 = ctx.r6.s64 + -4656;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r7,r5,-6304
	ctx.r7.s64 = ctx.r5.s64 + -6304;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// stw r7,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823EF0AC:
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// addi r8,r9,-6304
	ctx.r8.s64 = ctx.r9.s64 + -6304;
	// stw r8,-64(r10)
	REX_STORE_U32(ctx.r10.u32 + -64, ctx.r8.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823ef0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF0AC;
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// addi r8,r10,-6728
	ctx.r8.s64 = ctx.r10.s64 + -6728;
	// addi r7,r9,-6728
	ctx.r7.s64 = ctx.r9.s64 + -6728;
	// stw r8,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r8.u32);
	// stw r7,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,444(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 444);
	// stw r11,220(r31)
	REX_STORE_U32(r31.u32 + 220, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(r31.u32 + 148, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(r31.u32 + 420, ctx.r11.u32);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r11,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r11.u32);
	// stw r11,164(r6)
	REX_STORE_U32(ctx.r6.u32 + 164, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823F0218) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f024c
	if (ctx.cr6.eq) goto loc_823F024C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823f024c
	if (ctx.cr6.eq) goto loc_823F024C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f024c
	if (ctx.cr0.eq) goto loc_823F024C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f024c
	if (ctx.cr6.eq) goto loc_823F024C;
	// lfs f0,40(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// blr 
	return;
loc_823F024C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823F0BC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r5,r5,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823f0d00
	if (!ctx.cr0.eq) goto loc_823F0D00;
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823f0c60
	if (!ctx.cr6.eq) goto loc_823F0C60;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x823f0c34
	if (ctx.cr0.eq) goto loc_823F0C34;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823f0c18
	if (!ctx.cr6.gt) goto loc_823F0C18;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823F0C08:
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0c08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0C08;
loc_823F0C18:
	// stb r7,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r11,16
	ctx.r11.s64 = 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_823F0C28:
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r11,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r11.u8);
	// b 0x823f0e7c
	goto loc_823F0E7C;
loc_823F0C34:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f0c50
	if (ctx.cr6.eq) goto loc_823F0C50;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F0C40:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0C40;
loc_823F0C50:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x823f0e74
	goto loc_823F0E74;
loc_823F0C60:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x823f0cc8
	if (ctx.cr0.eq) goto loc_823F0CC8;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823f0ca8
	if (!ctx.cr6.gt) goto loc_823F0CA8;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823F0C8C:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0C8C;
loc_823F0CA8:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,32
	ctx.r8.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_823F0CB4:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stb r7,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// stb r10,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r10.u8);
	// stb r8,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r8.u8);
	// b 0x823f0e7c
	goto loc_823F0E7C;
loc_823F0CC8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f0cf0
	if (ctx.cr6.eq) goto loc_823F0CF0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F0CD4:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0cd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0CD4;
loc_823F0CF0:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823f0e74
	goto loc_823F0E74;
loc_823F0D00:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lbz r11,9(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x823f0da4
	if (!ctx.cr6.eq) goto loc_823F0DA4;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r9,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(3));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq 0x823f0d6c
	if (ctx.cr0.eq) goto loc_823F0D6C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823f0d58
	if (!ctx.cr6.gt) goto loc_823F0D58;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823F0D38:
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0d38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0D38;
loc_823F0D58:
	// stb r7,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r7.u8);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,32
	ctx.r11.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823f0c28
	goto loc_823F0C28;
loc_823F0D6C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f0d98
	if (ctx.cr6.eq) goto loc_823F0D98;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F0D78:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0D78;
loc_823F0D98:
	// li r10,32
	ctx.r10.s64 = 32;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823f0e70
	goto loc_823F0E70;
loc_823F0DA4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm. r11,r6,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r9,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(6));
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x823f0e20
	if (ctx.cr0.eq) goto loc_823F0E20;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x823f0e10
	if (!ctx.cr6.gt) goto loc_823F0E10;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_823F0DD4:
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0DD4;
loc_823F0E10:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r8,64
	ctx.r8.s64 = 64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823f0cb4
	goto loc_823F0CB4;
loc_823F0E20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x823f0e68
	if (ctx.cr6.eq) goto loc_823F0E68;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_823F0E2C:
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lbzu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbu r8,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// stbu r5,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r5.u8);
	ctx.r11.u32 = ea;
	// stbu r7,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823f0e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823F0E2C;
loc_823F0E68:
	// li r10,64
	ctx.r10.s64 = 64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
loc_823F0E70:
	// li r11,4
	ctx.r11.s64 = 4;
loc_823F0E74:
	// stb r10,11(r3)
	REX_STORE_U8(ctx.r3.u32 + 11, ctx.r10.u8);
	// stb r11,10(r3)
	REX_STORE_U8(ctx.r3.u32 + 10, ctx.r11.u8);
loc_823F0E7C:
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823FC0F0) {
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
	ctx.lr = 0x823FC0F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823fc134
	if (!ctx.cr6.lt) goto loc_823FC134;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823fbf88
	ctx.lr = 0x823FC118;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x823fc12c
	if (!ctx.cr6.eq) goto loc_823FC12C;
loc_823FC120:
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823FC12C:
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_823FC134:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r11,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x823fc1ac
	if (!ctx.cr6.gt) goto loc_823FC1AC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_823FC164:
	// rlwinm r28,r11,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bge cr6,0x823fc18c
	if (!ctx.cr6.lt) goto loc_823FC18C;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823fbf88
	ctx.lr = 0x823FC17C;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc120
	if (ctx.cr6.eq) goto loc_823FC120;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 8);
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(r29.u32 + 12);
loc_823FC18C:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzu r10,4(r30)
	ea = 4 + r30.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sraw r11,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r11.s64 = ctx.r4.s32 >> temp.u32;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x823fc164
	if (ctx.cr6.gt) goto loc_823FC164;
loc_823FC1AC:
	// stw r4,8(r29)
	REX_STORE_U32(r29.u32 + 8, ctx.r4.u32);
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// stw r5,12(r29)
	REX_STORE_U32(r29.u32 + 12, ctx.r5.u32);
	// ble cr6,0x823fc1f0
	if (!ctx.cr6.gt) goto loc_823FC1F0;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16);
	// li r10,118
	ctx.r10.s64 = 118;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x823FC1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
loc_823FC1F0:
	// addi r10,r31,18
	ctx.r10.s64 = r31.s64 + 18;
	// lwz r9,140(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 140);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r27.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,17(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 17);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824008C0) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e78
	ctx.lr = 0x824008C8;
	// lwz r11,5784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5784);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82400c4c
	if (ctx.cr6.eq) goto loc_82400C4C;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r11,6256
	r28.s64 = ctx.r11.s64 + 6256;
	// addi r31,r10,4648
	r31.s64 = ctx.r10.s64 + 4648;
	// addi r30,r9,6768
	r30.s64 = ctx.r9.s64 + 6768;
loc_824008F4:
	// lwz r11,5788(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5788);
	// lwz r10,5776(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 5776);
	// lhzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + ctx.r11.u32);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// lbzx r7,r29,r10
	ctx.r7.u64 = REX_LOAD_U8(r29.u32 + ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne 0x824009b4
	if (!ctx.cr0.eq) goto loc_824009B4;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r8,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x8240099c
	if (!ctx.cr6.gt) goto loc_8240099C;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
loc_82400970:
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r6,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82400c3c
	goto loc_82400C3C;
loc_8240099C:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// b 0x82400c40
	goto loc_82400C40;
loc_824009B4:
	// lbzx r10,r7,r30
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	r26.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// lhz r26,5808(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82400a48
	if (!ctx.cr6.gt) goto loc_82400A48;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r25,20(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | r26.u64;
	// lwz r24,8(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r24,r25
	REX_STORE_U8(r24.u32 + r25.u32, ctx.r11.u8);
	// lwz r25,8(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r10,r11,r25
	REX_STORE_U8(ctx.r11.u32 + r25.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r25,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	r25.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r25,16
	ctx.r9.u64 = r25.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x82400a5c
	goto loc_82400A5C;
loc_82400A48:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | r26.u64;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82400A5C:
	// lwzx r9,r8,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82400b00
	if (ctx.cr6.eq) goto loc_82400B00;
	// addi r10,r31,2376
	ctx.r10.s64 = r31.s64 + 2376;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r26,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	r26.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// ble cr6,0x82400aec
	if (!ctx.cr6.gt) goto loc_82400AEC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// b 0x82400afc
	goto loc_82400AFC;
loc_82400AEC:
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82400AFC:
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
loc_82400B00:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 256, ctx.xer);
	// bge cr6,0x82400b14
	if (!ctx.cr6.lt) goto loc_82400B14;
	// lbzx r11,r7,r28
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + r28.u32);
	// b 0x82400b20
	goto loc_82400B20;
loc_82400B14:
	// rlwinm r11,r7,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
loc_82400B20:
	// rlwinm r8,r11,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lhz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82400bac
	if (!ctx.cr6.gt) goto loc_82400BAC;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r6,r26
	REX_STORE_U8(ctx.r6.u32 + r26.u32, ctx.r11.u8);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lbz r6,5808(r3)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// stbx r6,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r6.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// srw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 >> (ctx.r9.u8 & 0x3F));
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// sth r9,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r9.u16);
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
	// b 0x82400bc0
	goto loc_82400BC0;
loc_82400BAC:
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stw r9,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
loc_82400BC0:
	// addi r11,r31,136
	ctx.r11.s64 = r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82400c40
	if (ctx.cr6.eq) goto loc_82400C40;
	// addi r10,r31,2496
	ctx.r10.s64 = r31.s64 + 2496;
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.u64 = static_cast<uint64_t>(16) - ctx.r9.u64;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r10.u64;
	// ble cr6,0x82400c2c
	if (!ctx.cr6.gt) goto loc_82400C2C;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r7,r8
	REX_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x82400970
	goto loc_82400970;
loc_82400C2C:
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82400C3C:
	// stw r11,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r11.u32);
loc_82400C40:
	// lwz r11,5784(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x824008f4
	if (ctx.cr6.lt) goto loc_824008F4;
loc_82400C4C:
	// lhz r10,1026(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.u64 = static_cast<uint64_t>(16) - ctx.r10.u64;
	// lhz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// lhz r9,1024(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x82400ccc
	if (!ctx.cr6.gt) goto loc_82400CCC;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r11.u16);
	// stbx r11,r8,r7
	REX_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lbz r8,5808(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stbx r8,r11,r7
	REX_STORE_U8(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwz r11,5812(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r8,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r8.u64 = static_cast<uint64_t>(16) - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r10,5808(r3)
	REX_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
	// stw r8,5812(r3)
	REX_STORE_U32(ctx.r3.u32 + 5812, ctx.r8.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82400ce0
	goto loc_82400CE0;
loc_82400CCC:
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
loc_82400CE0:
	// lhz r11,1026(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r11,5804(r3)
	REX_STORE_U32(ctx.r3.u32 + 5804, ctx.r11.u32);
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82412FF0) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-23928
	ctx.r11.s64 = ctx.r11.s64 + -23928;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// bl 0x822c80a8
	ctx.lr = 0x82413018;
	sub_822C80A8(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 88);
	// bl 0x822c80a8
	ctx.lr = 0x82413020;
	sub_822C80A8(ctx, base);
	// lwz r3,92(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 92);
	// bl 0x822c80a8
	ctx.lr = 0x82413028;
	sub_822C80A8(ctx, base);
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

DEFINE_REX_FUNC(sub_82414378) {
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
	ctx.lr = 0x82414380;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x82414388;
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
	// beq cr6,0x824143b4
	if (ctx.cr6.eq) goto loc_824143B4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x824143B0;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824143B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824143d0
	if (ctx.cr6.eq) goto loc_824143D0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x824143CC;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824143D0:
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
	// bne 0x82414440
	if (!ctx.cr0.eq) goto loc_82414440;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82414448
	goto loc_82414448;
loc_82414440:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82414448:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82414460
	if (ctx.cr6.eq) goto loc_82414460;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82414460;
	sub_823DC658(ctx, base);
loc_82414460:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x824147e4
	if (!ctx.cr6.gt) goto loc_824147E4;
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
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// lfd f10,-9120(r10)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r10.u32 + -9120);
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,-7224(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -7224);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,17176(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 17176);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-13044(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -13044);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r30,r30,4,0,27
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f5,2028(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2028);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// subf r29,r25,r28
	r29.u64 = r28.u64 - r25.u64;
loc_824144C4:
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
	// beq cr6,0x824146fc
	if (ctx.cr6.eq) goto loc_824146FC;
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
loc_824146FC:
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x8241470c
	if (ctx.cr6.lt) goto loc_8241470C;
	// li r10,255
	ctx.r10.s64 = 255;
loc_8241470C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82414724
	if (!ctx.cr6.gt) goto loc_82414724;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// blt cr6,0x82414728
	if (ctx.cr6.lt) goto loc_82414728;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x82414728
	goto loc_82414728;
loc_82414724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82414728:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82414738
	if (ctx.cr6.lt) goto loc_82414738;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82414738:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82414750
	if (!ctx.cr6.gt) goto loc_82414750;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x82414754
	if (ctx.cr6.lt) goto loc_82414754;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x82414754
	goto loc_82414754;
loc_82414750:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82414754:
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82414764
	if (ctx.cr6.lt) goto loc_82414764;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82414764:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8241477c
	if (!ctx.cr6.gt) goto loc_8241477C;
	// cmpwi cr6,r5,255
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 255, ctx.xer);
	// blt cr6,0x82414780
	if (ctx.cr6.lt) goto loc_82414780;
	// li r5,255
	ctx.r5.s64 = 255;
	// b 0x82414780
	goto loc_82414780;
loc_8241477C:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82414780:
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82414790
	if (ctx.cr6.lt) goto loc_82414790;
	// li r10,255
	ctx.r10.s64 = 255;
loc_82414790:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x824147a8
	if (!ctx.cr6.gt) goto loc_824147A8;
	// cmpwi cr6,r6,255
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 255, ctx.xer);
	// blt cr6,0x824147ac
	if (ctx.cr6.lt) goto loc_824147AC;
	// li r6,255
	ctx.r6.s64 = 255;
	// b 0x824147ac
	goto loc_824147AC;
loc_824147A8:
	// li r6,0
	ctx.r6.s64 = 0;
loc_824147AC:
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// add r11,r30,r11
	ctx.r11.u64 = r30.u64 + ctx.r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r30,r9
	ctx.r9.u64 = r30.u64 + ctx.r9.u64;
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stwux r10,r29,r25
	ea = r29.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// lwz r10,104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x824144c4
	if (ctx.cr6.lt) goto loc_824144C4;
loc_824147E4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x824147F0;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82422260) {
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
	ctx.lr = 0x82422268;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,16880
	r30.s64 = ctx.r11.s64 + 16880;
	// addi r29,r10,-18872
	r29.s64 = ctx.r10.s64 + -18872;
	// bne cr6,0x824222b4
	if (!ctx.cr6.eq) goto loc_824222B4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,504
	ctx.r7.s64 = 504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824222B4;
	sub_8240E308(ctx, base);
loc_824222B4:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(r31.s32, 16, ctx.xer);
	// blt cr6,0x824222d8
	if (ctx.cr6.lt) goto loc_824222D8;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-18404
	ctx.r5.s64 = ctx.r11.s64 + -18404;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824222D8;
	sub_8240E308(ctx, base);
loc_824222D8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge cr6,0x824222fc
	if (!ctx.cr6.lt) goto loc_824222FC;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r11,-18416
	ctx.r5.s64 = ctx.r11.s64 + -18416;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x824222FC;
	sub_8240E308(ctx, base);
loc_824222FC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8240e880
	ctx.lr = 0x8242230C;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82422370
	if (ctx.cr6.eq) goto loc_82422370;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82422330
	if (ctx.cr6.eq) goto loc_82422330;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x82422330;
	sub_8240E930(ctx, base);
loc_82422330:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82422368
	if (ctx.cr6.eq) goto loc_82422368;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82422368
	if (ctx.cr6.eq) goto loc_82422368;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,11440(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 11440);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x82422368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422368:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x824223c8
	goto loc_824223C8;
loc_82422370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8242238c
	if (ctx.cr6.eq) goto loc_8242238C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x8242238C;
	sub_8240E930(ctx, base);
loc_8242238C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824223c4
	if (ctx.cr6.eq) goto loc_824223C4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824223c4
	if (ctx.cr6.eq) goto loc_824223C4;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,-18772
	ctx.r4.s64 = ctx.r10.s64 + -18772;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,11440(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 11440);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x824223C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824223C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824223C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82428BA0) {
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
	// bl 0x82428a88
	ctx.lr = 0x82428BB0;
	sub_82428A88(ctx, base);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-3720
	ctx.r8.s64 = ctx.r9.s64 + -3720;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82428BD4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-20(r9)
	REX_STORE_U32(ctx.r9.u32 + -20, ctx.r11.u32);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82428bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82428BD4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82429618) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82429620;
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
	ctx.lr = 0x8242963C;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x8242965c
	if (ctx.cr0.eq) goto loc_8242965C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82429228
	ctx.lr = 0x82429658;
	sub_82429228(ctx, base);
	// b 0x82429660
	goto loc_82429660;
loc_8242965C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82429DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82429DA8;
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
	ctx.lr = 0x82429DC8;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x82429dec
	if (ctx.cr0.eq) goto loc_82429DEC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82427a18
	ctx.lr = 0x82429DE8;
	sub_82427A18(ctx, base);
	// b 0x82429df0
	goto loc_82429DF0;
loc_82429DEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429DF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C3B0) {
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
	ctx.lr = 0x8242C3B8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r26,r11,7712
	r26.s64 = ctx.r11.s64 + 7712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x824d438c
	ctx.lr = 0x8242C3DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8242c0c8
	ctx.lr = 0x8242C3F4;
	sub_8242C0C8(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242c450
	if (ctx.cr0.eq) goto loc_8242C450;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8242c41c
	if (ctx.cr6.eq) goto loc_8242C41C;
	// divwu r11,r11,r29
	ctx.r11.u64 = uint32_t(r29.u32 ? ctx.r11.u32 / r29.u32 : 0);
	// twllei r29,0
	if (r29.s32 == 0 || r29.u32 < 0u) ppc_trap(ctx, base, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
loc_8242C41C:
	// clrlwi r10,r28,19
	ctx.r10.u64 = r28.u32 & 0x1FFF;
	// stw r28,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, r28.u32);
	// subf r9,r3,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// mr r27,r11
	r27.u64 = ctx.r11.u64;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + r31.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
loc_8242C450:
	// addi r3,r26,84
	ctx.r3.s64 = r26.s64 + 84;
	// bl 0x824d437c
	ctx.lr = 0x8242C458;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8242EBE8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8242f1d0
	sub_8242F1D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242EC20) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x8242c750
	sub_8242C750(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8242F0C0) {
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
	ctx.lr = 0x8242F0C8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8242f0ec
	if (!ctx.cr6.eq) goto loc_8242F0EC;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8242F0EC:
	// rlwinm. r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8242f0fc
	if (ctx.cr0.eq) goto loc_8242F0FC;
	// lis r31,-30570
	r31.s64 = -2003435520;
	// ori r31,r31,1
	r31.u64 = r31.u64 | 1;
loc_8242F0FC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt cr6,0x8242f1b8
	if (ctx.cr6.lt) goto loc_8242F1B8;
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r29,r11,7712
	r29.s64 = ctx.r11.s64 + 7712;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c298
	ctx.lr = 0x8242F114;
	sub_8242C298(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242f1b8
	if (ctx.cr0.lt) goto loc_8242F1B8;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// li r4,16280
	ctx.r4.s64 = 16280;
	// bl 0x8242c3b0
	ctx.lr = 0x8242F134;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8242f148
	if (ctx.cr0.eq) goto loc_8242F148;
	// bl 0x8242e9d8
	ctx.lr = 0x8242F140;
	sub_8242E9D8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8242f14c
	goto loc_8242F14C;
loc_8242F148:
	// li r30,0
	r30.s64 = 0;
loc_8242F14C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8242f160
	if (!ctx.cr6.eq) goto loc_8242F160;
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x8242f1b0
	goto loc_8242F1B0;
loc_8242F160:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8242bb40
	ctx.lr = 0x8242F168;
	sub_8242BB40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242f19c
	if (ctx.cr0.lt) goto loc_8242F19C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// blt 0x8242f19c
	if (ctx.cr0.lt) goto loc_8242F19C;
	// stw r30,0(r27)
	REX_STORE_U32(r27.u32 + 0, r30.u32);
	// b 0x8242f1b0
	goto loc_8242F1B0;
loc_8242F19C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242F1B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242F1B0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8242c330
	ctx.lr = 0x8242F1B8;
	sub_8242C330(ctx, base);
loc_8242F1B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_824351E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824351F0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x8247c0e8
	ctx.lr = 0x82435208;
	sub_8247C0E8(ctx, base);
	// lwz r31,56(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82435248
	if (ctx.cr6.eq) goto loc_82435248;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8243522C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r11,r29,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82435248
	if (ctx.cr0.eq) goto loc_82435248;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82435248;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82435248:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82435D68) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82443b20
	sub_82443B20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82435D80) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82442fb0
	sub_82442FB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82435E48) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82435d88
	sub_82435D88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82435E90) {
	REX_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r10,168(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82435ea8
	if (ctx.cr6.eq) goto loc_82435EA8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82435EA8:
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82435ebc
	if (ctx.cr6.eq) goto loc_82435EBC;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82435EBC:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82435ecc
	if (ctx.cr6.eq) goto loc_82435ECC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82435ECC:
	// lwz r3,180(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 180);
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
}

DEFINE_REX_FUNC(sub_82437678) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82437680;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r29,0
	r29.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82437718
	if (ctx.cr6.eq) goto loc_82437718;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x824376d8
	if (ctx.cr6.eq) goto loc_824376D8;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// bne cr6,0x824376b8
	if (!ctx.cr6.eq) goto loc_824376B8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_824376B8:
	// addi r3,r3,-180
	ctx.r3.s64 = ctx.r3.s64 + -180;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82436e20
	ctx.lr = 0x824376C4;
	sub_82436E20(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82437724
	if (!ctx.cr6.eq) goto loc_82437724;
	// li r29,4096
	r29.s64 = 4096;
	// b 0x82437724
	goto loc_82437724;
loc_824376D8:
	// lwz r11,512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 512);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8243770c
	if (ctx.cr6.eq) goto loc_8243770C;
	// lwz r11,508(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824376f8
	if (ctx.cr6.eq) goto loc_824376F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824376fc
	goto loc_824376FC;
loc_824376F8:
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
loc_824376FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82437724
	goto loc_82437724;
loc_8243770C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// b 0x82437724
	goto loc_82437724;
loc_82437718:
	// addi r3,r3,-180
	ctx.r3.s64 = ctx.r3.s64 + -180;
	// bl 0x82437580
	ctx.lr = 0x82437720;
	sub_82437580(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82437724:
	// stw r29,0(r30)
	REX_STORE_U32(r30.u32 + 0, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82439308) {
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
	// bl 0x824385b0
	ctx.lr = 0x82439328;
	sub_824385B0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x824385b0
	ctx.lr = 0x82439330;
	sub_824385B0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,248(r31)
	REX_STORE_U32(r31.u32 + 248, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,252(r31)
	REX_STORE_U32(r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8243A268) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8243A270;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,0(r5)
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// bne cr6,0x8243a290
	if (!ctx.cr6.eq) goto loc_8243A290;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x8243a2a8
	goto loc_8243A2A8;
loc_8243A290:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243a2a0
	if (!ctx.cr6.eq) goto loc_8243A2A0;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x8243a2a8
	goto loc_8243A2A8;
loc_8243A2A0:
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r11,r11,18
	ctx.r11.s64 = ctx.r11.s64 + 18;
loc_8243A2A8:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// bne cr6,0x8243a2c0
	if (!ctx.cr6.eq) goto loc_8243A2C0;
	// li r31,32
	r31.s64 = 32;
	// b 0x8243a2d8
	goto loc_8243A2D8;
loc_8243A2C0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8243a2d0
	if (!ctx.cr6.eq) goto loc_8243A2D0;
	// li r31,16
	r31.s64 = 16;
	// b 0x8243a2d8
	goto loc_8243A2D8;
loc_8243A2D0:
	// lhz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 16);
	// addi r31,r11,18
	r31.s64 = ctx.r11.s64 + 18;
loc_8243A2D8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8243A2E8;
	sub_822D4FA0(ctx, base);
	// subf r5,r31,r29
	ctx.r5.u64 = r29.u64 - r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// bl 0x822d5870
	ctx.lr = 0x8243A2F8;
	sub_822D5870(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8243C410) {
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
	ctx.lr = 0x8243C418;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r3,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(96));
	// addi r10,r11,143
	ctx.r10.s64 = ctx.r11.s64 + 143;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r31,r10,0,0,24
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8243c46c
	if (ctx.cr6.eq) goto loc_8243C46C;
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
loc_8243C44C:
	// lbz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 16);
	// lwzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rotlwi r6,r8,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x8243c44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243C44C;
loc_8243C46C:
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8243c518
	if (ctx.cr6.eq) goto loc_8243C518;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
loc_8243C47C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subf r29,r31,r29
	r29.u64 = r29.u64 - r31.u64;
	// bl 0x82208ee0
	ctx.lr = 0x8243C490;
	sub_82208EE0(ctx, base);
	// addi r10,r28,16
	ctx.r10.s64 = r28.s64 + 16;
	// stw r30,0(r28)
	REX_STORE_U32(r28.u32 + 0, r30.u32);
	// add r26,r31,r28
	r26.u64 = r31.u64 + r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,8(r28)
	REX_STORE_U32(r28.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8243c4c8
	if (!ctx.cr6.gt) goto loc_8243C4C8;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8243C4BC:
	// dcbf r11,r26
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x8243c4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8243C4BC;
loc_8243C4C8:
	// rlwinm. r23,r22,0,29,29
	r23.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// stw r22,4(r28)
	REX_STORE_U32(r28.u32 + 4, r22.u32);
	// oris r11,r22,2
	ctx.r11.u64 = r22.u64 | 131072;
	// bne 0x8243c4dc
	if (!ctx.cr0.eq) goto loc_8243C4DC;
	// oris r11,r22,3
	ctx.r11.u64 = r22.u64 | 196608;
loc_8243C4DC:
	// stw r11,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8243c688
	if (ctx.cr6.eq) goto loc_8243C688;
	// addi r29,r27,8
	r29.s64 = r27.s64 + 8;
	// li r25,0
	r25.s64 = 0;
	// mr r24,r30
	r24.u64 = r30.u64;
	// li r27,1
	r27.s64 = 1;
loc_8243C4F8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// add r31,r25,r11
	r31.u64 = r25.u64 + ctx.r11.u64;
	// stw r26,68(r31)
	REX_STORE_U32(r31.u32 + 68, r26.u32);
	// lwz r11,-8(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -8);
	// cmplwi cr6,r11,24000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24000, ctx.xer);
	// bgt cr6,0x8243c538
	if (ctx.cr6.gt) goto loc_8243C538;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8243c560
	goto loc_8243C560;
loc_8243C518:
	// lis r4,-22633
	ctx.r4.s64 = -1483276288;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823cd118
	ctx.lr = 0x8243C524;
	sub_823CD118(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne 0x8243c47c
	if (!ctx.cr0.eq) goto loc_8243C47C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8243c6f0
	goto loc_8243C6F0;
loc_8243C538:
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bgt cr6,0x8243c548
	if (ctx.cr6.gt) goto loc_8243C548;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// b 0x8243c560
	goto loc_8243C560;
loc_8243C548:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,44100
	ctx.r10.u64 = ctx.r10.u64 | 44100;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
loc_8243C560:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,5,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c57c
	if (ctx.cr6.eq) goto loc_8243C57C;
	// rlwimi r11,r10,27,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8243C57C:
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c5a0
	if (ctx.cr6.eq) goto loc_8243C5A0;
	// rlwimi r11,r10,29,2,2
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x20000000) | (ctx.r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8243C5A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lbz r10,1(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 1);
	// rlwinm r9,r11,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c5c0
	if (ctx.cr6.eq) goto loc_8243C5C0;
	// rlwimi r11,r10,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8243C5C0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C5C8;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8243c5e4
	if (ctx.cr6.eq) goto loc_8243C5E4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C5DC;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// stw r27,52(r31)
	REX_STORE_U32(r31.u32 + 52, r27.u32);
loc_8243C5E4:
	// lwz r9,-4(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + -4);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r9,r11,17,20,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xF80;
	// rlwinm r8,r10,0,0,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8243c610
	if (ctx.cr6.eq) goto loc_8243C610;
	// rlwimi r11,r10,15,5,9
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7C00000) | (ctx.r11.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_8243C610:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8243c630
	if (ctx.cr6.eq) goto loc_8243C630;
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r27,48(r31)
	REX_STORE_U32(r31.u32 + 48, r27.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
loc_8243C630:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + -4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r11,r26
	r30.u64 = ctx.r11.u64 + r26.u64;
	// stw r30,72(r31)
	REX_STORE_U32(r31.u32 + 72, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C650;
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8243c66c
	if (ctx.cr6.eq) goto loc_8243C66C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d44cc
	ctx.lr = 0x8243C664;
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// stw r27,56(r31)
	REX_STORE_U32(r31.u32 + 56, r27.u32);
loc_8243C66C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r25,r25,96
	r25.s64 = r25.s64 + 96;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// add r26,r11,r30
	r26.u64 = ctx.r11.u64 + r30.u64;
	// bne 0x8243c4f8
	if (!ctx.cr0.eq) goto loc_8243C4F8;
loc_8243C688:
	// clrlwi. r11,r22,31
	ctx.r11.u64 = r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8243c6b0
	if (!ctx.cr0.eq) goto loc_8243C6B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243b770
	ctx.lr = 0x8243C698;
	sub_8243B770(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8243c6b0
	if (!ctx.cr0.lt) goto loc_8243C6B0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8243c210
	ctx.lr = 0x8243C6A8;
	sub_8243C210(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8243c6f0
	goto loc_8243C6F0;
loc_8243C6B0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x8243c6e8
	if (ctx.cr6.eq) goto loc_8243C6E8;
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r31,r11,21276
	r31.s64 = ctx.r11.s64 + 21276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d438c
	ctx.lr = 0x8243C6C8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7840
	ctx.r11.s64 = ctx.r11.s64 + 7840;
	// lhz r10,80(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 80);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, r28.u32);
	// bl 0x824d437c
	ctx.lr = 0x8243C6E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8243C6E8:
	// stw r28,0(r21)
	REX_STORE_U32(r21.u32 + 0, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8243C6F0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8244D0A0) {
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
	ctx.lr = 0x8244D0A8;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r22,24(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r27,r11,32
	r27.s64 = ctx.r11.s64 + 32;
	// lwz r28,0(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwz r23,4(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r21,28(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// rlwinm r26,r8,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x8244d134
	if (ctx.cr6.eq) goto loc_8244D134;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
	// stfs f12,4(r27)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// stfs f11,8(r27)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// stfs f10,12(r27)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
loc_8244D134:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfs f10,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// bge cr6,0x8244d228
	if (!ctx.cr6.lt) goto loc_8244D228;
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// addi r8,r11,2
	ctx.r8.s64 = ctx.r11.s64 + 2;
	// addi r7,r11,-3
	ctx.r7.s64 = ctx.r11.s64 + -3;
	// addi r6,r11,-4
	ctx.r6.s64 = ctx.r11.s64 + -4;
	// rlwinm r9,r26,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r6,r9,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r9.u64;
	// subf r31,r9,r10
	r31.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// add r4,r7,r27
	ctx.r4.u64 = ctx.r7.u64 + r27.u64;
	// add r5,r6,r27
	ctx.r5.u64 = ctx.r6.u64 + r27.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// add r6,r31,r27
	ctx.r6.u64 = r31.u64 + r27.u64;
	// add r7,r30,r27
	ctx.r7.u64 = r30.u64 + r27.u64;
loc_8244D194:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// bge cr6,0x8244d340
	if (!ctx.cr6.lt) goto loc_8244D340;
	// lfs f9,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lfs f7,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f7.f64 = double(temp.f32);
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// lfsux f12,r6,r9
	ea = ctx.r6.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfsux f13,r7,r9
	ea = ctx.r7.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// lfs f5,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lfsux f11,r4,r9
	ea = ctx.r4.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// fsubs f4,f5,f13
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// lfsux f9,r5,r9
	ea = ctx.r5.u32 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fsubs f2,f9,f11
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmadds f1,f6,f0,f7
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// fmadds f12,f3,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f13,f4,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f2,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x8244d220
	if (ctx.cr6.lt) goto loc_8244D220;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_8244D220:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8244d194
	if (ctx.cr6.lt) goto loc_8244D194;
loc_8244D228:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// bge cr6,0x8244d340
	if (!ctx.cr6.lt) goto loc_8244D340;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r6,r11,-3
	ctx.r6.s64 = ctx.r11.s64 + -3;
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r7,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r6,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r5,2,0,29
	r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,64
	r31.s64 = ctx.r11.s64 + 64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r4,r10,r30
	ctx.r4.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r10,r25
	r25.u64 = r25.u64 - ctx.r10.u64;
	// subf r24,r10,r24
	r24.u64 = r24.u64 - ctx.r10.u64;
	// add r30,r6,r28
	r30.u64 = ctx.r6.u64 + r28.u64;
	// add r31,r5,r28
	r31.u64 = ctx.r5.u64 + r28.u64;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// add r4,r4,r28
	ctx.r4.u64 = ctx.r4.u64 + r28.u64;
	// add r5,r25,r28
	ctx.r5.u64 = r25.u64 + r28.u64;
	// add r6,r24,r28
	ctx.r6.u64 = r24.u64 + r28.u64;
loc_8244D2A0:
	// lfsux f13,r6,r10
	ctx.fpscr.disableFlushMode();
	ea = ctx.r6.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lfsux f11,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	r31.u32 = ea;
	// lfsux f9,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// lfs f7,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// lfsux f12,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// fsubs f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// lfs f4,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// lfsux f9,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	r30.u32 = ea;
	// fsubs f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// fmadds f11,f6,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f9,f5,f0,f13
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f7,f2,f0,f12
	ctx.f7.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f11,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f6,f1,f0,f3
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f3.f64)));
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// dcbt r0,r7
	// fadds f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// add r11,r26,r11
	ctx.r11.u64 = r26.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x8244d338
	if (ctx.cr6.lt) goto loc_8244D338;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
loc_8244D338:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// blt cr6,0x8244d2a0
	if (ctx.cr6.lt) goto loc_8244D2A0;
loc_8244D340:
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8244d350
	if (!ctx.cr6.lt) goto loc_8244D350;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244D350:
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - r22.u64;
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// neg r8,r22
	ctx.r8.s64 = static_cast<int64_t>(-r22.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244d420
	if (!ctx.cr6.lt) goto loc_8244D420;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244d3e4
	if (ctx.cr6.lt) goto loc_8244D3E4;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r27
	ctx.r10.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r22,2
	ctx.r7.s64 = r22.s64 + 2;
	// addi r6,r22,3
	ctx.r6.s64 = r22.s64 + 3;
	// addi r5,r8,-3
	ctx.r5.s64 = ctx.r8.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
loc_8244D3A8:
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
	// lfsx f13,r4,r27
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r27.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lfsx f12,r3,r27
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x8244d3a8
	if (ctx.cr6.lt) goto loc_8244D3A8;
loc_8244D3E4:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244d420
	if (!ctx.cr6.lt) goto loc_8244D420;
	// add r7,r11,r22
	ctx.r7.u64 = ctx.r11.u64 + r22.u64;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// addi r7,r9,-4
	ctx.r7.s64 = ctx.r9.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8244D414:
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
	// bdnz 0x8244d414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244D414;
loc_8244D420:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244d498
	if (ctx.cr6.lt) goto loc_8244D498;
	// subfic r10,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r10.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r8,r11,r22
	ctx.r8.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r22,2
	ctx.r7.s64 = r22.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r22,3
	ctx.r6.s64 = r22.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r28
	ctx.r9.u64 = ctx.r8.u64 + r28.u64;
loc_8244D460:
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lfsu f0,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lfsx f12,r4,r28
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r28.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r3,r28
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + r28.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244d460
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244D460;
loc_8244D498:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8244d4c0
	if (!ctx.cr6.lt) goto loc_8244D4C0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + r22.u64;
	// add r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// add r4,r10,r28
	ctx.r4.u64 = ctx.r10.u64 + r28.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5428
	ctx.lr = 0x8244D4C0;
	sub_822D5428(ctx, base);
loc_8244D4C0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_82461200) {
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
	ctx.lr = 0x82461208;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82461280
	if (ctx.cr6.eq) goto loc_82461280;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82461280
	if (ctx.cr6.eq) goto loc_82461280;
	// lhz r11,34(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82461278
	if (ctx.cr6.eq) goto loc_82461278;
	// li r29,0
	r29.s64 = 0;
loc_82461234:
	// mulli r11,r29,1776
	ctx.r11.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r28
	r30.u64 = ctx.r11.u64 + r28.u64;
	// li r31,0
	r31.s64 = 0;
loc_82461240:
	// mulli r11,r31,56
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(56));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r3,r11,200
	ctx.r3.s64 = ctx.r11.s64 + 200;
	// bl 0x8229a710
	ctx.lr = 0x82461250;
	sub_8229A710(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(r31.u32, 2, ctx.xer);
	// blt cr6,0x82461240
	if (ctx.cr6.lt) goto loc_82461240;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82461234
	if (ctx.cr6.lt) goto loc_82461234;
loc_82461278:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82460ee8
	ctx.lr = 0x82461280;
	sub_82460EE8(ctx, base);
loc_82461280:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82464938) {
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
	ctx.lr = 0x82464940;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lhz r26,34(r3)
	r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r25,0
	r25.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8246496c
	if (!ctx.cr6.lt) goto loc_8246496C;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,548(r27)
	REX_STORE_U32(r27.u32 + 548, r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8246496C:
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ed8
	ctx.lr = 0x8246497C;
	sub_82460ED8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,548(r27)
	REX_STORE_U32(r27.u32 + 548, ctx.r3.u32);
	// beq cr6,0x82464a58
	if (ctx.cr6.eq) goto loc_82464A58;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82464994;
	sub_822D5870(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(r26.s32, 1, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r25.u32);
	// blt cr6,0x82464a60
	if (ctx.cr6.lt) goto loc_82464A60;
	// li r31,4
	r31.s64 = 4;
loc_824649AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ed8
	ctx.lr = 0x824649B4;
	sub_82460ED8(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// stwx r3,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82464a58
	if (ctx.cr6.eq) goto loc_82464A58;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x824649DC;
	sub_822D5870(ctx, base);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// ble cr6,0x82464a3c
	if (!ctx.cr6.gt) goto loc_82464A3C;
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x82464a3c
	if (!ctx.cr6.gt) goto loc_82464A3C;
	// mr r30,r25
	r30.u64 = r25.u64;
loc_824649F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82460ed8
	ctx.lr = 0x824649FC;
	sub_82460ED8(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,548(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 548);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82464a58
	if (ctx.cr6.eq) goto loc_82464A58;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82464A2C;
	sub_822D5870(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(r29.s32, r28.s32, ctx.xer);
	// blt cr6,0x824649f4
	if (ctx.cr6.lt) goto loc_824649F4;
loc_82464A3C:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(r28.s32, r26.s32, ctx.xer);
	// ble cr6,0x824649ac
	if (!ctx.cr6.gt) goto loc_824649AC;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82464A58:
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
loc_82464A60:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8246B540) {
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
	ctx.lr = 0x8246B548;
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, f31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,284(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// li r19,0
	r19.s64 = 0;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// blt cr6,0x8246ba3c
	if (ctx.cr6.lt) goto loc_8246BA3C;
	// beq cr6,0x8246b5a0
	if (ctx.cr6.eq) goto loc_8246B5A0;
	// cmplwi cr6,r6,3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 3, ctx.xer);
	// blt cr6,0x8246b598
	if (ctx.cr6.lt) goto loc_8246B598;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lfd f29,-136(r1)
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x822d4eb4
	return;
loc_8246B598:
	// li r20,1
	r20.s64 = 1;
	// b 0x8246b5a4
	goto loc_8246B5A4;
loc_8246B5A0:
	// li r20,0
	r20.s64 = 0;
loc_8246B5A4:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246b5bc
	if (!ctx.cr6.eq) goto loc_8246B5BC;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246ba3c
	if (ctx.cr6.eq) goto loc_8246BA3C;
loc_8246B5BC:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8246b5d0
	if (!ctx.cr6.eq) goto loc_8246B5D0;
	// lis r23,16
	r23.s64 = 1048576;
	// b 0x8246b5e0
	goto loc_8246B5E0;
loc_8246B5D0:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// rlwinm r10,r5,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FC;
	// addi r9,r11,15504
	ctx.r9.s64 = ctx.r11.s64 + 15504;
	// lwzx r23,r10,r9
	r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8246B5E0:
	// lwz r25,120(r27)
	r25.u64 = REX_LOAD_U32(r27.u32 + 120);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8246b618
	if (!ctx.cr6.gt) goto loc_8246B618;
	// mtctr r25
	ctx.ctr.u64 = r25.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8246B5F8:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// lwz r6,388(r22)
	ctx.r6.u64 = REX_LOAD_U32(r22.u32 + 388);
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
	// bdnz 0x8246b5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B5F8;
loc_8246B618:
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bge cr6,0x8246b630
	if (!ctx.cr6.lt) goto loc_8246B630;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x8246b63c
	goto loc_8246B63C;
loc_8246B630:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// ble cr6,0x8246b63c
	if (!ctx.cr6.gt) goto loc_8246B63C;
	// li r10,16
	ctx.r10.s64 = 16;
loc_8246B63C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x8246ba3c
	if (ctx.cr6.lt) goto loc_8246BA3C;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8246B654:
	// divw r8,r11,r10
	ctx.r8.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8246b654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B654;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8246ba3c
	if (!ctx.cr6.gt) goto loc_8246BA3C;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r26,r1,100
	r26.s64 = ctx.r1.s64 + 100;
	// lfs f29,-25476(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25476);
	f29.f64 = double(temp.f32);
	// ori r21,r8,65535
	r21.u64 = ctx.r8.u64 | 65535;
	// lfs f30,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	f31.f64 = double(temp.f32);
loc_8246B694:
	// lwz r28,-4(r26)
	r28.u64 = REX_LOAD_U32(r26.u32 + -4);
	// fmr f12,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f31.f64;
	// lwz r29,0(r26)
	r29.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// ble cr6,0x8246b7a8
	if (!ctx.cr6.gt) goto loc_8246B7A8;
	// lwz r8,388(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8246B6B4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = f31.f64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// bge cr6,0x8246b790
	if (!ctx.cr6.lt) goto loc_8246B790;
	// subf r9,r28,r29
	ctx.r9.u64 = r29.u64 - r28.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8246b75c
	if (ctx.cr6.lt) goto loc_8246B75C;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_8246B6DC:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8246b6ec
	if (ctx.cr6.gt) goto loc_8246B6EC;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8246B6EC:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8246b6f8
	if (!ctx.cr6.gt) goto loc_8246B6F8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8246B6F8:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8246b708
	if (ctx.cr6.gt) goto loc_8246B708;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8246B708:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8246b714
	if (!ctx.cr6.gt) goto loc_8246B714;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8246B714:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8246b724
	if (ctx.cr6.gt) goto loc_8246B724;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8246B724:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8246b730
	if (!ctx.cr6.gt) goto loc_8246B730;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8246B730:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8246b740
	if (ctx.cr6.gt) goto loc_8246B740;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8246B740:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8246b74c
	if (!ctx.cr6.gt) goto loc_8246B74C;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8246B74C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8246b6dc
	if (ctx.cr6.lt) goto loc_8246B6DC;
loc_8246B75C:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8246b790
	if (!ctx.cr6.lt) goto loc_8246B790;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8246B76C:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x8246b77c
	if (ctx.cr6.gt) goto loc_8246B77C;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8246B77C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8246b788
	if (!ctx.cr6.gt) goto loc_8246B788;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_8246B788:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8246b76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246B76C;
loc_8246B790:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x8246b79c
	if (!ctx.cr6.gt) goto loc_8246B79C;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
loc_8246B79C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8246b6b4
	if (!ctx.cr0.eq) goto loc_8246B6B4;
loc_8246B7A8:
	// lfs f0,128(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8246b7cc
	if (!ctx.cr6.lt) goto loc_8246B7CC;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8246b7dc
	goto loc_8246B7DC;
loc_8246B7CC:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8246B7DC:
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r21.s32, ctx.xer);
	// bge cr6,0x8246b814
	if (!ctx.cr6.lt) goto loc_8246B814;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8246b800
	if (!ctx.cr6.lt) goto loc_8246B800;
	// fsubs f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8246b818
	goto loc_8246B818;
loc_8246B800:
	// fadds f13,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8246b818
	goto loc_8246B818;
loc_8246B814:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_8246B818:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246b8c4
	if (ctx.cr6.eq) goto loc_8246B8C4;
	// lwz r9,196(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 196);
	// rlwinm r11,r20,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// extsw r9,r23
	ctx.r9.s64 = r23.s32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8246b8a0
	if (ctx.cr6.eq) goto loc_8246B8A0;
	// lwz r5,296(r27)
	ctx.r5.u64 = REX_LOAD_U32(r27.u32 + 296);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r8,264(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 264);
	// mulld r4,r7,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r7.u64 * ctx.r9.u64);
	// lwz r6,260(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 260);
	// lwz r3,280(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r5,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r3,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// sradi r5,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r5.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// srawi r11,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 13;
	// clrlwi r3,r4,19
	ctx.r3.u64 = ctx.r4.u32 & 0x1FFF;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// sraw r10,r8,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x8246b8d0
	goto loc_8246B8D0;
loc_8246B8A0:
	// lwz r10,192(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 192);
	// lwz r8,280(r27)
	ctx.r8.u64 = REX_LOAD_U32(r27.u32 + 280);
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r6,r8,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// mulld r4,r5,r9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * ctx.r9.u64);
	// sradi r3,r4,20
	ctx.xer.ca = (ctx.r4.s64 < 0) & ((ctx.r4.u64 & 0xFFFFF) != 0);
	ctx.r3.s64 = ctx.r4.s64 >> 20;
	// extsw r4,r3
	ctx.r4.s64 = ctx.r3.s32;
	// b 0x8246b8d0
	goto loc_8246B8D0;
loc_8246B8C4:
	// lis r6,127
	ctx.r6.s64 = 8323072;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// ori r6,r6,65534
	ctx.r6.u64 = ctx.r6.u64 | 65534;
loc_8246B8D0:
	// lwz r31,172(r27)
	r31.u64 = REX_LOAD_U32(r27.u32 + 172);
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x8246b8f0
	if (!ctx.cr6.lt) goto loc_8246B8F0;
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x8246b900
	goto loc_8246B900;
loc_8246B8F0:
	// fadds f0,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + f30.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8246B900:
	// subf r30,r28,r29
	r30.u64 = r29.u64 - r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8246af18
	ctx.lr = 0x8246B910;
	sub_8246AF18(ctx, base);
	// srawi. r11,r30,2
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x3) != 0);
	ctx.r11.s64 = r30.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8246b934
	if (ctx.cr0.eq) goto loc_8246B934;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8246b934
	if (!ctx.cr6.gt) goto loc_8246B934;
loc_8246B924:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246b924
	if (ctx.cr6.gt) goto loc_8246B924;
loc_8246B934:
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, r31.s32, ctx.xer);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bgt cr6,0x8246b944
	if (ctx.cr6.gt) goto loc_8246B944;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_8246B944:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8246b950
	if (ctx.cr6.gt) goto loc_8246B950;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8246B950:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8246b970
	if (!ctx.cr6.gt) goto loc_8246B970;
loc_8246B960:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8246b960
	if (ctx.cr6.gt) goto loc_8246B960;
loc_8246B970:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * f29.f64));
	// ble cr6,0x8246ba2c
	if (!ctx.cr6.gt) goto loc_8246BA2C;
	// lwz r8,388(r22)
	ctx.r8.u64 = REX_LOAD_U32(r22.u32 + 388);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
loc_8246B99C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(r28.s32, r29.s32, ctx.xer);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// bge cr6,0x8246ba20
	if (!ctx.cr6.lt) goto loc_8246BA20;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// blt cr6,0x8246b9fc
	if (ctx.cr6.lt) goto loc_8246B9FC;
	// addi r9,r29,-3
	ctx.r9.s64 = r29.s64 + -3;
loc_8246B9BC:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f8,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8246b9bc
	if (ctx.cr6.lt) goto loc_8246B9BC;
loc_8246B9FC:
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// bge cr6,0x8246ba20
	if (!ctx.cr6.lt) goto loc_8246BA20;
	// subf r10,r10,r29
	ctx.r10.u64 = r29.u64 - ctx.r10.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8246BA10:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8246ba10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8246BA10;
loc_8246BA20:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x8246b99c
	if (!ctx.cr0.eq) goto loc_8246B99C;
loc_8246BA2C:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// stw r3,172(r27)
	REX_STORE_U32(r27.u32 + 172, ctx.r3.u32);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// bne 0x8246b694
	if (!ctx.cr0.eq) goto loc_8246B694;
loc_8246BA3C:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
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

DEFINE_REX_FUNC(sub_82487410) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2976(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2976);
	// lwz r10,2980(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2980);
	// addi r11,r11,738
	ctx.r11.s64 = ctx.r11.s64 + 738;
	// lwz r9,2984(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2984);
	// addi r8,r10,738
	ctx.r8.s64 = ctx.r10.s64 + 738;
	// lwz r10,2964(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2964);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2092(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2092);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,738
	ctx.r6.s64 = ctx.r9.s64 + 738;
	// addi r10,r10,735
	ctx.r10.s64 = ctx.r10.s64 + 735;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// addi r7,r11,263
	ctx.r7.s64 = ctx.r11.s64 + 263;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r8,2928(r3)
	REX_STORE_U32(ctx.r3.u32 + 2928, ctx.r8.u32);
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// stw r5,2932(r3)
	REX_STORE_U32(ctx.r3.u32 + 2932, ctx.r5.u32);
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r11,2936(r3)
	REX_STORE_U32(ctx.r3.u32 + 2936, ctx.r11.u32);
	// lwzx r9,r6,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// stw r9,2924(r3)
	REX_STORE_U32(ctx.r3.u32 + 2924, ctx.r9.u32);
	// stw r9,2920(r3)
	REX_STORE_U32(ctx.r3.u32 + 2920, ctx.r9.u32);
	// stw r9,2916(r3)
	REX_STORE_U32(ctx.r3.u32 + 2916, ctx.r9.u32);
	// lwzx r8,r10,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r8,2096(r3)
	REX_STORE_U32(ctx.r3.u32 + 2096, ctx.r8.u32);
	// lwz r7,2108(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 2108);
	// stw r7,2100(r3)
	REX_STORE_U32(ctx.r3.u32 + 2100, ctx.r7.u32);
	// b 0x82362b28
	sub_82362B28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824903E8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,1368(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1368);
	// srawi r9,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 8;
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// lwz r7,1464(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 1464);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
	// rlwinm r11,r9,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// mullw r5,r6,r7
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r3,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 8;
	// addi r4,r11,-256
	ctx.r4.s64 = ctx.r11.s64 + -256;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r4,0,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFE00;
	// mullw r9,r11,r7
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// rlwinm r8,r9,0,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFE0000;
	// or r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 | ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82490DA8) {
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
	ctx.lr = 0x82490DB0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// bne cr6,0x82490dd4
	if (!ctx.cr6.eq) goto loc_82490DD4;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// b 0x82490f08
	goto loc_82490F08;
loc_82490DD4:
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
	// blt cr6,0x82490ec0
	if (ctx.cr6.lt) goto loc_82490EC0;
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
	// bge cr6,0x82490eb8
	if (!ctx.cr6.lt) goto loc_82490EB8;
loc_82490E20:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82490e4c
	if (ctx.cr6.lt) goto loc_82490E4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337e90
	ctx.lr = 0x82490E3C;
	sub_82337E90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82490e20
	if (ctx.cr6.eq) goto loc_82490E20;
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82490f00
	goto loc_82490F00;
loc_82490E4C:
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
loc_82490EB8:
	// srawi r30,r30,4
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xF) != 0);
	r30.s64 = r30.s32 >> 4;
	// b 0x82490f00
	goto loc_82490F00;
loc_82490EC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337f50
	ctx.lr = 0x82490EC8;
	sub_82337F50(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r29,r11,32768
	r29.u64 = ctx.r11.u64 | 32768;
loc_82490ED0:
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
	ctx.lr = 0x82490EE8;
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
	// blt cr6,0x82490ed0
	if (ctx.cr6.lt) goto loc_82490ED0;
loc_82490F00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x8249109c
	if (!ctx.cr6.eq) goto loc_8249109C;
loc_82490F08:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
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
	// beq cr6,0x82490fe8
	if (ctx.cr6.eq) goto loc_82490FE8;
	// li r30,2
	r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82490f88
	if (!ctx.cr6.lt) goto loc_82490F88;
loc_82490F30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82490f88
	if (ctx.cr6.eq) goto loc_82490F88;
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
	// bge 0x82490f78
	if (!ctx.cr0.lt) goto loc_82490F78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82490F78;
	sub_823380C8(ctx, base);
loc_82490F78:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82490f30
	if (ctx.cr6.gt) goto loc_82490F30;
loc_82490F88:
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
	// bge 0x82490fc0
	if (!ctx.cr0.lt) goto loc_82490FC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82490FC0;
	sub_823380C8(ctx, base);
loc_82490FC0:
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82490FE8:
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8249104c
	if (!ctx.cr6.lt) goto loc_8249104C;
loc_82490FF4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8249104c
	if (ctx.cr6.eq) goto loc_8249104C;
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
	// bge 0x8249103c
	if (!ctx.cr0.lt) goto loc_8249103C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8249103C;
	sub_823380C8(ctx, base);
loc_8249103C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82490ff4
	if (ctx.cr6.gt) goto loc_82490FF4;
loc_8249104C:
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
	// bge 0x82491084
	if (!ctx.cr0.lt) goto loc_82491084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491084;
	sub_823380C8(ctx, base);
loc_82491084:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r3.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_8249109C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r30,71
	ctx.cr6.compare<int32_t>(r30.s32, 71, ctx.xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x82491194
	if (!ctx.cr6.eq) goto loc_82491194;
	// lhz r11,72(r27)
	ctx.r11.u64 = REX_LOAD_U16(r27.u32 + 72);
	// lhz r9,70(r27)
	ctx.r9.u64 = REX_LOAD_U16(r27.u32 + 70);
	// add r30,r9,r11
	r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(r30.u32, 32, ctx.xer);
	// ble cr6,0x824910cc
	if (!ctx.cr6.gt) goto loc_824910CC;
loc_824910C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82491170
	goto loc_82491170;
loc_824910CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824910c4
	if (ctx.cr6.eq) goto loc_824910C4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82491134
	if (!ctx.cr6.gt) goto loc_82491134;
loc_824910DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82491134
	if (ctx.cr6.eq) goto loc_82491134;
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
	// bge 0x82491124
	if (!ctx.cr0.lt) goto loc_82491124;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491124;
	sub_823380C8(ctx, base);
loc_82491124:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824910dc
	if (ctx.cr6.gt) goto loc_824910DC;
loc_82491134:
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
	// bge 0x8249116c
	if (!ctx.cr0.lt) goto loc_8249116C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8249116C;
	sub_823380C8(ctx, base);
loc_8249116C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_82491170:
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
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
loc_82491194:
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
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
	// ble cr6,0x824911dc
	if (!ctx.cr6.gt) goto loc_824911DC;
loc_824911D4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82491280
	goto loc_82491280;
loc_824911DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x824911d4
	if (ctx.cr6.eq) goto loc_824911D4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82491244
	if (!ctx.cr6.gt) goto loc_82491244;
loc_824911EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82491244
	if (ctx.cr6.eq) goto loc_82491244;
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
	// bge 0x82491234
	if (!ctx.cr0.lt) goto loc_82491234;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82491234;
	sub_823380C8(ctx, base);
loc_82491234:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x824911ec
	if (ctx.cr6.gt) goto loc_824911EC;
loc_82491244:
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
	// bge 0x8249127c
	if (!ctx.cr0.lt) goto loc_8249127C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8249127C;
	sub_823380C8(ctx, base);
loc_8249127C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82491280:
	// sraw r11,r10,r28
	temp.u32 = r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & r25.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// neg r6,r8
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + r27.u64;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// xor r10,r3,r6
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r6.u64;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subf r3,r6,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r6.u64;
	// rlwimi r3,r11,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824AC918) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
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
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// vspltish v11,3
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_set1_epi16(short(0x3)));
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r5,1
	ctx.r5.s64 = 1;
	// and r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
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
	// bne cr6,0x824aca5c
	if (!ctx.cr6.eq) goto loc_824ACA5C;
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
	// lvx128 v62,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v62,v60,v6
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v59,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v58,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v4,v58,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vmrghb v7,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824acb48
	if (!ctx.cr6.gt) goto loc_824ACB48;
	// addi r5,r6,4
	ctx.r5.s64 = ctx.r6.s64 + 4;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r31,4
	r31.s64 = 4;
loc_824AC9A8:
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// vslh v12,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// lvx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v6,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v9,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vperm128 v8,v63,v62,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v57,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v6,v9,v2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v12,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v56,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v5,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v56,v57,v5
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vadduhm v9,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v3,v7,v12
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vor v7,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vmrghb v8,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vslh v31,v9,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v30,v0,v3
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vadduhm v29,v10,v8
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v28,v9,v31
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)v31.u16)));
	// vadduhm v6,v6,v30
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vor v10,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v27,v0,v29
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vadduhm v26,v28,v2
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v25,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v25.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor v13,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vadduhm v12,v26,v27
	simde_mm_store_si128((simde__m128i*)ctx.v12.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vpkshus128 v55,v25,v25
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v25.s16), simde_mm_load_si128((simde__m128i*)v25.s16)));
	// vsrah v24,v12,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v24.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v54,v24,v24
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v24.s16), simde_mm_load_si128((simde__m128i*)v24.s16)));
	// stvewx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v54,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// blt cr6,0x824ac9a8
	if (ctx.cr6.lt) goto loc_824AC9A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_824ACA5C:
	// lvx128 v50,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v51,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v10,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvx128 v49,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v12,v52,v50,v6
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v48,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v3,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v9,v48,v49,v3
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// vmrglb v4,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v13,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v12,v0,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// ble cr6,0x824acb48
	if (!ctx.cr6.gt) goto loc_824ACB48;
	// li r9,0
	ctx.r9.s64 = 0;
loc_824ACAAC:
	// vadduhm v8,v13,v10
	simde_mm_store_si128((simde__m128i*)ctx.v8.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vadduhm v7,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v7.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vor128 v45,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// vslh v6,v8,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v47,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vslh v3,v7,v11
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// lvx128 v46,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lvsl v1,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// vadduhm v31,v8,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vperm128 v6,v46,v47,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v1.u8)));
	// vadduhm v30,v7,v3
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vor128 v1,v45,v45
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_load_si128((simde__m128i*)ctx.v45.u8));
	// vadduhm v29,v31,v2
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v28,v30,v2
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vmrglb v7,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v27,v5,v8
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// vadduhm v26,v4,v7
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vor v5,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// vor v4,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vsubshs v25,v0,v27
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// vsubshs v24,v0,v26
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.s16), simde_mm_load_si128((simde__m128i*)v26.s16)));
	// vor v13,v10,v10
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v10.u8));
	// vor v12,v9,v9
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)ctx.v9.u8));
	// vadduhm v6,v29,v25
	simde_mm_store_si128((simde__m128i*)ctx.v6.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)v25.u16)));
	// vadduhm v3,v28,v24
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)v24.u16)));
	// vor v10,v8,v8
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_load_si128((simde__m128i*)ctx.v8.u8));
	// vor v9,v7,v7
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_load_si128((simde__m128i*)ctx.v7.u8));
	// vsrah v23,v6,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v23.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v22,v3,v1
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v44,v23,v22
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v23.s16)));
	// stvx128 v44,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v44.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// blt cr6,0x824acaac
	if (ctx.cr6.lt) goto loc_824ACAAC;
loc_824ACB48:
	// li r3,0
	ctx.r3.s64 = 0;
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B44E0) {
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
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// lwz r8,196(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// subfic r9,r11,8
	ctx.xer.ca = ctx.r11.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r11.u64;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r7,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// li r7,4
	ctx.r7.s64 = 4;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lvx128 v0,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// slw r8,r9,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// vsplth v1,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824b0858
	ctx.lr = 0x824B4530;
	sub_824B0858(ctx, base);
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

DEFINE_REX_FUNC(sub_824B5088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,1144(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 1144);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// vspltish v1,4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_set1_epi16(short(0x4)));
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// subf r3,r11,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lvx128 v0,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// vsplth v2,v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v2.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_set1_epi16(short(0xD0C))));
	// bl 0x824ac918
	ctx.lr = 0x824B50CC;
	sub_824AC918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824B60D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	ctx.lr = 0x824B60E0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1160(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1160);
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vspltish v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x4)));
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
	ctx.lr = 0x824B6134;
	sub_824A6648(ctx, base);
	// cntlzw r7,r28
	ctx.r7.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// vspltish v10,8
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_set1_epi16(short(0x8)));
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r7,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// vspltish v8,-1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_set1_epi16(short(0xFFFF)));
	// vspltisb v11,0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r11,r29
	ctx.r11.u64 = r29.u64;
	// and r9,r5,r27
	ctx.r9.u64 = ctx.r5.u64 & r27.u64;
	// vspltish v9,3
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_set1_epi16(short(0x3)));
	// vspltish v12,0
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x0)));
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r4,r9,3
	ctx.r4.s64 = ctx.r9.s64 + 3;
	// vslh v8,v8,v10
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v8.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// bne cr6,0x824b61fc
	if (!ctx.cr6.eq) goto loc_824B61FC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b62a8
	if (!ctx.cr6.gt) goto loc_824B62A8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,4
	ctx.r8.s64 = 4;
loc_824B6188:
	// lvx128 v0,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v13,v0,v63,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v10,v0,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// vsldoi128 v7,v0,v63,6
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 10));
	// lvx128 v6,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v13,v10,v13
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)ctx.v13.u16)));
	// vadduhm v4,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v7.u16)));
	// vslh v3,v13,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v2,v11,v4
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vadduhm v1,v13,v3
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v3.u16)));
	// vadduhm v31,v1,v6
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v30,v31,v2
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsrah v29,v30,v5
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v30.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v29,v29
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vor v12,v12,v29
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v29.u8)));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b6188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6188;
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
loc_824B61FC:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x824b62a8
	if (!ctx.cr6.gt) goto loc_824B62A8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r8,-16
	ctx.r8.s64 = -16;
loc_824B6214:
	// lvx128 v0,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// vsldoi128 v10,v0,v61,4
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v7,v0,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// vsldoi128 v6,v0,v61,6
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 10));
	// vsldoi v5,v13,v0,4
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 12));
	// vsldoi v4,v13,v0,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 14));
	// vadduhm v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsldoi v2,v13,v0,6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v13.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8), 10));
	// vadduhm v1,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v6.u16)));
	// vadduhm v10,v4,v5
	simde_mm_store_si128((simde__m128i*)ctx.v10.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v5.u16)));
	// vor v0,v3,v3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v3.u8));
	// vadduhm v31,v13,v2
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// vsubshs v30,v11,v1
	simde_mm_store_si128((simde__m128i*)v30.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vslh v29,v10,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v0,v9
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vsubshs v27,v11,v31
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_subs_epi16(simde_mm_load_si128((simde__m128i*)ctx.v11.s16), simde_mm_load_si128((simde__m128i*)v31.s16)));
	// vadduhm v26,v10,v29
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.u16), simde_mm_load_si128((simde__m128i*)v29.u16)));
	// lvx128 v10,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v25,v0,v28
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)v28.u16)));
	// lvx128 v0,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v24,v26,v10
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v26.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v23,v25,v10
	simde_mm_store_si128((simde__m128i*)v23.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v25.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v13,v24,v27
	simde_mm_store_si128((simde__m128i*)ctx.v13.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v24.u16), simde_mm_load_si128((simde__m128i*)v27.u16)));
	// vadduhm v22,v23,v30
	simde_mm_store_si128((simde__m128i*)v22.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v23.u16), simde_mm_load_si128((simde__m128i*)v30.u16)));
	// vsrah v21,v13,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vor128 v60,v12,v21
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)v21.u8)));
	// vpkshus128 v59,v21,v20
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// vor128 v12,v60,v20
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)v20.u8)));
	// stvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// bdnz 0x824b6214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B6214;
loc_824B62A8:
	// vand v0,v12,v8
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8)));
	// li r3,0
	ctx.r3.s64 = 0;
	// vcmpgtuh. v13,v0,v11
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, rex::ppc::simde_mm_cmpgt_epu16(simde_mm_load_si128((simde__m128i*)ctx.v0.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	ctx.cr6.setFromMask(simde_mm_load_si128((simde__m128i*)ctx.v13.u16), 0xFFFF);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_824D2C90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-18040
	ctx.r11.s64 = ctx.r11.s64 + -18040;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// addi r9,r9,11040
	ctx.r9.s64 = ctx.r9.s64 + 11040;
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

DEFINE_REX_FUNC(sub_824D3B68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25884
	ctx.r3.s64 = ctx.r11.s64 + 25884;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3C38) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26348
	ctx.r3.s64 = ctx.r11.s64 + 26348;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D90) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29808
	ctx.r3.s64 = ctx.r11.s64 + 29808;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3EF0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000210
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4040) {
	REX_FUNC_PROLOGUE();
	// .long 0x200025c
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D41A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010066
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4320) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010105
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D44A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101df
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4620) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101ca
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D47A0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001f4
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4920) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001fc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4AA0) {
	REX_FUNC_PROLOGUE();
	// .long 0x201005a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4C20) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101ff
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

