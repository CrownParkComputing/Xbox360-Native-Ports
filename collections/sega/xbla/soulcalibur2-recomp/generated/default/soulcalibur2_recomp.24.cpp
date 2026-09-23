#include "soulcalibur2_funcs.24.h"

DEFINE_REX_FUNC(sub_820E1028) {
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
	ctx.lr = 0x820E1030;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f2,0(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f13,f2
	ctx.f13.u64 = ctx.f2.u64 & ~0x8000000000000000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lfs f0,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e10b0
	if (!ctx.cr6.lt) goto loc_820E10B0;
	// lfs f13,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820e10b0
	if (!ctx.cr6.lt) goto loc_820E10B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// lfs f0,2016(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2016);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2012(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2012);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f2,20(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// lfs f0,36(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0130
	ctx.lr = 0x820E10A8;
	sub_820E0130(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// b 0x820e1114
	goto loc_820E1114;
loc_820E10B0:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x820E10B8;
	sub_820E0130(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lfs f2,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0130
	ctx.lr = 0x820E10CC;
	sub_820E0130(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820e10f8
	if (!ctx.cr6.gt) goto loc_820E10F8;
	// bl 0x820e0088
	ctx.lr = 0x820E10F0;
	sub_820E0088(ctx, base);
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// b 0x820e1100
	goto loc_820E1100;
loc_820E10F8:
	// bl 0x820e0028
	ctx.lr = 0x820E10FC;
	sub_820E0028(ctx, base);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_820E1100:
	// fdivs f2,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 / ctx.f1.f64));
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x820e0130
	ctx.lr = 0x820E1110;
	sub_820E0130(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_820E1114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820EDAF0) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-28296(r10)
	REX_STORE_U32(ctx.r10.u32 + -28296, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EDF28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// addi r11,r11,32336
	ctx.r11.s64 = ctx.r11.s64 + 32336;
	// lwz r11,4892(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4892);
	// lwz r3,140(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EE448) {
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
	ctx.lr = 0x820EE460;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r4)
	r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82200a50
	ctx.lr = 0x820EE470;
	sub_82200A50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f0,16848(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 16848);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x822007f8
	ctx.lr = 0x820EE488;
	sub_822007F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200a00
	ctx.lr = 0x820EE490;
	sub_82200A00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm. r8,r30,0,20,21
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xC00;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f27,16844(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16844);
	f27.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,2388(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2388);
	f28.f64 = double(temp.f32);
	// addi r11,r11,1996
	ctx.r11.s64 = ctx.r11.s64 + 1996;
	// lfs f29,16840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16840);
	f29.f64 = double(temp.f32);
	// lfs f30,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	f30.f64 = double(temp.f32);
	// beq 0x820ee518
	if (ctx.cr0.eq) goto loc_820EE518;
	// rlwinm. r10,r30,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820ee4f0
	if (ctx.cr0.eq) goto loc_820EE4F0;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x820ee4d4
	if (ctx.cr6.gt) goto loc_820EE4D4;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_820EE4D4:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f28.f64));
	// fcmpu cr6,f31,f27
	ctx.cr6.compare(f31.f64, f27.f64);
	// blt cr6,0x820ee4e4
	if (ctx.cr6.lt) goto loc_820EE4E4;
	// fmr f31,f27
	f31.f64 = f27.f64;
loc_820EE4E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200948
	ctx.lr = 0x820EE4F0;
	sub_82200948(ctx, base);
loc_820EE4F0:
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ee524
	if (ctx.cr0.eq) goto loc_820EE524;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x820ee504
	if (ctx.cr6.lt) goto loc_820EE504;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_820EE504:
	// fsubs f1,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 - f28.f64));
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, f29.f64);
	// bgt cr6,0x820ee51c
	if (ctx.cr6.gt) goto loc_820EE51C;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// b 0x820ee51c
	goto loc_820EE51C;
loc_820EE518:
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
loc_820EE51C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200948
	ctx.lr = 0x820EE524;
	sub_82200948(ctx, base);
loc_820EE524:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822009f8
	ctx.lr = 0x820EE52C;
	sub_822009F8(ctx, base);
	// rlwinm. r11,r30,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x3000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// beq 0x820ee590
	if (ctx.cr0.eq) goto loc_820EE590;
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ee568
	if (ctx.cr0.eq) goto loc_820EE568;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x820ee54c
	if (ctx.cr6.lt) goto loc_820EE54C;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_820EE54C:
	// fsubs f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 - f28.f64));
	// fcmpu cr6,f31,f29
	ctx.cr6.compare(f31.f64, f29.f64);
	// bgt cr6,0x820ee55c
	if (ctx.cr6.gt) goto loc_820EE55C;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_820EE55C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200940
	ctx.lr = 0x820EE568;
	sub_82200940(ctx, base);
loc_820EE568:
	// rlwinm. r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ee5a4
	if (ctx.cr0.eq) goto loc_820EE5A4;
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x820ee57c
	if (ctx.cr6.gt) goto loc_820EE57C;
	// fmr f31,f30
	f31.f64 = f30.f64;
loc_820EE57C:
	// fadds f1,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 + f28.f64));
	// fcmpu cr6,f1,f27
	ctx.cr6.compare(ctx.f1.f64, f27.f64);
	// blt cr6,0x820ee59c
	if (ctx.cr6.lt) goto loc_820EE59C;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// b 0x820ee59c
	goto loc_820EE59C;
loc_820EE590:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_820EE59C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200940
	ctx.lr = 0x820EE5A4;
	sub_82200940(ctx, base);
loc_820EE5A4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x822d4f80
	ctx.lr = 0x820EE5B0;
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

DEFINE_REX_FUNC(sub_820F9878) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x820F9880;
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820f9a0c
	if (ctx.cr0.eq) goto loc_820F9A0C;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x820f99a8
	if (ctx.cr6.eq) goto loc_820F99A8;
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// beq cr6,0x820f9908
	if (ctx.cr6.eq) goto loc_820F9908;
	// cmpwi cr6,r4,32
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32, ctx.xer);
	// bne cr6,0x820f9a0c
	if (!ctx.cr6.eq) goto loc_820F9A0C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f9a08
	if (!ctx.cr6.gt) goto loc_820F9A08;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_820F98B8:
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mulli r9,r9,48
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(48));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820f98f0
	if (ctx.cr0.eq) goto loc_820F98F0;
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
loc_820F98F0:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f98b8
	if (ctx.cr6.lt) goto loc_820F98B8;
	// b 0x820f9a08
	goto loc_820F9A08;
loc_820F9908:
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32177
	ctx.r10.s64 = -2108751872;
	// li r31,0
	r31.s64 = 0;
	// addi r10,r10,7056
	ctx.r10.s64 = ctx.r10.s64 + 7056;
	// li r30,0
	r30.s64 = 0;
	// lha r11,90(r9)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + 90));
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// ble cr6,0x820f99a0
	if (!ctx.cr6.gt) goto loc_820F99A0;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r7,r3,48
	ctx.r7.s64 = ctx.r3.s64 + 48;
loc_820F9940:
	// lhz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820f998c
	if (!ctx.cr6.gt) goto loc_820F998C;
	// clrlwi r5,r9,16
	ctx.r5.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
loc_820F9958:
	// lhz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f997c
	if (!ctx.cr6.eq) goto loc_820F997C;
	// clrlwi r11,r31,16
	ctx.r11.u64 = r31.u32 & 0xFFFF;
	// addi r31,r11,24
	r31.s64 = ctx.r11.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r29,r31,1,0,30
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r31,r11,16
	r31.u64 = ctx.r11.u32 & 0xFFFF;
	// sthx r9,r29,r3
	REX_STORE_U16(r29.u32 + ctx.r3.u32, ctx.r9.u16);
loc_820F997C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x820f9958
	if (ctx.cr6.lt) goto loc_820F9958;
loc_820F998C:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9940
	if (ctx.cr6.lt) goto loc_820F9940;
loc_820F99A0:
	// sth r31,2076(r3)
	REX_STORE_U16(ctx.r3.u32 + 2076, r31.u16);
	// b 0x820f9a0c
	goto loc_820F9A0C;
loc_820F99A8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x820f9a08
	if (!ctx.cr6.gt) goto loc_820F9A08;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_820F99BC:
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
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x820f99f4
	if (!ctx.cr0.eq) goto loc_820F99F4;
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
loc_820F99F4:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f99bc
	if (ctx.cr6.lt) goto loc_820F99BC;
loc_820F9A08:
	// sth r7,2076(r3)
	REX_STORE_U16(ctx.r3.u32 + 2076, ctx.r7.u16);
loc_820F9A0C:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_820FFF98) {
	REX_FUNC_PROLOGUE();
	// b 0x820ffe98
	sub_820FFE98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FFFC0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r3,r11,84
	ctx.r3.s64 = ctx.r11.s64 + 84;
	// bl 0x8245e260
	ctx.lr = 0x820FFFE4;
	sub_8245E260(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// ori r9,r11,3696
	ctx.r9.u64 = ctx.r11.u64 | 3696;
	// addi r11,r10,-7072
	ctx.r11.s64 = ctx.r10.s64 + -7072;
	// mullw r10,r3,r9
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(r31.u32, 6, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8210001c
	if (!ctx.cr6.eq) goto loc_8210001C;
	// lhz r11,90(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 90);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// blt cr6,0x8210001c
	if (ctx.cr6.lt) goto loc_8210001C;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	r31.u64 = ctx.r11.u64 & r31.u64;
loc_8210001C:
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

DEFINE_REX_FUNC(sub_82104548) {
	REX_FUNC_PROLOGUE();
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
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f2c
	ctx.lr = 0x82104558;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f29,f2
	f29.f64 = ctx.f2.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f28,f3
	f28.f64 = ctx.f3.f64;
	// addi r6,r10,27104
	ctx.r6.s64 = ctx.r10.s64 + 27104;
	// fmr f27,f4
	f27.f64 = ctx.f4.f64;
	// addi r8,r11,17136
	ctx.r8.s64 = ctx.r11.s64 + 17136;
	// fmr f26,f5
	f26.f64 = ctx.f5.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f31,f6
	f31.f64 = ctx.f6.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f25,f7
	f25.f64 = ctx.f7.f64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8210459C;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821045b8
	if (ctx.cr0.eq) goto loc_821045B8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x821045bc
	goto loc_821045BC;
loc_821045B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821045BC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,80(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f29,84(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stfs f28,88(r11)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f27,96(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// stfs f26,100(r11)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// lfs f0,2392(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bge cr6,0x821045e8
	if (!ctx.cr6.lt) goto loc_821045E8;
	// fmr f31,f0
	f31.f64 = ctx.f0.f64;
loc_821045E8:
	// stfs f31,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(f25.f64, ctx.f0.f64);
	// blt cr6,0x821045f8
	if (ctx.cr6.lt) goto loc_821045F8;
	// fmr f0,f25
	ctx.f0.f64 = f25.f64;
loc_821045F8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,244(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r9,252(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// stfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r9,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// beq cr6,0x8210462c
	if (ctx.cr6.eq) goto loc_8210462C;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_8210462C:
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r9,228(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// addi r11,r11,22304
	ctx.r11.s64 = ctx.r11.s64 + 22304;
	// addi r10,r10,22288
	ctx.r10.s64 = ctx.r10.s64 + 22288;
	// lfs f13,16232(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16232);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f12,26944(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 26944);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,26940(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 26940);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f12,4(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// beq cr6,0x821046a4
	if (ctx.cr6.eq) goto loc_821046A4;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r3,44
	ctx.r7.s64 = ctx.r3.s64 + 44;
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x821046c4
	goto loc_821046C4;
loc_821046A4:
	// addi r9,r3,44
	ctx.r9.s64 = ctx.r3.s64 + 44;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_821046C4:
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r11,236(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821046f8
	if (ctx.cr6.eq) goto loc_821046F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r3,60
	ctx.r9.s64 = ctx.r3.s64 + 60;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82104718
	goto loc_82104718;
loc_821046F8:
	// addi r11,r3,60
	ctx.r11.s64 = ctx.r3.s64 + 60;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
loc_82104718:
	// stw r11,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f78
	ctx.lr = 0x8210472C;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110570) {
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
	// lbz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 132);
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821105cc
	if (ctx.cr0.eq) goto loc_821105CC;
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82204c48
	ctx.lr = 0x821105AC;
	sub_82204C48(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r31,104
	ctx.r8.s64 = r31.s64 + 104;
	// lfs f5,100(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e86d8
	ctx.lr = 0x821105CC;
	sub_821E86D8(ctx, base);
loc_821105CC:
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

DEFINE_REX_FUNC(sub_82111518) {
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
	ctx.lr = 0x82111520;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f30
	ctx.lr = 0x82111528;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211183c
	if (ctx.cr6.eq) goto loc_8211183C;
	// lwz r11,308(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211183c
	if (ctx.cr6.eq) goto loc_8211183C;
	// li r30,0
	r30.s64 = 0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// li r3,2
	ctx.r3.s64 = 2;
	// lfs f3,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x821afa50
	ctx.lr = 0x8211156C;
	sub_821AFA50(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f0,15632(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15632);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lfs f12,2344(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2344);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// lfs f11,16036(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16036);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16032);
	ctx.f10.f64 = double(temp.f32);
	// lis r28,-32165
	r28.s64 = -2107965440;
	// lfs f26,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	f26.f64 = double(temp.f32);
	// li r8,7
	ctx.r8.s64 = 7;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stfs f11,144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f10,148(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// std r30,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// stfs f26,160(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f26,164(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// std r30,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, r30.u64);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r25,-32480(r28)
	r25.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// bl 0x8210f028
	ctx.lr = 0x821115F4;
	sub_8210F028(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r29,1
	r29.s64 = 1;
	// stw r3,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r3.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// sth r29,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r29.u16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// lfs f30,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	f30.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// sth r11,124(r31)
	REX_STORE_U16(r31.u32 + 124, ctx.r11.u16);
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// sth r11,126(r31)
	REX_STORE_U16(r31.u32 + 126, ctx.r11.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,-32480(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f29,29472(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29472);
	f29.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// lfs f28,19796(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 19796);
	f28.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// lfs f5,29468(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29468);
	ctx.f5.f64 = double(temp.f32);
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// lfs f27,29464(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29464);
	f27.f64 = double(temp.f32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// lfs f2,29460(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 29460);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x82104548
	ctx.lr = 0x82111670;
	sub_82104548(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(r31.u32 + 328, ctx.r3.u32);
	// lwz r3,-32480(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + -32480);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f5,29456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29456);
	ctx.f5.f64 = double(temp.f32);
	// fmr f7,f30
	ctx.f7.f64 = f30.f64;
	// lfs f2,29452(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 29452);
	ctx.f2.f64 = double(temp.f32);
	// fmr f6,f31
	ctx.f6.f64 = f31.f64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// fmr f4,f29
	ctx.f4.f64 = f29.f64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x82104548
	ctx.lr = 0x821116B0;
	sub_82104548(ctx, base);
	// stw r3,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r3.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,28876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28876);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r6,r11,28860
	ctx.r6.s64 = ctx.r11.s64 + 28860;
	// stfs f31,124(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,16628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16628);
	ctx.f0.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821f7d50
	ctx.lr = 0x821116F8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82111778
	if (ctx.cr0.eq) goto loc_82111778;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// sth r29,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r29.u16);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stb r29,132(r3)
	REX_STORE_U8(ctx.r3.u32 + 132, r29.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,26632(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26632);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f0,96(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 96, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r5,29176
	ctx.r5.s64 = ctx.r5.s64 + 29176;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f13,29448(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 29448);
	ctx.f13.f64 = double(temp.f32);
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f12,16272(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16272);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2384(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2384);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,104
	ctx.r11.s64 = ctx.r3.s64 + 104;
	// stfs f0,100(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 100, temp.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stfs f13,120(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stfs f12,124(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// stw r6,104(r3)
	REX_STORE_U32(ctx.r3.u32 + 104, ctx.r6.u32);
	// stfs f11,128(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// stw r4,108(r3)
	REX_STORE_U32(ctx.r3.u32 + 108, ctx.r4.u32);
	// stw r10,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// stw r29,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r29.u32);
	// b 0x8211177c
	goto loc_8211177C;
loc_82111778:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
loc_8211177C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f28,19792(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 19792);
	f28.f64 = double(temp.f32);
	// mr r27,r30
	r27.u64 = r30.u64;
	// lfs f29,28280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28280);
	f29.f64 = double(temp.f32);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lfs f30,29444(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 29444);
	f30.f64 = double(temp.f32);
	// addi r26,r31,96
	r26.s64 = r31.s64 + 96;
	// lfs f31,29440(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 29440);
	f31.f64 = double(temp.f32);
	// addi r28,r31,148
	r28.s64 = r31.s64 + 148;
	// addi r24,r11,29428
	r24.s64 = ctx.r11.s64 + 29428;
loc_821117B8:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// stfs f31,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f28,136(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfs f26,140(r1)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
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
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fmadds f0,f0,f30,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, f30.f64, f29.f64)));
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// bl 0x821f7d50
	ctx.lr = 0x82111800;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82111820
	if (ctx.cr0.eq) goto loc_82111820;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lha r4,0(r28)
	ctx.r4.s64 = int16_t(REX_LOAD_U16(r28.u32 + 0));
	// add r6,r11,r29
	ctx.r6.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x82110fb8
	ctx.lr = 0x8211181C;
	sub_82110FB8(ctx, base);
	// b 0x82111824
	goto loc_82111824;
loc_82111820:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82111824:
	// addi r29,r29,3840
	r29.s64 = r29.s64 + 3840;
	// stwu r3,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r26.u32 = ea;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmpwi cr6,r29,23040
	ctx.cr6.compare<int32_t>(r29.s32, 23040, ctx.xer);
	// blt cr6,0x821117b8
	if (ctx.cr6.lt) goto loc_821117B8;
loc_8211183C:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f7c
	ctx.lr = 0x82111848;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_8211DFE0) {
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
	// fabs f13,f5
	ctx.f13.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// fmr f30,f6
	f30.f64 = ctx.f6.f64;
	// lfs f0,26932(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211e028
	if (!ctx.cr6.gt) goto loc_8211E028;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
loc_8211E028:
	// fabs f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = f30.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x8211e038
	if (!ctx.cr6.gt) goto loc_8211E038;
	// fmr f30,f3
	f30.f64 = ctx.f3.f64;
loc_8211E038:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r31,136
	r30.s64 = r31.s64 + 136;
	// bl 0x8211d2b0
	ctx.lr = 0x8211E044;
	sub_8211D2B0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f29,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 248, temp.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,-30440(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30440);
	ctx.f13.f64 = double(temp.f32);
	// li r11,86
	ctx.r11.s64 = 86;
	// stfs f13,244(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 244, temp.u32);
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-30444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30444);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2360(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2360);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,240(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 240, temp.u32);
	// stfs f12,232(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 232, temp.u32);
	// stfs f11,236(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// lfs f13,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,268(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 268, temp.u32);
	// stfs f30,272(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 272, temp.u32);
	// stfs f13,276(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 276, temp.u32);
	// stfs f0,280(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 280, temp.u32);
	// stb r11,59(r31)
	REX_STORE_U8(r31.u32 + 59, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_821203F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821203F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r11,-8304
	r29.s64 = ctx.r11.s64 + -8304;
	// lwz r11,-32480(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// addi r31,r11,80
	r31.s64 = ctx.r11.s64 + 80;
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// lhz r30,88(r11)
	r30.u64 = REX_LOAD_U16(ctx.r11.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82120430
	if (ctx.cr6.eq) goto loc_82120430;
	// mulli r4,r30,80
	ctx.r4.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(80));
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x82120430;
	sub_82190670(ctx, base);
loc_82120430:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// addi r5,r31,160
	ctx.r5.s64 = r31.s64 + 160;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212044c
	if (ctx.cr6.eq) goto loc_8212044C;
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,496(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 496);
	// bl 0x82190670
	ctx.lr = 0x8212044C;
	sub_82190670(ctx, base);
loc_8212044C:
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lis r8,-32170
	ctx.r8.s64 = -2108293120;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,29816(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 29816);
	// stw r10,29820(r8)
	REX_STORE_U32(ctx.r8.u32 + 29820, ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,29816(r9)
	REX_STORE_U32(ctx.r9.u32 + 29816, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82122ED0) {
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
	// li r6,-1
	ctx.r6.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8211f870
	ctx.lr = 0x82122EE8;
	sub_8211F870(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82125218
	ctx.lr = 0x82122EF0;
	sub_82125218(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f1,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82122180
	ctx.lr = 0x82122F08;
	sub_82122180(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82124038) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x820e1ba8
	ctx.lr = 0x82124084;
	sub_820E1BA8(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c28
	ctx.lr = 0x82124090;
	sub_820E1C28(ctx, base);
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

DEFINE_REX_FUNC(sub_82124638) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8212472c
	if (ctx.cr6.eq) goto loc_8212472C;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lwz r6,12(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// addi r9,r4,114
	ctx.r9.s64 = ctx.r4.s64 + 114;
	// addi r10,r11,13128
	ctx.r10.s64 = ctx.r11.s64 + 13128;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,8,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xF;
	// rlwinm r7,r6,4,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xF;
	// rlwinm r5,r6,20,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// lwz r11,1856(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// rlwinm r31,r6,16,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// lwzx r30,r9,r3
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8212469c
	if (ctx.cr6.eq) goto loc_8212469C;
	// cmpwi cr6,r8,15
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 15, ctx.xer);
	// beq cr6,0x8212469c
	if (ctx.cr6.eq) goto loc_8212469C;
	// addi r11,r4,106
	ctx.r11.s64 = ctx.r4.s64 + 106;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lwz r11,1856(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// stwx r11,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
loc_8212469C:
	// addi r11,r4,116
	ctx.r11.s64 = ctx.r4.s64 + 116;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821246cc
	if (ctx.cr6.eq) goto loc_821246CC;
	// cmpwi cr6,r7,15
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 15, ctx.xer);
	// beq cr6,0x821246cc
	if (ctx.cr6.eq) goto loc_821246CC;
	// addi r9,r4,108
	ctx.r9.s64 = ctx.r4.s64 + 108;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r9,1856(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_821246CC:
	// addi r11,r4,118
	ctx.r11.s64 = ctx.r4.s64 + 118;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x821246fc
	if (ctx.cr6.eq) goto loc_821246FC;
	// cmpwi cr6,r5,15
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 15, ctx.xer);
	// beq cr6,0x821246fc
	if (ctx.cr6.eq) goto loc_821246FC;
	// addi r9,r4,110
	ctx.r9.s64 = ctx.r4.s64 + 110;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r9,1856(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
loc_821246FC:
	// addi r11,r4,120
	ctx.r11.s64 = ctx.r4.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8212472c
	if (ctx.cr6.eq) goto loc_8212472C;
	// cmpwi cr6,r31,15
	ctx.cr6.compare<int32_t>(r31.s32, 15, ctx.xer);
	// beq cr6,0x8212472c
	if (ctx.cr6.eq) goto loc_8212472C;
	// addi r9,r4,112
	ctx.r9.s64 = ctx.r4.s64 + 112;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r31.u32);
	// lwz r10,1856(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 1856);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
loc_8212472C:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82129A60) {
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
	ctx.lr = 0x82129A68;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r6,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r6.u32);
	// stw r11,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r30,r11,-30020
	r30.s64 = ctx.r11.s64 + -30020;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x822d60a0
	ctx.lr = 0x82129AAC;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82129ad8
	if (ctx.cr0.eq) goto loc_82129AD8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,-30024
	ctx.r4.s64 = ctx.r11.s64 + -30024;
	// bl 0x822d60a0
	ctx.lr = 0x82129AC8;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82129ad8
	if (ctx.cr0.eq) goto loc_82129AD8;
loc_82129AD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82129d0c
	goto loc_82129D0C;
loc_82129AD8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// bl 0x822d60a0
	ctx.lr = 0x82129AE8;
	sub_822D60A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82129c30
	if (!ctx.cr0.eq) goto loc_82129C30;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lis r9,28770
	ctx.r9.s64 = 1885470720;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r8,r9,27648
	ctx.r8.u64 = ctx.r9.u64 | 27648;
	// li r29,1
	r29.s64 = 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// sth r8,80(r1)
	REX_STORE_U16(ctx.r1.u32 + 80, ctx.r8.u16);
	// lbz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,81(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// stb r8,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r8.u8);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lbz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 28);
	// lwz r8,28(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm r6,r8,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r8,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82129BFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwinm r6,r10,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r10,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bdnz 0x82129bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82129BFC;
loc_82129C30:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,258
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 258, ctx.xer);
	// bne cr6,0x82129ad0
	if (!ctx.cr6.eq) goto loc_82129AD0;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r8,r31,-20
	ctx.r8.s64 = r31.s64 + -20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82129C54:
	// stwx r10,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// bdnz 0x82129c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82129C54;
	// addi r11,r9,64
	ctx.r11.s64 = ctx.r9.s64 + 64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x82129cf8
	if (ctx.cr6.eq) goto loc_82129CF8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82129cf8
	if (!ctx.cr6.gt) goto loc_82129CF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82129C98:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r9,2(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r9,2(r10)
	REX_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// bdnz 0x82129c98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82129C98;
loc_82129CF8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,60(r31)
	REX_STORE_U32(r31.u32 + 60, ctx.r11.u32);
	// lha r11,98(r27)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r27.u32 + 98));
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
loc_82129D0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82132530) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f7,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lwz r3,-32480(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// li r31,0
	r31.s64 = 0;
	// lfs f5,-24964(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -24964);
	ctx.f5.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f4,30116(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,26856(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lfs f2,-24936(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24936);
	ctx.f2.f64 = double(temp.f32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lfs f1,-24940(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -24940);
	ctx.f1.f64 = double(temp.f32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// bl 0x82104548
	ctx.lr = 0x82132598;
	sub_82104548(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// addi r9,r10,23912
	ctx.r9.s64 = ctx.r10.s64 + 23912;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,160(r9)
	REX_STORE_U32(ctx.r9.u32 + 160, ctx.r3.u32);
	// stw r31,56(r9)
	REX_STORE_U32(ctx.r9.u32 + 56, r31.u32);
	// stw r31,60(r9)
	REX_STORE_U32(ctx.r9.u32 + 60, r31.u32);
	// stw r10,120(r9)
	REX_STORE_U32(ctx.r9.u32 + 120, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82133F00) {
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
	// bl 0x82133ad0
	ctx.lr = 0x82133F14;
	sub_82133AD0(ctx, base);
	// cmpw cr6,r6,r3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82133f5c
	if (!ctx.cr6.lt) goto loc_82133F5C;
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
	// lha r3,14(r11)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 14));
	// rlwinm. r11,r3,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82133f60
	if (ctx.cr0.eq) goto loc_82133F60;
loc_82133F5C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82133F60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135B68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// addi r9,r11,23912
	ctx.r9.s64 = ctx.r11.s64 + 23912;
	// addi r11,r10,22000
	ctx.r11.s64 = ctx.r10.s64 + 22000;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r11,76(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// mulli r11,r11,324
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(324));
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136258) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lhz r11,524(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 524);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821365C0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lwz r11,23912(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 23912);
	// lwz r3,516(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 516);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82136748) {
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
	// bl 0x82130370
	ctx.lr = 0x82136760;
	sub_82130370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82136798
	if (ctx.cr0.eq) goto loc_82136798;
	// li r10,560
	ctx.r10.s64 = 560;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8213677C:
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bdnz 0x8213677c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213677C;
loc_82136798:
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

DEFINE_REX_FUNC(sub_8213ACC8) {
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
	ctx.lr = 0x8213ACD0;
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r9,-32169
	ctx.r9.s64 = -2108227584;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lis r8,-32175
	ctx.r8.s64 = -2108620800;
	// addi r7,r10,14
	ctx.r7.s64 = ctx.r10.s64 + 14;
	// addi r8,r8,22984
	ctx.r8.s64 = ctx.r8.s64 + 22984;
	// lwz r10,21824(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 21824);
	// rlwinm r29,r7,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r9,21824
	r30.s64 = ctx.r9.s64 + 21824;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lbzx r8,r3,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// addi r6,r9,432
	ctx.r6.s64 = ctx.r9.s64 + 432;
	// lhax r5,r29,r10
	ctx.r5.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r10.u32));
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// lfs f13,16204(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16204);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwz r4,344(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 344);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addis r3,r10,3072
	ctx.r3.s64 = ctx.r10.s64 + 201326592;
	// lha r10,28(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 28));
	// addi r3,r3,17
	ctx.r3.s64 = ctx.r3.s64 + 17;
	// std r10,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfs f0,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// lha r11,26(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 26));
	// lfd f12,144(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f11,144(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f31,f11,f0
	f31.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f30,f12,f13
	f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// bl 0x820e68b8
	ctx.lr = 0x8213AD7C;
	sub_820E68B8(ctx, base);
	// addi r11,r1,164
	ctx.r11.s64 = ctx.r1.s64 + 164;
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r31,0
	r31.s64 = 0;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// b 0x8213adb4
	goto loc_8213ADB4;
loc_8213ADA4:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8213adb0
	if (!ctx.cr6.eq) goto loc_8213ADB0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8213ADB0:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_8213ADB4:
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8213ada4
	if (!ctx.cr0.eq) goto loc_8213ADA4;
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-24516(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24516);
	ctx.f0.f64 = double(temp.f32);
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// fadds f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f0.f64 = double(temp.f32);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r10,-24276
	ctx.r8.s64 = ctx.r10.s64 + -24276;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// fnmsubs f2,f29,f0,f13
	ctx.f2.f64 = double(float(-std::fma(f29.f64, ctx.f0.f64, -ctx.f13.f64)));
	// bl 0x8213a318
	ctx.lr = 0x8213AE08;
	sub_8213A318(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r27,r11,20320
	r27.s64 = ctx.r11.s64 + 20320;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r11,r11,-8304
	ctx.r11.s64 = ctx.r11.s64 + -8304;
	// stw r3,644(r27)
	REX_STORE_U32(r27.u32 + 644, ctx.r3.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addis r3,r11,74
	ctx.r3.s64 = ctx.r11.s64 + 4849664;
	// addi r3,r3,8192
	ctx.r3.s64 = ctx.r3.s64 + 8192;
	// bl 0x820e4bb0
	ctx.lr = 0x8213AE2C;
	sub_820E4BB0(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stb r28,135(r1)
	REX_STORE_U8(ctx.r1.u32 + 135, r28.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r31,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lfs f0,27600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 27600);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,23888(r10)
	REX_STORE_U32(ctx.r10.u32 + 23888, ctx.r3.u32);
	// lfs f13,28564(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28564);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f30,f0
	ctx.f12.f64 = double(float(f30.f64 + ctx.f0.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// fadds f11,f31,f13
	ctx.f11.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f4,-24280(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -24280);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16688(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16688);
	ctx.f3.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r29.u32 + ctx.r11.u32));
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lfs f0,16200(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16200);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fnmsubs f2,f29,f0,f12
	ctx.f2.f64 = double(float(-std::fma(f29.f64, ctx.f0.f64, -ctx.f12.f64)));
	// li r10,8
	ctx.r10.s64 = 8;
	// fsubs f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// li r7,2
	ctx.r7.s64 = 2;
	// lbz r11,18(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// bl 0x82138e60
	ctx.lr = 0x8213AEC0;
	sub_82138E60(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,672(r27)
	REX_STORE_U32(r27.u32 + 672, ctx.r3.u32);
	// lfs f7,2332(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2332);
	ctx.f7.f64 = double(temp.f32);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f5,-24284(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24284);
	ctx.f5.f64 = double(temp.f32);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// lwz r3,-32480(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f4,28228(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28228);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,26856(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26856);
	ctx.f3.f64 = double(temp.f32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bl 0x82104548
	ctx.lr = 0x8213AF0C;
	sub_82104548(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

DEFINE_REX_FUNC(sub_8214BBE8) {
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
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e6c
	ctx.lr = 0x8214BBF0;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f38
	ctx.lr = 0x8214BBF8;
	// stwu r1,-2848(r1)
	ea = -2848 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,26
	ctx.r11.s64 = 26;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
loc_8214BC18:
	// stfs f31,60(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stfs f31,56(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f31,52(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfsu f31,48(r10)
	ea = 48 + ctx.r10.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8214bc18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214BC18;
	// li r10,26
	ctx.r10.s64 = 26;
	// addi r11,r1,1456
	ctx.r11.s64 = ctx.r1.s64 + 1456;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214BC38:
	// stfs f31,60(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f31,56(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfsu f31,48(r11)
	ea = 48 + ctx.r11.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8214bc38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214BC38;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r22,r21,3968
	r22.s64 = r21.s64 + 3968;
	// li r29,0
	r29.s64 = 0;
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r26,26
	r26.s64 = 26;
	// lfs f28,2020(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	f28.f64 = double(temp.f32);
loc_8214BC64:
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// lfs f0,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// lfs f12,56(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addi r28,r31,16
	r28.s64 = r31.s64 + 16;
	// stfsx f12,r29,r11
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r29.u32 + ctx.r11.u32, temp.u32);
	// addi r27,r31,12
	r27.s64 = r31.s64 + 12;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// stfs f0,-8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -8, temp.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// stfs f13,-4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + -4, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x820e0e38
	ctx.lr = 0x8214BCA4;
	sub_820E0E38(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, f28.f64);
	// bgt cr6,0x8214bcd0
	if (ctx.cr6.gt) goto loc_8214BCD0;
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x8214bcd0
	if (ctx.cr6.gt) goto loc_8214BCD0;
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f28
	ctx.cr6.compare(ctx.f13.f64, f28.f64);
	// bgt cr6,0x8214bcd0
	if (ctx.cr6.gt) goto loc_8214BCD0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8214bcf4
	goto loc_8214BCF4;
loc_8214BCD0:
	// lfs f13,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f12,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fdivs f3,f31,f13
	ctx.f3.f64 = double(float(f31.f64 / ctx.f13.f64));
	// fdivs f2,f31,f12
	ctx.f2.f64 = double(float(f31.f64 / ctx.f12.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e0d78
	ctx.lr = 0x8214BCF0;
	sub_820E0D78(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_8214BCF4:
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// add r31,r29,r11
	r31.u64 = r29.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1528
	ctx.lr = 0x8214BD04;
	sub_820E1528(ctx, base);
	// addi r11,r1,1472
	ctx.r11.s64 = ctx.r1.s64 + 1472;
	// li r5,48
	ctx.r5.s64 = 48;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + ctx.r11.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x8214BD18;
	sub_822D4FA0(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r29,r29,48
	r29.s64 = r29.s64 + 48;
	// bne 0x8214bc64
	if (!ctx.cr0.eq) goto loc_8214BC64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r28,r25,648
	r28.s64 = r25.s64 + 648;
	// li r23,5
	r23.s64 = 5;
	// addi r24,r11,-22984
	r24.s64 = ctx.r11.s64 + -22984;
	// lfs f30,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f30.f64 = double(temp.f32);
loc_8214BD40:
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8214bdf8
	if (ctx.cr6.eq) goto loc_8214BDF8;
	// lwz r11,-12(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + -12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214bdf8
	if (ctx.cr6.eq) goto loc_8214BDF8;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f30.f64;
	// li r8,-1
	ctx.r8.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,1472
	ctx.r4.s64 = ctx.r1.s64 + 1472;
	// addi r3,r28,-16
	ctx.r3.s64 = r28.s64 + -16;
	// bl 0x82165b50
	ctx.lr = 0x8214BD7C;
	sub_82165B50(ctx, base);
	// li r26,1
	r26.s64 = 1;
	// addi r31,r1,256
	r31.s64 = ctx.r1.s64 + 256;
	// addi r30,r1,1504
	r30.s64 = ctx.r1.s64 + 1504;
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// li r27,26
	r27.s64 = 26;
loc_8214BD90:
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 0);
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & r26.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x8214bde0
	if (ctx.cr6.eq) goto loc_8214BDE0;
	// addi r4,r31,-32
	ctx.r4.s64 = r31.s64 + -32;
	// lfs f29,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	f29.f64 = double(temp.f32);
	// addi r5,r30,-32
	ctx.r5.s64 = r30.s64 + -32;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e1890
	ctx.lr = 0x8214BDB8;
	sub_820E1890(ctx, base);
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// addi r5,r30,-16
	ctx.r5.s64 = r30.s64 + -16;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e2028
	ctx.lr = 0x8214BDCC;
	sub_820E2028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2028
	ctx.lr = 0x8214BDE0;
	sub_820E2028(ctx, base);
loc_8214BDE0:
	// addic. r27,r27,-1
	ctx.xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// addi r31,r31,48
	r31.s64 = r31.s64 + 48;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rldicr r26,r26,1,62
	r26.u64 = __builtin_rotateleft64(r26.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// bne 0x8214bd90
	if (!ctx.cr0.eq) goto loc_8214BD90;
loc_8214BDF8:
	// addic. r23,r23,-1
	ctx.xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	ctx.cr0.compare<int32_t>(r23.s32, 0, ctx.xer);
	// addi r28,r28,128
	r28.s64 = r28.s64 + 128;
	// bne 0x8214bd40
	if (!ctx.cr0.eq) goto loc_8214BD40;
	// lwz r11,1272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214c084
	if (ctx.cr6.eq) goto loc_8214C084;
	// addi r27,r25,416
	r27.s64 = r25.s64 + 416;
	// addi r26,r11,3968
	r26.s64 = ctx.r11.s64 + 3968;
	// subf r11,r27,r25
	ctx.r11.u64 = r25.u64 - r27.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r23,r11,520
	r23.s64 = ctx.r11.s64 + 520;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,26
	r24.s64 = 26;
	// lfs f29,2024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2024);
	f29.f64 = double(temp.f32);
loc_8214BE30:
	// lfsx f30,r23,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r23.u32 + r27.u32);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(f30.f64, f28.f64);
	// ble cr6,0x8214c070
	if (!ctx.cr6.gt) goto loc_8214C070;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,1272(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1272);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfsx f0,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e2128
	ctx.lr = 0x8214BE6C;
	sub_820E2128(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 / ctx.f1.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8214BE7C;
	sub_820E1CC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e2128
	ctx.lr = 0x8214BEC0;
	sub_820E2128(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 / ctx.f1.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8214BED0;
	sub_820E1CC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,40(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x820e2128
	ctx.lr = 0x8214BF14;
	sub_820E2128(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fdivs f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f31.f64 / ctx.f1.f64));
	// bl 0x820e1cc0
	ctx.lr = 0x8214BF24;
	sub_820E1CC0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// bl 0x820e1ec0
	ctx.lr = 0x8214BF74;
	sub_820E1EC0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
	// bl 0x820e1cc0
	ctx.lr = 0x8214BF80;
	sub_820E1CC0(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f13,148(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f12,152(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// bl 0x820e0368
	ctx.lr = 0x8214BFAC;
	sub_820E0368(ctx, base);
	// addi r11,r1,1508
	ctx.r11.s64 = ctx.r1.s64 + 1508;
	// addi r10,r1,1504
	ctx.r10.s64 = ctx.r1.s64 + 1504;
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// add r29,r30,r10
	r29.u64 = r30.u64 + ctx.r10.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e0e38
	ctx.lr = 0x8214BFD0;
	sub_820E0E38(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// lfs f13,4(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fdivs f3,f31,f13
	ctx.f3.f64 = double(float(f31.f64 / ctx.f13.f64));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f0,0(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e0d78
	ctx.lr = 0x8214BFF4;
	sub_820E0D78(ctx, base);
	// addi r11,r1,1472
	ctx.r11.s64 = ctx.r1.s64 + 1472;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r28,r30,r11
	r28.u64 = r30.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x820e1528
	ctx.lr = 0x8214C008;
	sub_820E1528(ctx, base);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,148(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lfs f12,152(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f12.f64 = double(temp.f32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stfs f31,-8(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + -8, temp.u32);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + ctx.r11.u64;
	// stfs f0,-20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + -20, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfs f13,-16(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + -16, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f12,-12(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + -12, temp.u32);
	// addi r28,r31,-20
	r28.s64 = r31.s64 + -20;
	// bl 0x820e1890
	ctx.lr = 0x8214C040;
	sub_820E1890(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// add r31,r30,r11
	r31.u64 = r30.u64 + ctx.r11.u64;
	// addi r4,r31,-16
	ctx.r4.s64 = r31.s64 + -16;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e2028
	ctx.lr = 0x8214C05C;
	sub_820E2028(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e2028
	ctx.lr = 0x8214C070;
	sub_820E2028(ctx, base);
loc_8214C070:
	// addic. r24,r24,-1
	ctx.xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// addi r26,r26,64
	r26.s64 = r26.s64 + 64;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// bne 0x8214be30
	if (!ctx.cr0.eq) goto loc_8214BE30;
loc_8214C084:
	// mr r31,r22
	r31.u64 = r22.u64;
	// addi r28,r25,412
	r28.s64 = r25.s64 + 412;
	// addi r30,r1,248
	r30.s64 = ctx.r1.s64 + 248;
	// li r29,26
	r29.s64 = 26;
loc_8214C094:
	// addi r4,r30,-24
	ctx.r4.s64 = r30.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e0af8
	ctx.lr = 0x8214C0A0;
	sub_820E0AF8(ctx, base);
	// lfs f0,-8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f12,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f3,16(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,12(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0d78
	ctx.lr = 0x8214C0D4;
	sub_820E0D78(ctx, base);
	// lwzu r11,4(r28)
	ea = 4 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r28.u32 = ea;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r21
	ctx.r4.u64 = ctx.r11.u64 + r21.u64;
	// bl 0x820e0368
	ctx.lr = 0x8214C0EC;
	sub_820E0368(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// addi r30,r30,48
	r30.s64 = r30.s64 + 48;
	// bne 0x8214c094
	if (!ctx.cr0.eq) goto loc_8214C094;
	// addi r1,r1,2848
	ctx.r1.s64 = ctx.r1.s64 + 2848;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x822d4f84
	ctx.lr = 0x8214C108;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_8216B5B8) {
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
	// addi r11,r11,-10508
	ctx.r11.s64 = ctx.r11.s64 + -10508;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8216b5e4
	if (ctx.cr0.eq) goto loc_8216B5E4;
	// bl 0x822c80a8
	ctx.lr = 0x8216B5E4;
	sub_822C80A8(ctx, base);
loc_8216B5E4:
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

DEFINE_REX_FUNC(sub_8216BEF8) {
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
	ctx.lr = 0x8216BF00;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-9328
	ctx.r11.s64 = ctx.r11.s64 + -9328;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwzx r29,r10,r11
	r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r31,r5,64
	r31.s64 = ctx.r5.s64 + 64;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// ble cr6,0x8216bf88
	if (!ctx.cr6.gt) goto loc_8216BF88;
	// addi r30,r11,-28
	r30.s64 = ctx.r11.s64 + -28;
loc_8216BF38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 44);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,48(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,52(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 52);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x820e0ec8
	ctx.lr = 0x8216BF4C;
	sub_820E0EC8(ctx, base);
	// lfs f0,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,36(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,40(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// lwzu r11,28(r30)
	ea = 28 + r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x820e0368
	ctx.lr = 0x8216BF7C;
	sub_820E0368(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bgt 0x8216bf38
	if (ctx.cr0.gt) goto loc_8216BF38;
loc_8216BF88:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8214b060
	ctx.lr = 0x8216BF98;
	sub_8214B060(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8216DBB8) {
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
	// bl 0x8216ca30
	ctx.lr = 0x8216DBC8;
	sub_8216CA30(ctx, base);
	// bl 0x821afdb0
	ctx.lr = 0x8216DBCC;
	sub_821AFDB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216dbf0
	if (!ctx.cr0.eq) goto loc_8216DBF0;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,-32166
	ctx.r9.s64 = -2108030976;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r9,432
	ctx.r9.s64 = ctx.r9.s64 + 432;
	// lwz r10,-32480(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -32480);
	// stb r11,3393(r9)
	REX_STORE_U8(ctx.r9.u32 + 3393, ctx.r11.u8);
	// sth r11,40(r10)
	REX_STORE_U16(ctx.r10.u32 + 40, ctx.r11.u16);
loc_8216DBF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216E558) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e74
	ctx.lr = 0x8216E560;
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r3,-20
	ctx.r10.s64 = ctx.r3.s64 + -20;
loc_8216E58C:
	// lwzu r11,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8216e58c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E58C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8216e634
	if (ctx.cr6.eq) goto loc_8216E634;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,2344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2344);
	f30.f64 = double(temp.f32);
	// lfs f31,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	f31.f64 = double(temp.f32);
loc_8216E5BC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b30e0
	ctx.lr = 0x8216E5C4;
	sub_821B30E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821c7f28
	ctx.lr = 0x8216E5D0;
	sub_821C7F28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216e5e4
	if (!ctx.cr0.eq) goto loc_8216E5E4;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stfsx f31,r30,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + ctx.r11.u32, temp.u32);
	// b 0x8216e620
	goto loc_8216E620;
loc_8216E5E4:
	// extsw r10,r31
	ctx.r10.s64 = r31.s32;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwax r11,r30,r11
	ctx.r11.s64 = int32_t(REX_LOAD_U32(r30.u32 + ctx.r11.u32));
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// stfsx f0,r30,r9
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + ctx.r9.u32, temp.u32);
loc_8216E620:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r30,100
	ctx.cr6.compare<int32_t>(r30.s32, 100, ctx.xer);
	// blt cr6,0x8216e5bc
	if (ctx.cr6.lt) goto loc_8216E5BC;
	// b 0x8216e64c
	goto loc_8216E64C;
loc_8216E634:
	// li r11,25
	ctx.r11.s64 = 25;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216E644:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216e644
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E644;
loc_8216E64C:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r27,0
	r27.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r1,128
	r26.s64 = ctx.r1.s64 + 128;
	// addi r25,r11,28068
	r25.s64 = ctx.r11.s64 + 28068;
loc_8216E660:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r29,0
	r29.s64 = 0;
	// bl 0x821b30e0
	ctx.lr = 0x8216E66C;
	sub_821B30E0(ctx, base);
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// bne cr6,0x8216e684
	if (!ctx.cr6.eq) goto loc_8216E684;
	// li r10,24
	ctx.r10.s64 = 24;
loc_8216E678:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stbx r10,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, ctx.r10.u8);
	// b 0x8216e710
	goto loc_8216E710;
loc_8216E684:
	// bl 0x821dcfb8
	ctx.lr = 0x8216E688;
	sub_821DCFB8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x8216e698
	if (!ctx.cr6.lt) goto loc_8216E698;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x8216e678
	goto loc_8216E678;
loc_8216E698:
	// li r31,0
	r31.s64 = 0;
	// addi r28,r1,128
	r28.s64 = ctx.r1.s64 + 128;
loc_8216E6A0:
	// cmpw cr6,r30,r31
	ctx.cr6.compare<int32_t>(r30.s32, r31.s32, ctx.xer);
	// beq cr6,0x8216e6ec
	if (ctx.cr6.eq) goto loc_8216E6EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821b30e0
	ctx.lr = 0x8216E6B0;
	sub_821B30E0(ctx, base);
	// bl 0x821dcfb8
	ctx.lr = 0x8216E6B4;
	sub_821DCFB8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x8216e6ec
	if (ctx.cr6.lt) goto loc_8216E6EC;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8216e6d0
	if (!ctx.cr6.gt) goto loc_8216E6D0;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8216E6D0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x8216e6ec
	if (!ctx.cr6.eq) goto loc_8216E6EC;
	// lbzx r11,r31,r25
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r25.u32);
	// lbzx r10,r30,r25
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + r25.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8216e6ec
	if (!ctx.cr6.lt) goto loc_8216E6EC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_8216E6EC:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(r31.s32, 25, ctx.xer);
	// blt cr6,0x8216e6a0
	if (ctx.cr6.lt) goto loc_8216E6A0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpw cr6,r27,r29
	ctx.cr6.compare<int32_t>(r27.s32, r29.s32, ctx.xer);
	// stbx r29,r30,r11
	REX_STORE_U8(r30.u32 + ctx.r11.u32, r29.u8);
	// bge cr6,0x8216e710
	if (!ctx.cr6.lt) goto loc_8216E710;
	// mr r27,r29
	r27.u64 = r29.u64;
loc_8216E710:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpwi cr6,r30,25
	ctx.cr6.compare<int32_t>(r30.s32, 25, ctx.xer);
	// blt cr6,0x8216e660
	if (ctx.cr6.lt) goto loc_8216E660;
	// li r9,25
	ctx.r9.s64 = 25;
	// addi r10,r27,1
	ctx.r10.s64 = r27.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8216E730:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// bne cr6,0x8216e74c
	if (!ctx.cr6.eq) goto loc_8216E74C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbx r8,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u8);
loc_8216E74C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8216e730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216E730;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216E758:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r23.s32, ctx.xer);
	// beq cr6,0x8216e778
	if (ctx.cr6.eq) goto loc_8216E778;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// blt cr6,0x8216e758
	if (ctx.cr6.lt) goto loc_8216E758;
loc_8216E778:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r11,0(r24)
	REX_STORE_U8(r24.u32 + 0, ctx.r11.u8);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// stb r7,2(r24)
	REX_STORE_U8(r24.u32 + 2, ctx.r7.u8);
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r24)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r24.u32 + 36, temp.u32);
	// stw r11,32(r24)
	REX_STORE_U32(r24.u32 + 32, ctx.r11.u32);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// lfd f30,-96(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_82176938) {
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
	ctx.lr = 0x82176940;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f38
	ctx.lr = 0x82176948;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// addi r9,r9,-5552
	ctx.r9.s64 = ctx.r9.s64 + -5552;
	// li r25,1
	r25.s64 = 1;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r25,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, r25.u8);
	// stw r4,27292(r8)
	REX_STORE_U32(ctx.r8.u32 + 27292, ctx.r4.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r5,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r5.u32);
	// addi r31,r10,-29080
	r31.s64 = ctx.r10.s64 + -29080;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + r31.u64;
	// lfs f30,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f30.f64 = double(temp.f32);
	// lfs f31,1996(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r10,r3,76
	ctx.r10.s64 = ctx.r3.s64 + 76;
loc_8217699C:
	// stfs f31,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f31,8(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f31,12(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f30,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8217699c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8217699C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lis r28,-32169
	r28.s64 = -2108227584;
	// lfs f0,16188(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16188);
	ctx.f0.f64 = double(temp.f32);
	// addi r26,r30,80
	r26.s64 = r30.s64 + 80;
	// lfs f13,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-19132(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -19132);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r11,-5744
	r29.s64 = ctx.r11.s64 + -5744;
	// addi r4,r5,-5752
	ctx.r4.s64 = ctx.r5.s64 + -5752;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r27,0
	r27.s64 = 0;
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r6,27288(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 27288);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x821761e0
	ctx.lr = 0x82176A2C;
	sub_821761E0(ctx, base);
	// addi r11,r29,64
	ctx.r11.s64 = r29.s64 + 64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r6,27288(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 27288);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f28,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	f28.f64 = double(temp.f32);
	// addi r4,r7,-5756
	ctx.r4.s64 = ctx.r7.s64 + -5756;
	// lfs f0,-12840(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -12840);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f29,16228(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
	f29.f64 = double(temp.f32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stfs f31,120(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f28,112(r1)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// bl 0x821761e0
	ctx.lr = 0x82176A98;
	sub_821761E0(ctx, base);
	// addi r11,r29,64
	ctx.r11.s64 = r29.s64 + 64;
	// lwz r6,27288(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 27288);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stfs f31,100(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r4,r11,-5760
	ctx.r4.s64 = ctx.r11.s64 + -5760;
	// stfs f29,104(r1)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r7,10
	ctx.r7.s64 = 10;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821761e0
	ctx.lr = 0x82176ADC;
	sub_821761E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82176ae8
	if (ctx.cr0.eq) goto loc_82176AE8;
	// stb r25,189(r3)
	REX_STORE_U8(ctx.r3.u32 + 189, r25.u8);
loc_82176AE8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r6,27288(r28)
	ctx.r6.u64 = REX_LOAD_U32(r28.u32 + 27288);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stfs f31,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r9,r29,128
	ctx.r9.s64 = r29.s64 + 128;
	// stfs f30,124(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f30,108(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lfs f13,26832(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26832);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,28240(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r4,r9,-5768
	ctx.r4.s64 = ctx.r9.s64 + -5768;
	// lfs f0,-5764(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -5764);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lfs f13,16172(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r30,96
	ctx.r10.s64 = r30.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lfs f0,20484(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20484);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// bl 0x821761e0
	ctx.lr = 0x82176B64;
	sub_821761E0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// addi r28,r11,432
	r28.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,219
	ctx.r3.u64 = ctx.r3.u64 | 219;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x82176B7C;
	sub_820E68B8(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// ori r29,r10,220
	r29.u64 = ctx.r10.u64 | 220;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x82176B98;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176BAC;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176BC0;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r11.u32);
	// ori r3,r3,221
	ctx.r3.u64 = ctx.r3.u64 | 221;
	// bl 0x820e68b8
	ctx.lr = 0x82176BD8;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// ori r3,r3,222
	ctx.r3.u64 = ctx.r3.u64 | 222;
	// bl 0x820e68b8
	ctx.lr = 0x82176BF0;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// ori r3,r3,223
	ctx.r3.u64 = ctx.r3.u64 | 223;
	// bl 0x820e68b8
	ctx.lr = 0x82176C08;
	sub_820E68B8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// ori r29,r11,224
	r29.u64 = ctx.r11.u64 | 224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x82176C20;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176C34;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,64(r31)
	REX_STORE_U32(r31.u32 + 64, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176C48;
	sub_820E68B8(ctx, base);
	// stw r3,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// ori r29,r10,225
	r29.u64 = ctx.r10.u64 | 225;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e68b8
	ctx.lr = 0x82176C64;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176C78;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
	// bl 0x820e68b8
	ctx.lr = 0x82176C8C;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// ori r3,r3,226
	ctx.r3.u64 = ctx.r3.u64 | 226;
	// bl 0x820e68b8
	ctx.lr = 0x82176CA4;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// ori r3,r3,227
	ctx.r3.u64 = ctx.r3.u64 | 227;
	// bl 0x820e68b8
	ctx.lr = 0x82176CBC;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// ori r3,r3,228
	ctx.r3.u64 = ctx.r3.u64 | 228;
	// bl 0x820e68b8
	ctx.lr = 0x82176CD4;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,256
	ctx.r3.s64 = 16777216;
	// lwz r4,344(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// ori r3,r3,229
	ctx.r3.u64 = ctx.r3.u64 | 229;
	// bl 0x820e68b8
	ctx.lr = 0x82176CEC;
	sub_820E68B8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x822d4f84
	ctx.lr = 0x82176D04;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82181A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfs f1,72(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82181DE8) {
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
	// bl 0x82181a48
	ctx.lr = 0x82181E08;
	sub_82181A48(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82181e18
	if (ctx.cr0.eq) goto loc_82181E18;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x82181E18;
	sub_822C80A8(ctx, base);
loc_82181E18:
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

DEFINE_REX_FUNC(sub_82182B48) {
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
	// lwz r11,1540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1540);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,1544(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1544);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,1536(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 1536);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82182b80
	if (!ctx.cr6.eq) goto loc_82182B80;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82182ba8
	goto loc_82182BA8;
loc_82182B80:
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x822d4fa0
	ctx.lr = 0x82182B90;
	sub_822D4FA0(ctx, base);
	// lwz r11,1540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1540);
	// lwz r10,1544(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1544);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,1540(r31)
	REX_STORE_U32(r31.u32 + 1540, ctx.r11.u32);
loc_82182BA8:
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

DEFINE_REX_FUNC(sub_82184338) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,-4204
	ctx.r11.s64 = ctx.r11.s64 + -4204;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82184478) {
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
	ctx.lr = 0x82184480;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r10,r31,24
	ctx.r10.s64 = r31.s64 + 24;
	// stw r4,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r4.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// bl 0x822d4fa0
	ctx.lr = 0x821844D0;
	sub_822D4FA0(ctx, base);
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// lbz r10,239(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 239);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r29,92(r31)
	REX_STORE_U32(r31.u32 + 92, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r28,96(r31)
	REX_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r27,100(r31)
	REX_STORE_U32(r31.u32 + 100, r27.u32);
	// stw r26,104(r31)
	REX_STORE_U32(r31.u32 + 104, r26.u32);
	// stw r25,108(r31)
	REX_STORE_U32(r31.u32 + 108, r25.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stb r10,116(r31)
	REX_STORE_U8(r31.u32 + 116, ctx.r10.u8);
	// bl 0x822ad068
	ctx.lr = 0x82184500;
	sub_822AD068(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82186828) {
	REX_FUNC_PROLOGUE();
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r6,64(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// b 0x82186870
	goto loc_82186870;
loc_82186834:
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
loc_82186844:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82186864
	if (!ctx.cr0.eq) goto loc_82186864;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82186844
	if (!ctx.cr6.eq) goto loc_82186844;
loc_82186864:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_82186870:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82186834
	if (!ctx.cr6.eq) goto loc_82186834;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82187CB0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82187cd8
	if (!ctx.cr6.eq) goto loc_82187CD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82187CD8:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82188548) {
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
	ctx.lr = 0x82188568;
	sub_82188318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82188578
	if (!ctx.cr0.eq) goto loc_82188578;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821885b0
	goto loc_821885B0;
loc_82188578:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// bl 0x82185140
	ctx.lr = 0x82188584;
	sub_82185140(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821885a4
	if (!ctx.cr0.eq) goto loc_821885A4;
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
	// b 0x821885b0
	goto loc_821885B0;
loc_821885A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
loc_821885B0:
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

DEFINE_REX_FUNC(sub_82189B60) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r10,r10,-3748
	ctx.r10.s64 = ctx.r10.s64 + -3748;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82189B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_8218AC60) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8218AC68;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218af00
	if (ctx.cr6.eq) goto loc_8218AF00;
loc_8218AC78:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x8218ac78
	if (ctx.cr6.eq) goto loc_8218AC78;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r11,r1,81
	ctx.r11.s64 = ctx.r1.s64 + 81;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8218acb4
	if (ctx.cr6.eq) goto loc_8218ACB4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8218ACA0:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8218aca0
	if (!ctx.cr0.eq) goto loc_8218ACA0;
loc_8218ACB4:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8218accc
	if (!ctx.cr6.lt) goto loc_8218ACCC;
loc_8218ACC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8218af08
	goto loc_8218AF08;
loc_8218ACCC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// b 0x8218ace4
	goto loc_8218ACE4;
loc_8218ACD4:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8218acf4
	if (ctx.cr6.eq) goto loc_8218ACF4;
	// lbzu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
loc_8218ACE4:
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x8218acd4
	if (ctx.cr6.eq) goto loc_8218ACD4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
loc_8218ACF4:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// extsb. r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8218ad44
	if (ctx.cr0.eq) goto loc_8218AD44;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,82
	ctx.r9.s64 = ctx.r1.s64 + 82;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8218ad30
	if (!ctx.cr6.eq) goto loc_8218AD30;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8218AD1C:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8218ad1c
	if (ctx.cr6.eq) goto loc_8218AD1C;
loc_8218AD30:
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x8218acc4
	if (!ctx.cr6.lt) goto loc_8218ACC4;
loc_8218AD44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8218AD48:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb. r8,r10
	ctx.r8.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stbx r10,r11,r9
	REX_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x8218ad48
	if (!ctx.cr0.eq) goto loc_8218AD48;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r29,r11,-19736
	r29.s64 = ctx.r11.s64 + -19736;
	// addi r4,r29,-8
	ctx.r4.s64 = r29.s64 + -8;
	// bl 0x8218abe0
	ctx.lr = 0x8218AD78;
	sub_8218ABE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8218af08
	if (!ctx.cr0.eq) goto loc_8218AF08;
	// lbz r9,112(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// li r30,32
	r30.s64 = 32;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r8,r1,113
	ctx.r8.s64 = ctx.r1.s64 + 113;
	// beq 0x8218adc8
	if (ctx.cr0.eq) goto loc_8218ADC8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8218AD9C:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x8218adb4
	if (ctx.cr6.lt) goto loc_8218ADB4;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x8218adb4
	if (ctx.cr6.gt) goto loc_8218ADB4;
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x8218adb8
	goto loc_8218ADB8;
loc_8218ADB4:
	// stb r30,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, r30.u8);
loc_8218ADB8:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb. r11,r9
	ctx.r11.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218ad9c
	if (!ctx.cr0.eq) goto loc_8218AD9C;
loc_8218ADC8:
	// stb r9,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r4,r29,1096
	ctx.r4.s64 = r29.s64 + 1096;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8218abe0
	ctx.lr = 0x8218ADD8;
	sub_8218ABE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8218af08
	if (!ctx.cr0.eq) goto loc_8218AF08;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
loc_8218ADF0:
	// lbzu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// beq cr6,0x8218ae04
	if (ctx.cr6.eq) goto loc_8218AE04;
	// stbu r11,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
loc_8218AE04:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8218adf0
	if (!ctx.cr6.eq) goto loc_8218ADF0;
	// lwz r11,-20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + -20);
	// addi r10,r29,-20
	ctx.r10.s64 = r29.s64 + -20;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x8218ae44
	if (ctx.cr6.eq) goto loc_8218AE44;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
loc_8218AE28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6ae8
	ctx.lr = 0x8218AE30;
	sub_822D6AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8218acc4
	if (!ctx.cr0.eq) goto loc_8218ACC4;
	// lwzu r4,4(r31)
	ea = 4 + r31.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218ae28
	if (!ctx.cr6.eq) goto loc_8218AE28;
loc_8218AE44:
	// lbz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,81
	ctx.r8.s64 = ctx.r1.s64 + 81;
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8218ae88
	if (ctx.cr0.eq) goto loc_8218AE88;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_8218AE5C:
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x8218ae74
	if (ctx.cr6.lt) goto loc_8218AE74;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// bgt cr6,0x8218ae74
	if (ctx.cr6.gt) goto loc_8218AE74;
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// b 0x8218ae78
	goto loc_8218AE78;
loc_8218AE74:
	// stb r30,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r30.u8);
loc_8218AE78:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8218ae5c
	if (!ctx.cr0.eq) goto loc_8218AE5C;
loc_8218AE88:
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r10,r1,79
	ctx.r10.s64 = ctx.r1.s64 + 79;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_8218AE98:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// extsb r8,r11
	ctx.r8.s64 = ctx.r11.s8;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x8218aeac
	if (ctx.cr6.eq) goto loc_8218AEAC;
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
loc_8218AEAC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8218ae98
	if (!ctx.cr6.eq) goto loc_8218AE98;
	// addi r4,r29,1096
	ctx.r4.s64 = r29.s64 + 1096;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8218ab50
	ctx.lr = 0x8218AEC0;
	sub_8218AB50(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne 0x8218af04
	if (!ctx.cr0.eq) goto loc_8218AF04;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218af04
	if (ctx.cr6.eq) goto loc_8218AF04;
	// addi r31,r10,-4
	r31.s64 = ctx.r10.s64 + -4;
loc_8218AEE0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822d6ae8
	ctx.lr = 0x8218AEE8;
	sub_822D6AE8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8218acc4
	if (!ctx.cr0.eq) goto loc_8218ACC4;
	// lwzu r4,4(r31)
	ea = 4 + r31.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	r31.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8218aee0
	if (!ctx.cr6.eq) goto loc_8218AEE0;
	// b 0x8218af04
	goto loc_8218AF04;
loc_8218AF00:
	// li r30,1
	r30.s64 = 1;
loc_8218AF04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8218AF08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82199938) {
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
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,84(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82199998
	if (!ctx.cr6.eq) goto loc_82199998;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x82199a54
	goto loc_82199A54;
loc_82199998:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82199a54
	if (ctx.cr6.eq) goto loc_82199A54;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82199a54
	if (ctx.cr6.eq) goto loc_82199A54;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821eb2c0
	ctx.lr = 0x821999B0;
	sub_821EB2C0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r3,3840
	ctx.r3.s64 = 251658240;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// bl 0x820e68b8
	ctx.lr = 0x821999C8;
	sub_820E68B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82191bb0
	ctx.lr = 0x821999D4;
	sub_82191BB0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// addi r5,r9,4632
	ctx.r5.s64 = ctx.r9.s64 + 4632;
	// lfs f2,-18116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -18116);
	ctx.f2.f64 = double(temp.f32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
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
	ctx.lr = 0x82199A18;
	sub_821EAF80(ctx, base);
	// lis r3,1536
	ctx.r3.s64 = 100663296;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// bl 0x820e68b8
	ctx.lr = 0x82199A28;
	sub_820E68B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,30004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 30004);
	ctx.f2.f64 = double(temp.f32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r5,r10,4620
	ctx.r5.s64 = ctx.r10.s64 + 4620;
	// bl 0x821eaf80
	ctx.lr = 0x82199A54;
	sub_821EAF80(ctx, base);
loc_82199A54:
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

DEFINE_REX_FUNC(sub_8219CFD8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// bl 0x8219cf50
	ctx.lr = 0x8219CFFC;
	sub_8219CF50(ctx, base);
	// bl 0x8219fff8
	ctx.lr = 0x8219D000;
	sub_8219FFF8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E558) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8218f898
	ctx.lr = 0x8219E594;
	sub_8218F898(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219e5dc
	if (ctx.cr6.eq) goto loc_8219E5DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// sth r11,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 24);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8219de08
	ctx.lr = 0x8219E5BC;
	sub_8219DE08(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f30,260(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 260, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f29,264(r10)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + 264, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,270(r10)
	REX_STORE_U16(ctx.r10.u32 + 270, ctx.r11.u16);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8219E5DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_821A10E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,104(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 104, temp.u32);
	// stfs f2,108(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 108, temp.u32);
	// stfs f3,112(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1290) {
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
	ctx.lr = 0x821A1298;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a1390
	if (ctx.cr6.eq) goto loc_821A1390;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821a1390
	if (ctx.cr6.eq) goto loc_821A1390;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
loc_821A12C4:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821a1320
	if (ctx.cr6.lt) goto loc_821A1320;
	// beq cr6,0x821a1314
	if (ctx.cr6.eq) goto loc_821A1314;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821a1308
	if (ctx.cr6.lt) goto loc_821A1308;
	// beq cr6,0x821a12fc
	if (ctx.cr6.eq) goto loc_821A12FC;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bge cr6,0x821a1390
	if (!ctx.cr6.lt) goto loc_821A1390;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8212a1d8
	ctx.lr = 0x821A12F8;
	sub_8212A1D8(ctx, base);
	// b 0x821a1368
	goto loc_821A1368;
loc_821A12FC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8212a0f8
	ctx.lr = 0x821A1304;
	sub_8212A0F8(ctx, base);
	// b 0x821a1368
	goto loc_821A1368;
loc_821A1308:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82129fb8
	ctx.lr = 0x821A1310;
	sub_82129FB8(ctx, base);
	// b 0x821a1368
	goto loc_821A1368;
loc_821A1314:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x821a13f0
	ctx.lr = 0x821A131C;
	sub_821A13F0(ctx, base);
	// b 0x821a1368
	goto loc_821A1368;
loc_821A1320:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r26,r10
	r26.s64 = ctx.r10.s8;
	// extsb r25,r9
	r25.s64 = ctx.r9.s8;
	// addi r31,r11,1
	r31.s64 = ctx.r11.s64 + 1;
	// rlwinm r30,r25,1,0,30
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x821ff870
	ctx.lr = 0x821A1348;
	sub_821FF870(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,3696
	ctx.r11.u64 = ctx.r11.u64 | 3696;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mullw r11,r26,r11
	ctx.r11.s64 = int64_t(r26.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + r29.u64;
	// bl 0x820e25e8
	ctx.lr = 0x821A1364;
	sub_820E25E8(ctx, base);
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
loc_821A1368:
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r27.u32, ctx.xer);
	// beq cr6,0x821a1390
	if (ctx.cr6.eq) goto loc_821A1390;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 8);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821a1388
	if (ctx.cr6.eq) goto loc_821A1388;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x821a12c4
	if (!ctx.cr6.eq) goto loc_821A12C4;
loc_821A1388:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// b 0x821a12c4
	goto loc_821A12C4;
loc_821A1390:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_821A3EF8) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x821a3f20
	if (ctx.cr6.eq) goto loc_821A3F20;
	// bl 0x821ff158
	ctx.lr = 0x821A3F18;
	sub_821FF158(ctx, base);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// b 0x821a3f5c
	goto loc_821A3F5C;
loc_821A3F20:
	// bl 0x821ff1b8
	ctx.lr = 0x821A3F24;
	sub_821FF1B8(ctx, base);
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfs f0,7204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 7204);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f13
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r3,86(r1)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
loc_821A3F5C:
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

DEFINE_REX_FUNC(sub_821A6CE0) {
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
	ctx.lr = 0x821A6CE8;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f38
	ctx.lr = 0x821A6CF0;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x821a6d64
	if (!ctx.cr6.gt) goto loc_821A6D64;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r29,r11,28776
	r29.s64 = ctx.r11.s64 + 28776;
loc_821A6D14:
	// bl 0x821feec8
	ctx.lr = 0x821A6D18;
	sub_821FEEC8(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// bl 0x821feec8
	ctx.lr = 0x821A6D20;
	sub_821FEEC8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x821feec8
	ctx.lr = 0x821A6D28;
	sub_821FEEC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f28
	ctx.f2.f64 = f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = f29.f64;
	// bl 0x820e0ec8
	ctx.lr = 0x821A6D3C;
	sub_820E0EC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1ec0
	ctx.lr = 0x821A6D4C;
	sub_820E1EC0(ctx, base);
	// bl 0x821feec8
	ctx.lr = 0x821A6D50;
	sub_821FEEC8(ctx, base);
	// fmadds f0,f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f30.f64, f31.f64)));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bgt 0x821a6d14
	if (ctx.cr0.gt) goto loc_821A6D14;
loc_821A6D64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x822d4f84
	ctx.lr = 0x821A6D74;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_821A8838) {
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
	ctx.lr = 0x821A8840;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a8860
	if (ctx.cr6.eq) goto loc_821A8860;
	// bl 0x822c80a8
	ctx.lr = 0x821A8858;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r28)
	REX_STORE_U32(r28.u32 + 144, ctx.r11.u32);
loc_821A8860:
	// lwz r3,148(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 148);
	// bl 0x822c80d0
	ctx.lr = 0x821A8868;
	sub_822C80D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,148(r28)
	ctx.r5.u64 = REX_LOAD_U32(r28.u32 + 148);
	// stw r3,144(r28)
	REX_STORE_U32(r28.u32 + 144, ctx.r3.u32);
	// bl 0x822d5870
	ctx.lr = 0x821A8878;
	sub_822D5870(ctx, base);
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r11,r11,-10312
	ctx.r11.s64 = ctx.r11.s64 + -10312;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r31,144(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 144);
	// beq cr6,0x821a8934
	if (ctx.cr6.eq) goto loc_821A8934;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// addi r27,r11,-13224
	r27.s64 = ctx.r11.s64 + -13224;
loc_821A889C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a88c8
	if (ctx.cr6.eq) goto loc_821A88C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A88B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
	// b 0x821a8924
	goto loc_821A8924;
loc_821A88C8:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a88fc
	if (ctx.cr6.lt) goto loc_821A88FC;
	// bne cr6,0x821a8924
	if (!ctx.cr6.eq) goto loc_821A8924;
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// mullw r29,r11,r10
	r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x822091c8
	ctx.lr = 0x821A88F4;
	sub_822091C8(ctx, base);
	// add r31,r29,r31
	r31.u64 = r29.u64 + r31.u64;
	// b 0x821a8924
	goto loc_821A8924;
loc_821A88FC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8924
	if (ctx.cr6.eq) goto loc_821A8924;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r27,-80
	ctx.r11.s64 = r27.s64 + -80;
loc_821A8910:
	// lwzu r10,88(r11)
	ea = 88 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bdnz 0x821a8910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A8910;
loc_821A8924:
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a889c
	if (!ctx.cr6.eq) goto loc_821A889C;
loc_821A8934:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,88(r28)
	REX_STORE_U8(r28.u32 + 88, ctx.r11.u8);
	// stw r10,84(r28)
	REX_STORE_U32(r28.u32 + 84, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_821ABB90) {
	REX_FUNC_PROLOGUE();
	// b 0x821abfd0
	sub_821ABFD0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AC870) {
	REX_FUNC_PROLOGUE();
	// b 0x821ac880
	sub_821AC880(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AD1A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x821ad258
	if (ctx.cr6.lt) goto loc_821AD258;
	// bne cr6,0x821ad2f4
	if (!ctx.cr6.eq) goto loc_821AD2F4;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-10944(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10944);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821ad2f4
	if (ctx.cr6.gt) goto loc_821AD2F4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// mulli r4,r4,24
	ctx.r4.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// lfs f13,8380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8380);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8540(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r7,-10936
	ctx.r11.s64 = ctx.r7.s64 + -10936;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x821aad08
	ctx.lr = 0x821AD22C;
	sub_821AAD08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,-11088
	ctx.r11.s64 = ctx.r11.s64 + -11088;
	// ble cr6,0x821ad250
	if (!ctx.cr6.gt) goto loc_821AD250;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stb r8,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, ctx.r8.u8);
loc_821AD250:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// b 0x821ad2e4
	goto loc_821AD2E4;
loc_821AD258:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-10940(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -10940);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x821ad2f4
	if (ctx.cr6.gt) goto loc_821AD2F4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32168
	ctx.r7.s64 = -2108162048;
	// mulli r4,r31,24
	ctx.r4.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(24));
	// lfs f13,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8540(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8540);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r11,r7,-10552
	ctx.r11.s64 = ctx.r7.s64 + -10552;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r3,r4,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// bl 0x821aad08
	ctx.lr = 0x821AD2C0;
	sub_821AAD08(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r11,r11,-11088
	ctx.r11.s64 = ctx.r11.s64 + -11088;
	// ble cr6,0x821ad2e4
	if (!ctx.cr6.gt) goto loc_821AD2E4;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stb r9,188(r10)
	REX_STORE_U8(ctx.r10.u32 + 188, ctx.r9.u8);
loc_821AD2E4:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,188(r11)
	REX_STORE_U8(ctx.r11.u32 + 188, ctx.r9.u8);
loc_821AD2F4:
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

DEFINE_REX_FUNC(sub_821B6C50) {
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
	ctx.lr = 0x821B6C58;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821b78a8
	if (!ctx.cr0.eq) goto loc_821B78A8;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b78a8
	if (!ctx.cr6.eq) goto loc_821B78A8;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lhz r8,10(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 10);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r21,r10,-7072
	r21.s64 = ctx.r10.s64 + -7072;
	// ori r9,r9,9160
	ctx.r9.u64 = ctx.r9.u64 | 9160;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r16,10
	r16.s64 = 10;
	// addi r23,r10,23240
	r23.s64 = ctx.r10.s64 + 23240;
	// lwz r11,5464(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 5464);
	// li r15,16
	r15.s64 = 16;
	// lwzx r10,r21,r9
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + ctx.r9.u32);
	// li r18,3
	r18.s64 = 3;
	// li r20,1
	r20.s64 = 1;
	// li r19,4
	r19.s64 = 4;
	// li r22,0
	r22.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r17,5
	r17.s64 = 5;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x821b6e1c
	if (ctx.cr0.eq) goto loc_821B6E1C;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r8,-9808(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + -9808);
	// cmpwi cr6,r8,5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 5, ctx.xer);
	// beq cr6,0x821b6d18
	if (ctx.cr6.eq) goto loc_821B6D18;
	// cmpwi cr6,r8,6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 6, ctx.xer);
	// bne cr6,0x821b6d54
	if (!ctx.cr6.eq) goto loc_821B6D54;
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lbz r10,21(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,6
	ctx.r10.s64 = 6;
	// sth r10,74(r31)
	REX_STORE_U16(r31.u32 + 74, ctx.r10.u16);
	// stwx r10,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r10.u32);
	// stwx r22,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, r22.u32);
	// b 0x821b6d44
	goto loc_821B6D44;
loc_821B6D18:
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r8,22(r31)
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + 22);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// sth r17,74(r31)
	REX_STORE_U16(r31.u32 + 74, r17.u16);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, r17.u32);
	// stwx r22,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, r22.u32);
loc_821B6D44:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,-9808(r9)
	REX_STORE_U32(ctx.r9.u32 + -9808, r22.u32);
loc_821B6D54:
	// lwz r9,88(r23)
	ctx.r9.u64 = REX_LOAD_U32(r23.u32 + 88);
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(r23.u32 + 0);
	// lwz r4,428(r23)
	ctx.r4.u64 = REX_LOAD_U32(r23.u32 + 428);
	// lwz r6,144(r23)
	ctx.r6.u64 = REX_LOAD_U32(r23.u32 + 144);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r5,0(r23)
	ctx.r5.u64 = REX_LOAD_U16(r23.u32 + 0);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,372(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 372);
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// and. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,116(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 116);
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,400(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 400);
	// and. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,280(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 280);
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,564(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 564);
	// and. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,284(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 284);
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// lwz r7,568(r23)
	ctx.r7.u64 = REX_LOAD_U32(r23.u32 + 568);
	// and. r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// and. r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821b6dd8
	if (!ctx.cr0.eq) goto loc_821B6DD8;
	// and. r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b6e1c
	if (ctx.cr0.eq) goto loc_821B6E1C;
loc_821B6DD8:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x821b6de8
	if (ctx.cr6.eq) goto loc_821B6DE8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x821b6e1c
	if (!ctx.cr6.eq) goto loc_821B6E1C;
loc_821B6DE8:
	// and. r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sth r19,74(r31)
	REX_STORE_U16(r31.u32 + 74, r19.u16);
	// bne 0x821b6e00
	if (!ctx.cr0.eq) goto loc_821B6E00;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// and. r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821b6f64
	if (ctx.cr0.eq) goto loc_821B6F64;
loc_821B6E00:
	// lwz r9,216(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 216);
	// lwz r9,5464(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 5464);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b6f64
	if (ctx.cr6.eq) goto loc_821B6F64;
	// li r9,2
	ctx.r9.s64 = 2;
loc_821B6E14:
	// sth r9,74(r31)
	REX_STORE_U16(r31.u32 + 74, ctx.r9.u16);
	// b 0x821b6f64
	goto loc_821B6F64;
loc_821B6E1C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b6e34
	if (!ctx.cr6.eq) goto loc_821B6E34;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821b6f14
	if (!ctx.cr6.eq) goto loc_821B6F14;
	// li r9,8
	ctx.r9.s64 = 8;
	// b 0x821b6e14
	goto loc_821B6E14;
loc_821B6E34:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821b6f14
	if (ctx.cr6.eq) goto loc_821B6F14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821b6e54
	if (!ctx.cr6.eq) goto loc_821B6E54;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821b6f08
	if (!ctx.cr6.eq) goto loc_821B6F08;
	// li r9,9
	ctx.r9.s64 = 9;
	// b 0x821b6e14
	goto loc_821B6E14;
loc_821B6E54:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821b6f08
	if (ctx.cr6.eq) goto loc_821B6F08;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821b6ecc
	if (!ctx.cr6.eq) goto loc_821B6ECC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x821b6ed4
	if (!ctx.cr6.eq) goto loc_821B6ED4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lfs f0,5468(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 5468);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,9164
	ctx.r11.u64 = ctx.r11.u64 | 9164;
	// lfsx f13,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821b6e9c
	if (!ctx.cr6.eq) goto loc_821B6E9C;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// sth r16,74(r31)
	REX_STORE_U16(r31.u32 + 74, r16.u16);
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// b 0x821b6ef8
	goto loc_821B6EF8;
loc_821B6E9C:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// sth r19,74(r31)
	REX_STORE_U16(r31.u32 + 74, r19.u16);
	// bge cr6,0x821b6ebc
	if (!ctx.cr6.lt) goto loc_821B6EBC;
	// mr r11,r19
	ctx.r11.u64 = r19.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r19.u32);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// b 0x821b6ef8
	goto loc_821B6EF8;
loc_821B6EBC:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r19.u32);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_821B6ECC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x821b6edc
	if (ctx.cr6.eq) goto loc_821B6EDC;
loc_821B6ED4:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x821b6ef8
	if (!ctx.cr6.eq) goto loc_821B6EF8;
loc_821B6EDC:
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r15,40(r31)
	REX_STORE_U32(r31.u32 + 40, r15.u32);
	// stw r8,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// stw r7,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r7.u32);
	// stw r9,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r9.u32);
loc_821B6EF8:
	// lhz r9,74(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x821b6f64
	if (!ctx.cr0.eq) goto loc_821B6F64;
	// b 0x821b78a8
	goto loc_821B78A8;
loc_821B6F08:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// sth r18,74(r31)
	REX_STORE_U16(r31.u32 + 74, r18.u16);
	// b 0x821b6f4c
	goto loc_821B6F4C;
loc_821B6F14:
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f13,5468(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r21.u32 + 5468);
	ctx.f13.f64 = double(temp.f32);
	// sth r20,74(r31)
	REX_STORE_U16(r31.u32 + 74, r20.u16);
	// lfs f0,10108(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x821b6f40
	if (!ctx.cr6.lt) goto loc_821B6F40;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r9,r9,9164
	ctx.r9.u64 = ctx.r9.u64 | 9164;
	// lfsx f13,r21,r9
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821b6f48
	if (ctx.cr6.lt) goto loc_821B6F48;
loc_821B6F40:
	// li r9,2
	ctx.r9.s64 = 2;
	// sth r9,74(r31)
	REX_STORE_U16(r31.u32 + 74, ctx.r9.u16);
loc_821B6F48:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_821B6F4C:
	// bne cr6,0x821b6f5c
	if (!ctx.cr6.eq) goto loc_821B6F5C;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// b 0x821b6f64
	goto loc_821B6F64;
loc_821B6F5C:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
loc_821B6F64:
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lha r9,74(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 74));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lhz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 28);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// stw r18,40(r31)
	REX_STORE_U32(r31.u32 + 40, r18.u32);
	// stw r6,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r6.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r5,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r5.u32);
	// stw r8,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r8.u32);
	// stw r9,528(r31)
	REX_STORE_U32(r31.u32 + 528, ctx.r9.u32);
	// beq 0x821b6fac
	if (ctx.cr0.eq) goto loc_821B6FAC;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// stb r22,26(r31)
	REX_STORE_U8(r31.u32 + 26, r22.u8);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// stb r20,27(r31)
	REX_STORE_U8(r31.u32 + 27, r20.u8);
	// b 0x821b78a8
	goto loc_821B78A8;
loc_821B6FAC:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r11,5464(r21)
	REX_STORE_U32(r21.u32 + 5464, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lha r9,5452(r21)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r21.u32 + 5452));
	// ori r8,r8,9148
	ctx.r8.u64 = ctx.r8.u64 | 9148;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// ori r7,r11,9160
	ctx.r7.u64 = ctx.r11.u64 | 9160;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// lhax r11,r21,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r21.u32 + ctx.r8.u32));
	// mr r27,r22
	r27.u64 = r22.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// stwx r10,r21,r7
	REX_STORE_U32(r21.u32 + ctx.r7.u32, ctx.r10.u32);
	// ori r24,r11,3696
	r24.u64 = ctx.r11.u64 | 3696;
loc_821B6FFC:
	// mullw r11,r27,r24
	ctx.r11.s64 = int64_t(r27.s32) * int64_t(r24.s32);
	// add r30,r11,r21
	r30.u64 = ctx.r11.u64 + r21.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 136);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821b70c0
	if (ctx.cr6.eq) goto loc_821B70C0;
	// rlwinm r9,r27,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stwx r20,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r20.u32);
	// blt cr6,0x821b70a8
	if (ctx.cr6.lt) goto loc_821B70A8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bgt cr6,0x821b70a8
	if (ctx.cr6.gt) goto loc_821B70A8;
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,16478(r10)
	REX_STORE_U8(ctx.r10.u32 + 16478, ctx.r9.u8);
	// lbz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U8(r30.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821b70ac
	if (ctx.cr6.eq) goto loc_821B70AC;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r20,16479(r11)
	REX_STORE_U8(ctx.r11.u32 + 16479, r20.u8);
	// b 0x821b70ac
	goto loc_821B70AC;
loc_821B70A8:
	// stw r22,5464(r30)
	REX_STORE_U32(r30.u32 + 5464, r22.u32);
loc_821B70AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821c7088
	ctx.lr = 0x821B70B8;
	sub_821C7088(ctx, base);
	// lwz r28,100(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,96(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_821B70C0:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821b727c
	if (ctx.cr6.lt) goto loc_821B727C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821b727c
	if (!ctx.cr6.gt) goto loc_821B727C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b727c
	if (ctx.cr6.eq) goto loc_821B727C;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x821b7174
	if (ctx.cr6.eq) goto loc_821B7174;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821b727c
	if (!ctx.cr6.eq) goto loc_821B727C;
	// lha r11,74(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 74));
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821b7138
	if (ctx.cr6.eq) goto loc_821B7138;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821b727c
	if (!ctx.cr6.eq) goto loc_821B727C;
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbz r9,21(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// extsb r7,r11
	ctx.r7.s64 = ctx.r11.s8;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r3,216(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 216);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,5456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 5456);
	// stwx r20,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r20.u32);
	// stwx r22,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r22.u32);
	// b 0x821b716c
	goto loc_821B716C;
loc_821B7138:
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbz r9,21(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// lwz r7,216(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 216);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// lwz r3,220(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 220);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,5456(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 5456);
	// stwx r22,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r22.u32);
	// stwx r20,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r20.u32);
loc_821B716C:
	// bl 0x821c7088
	ctx.lr = 0x821B7170;
	sub_821C7088(ctx, base);
	// b 0x821b7298
	goto loc_821B7298;
loc_821B7174:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(r27.s32, 1, ctx.xer);
	// bne cr6,0x821b7298
	if (!ctx.cr6.eq) goto loc_821B7298;
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x821b7250
	if (ctx.cr6.eq) goto loc_821B7250;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821b71e8
	if (ctx.cr6.eq) goto loc_821B71E8;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821b71b0
	if (ctx.cr6.eq) goto loc_821B71B0;
	// lhz r10,19274(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19274);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// sth r10,19274(r11)
	REX_STORE_U16(ctx.r11.u32 + 19274, ctx.r10.u16);
	// b 0x821b723c
	goto loc_821B723C;
loc_821B71B0:
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r21.u32, ctx.xer);
	// bne cr6,0x821b71d0
	if (!ctx.cr6.eq) goto loc_821B71D0;
loc_821B71B8:
	// lhz r10,19272(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19272);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,19272(r11)
	REX_STORE_U16(ctx.r11.u32 + 19272, ctx.r10.u16);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x821b7218
	goto loc_821B7218;
loc_821B71D0:
	// lhz r10,19276(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19276);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,19276(r11)
	REX_STORE_U16(ctx.r11.u32 + 19276, ctx.r10.u16);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
loc_821B71E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821b721c
	if (ctx.cr6.eq) goto loc_821B721C;
	// addis r10,r21,1
	ctx.r10.s64 = r21.s64 + 65536;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r10,r10,3696
	ctx.r10.s64 = ctx.r10.s64 + 3696;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821b71b8
	if (ctx.cr6.eq) goto loc_821B71B8;
	// lhz r10,19276(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 19276);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,19276(r11)
	REX_STORE_U16(ctx.r11.u32 + 19276, ctx.r10.u16);
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_821B7218:
	// stw r11,492(r31)
	REX_STORE_U32(r31.u32 + 492, ctx.r11.u32);
loc_821B721C:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821b722c
	if (!ctx.cr6.lt) goto loc_821B722C;
	// stw r22,492(r31)
	REX_STORE_U32(r31.u32 + 492, r22.u32);
loc_821B722C:
	// lwz r11,492(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 492);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x821b723c
	if (!ctx.cr6.gt) goto loc_821B723C;
	// stw r18,492(r31)
	REX_STORE_U32(r31.u32 + 492, r18.u32);
loc_821B723C:
	// mr r28,r22
	r28.u64 = r22.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// b 0x821b7298
	goto loc_821B7298;
loc_821B7250:
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbz r9,22(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 22);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r20.u32);
	// stwx r22,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, r22.u32);
	// b 0x821b7298
	goto loc_821B7298;
loc_821B727C:
	// lwz r10,5456(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 5456);
	// lha r11,5452(r30)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r30.u32 + 5452));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821b7298
	if (ctx.cr6.lt) goto loc_821B7298;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, r20.u32);
loc_821B7298:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(r27.s32, 2, ctx.xer);
	// blt cr6,0x821b6ffc
	if (ctx.cr6.lt) goto loc_821B6FFC;
	// lwz r25,92(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x821b7358
	if (ctx.cr6.eq) goto loc_821B7358;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821b734c
	if (ctx.cr6.eq) goto loc_821B734C;
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r30,-1
	r30.s64 = -1;
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// beq cr6,0x821b7338
	if (ctx.cr6.eq) goto loc_821B7338;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne cr6,0x821b737c
	if (!ctx.cr6.eq) goto loc_821B737C;
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
loc_821B72E4:
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
loc_821B72EC:
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// lha r9,74(r31)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r31.u32 + 74));
	// mullw r10,r11,r24
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r29,r10,r21
	r29.u64 = ctx.r10.u64 + r21.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// lwz r27,8(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 8);
	// bne cr6,0x821b738c
	if (!ctx.cr6.eq) goto loc_821B738C;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e1e28
	ctx.lr = 0x821B7318;
	sub_821E1E28(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x821e34e0
	ctx.lr = 0x821B7324;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r11,r11,9804
	ctx.r11.s64 = ctx.r11.s64 + 9804;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x821b73d8
	goto loc_821B73D8;
loc_821B7338:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821b72ec
	if (ctx.cr6.eq) goto loc_821B72EC;
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// b 0x821b72e4
	goto loc_821B72E4;
loc_821B734C:
	// mr r30,r22
	r30.u64 = r22.u64;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// b 0x821b7360
	goto loc_821B7360;
loc_821B7358:
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
loc_821B7360:
	// lwz r28,88(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x821b72ec
	if (ctx.cr6.eq) goto loc_821B72EC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821b72ec
	if (ctx.cr6.eq) goto loc_821B72EC;
loc_821B737C:
	// mr r26,r20
	r26.u64 = r20.u64;
	// mr r27,r22
	r27.u64 = r22.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x821b73e0
	goto loc_821B73E0;
loc_821B738C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x821b73e0
	if (!ctx.cr6.eq) goto loc_821B73E0;
	// lwz r11,144(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 144);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b73e0
	if (!ctx.cr0.eq) goto loc_821B73E0;
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(r23.u32 + 0);
	// lwz r10,428(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 428);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b73e0
	if (!ctx.cr0.eq) goto loc_821B73E0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e24a8
	ctx.lr = 0x821B73BC;
	sub_821E24A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821e34e0
	ctx.lr = 0x821B73C8;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,9820
	ctx.r11.s64 = ctx.r11.s64 + 9820;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_821B73D8:
	// bl 0x821e2fd0
	ctx.lr = 0x821B73DC;
	sub_821E2FD0(ctx, base);
	// lbz r30,26(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 26);
loc_821B73E0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x821b73f0
	if (!ctx.cr6.eq) goto loc_821B73F0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// beq cr6,0x821b7890
	if (ctx.cr6.eq) goto loc_821B7890;
loc_821B73F0:
	// lha r28,30(r31)
	r28.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi r28,0
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble 0x821b740c
	if (!ctx.cr0.gt) goto loc_821B740C;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(r28.s32, 2, ctx.xer);
	// ble cr6,0x821b74a8
	if (!ctx.cr6.gt) goto loc_821B74A8;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// beq cr6,0x821b74b4
	if (ctx.cr6.eq) goto loc_821B74B4;
loc_821B740C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821b7550
	if (ctx.cr6.eq) goto loc_821B7550;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(r28.s32, 3, ctx.xer);
	// beq cr6,0x821b7524
	if (ctx.cr6.eq) goto loc_821B7524;
	// cmpwi cr6,r28,5
	ctx.cr6.compare<int32_t>(r28.s32, 5, ctx.xer);
	// beq cr6,0x821b7524
	if (ctx.cr6.eq) goto loc_821B7524;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(r28.s32, 10, ctx.xer);
	// beq cr6,0x821b7524
	if (ctx.cr6.eq) goto loc_821B7524;
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(r28.s32, 12, ctx.xer);
	// beq cr6,0x821b7508
	if (ctx.cr6.eq) goto loc_821B7508;
	// cmpwi cr6,r28,14
	ctx.cr6.compare<int32_t>(r28.s32, 14, ctx.xer);
	// beq cr6,0x821b74f8
	if (ctx.cr6.eq) goto loc_821B74F8;
	// cmpwi cr6,r28,17
	ctx.cr6.compare<int32_t>(r28.s32, 17, ctx.xer);
	// beq cr6,0x821b7524
	if (ctx.cr6.eq) goto loc_821B7524;
	// mr r26,r22
	r26.u64 = r22.u64;
	// bl 0x821b0d38
	ctx.lr = 0x821B744C;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b74e4
	if (!ctx.cr0.eq) goto loc_821B74E4;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,5472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 5472);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x821b74e4
	if (ctx.cr6.eq) goto loc_821B74E4;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(r28.s32, 6, ctx.xer);
	// bne cr6,0x821b7494
	if (!ctx.cr6.eq) goto loc_821B7494;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821b7488
	if (ctx.cr6.eq) goto loc_821B7488;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821b7494
	if (!ctx.cr6.eq) goto loc_821B7494;
loc_821B7488:
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821b74e4
	if (!ctx.cr6.eq) goto loc_821B74E4;
loc_821B7494:
	// lbz r30,22(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lbz r11,21(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 21);
loc_821B749C:
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// b 0x821b752c
	goto loc_821B752C;
loc_821B74A8:
	// bl 0x821b0d38
	ctx.lr = 0x821B74AC;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821b740c
	if (!ctx.cr0.eq) goto loc_821B740C;
loc_821B74B4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// beq cr6,0x821b7550
	if (ctx.cr6.eq) goto loc_821B7550;
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821b740c
	if (!ctx.cr6.eq) goto loc_821B740C;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r20,540(r31)
	REX_STORE_U32(r31.u32 + 540, r20.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r11,r20
	ctx.r11.u64 = r20.u64;
	// stb r10,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r10.u8);
	// stb r9,26(r31)
	REX_STORE_U8(r31.u32 + 26, ctx.r9.u8);
	// b 0x821b7890
	goto loc_821B7890;
loc_821B74E4:
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// lbz r30,21(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 21);
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
	// b 0x821b752c
	goto loc_821B752C;
loc_821B74F8:
	// lbz r30,21(r31)
	r30.u64 = REX_LOAD_U8(r31.u32 + 21);
	// mr r26,r22
	r26.u64 = r22.u64;
	// lbz r11,22(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 22);
	// b 0x821b749c
	goto loc_821B749C;
loc_821B7508:
	// lbz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 24);
	// mr r26,r22
	r26.u64 = r22.u64;
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// subfic r10,r10,1
	ctx.xer.ca = ctx.r10.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r10.u64;
	// stb r11,27(r31)
	REX_STORE_U8(r31.u32 + 27, ctx.r11.u8);
	// extsb r30,r10
	r30.s64 = ctx.r10.s8;
	// stb r30,26(r31)
	REX_STORE_U8(r31.u32 + 26, r30.u8);
loc_821B7524:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x821b7550
	if (!ctx.cr6.eq) goto loc_821B7550;
loc_821B752C:
	// extsb r11,r30
	ctx.r11.s64 = r30.s8;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r24.s32);
	// add r29,r11,r21
	r29.u64 = ctx.r11.u64 + r21.u64;
	// stw r22,5464(r29)
	REX_STORE_U32(r29.u32 + 5464, r22.u32);
	// stw r20,5424(r29)
	REX_STORE_U32(r29.u32 + 5424, r20.u32);
	// lwz r27,8(r29)
	r27.u64 = REX_LOAD_U32(r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821c7088
	ctx.lr = 0x821B7550;
	sub_821C7088(ctx, base);
loc_821B7550:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bgt cr6,0x821b7780
	if (ctx.cr6.gt) goto loc_821B7780;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,9744
	ctx.r12.s64 = ctx.r12.s64 + 9744;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// nop 
	// addi r12,r12,30088
	ctx.r12.s64 = ctx.r12.s64 + 30088;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821B7648;
	case 1:
		goto loc_821B7648;
	case 2:
		goto loc_821B758C;
	case 3:
		goto loc_821B7648;
	case 4:
		goto loc_821B758C;
	case 5:
		goto loc_821B76BC;
	case 6:
		goto loc_821B7780;
	case 7:
		goto loc_821B7780;
	case 8:
		goto loc_821B7780;
	case 9:
		goto loc_821B758C;
	case 10:
		goto loc_821B7780;
	case 11:
		goto loc_821B7588;
	case 12:
		goto loc_821B7780;
	case 13:
		goto loc_821B774C;
	case 14:
		goto loc_821B7780;
	case 15:
		goto loc_821B7780;
	case 16:
		goto loc_821B7640;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821B7588:
	// bl 0x821b2b70
	ctx.lr = 0x821B758C;
	sub_821B2B70(ctx, base);
loc_821B758C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// bne cr6,0x821b75c8
	if (!ctx.cr6.eq) goto loc_821B75C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821cad08
	ctx.lr = 0x821B759C;
	sub_821CAD08(ctx, base);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x821b75b4
	if (!ctx.cr6.eq) goto loc_821B75B4;
	// bl 0x821c7140
	ctx.lr = 0x821B75B0;
	sub_821C7140(ctx, base);
	// b 0x821b75fc
	goto loc_821B75FC;
loc_821B75B4:
	// bl 0x821c7178
	ctx.lr = 0x821B75B8;
	sub_821C7178(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// stw r29,224(r31)
	REX_STORE_U32(r31.u32 + 224, r29.u32);
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// b 0x821b75fc
	goto loc_821B75FC;
loc_821B75C8:
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lhz r11,19314(r21)
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + 19314);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lwz r10,600(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 600);
	// ori r9,r9,23010
	ctx.r9.u64 = ctx.r9.u64 | 23010;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ori r8,r8,23010
	ctx.r8.u64 = ctx.r8.u64 | 23010;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r7,19314(r21)
	REX_STORE_U16(r21.u32 + 19314, ctx.r7.u16);
	// lhzx r11,r21,r9
	ctx.r11.u64 = REX_LOAD_U16(r21.u32 + ctx.r9.u32);
	// stw r10,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sthx r11,r21,r8
	REX_STORE_U16(r21.u32 + ctx.r8.u32, ctx.r11.u16);
loc_821B75FC:
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b7638
	if (ctx.cr6.eq) goto loc_821B7638;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821b7630
	if (ctx.cr6.eq) goto loc_821B7630;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x821b7628
	if (ctx.cr6.eq) goto loc_821B7628;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821b7780
	if (!ctx.cr6.eq) goto loc_821B7780;
	// stb r20,14(r31)
	REX_STORE_U8(r31.u32 + 14, r20.u8);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B7628:
	// stb r15,14(r31)
	REX_STORE_U8(r31.u32 + 14, r15.u8);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B7630:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x821b777c
	goto loc_821B777C;
loc_821B7638:
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x821b777c
	goto loc_821B777C;
loc_821B7640:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x821b777c
	goto loc_821B777C;
loc_821B7648:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r10,r11,17772
	ctx.r10.s64 = ctx.r11.s64 + 17772;
	// lwz r10,17776(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17776);
	// lwz r9,17780(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 17780);
	// lwz r8,17784(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 17784);
	// lwz r7,17788(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 17788);
	// lwz r6,17792(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 17792);
	// stw r10,17796(r11)
	REX_STORE_U32(ctx.r11.u32 + 17796, ctx.r10.u32);
	// stw r9,17800(r11)
	REX_STORE_U32(ctx.r11.u32 + 17800, ctx.r9.u32);
	// stw r8,17804(r11)
	REX_STORE_U32(ctx.r11.u32 + 17804, ctx.r8.u32);
	// stw r7,17808(r11)
	REX_STORE_U32(ctx.r11.u32 + 17808, ctx.r7.u32);
	// stw r6,17812(r11)
	REX_STORE_U32(ctx.r11.u32 + 17812, ctx.r6.u32);
	// bl 0x821b2b70
	ctx.lr = 0x821B767C;
	sub_821B2B70(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b76a8
	if (!ctx.cr6.eq) goto loc_821B76A8;
	// lwz r10,516(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r11,520(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 520);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r18,14(r31)
	REX_STORE_U8(r31.u32 + 14, r18.u8);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x821b7780
	if (!ctx.cr6.gt) goto loc_821B7780;
loc_821B76A0:
	// stb r17,14(r31)
	REX_STORE_U8(r31.u32 + 14, r17.u8);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B76A8:
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// stb r19,14(r31)
	REX_STORE_U8(r31.u32 + 14, r19.u8);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r11,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r11.u32);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B76BC:
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// addi r10,r11,17772
	ctx.r10.s64 = ctx.r11.s64 + 17772;
	// lwz r10,17776(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 17776);
	// lwz r9,17780(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 17780);
	// lwz r8,17784(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 17784);
	// lwz r7,17788(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 17788);
	// lwz r6,17792(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 17792);
	// stw r10,17796(r11)
	REX_STORE_U32(ctx.r11.u32 + 17796, ctx.r10.u32);
	// stw r9,17800(r11)
	REX_STORE_U32(ctx.r11.u32 + 17800, ctx.r9.u32);
	// stw r8,17804(r11)
	REX_STORE_U32(ctx.r11.u32 + 17804, ctx.r8.u32);
	// stw r7,17808(r11)
	REX_STORE_U32(ctx.r11.u32 + 17808, ctx.r7.u32);
	// stw r6,17812(r11)
	REX_STORE_U32(ctx.r11.u32 + 17812, ctx.r6.u32);
	// bl 0x821b2b70
	ctx.lr = 0x821B76F0;
	sub_821B2B70(ctx, base);
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821b7744
	if (!ctx.cr6.eq) goto loc_821B7744;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821cad00
	ctx.lr = 0x821B7704;
	sub_821CAD00(ctx, base);
	// bl 0x821d8450
	ctx.lr = 0x821B7708;
	sub_821D8450(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 216);
	// addi r10,r31,608
	ctx.r10.s64 = r31.s64 + 608;
	// lha r11,88(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 88));
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r10
	REX_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// bl 0x821b0d38
	ctx.lr = 0x821B7728;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821b773c
	if (ctx.cr0.eq) goto loc_821B773C;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b76a0
	if (ctx.cr6.eq) goto loc_821B76A0;
loc_821B773C:
	// stb r16,14(r31)
	REX_STORE_U8(r31.u32 + 14, r16.u8);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B7744:
	// stb r19,14(r31)
	REX_STORE_U8(r31.u32 + 14, r19.u8);
	// b 0x821b7780
	goto loc_821B7780;
loc_821B774C:
	// bl 0x821b2b70
	ctx.lr = 0x821B7750;
	sub_821B2B70(ctx, base);
	// lha r11,74(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 74));
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821b7778
	if (ctx.cr6.eq) goto loc_821B7778;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b7770
	if (ctx.cr6.eq) goto loc_821B7770;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r29.u32, ctx.xer);
	// beq cr6,0x821b7778
	if (ctx.cr6.eq) goto loc_821B7778;
loc_821B7770:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x821b777c
	goto loc_821B777C;
loc_821B7778:
	// li r11,11
	ctx.r11.s64 = 11;
loc_821B777C:
	// stb r11,14(r31)
	REX_STORE_U8(r31.u32 + 14, ctx.r11.u8);
loc_821B7780:
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x821b77b0
	if (ctx.cr6.eq) goto loc_821B77B0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x821b77b0
	if (ctx.cr6.eq) goto loc_821B77B0;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x821b7820
	if (!ctx.cr6.gt) goto loc_821B7820;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x821b77b0
	if (!ctx.cr6.gt) goto loc_821B77B0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x821b7820
	if (!ctx.cr6.eq) goto loc_821B7820;
loc_821B77B0:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e2bd8
	ctx.lr = 0x821B77B8;
	sub_821E2BD8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821e34e0
	ctx.lr = 0x821B77C4;
	sub_821E34E0(ctx, base);
	// addis r11,r21,1
	ctx.r11.s64 = r21.s64 + 65536;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821e34e0
	ctx.lr = 0x821B77D4;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,9828
	ctx.r11.s64 = ctx.r11.s64 + 9828;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B77E8;
	sub_821E2FD0(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821e2cc8
	ctx.lr = 0x821B77F0;
	sub_821E2CC8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x821e34e0
	ctx.lr = 0x821B77FC;
	sub_821E34E0(ctx, base);
	// addis r11,r21,1
	ctx.r11.s64 = r21.s64 + 65536;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821e34e0
	ctx.lr = 0x821B780C;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,9836
	ctx.r11.s64 = ctx.r11.s64 + 9836;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B7820;
	sub_821E2FD0(ctx, base);
loc_821B7820:
	// lwz r11,540(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821b7878
	if (ctx.cr6.eq) goto loc_821B7878;
	// lha r11,30(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x821b7878
	if (!ctx.cr0.gt) goto loc_821B7878;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821b7878
	if (ctx.cr6.gt) goto loc_821B7878;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e2070
	ctx.lr = 0x821B7848;
	sub_821E2070(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e34e0
	ctx.lr = 0x821B7854;
	sub_821E34E0(ctx, base);
	// addis r11,r21,1
	ctx.r11.s64 = r21.s64 + 65536;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,3696
	ctx.r4.s64 = ctx.r11.s64 + 3696;
	// bl 0x821e34e0
	ctx.lr = 0x821B7864;
	sub_821E34E0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r11,r11,9812
	ctx.r11.s64 = ctx.r11.s64 + 9812;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x821e2fd0
	ctx.lr = 0x821B7878;
	sub_821E2FD0(ctx, base);
loc_821B7878:
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821b7890
	if (!ctx.cr6.eq) goto loc_821B7890;
	// lwz r11,516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 516);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,516(r31)
	REX_STORE_U32(r31.u32 + 516, ctx.r11.u32);
loc_821B7890:
	// lhz r11,74(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821b78a8
	if (ctx.cr0.eq) goto loc_821B78A8;
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,496(r31)
	REX_STORE_U32(r31.u32 + 496, ctx.r11.u32);
loc_821B78A8:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_821E9D20) {
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
	ctx.lr = 0x821E9D28;
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, f29.u64);
	// stfd f30,-112(r1)
	REX_STORE_U64(ctx.r1.u32 + -112, f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// li r23,0
	r23.s64 = 0;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r25,0(r21)
	r25.u64 = REX_LOAD_U32(r21.u32 + 0);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r28,r23
	r28.u64 = r23.u64;
	// mr r24,r23
	r24.u64 = r23.u64;
	// cmplwi cr6,r11,35
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 35, ctx.xer);
	// blt cr6,0x821eaa1c
	if (ctx.cr6.lt) goto loc_821EAA1C;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// bgt cr6,0x821eaa1c
	if (ctx.cr6.gt) goto loc_821EAA1C;
	// addi r30,r11,-35
	r30.s64 = ctx.r11.s64 + -35;
	// li r26,1
	r26.s64 = 1;
loc_821E9D94:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-35
	ctx.r11.s64 = ctx.r11.s64 + -35;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// bgt cr6,0x821eaa1c
	if (ctx.cr6.gt) goto loc_821EAA1C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,17000
	ctx.r12.s64 = ctx.r12.s64 + 17000;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32225
	ctx.r12.s64 = -2111897600;
	// addi r12,r12,-25124
	ctx.r12.s64 = ctx.r12.s64 + -25124;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821E9E38;
	case 1:
		goto loc_821E9E38;
	case 2:
		goto loc_821E9E38;
	case 3:
		goto loc_821EAA1C;
	case 4:
		goto loc_821EAA1C;
	case 5:
		goto loc_821EAA1C;
	case 6:
		goto loc_821EAA1C;
	case 7:
		goto loc_821EAA1C;
	case 8:
		goto loc_821E9DDC;
	case 9:
		goto loc_821EAA1C;
	case 10:
		goto loc_821EAA1C;
	case 11:
		goto loc_821EAA1C;
	case 12:
		goto loc_821EAA1C;
	case 13:
		goto loc_821E9DE4;
	case 14:
		goto loc_821E9DEC;
	case 15:
		goto loc_821E9DEC;
	case 16:
		goto loc_821E9DEC;
	case 17:
		goto loc_821E9DEC;
	case 18:
		goto loc_821E9DEC;
	case 19:
		goto loc_821E9DEC;
	case 20:
		goto loc_821E9DEC;
	case 21:
		goto loc_821E9DEC;
	case 22:
		goto loc_821E9DEC;
	case 23:
		goto loc_821EAA1C;
	case 24:
		goto loc_821EAA1C;
	case 25:
		goto loc_821EAA1C;
	case 26:
		goto loc_821EAA1C;
	case 27:
		goto loc_821EAA1C;
	case 28:
		goto loc_821EAA1C;
	case 29:
		goto loc_821E9E48;
	case 30:
		goto loc_821E9ECC;
	case 31:
		goto loc_821E9F04;
	case 32:
		goto loc_821E9F44;
	case 33:
		goto loc_821E9FF8;
	case 34:
		goto loc_821EAA1C;
	case 35:
		goto loc_821EA038;
	case 36:
		goto loc_821EAA1C;
	case 37:
		goto loc_821EAA1C;
	case 38:
		goto loc_821EAA1C;
	case 39:
		goto loc_821EAA1C;
	case 40:
		goto loc_821EAA1C;
	case 41:
		goto loc_821EA088;
	case 42:
		goto loc_821EA0C4;
	case 43:
		goto loc_821EA0FC;
	case 44:
		goto loc_821EAA1C;
	case 45:
		goto loc_821EA108;
	case 46:
		goto loc_821EA140;
	case 47:
		goto loc_821EA220;
	case 48:
		goto loc_821EAA1C;
	case 49:
		goto loc_821EAA1C;
	case 50:
		goto loc_821EA25C;
	case 51:
		goto loc_821EAA1C;
	case 52:
		goto loc_821EAA1C;
	case 53:
		goto loc_821EA298;
	case 54:
		goto loc_821EA318;
	case 55:
		goto loc_821EA354;
	case 56:
		goto loc_821EAA1C;
	case 57:
		goto loc_821EAA1C;
	case 58:
		goto loc_821EAA1C;
	case 59:
		goto loc_821EAA1C;
	case 60:
		goto loc_821EAA1C;
	case 61:
		goto loc_821EAA1C;
	case 62:
		goto loc_821EAA1C;
	case 63:
		goto loc_821EA3A8;
	case 64:
		goto loc_821EA410;
	case 65:
		goto loc_821EA480;
	case 66:
		goto loc_821EAA1C;
	case 67:
		goto loc_821EA4AC;
	case 68:
		goto loc_821EAA1C;
	case 69:
		goto loc_821EAA1C;
	case 70:
		goto loc_821EA4DC;
	case 71:
		goto loc_821EAA1C;
	case 72:
		goto loc_821EAA1C;
	case 73:
		goto loc_821E9E28;
	case 74:
		goto loc_821EA5E4;
	case 75:
		goto loc_821EA5EC;
	case 76:
		goto loc_821EAA1C;
	case 77:
		goto loc_821EA5F4;
	case 78:
		goto loc_821EAA1C;
	case 79:
		goto loc_821EA738;
	case 80:
		goto loc_821EA64C;
	case 81:
		goto loc_821EA684;
	case 82:
		goto loc_821EA778;
	case 83:
		goto loc_821EA7B8;
	case 84:
		goto loc_821EAA1C;
	case 85:
		goto loc_821EA898;
	case 86:
		goto loc_821EA908;
	case 87:
		goto loc_821EA94C;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_821E9DDC:
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// b 0x821e9d94
	goto loc_821E9D94;
loc_821E9DE4:
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_821E9DEC:
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821e9330
	ctx.lr = 0x821E9DFC;
	sub_821E9330(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,46
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 46, ctx.xer);
	// bne cr6,0x821e9d94
	if (!ctx.cr6.eq) goto loc_821E9D94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821e9330
	ctx.lr = 0x821E9E20;
	sub_821E9330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821e9d94
	goto loc_821E9D94;
loc_821E9E28:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x821ea580
	if (!ctx.cr6.eq) goto loc_821EA580;
	// mr r28,r26
	r28.u64 = r26.u64;
	// b 0x821e9d94
	goto loc_821E9D94;
loc_821E9E38:
	// lbz r11,-1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + -1);
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821E9E48:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lfs f0,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lfs f10,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// lfs f0,16788(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fnmsubs f12,f13,f0,f12
	ctx.f12.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f0.f64, -ctx.f12.f64)));
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f13,2000(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// lfs f9,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f13,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
loc_821E9EC0:
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_821E9EC4:
	// stfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821E9ECC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821e9ee0
	if (!ctx.cr6.eq) goto loc_821E9EE0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821E9EDC;
	sub_821E9468(ctx, base);
	// b 0x821e9efc
	goto loc_821E9EFC;
loc_821E9EE0:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_821E9EFC:
	// stfs f1,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// b 0x821e9fe8
	goto loc_821E9FE8;
loc_821E9F04:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821e9f18
	if (!ctx.cr6.eq) goto loc_821E9F18;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821E9F14;
	sub_821E9468(ctx, base);
	// b 0x821e9f34
	goto loc_821E9F34;
loc_821E9F18:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_821E9F34:
	// addi r5,r31,32
	ctx.r5.s64 = r31.s64 + 32;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x820e1cf8
	ctx.lr = 0x821E9F40;
	sub_820E1CF8(ctx, base);
	// b 0x821e9fe8
	goto loc_821E9FE8;
loc_821E9F44:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x821e9fc8
	if (ctx.cr6.lt) goto loc_821E9FC8;
	// beq cr6,0x821e9fb0
	if (ctx.cr6.eq) goto loc_821E9FB0;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x821e9fe8
	if (!ctx.cr6.lt) goto loc_821E9FE8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// bge cr6,0x821e9f88
	if (!ctx.cr6.lt) goto loc_821E9F88;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821E9F88:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r31,32
	ctx.r11.s64 = r31.s64 + 32;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x821e9fe8
	goto loc_821E9FE8;
loc_821E9FB0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r6,r31,32
	ctx.r6.s64 = r31.s64 + 32;
	// bl 0x821e93b8
	ctx.lr = 0x821E9FBC;
	sub_821E93B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// b 0x821e9fe4
	goto loc_821E9FE4;
loc_821E9FC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_821E9FE4:
	// bl 0x82202838
	ctx.lr = 0x821E9FE8;
	sub_82202838(ctx, base);
loc_821E9FE8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821e9588
	ctx.lr = 0x821E9FF4;
	sub_821E9588(ctx, base);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821E9FF8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea020
	if (ctx.cr6.eq) goto loc_821EA020;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea028
	goto loc_821EA028;
loc_821EA020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA028;
	sub_821E9468(ctx, base);
loc_821EA028:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_821EA030:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA038:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea06c
	if (ctx.cr6.eq) goto loc_821EA06C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,6
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// b 0x821ea100
	goto loc_821EA100;
loc_821EA06C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA074;
	sub_821E9330(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// divw r11,r3,r11
	ctx.r11.u64 = uint32_t((ctx.r11.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r11.s32 == -1)) ? ctx.r3.s32 / ctx.r11.s32 : 0);
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// b 0x821ea100
	goto loc_821EA100;
loc_821EA088:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea0b0
	if (ctx.cr6.eq) goto loc_821EA0B0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea0b8
	goto loc_821EA0B8;
loc_821EA0B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA0B8;
	sub_821E9468(ctx, base);
loc_821EA0B8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// b 0x821e9ec4
	goto loc_821E9EC4;
loc_821EA0C4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea0ec
	if (ctx.cr6.eq) goto loc_821EA0EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea0f4
	goto loc_821EA0F4;
loc_821EA0EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA0F4;
	sub_821E9468(ctx, base);
loc_821EA0F4:
	// stfs f1,16(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 16, temp.u32);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA0FC:
	// li r11,4
	ctx.r11.s64 = 4;
loc_821EA100:
	// stb r11,0(r31)
	REX_STORE_U8(r31.u32 + 0, ctx.r11.u8);
	// b 0x821ea688
	goto loc_821EA688;
loc_821EA108:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea130
	if (ctx.cr6.eq) goto loc_821EA130;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r11,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r11.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA130:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA138;
	sub_821E9330(ctx, base);
	// stb r3,4(r31)
	REX_STORE_U8(r31.u32 + 4, ctx.r3.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA140:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821ea158
	if (!ctx.cr6.eq) goto loc_821EA158;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA150;
	sub_821E9330(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x821ea170
	goto loc_821EA170;
loc_821EA158:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r29,-4(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_821EA170:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f10,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// lbz r11,5(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 5);
	// lfs f11,20(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,16788(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16788);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// fnmsubs f8,f12,f0,f13
	ctx.f8.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f0.f64, -ctx.f13.f64)));
	// fmuls f31,f10,f0
	f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f0,1992(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,2000(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fadds f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmadds f0,f8,f13,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f11.f64)));
	// fsubs f29,f0,f12
	f29.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// bge cr6,0x821ea1d0
	if (!ctx.cr6.lt) goto loc_821EA1D0;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-760
	ctx.r10.s64 = ctx.r10.s64 + -760;
	// ldx r30,r11,r10
	r30.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// b 0x821ea1d4
	goto loc_821EA1D4;
loc_821EA1D0:
	// mr r30,r23
	r30.u64 = r23.u64;
loc_821EA1D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lfs f1,2028(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82202620
	ctx.lr = 0x821EA1E4;
	sub_82202620(ctx, base);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lfs f4,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lfs f3,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r3,r11,10016
	ctx.r3.s64 = ctx.r11.s64 + 10016;
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x821fe000
	ctx.lr = 0x821EA20C;
	sub_821FE000(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 + ctx.f13.f64));
	// lfs f0,16264(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16264);
	ctx.f0.f64 = double(temp.f32);
	// b 0x821e9ec0
	goto loc_821E9EC0;
loc_821EA220:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea248
	if (ctx.cr6.eq) goto loc_821EA248;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea250
	goto loc_821EA250;
loc_821EA248:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA250;
	sub_821E9468(ctx, base);
loc_821EA250:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// b 0x821e9ec4
	goto loc_821E9EC4;
loc_821EA25C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea284
	if (ctx.cr6.eq) goto loc_821EA284;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea28c
	goto loc_821EA28C;
loc_821EA284:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA28C;
	sub_821E9468(ctx, base);
loc_821EA28C:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// b 0x821ea030
	goto loc_821EA030;
loc_821EA298:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x821ea2dc
	if (!ctx.cr6.eq) goto loc_821EA2DC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bne cr6,0x821ea2c4
	if (!ctx.cr6.eq) goto loc_821EA2C4;
	// rotlwi r4,r4,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
loc_821EA2C4:
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r7,r11,-648
	ctx.r7.s64 = ctx.r11.s64 + -648;
loc_821EA2CC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x821e9088
	ctx.lr = 0x821EA2D4;
	sub_821E9088(ctx, base);
loc_821EA2D4:
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA2DC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea304
	if (ctx.cr6.eq) goto loc_821EA304;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea30c
	goto loc_821EA30C;
loc_821EA304:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA30C;
	sub_821E9468(ctx, base);
loc_821EA30C:
	// stfs f1,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f1,32(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 32, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA318:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea340
	if (ctx.cr6.eq) goto loc_821EA340;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea348
	goto loc_821EA348;
loc_821EA340:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA348;
	sub_821E9468(ctx, base);
loc_821EA348:
	// stfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f1,36(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 36, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA354:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea37c
	if (ctx.cr6.eq) goto loc_821EA37C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea384
	goto loc_821EA384;
loc_821EA37C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA384;
	sub_821E9468(ctx, base);
loc_821EA384:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x821ea39c
	if (ctx.cr6.gt) goto loc_821EA39C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,31036(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 31036);
	ctx.f1.f64 = double(temp.f32);
loc_821EA39C:
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f1,40(r27)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r27.u32 + 40, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA3A8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x821ea3d4
	if (!ctx.cr6.eq) goto loc_821EA3D4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x821e9150
	ctx.lr = 0x821EA3D0;
	sub_821E9150(ctx, base);
	// b 0x821ea2d4
	goto loc_821EA2D4;
loc_821EA3D4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea3fc
	if (ctx.cr6.eq) goto loc_821EA3FC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// b 0x821ea408
	goto loc_821EA408;
loc_821EA3FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA404;
	sub_821E9330(ctx, base);
	// stb r3,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r3.u8);
loc_821EA408:
	// mr r24,r26
	r24.u64 = r26.u64;
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA410:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x821ea45c
	if (ctx.cr6.lt) goto loc_821EA45C;
	// beq cr6,0x821ea448
	if (ctx.cr6.eq) goto loc_821EA448;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x821eaa1c
	if (!ctx.cr6.lt) goto loc_821EAA1C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r11,0(r25)
	REX_STORE_U8(r25.u32 + 0, ctx.r11.u8);
	// stbu r23,1(r25)
	ea = 1 + r25.u32;
	REX_STORE_U8(ea, r23.u8);
	r25.u32 = ea;
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA448:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA450;
	sub_821E9330(ctx, base);
	// li r24,2
	r24.s64 = 2;
	// stb r3,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r3.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA45C:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,2
	r24.s64 = 2;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r11,1(r31)
	REX_STORE_U8(r31.u32 + 1, ctx.r11.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA480:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x821e9ff8
	if (!ctx.cr6.eq) goto loc_821E9FF8;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwa r4,-4(r11)
	ctx.r4.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + -4));
	// bl 0x821e8ed0
	ctx.lr = 0x821EA4A8;
	sub_821E8ED0(ctx, base);
	// b 0x821ea2d4
	goto loc_821EA2D4;
loc_821EA4AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x821e8c98
	ctx.lr = 0x821EA4D8;
	sub_821E8C98(ctx, base);
	// b 0x821ea2d4
	goto loc_821EA2D4;
loc_821EA4DC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r10,r10,6632
	ctx.r10.s64 = ctx.r10.s64 + 6632;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r7,60(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 60);
	// xori r6,r7,1
	ctx.r6.u64 = ctx.r7.u64 ^ 1;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r11,r7,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// stw r6,60(r27)
	REX_STORE_U32(r27.u32 + 60, ctx.r6.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// lbz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821ea548
	if (ctx.cr0.eq) goto loc_821EA548;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_821EA528:
	// cmpwi cr6,r8,511
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 511, ctx.xer);
	// bge cr6,0x821ea548
	if (!ctx.cr6.lt) goto loc_821EA548;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r6,r10
	ctx.r6.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821ea528
	if (!ctx.cr0.eq) goto loc_821EA528;
loc_821EA548:
	// lbz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821ea574
	if (ctx.cr0.eq) goto loc_821EA574;
loc_821EA554:
	// cmpwi cr6,r8,511
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 511, ctx.xer);
	// bge cr6,0x821ea574
	if (!ctx.cr6.lt) goto loc_821EA574;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bne 0x821ea554
	if (!ctx.cr0.eq) goto loc_821EA554;
loc_821EA574:
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stb r23,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, r23.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA580:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821ea5b8
	if (!ctx.cr6.eq) goto loc_821EA5B8;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// blt cr6,0x821ea59c
	if (ctx.cr6.lt) goto loc_821EA59C;
	// cmplwi cr6,r11,57
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 57, ctx.xer);
	// ble cr6,0x821ea5a4
	if (!ctx.cr6.gt) goto loc_821EA5A4;
loc_821EA59C:
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x821ea5b0
	if (!ctx.cr6.eq) goto loc_821EA5B0;
loc_821EA5A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA5AC;
	sub_821E9468(ctx, base);
	// b 0x821ea5d4
	goto loc_821EA5D4;
loc_821EA5B0:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821ea100
	goto loc_821EA100;
loc_821EA5B8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
loc_821EA5D4:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f1.f64, -ctx.f0.f64)));
	// b 0x821e9ec4
	goto loc_821E9EC4;
loc_821EA5E4:
	// stb r26,0(r31)
	REX_STORE_U8(r31.u32 + 0, r26.u8);
	// b 0x821ea688
	goto loc_821EA688;
loc_821EA5EC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821ea100
	goto loc_821EA100;
loc_821EA5F4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x821ea608
	if (ctx.cr6.lt) goto loc_821EA608;
	// beq cr6,0x821ea63c
	if (ctx.cr6.eq) goto loc_821EA63C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x821ea624
	if (!ctx.cr6.lt) goto loc_821EA624;
loc_821EA608:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
loc_821EA624:
	// lbz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821eaa1c
	if (!ctx.cr0.eq) goto loc_821EAA1C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r11.u8);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA63C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9330
	ctx.lr = 0x821EA644;
	sub_821E9330(ctx, base);
	// stb r3,6(r31)
	REX_STORE_U8(r31.u32 + 6, ctx.r3.u8);
	// b 0x821ea624
	goto loc_821EA624;
loc_821EA64C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// blt cr6,0x821ea660
	if (ctx.cr6.lt) goto loc_821EA660;
	// beq cr6,0x821ea684
	if (ctx.cr6.eq) goto loc_821EA684;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(r30.u32, 3, ctx.xer);
	// bge cr6,0x821eaa1c
	if (!ctx.cr6.lt) goto loc_821EAA1C;
loc_821EA660:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x821e9218
	ctx.lr = 0x821EA680;
	sub_821E9218(ctx, base);
	// b 0x821ea2d4
	goto loc_821EA2D4;
loc_821EA684:
	// stb r23,0(r31)
	REX_STORE_U8(r31.u32 + 0, r23.u8);
loc_821EA688:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lbz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 0);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mulli r10,r10,24
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
	// lfs f0,1992(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r11,r11,-432
	ctx.r11.s64 = ctx.r11.s64 + -432;
	// lis r9,-32173
	ctx.r9.s64 = -2108489728;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r9,r9,-784
	ctx.r9.s64 = ctx.r9.s64 + -784;
	// addi r10,r10,7672
	ctx.r10.s64 = ctx.r10.s64 + 7672;
	// lbz r8,17(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lbz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f0,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
	// stw r11,20(r27)
	REX_STORE_U32(r27.u32 + 20, ctx.r11.u32);
	// stw r26,48(r27)
	REX_STORE_U32(r27.u32 + 48, r26.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,24(r27)
	REX_STORE_U32(r27.u32 + 24, ctx.r11.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 0);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,28(r27)
	REX_STORE_U32(r27.u32 + 28, ctx.r11.u32);
	// b 0x821eaa1c
	goto loc_821EAA1C;
loc_821EA738:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea760
	if (ctx.cr6.eq) goto loc_821EA760;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea768
	goto loc_821EA768;
loc_821EA760:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA768;
	sub_821E9468(ctx, base);
loc_821EA768:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f0.f64)));
	// b 0x821e9ec4
	goto loc_821E9EC4;
loc_821EA778:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea7a0
	if (ctx.cr6.eq) goto loc_821EA7A0;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea7a8
	goto loc_821EA7A8;
loc_821EA7A0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA7A8;
	sub_821E9468(ctx, base);
loc_821EA7A8:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f1.f64, -ctx.f0.f64)));
	// b 0x821ea030
	goto loc_821EA030;
loc_821EA7B8:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821ea7ec
	if (!ctx.cr6.eq) goto loc_821EA7EC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA7C8;
	sub_821E9468(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA7DC;
	sub_821E9468(ctx, base);
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x821ea838
	goto loc_821EA838;
loc_821EA7EC:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfs f11,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f13,8(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfd f12,-8(r10)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_821EA838:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,17(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// lbz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,84(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// stfs f11,64(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA898:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(r30.u32, 2, ctx.xer);
	// bne cr6,0x821ea8c4
	if (!ctx.cr6.eq) goto loc_821EA8C4;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r7,r10,-664
	ctx.r7.s64 = ctx.r10.s64 + -664;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x821ea2cc
	goto loc_821EA2CC;
loc_821EA8C4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea8ec
	if (ctx.cr6.eq) goto loc_821EA8EC;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea8f4
	goto loc_821EA8F4;
loc_821EA8EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA8F4;
	sub_821E9468(ctx, base);
loc_821EA8F4:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,32(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 32, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA908:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// beq cr6,0x821ea930
	if (ctx.cr6.eq) goto loc_821EA930;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// b 0x821ea938
	goto loc_821EA938;
loc_821EA930:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA938;
	sub_821E9468(ctx, base);
loc_821EA938:
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// stfs f0,36(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 36, temp.u32);
	// b 0x821eaa18
	goto loc_821EAA18;
loc_821EA94C:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(r30.u32, 1, ctx.xer);
	// bne cr6,0x821ea970
	if (!ctx.cr6.eq) goto loc_821EA970;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA95C;
	sub_821E9468(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821e9468
	ctx.lr = 0x821EA968;
	sub_821E9468(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x821ea9ac
	goto loc_821EA9AC;
loc_821EA970:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// lfd f0,-8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lfd f13,-8(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -8);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
loc_821EA9AC:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// lbz r11,17(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 17);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,80(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// stfs f11,84(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r31.u32 + 84, temp.u32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,76(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// lfs f13,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 92, temp.u32);
loc_821EAA18:
	// stw r26,48(r27)
	REX_STORE_U32(r27.u32 + 48, r26.u32);
loc_821EAA1C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stb r23,0(r25)
	REX_STORE_U8(r25.u32 + 0, r23.u8);
	// stw r25,0(r21)
	REX_STORE_U32(r21.u32 + 0, r25.u32);
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

DEFINE_REX_FUNC(sub_82229D18) {
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
	// lis r31,-32256
	r31.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,1572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1572);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229d5c
	if (ctx.cr6.eq) goto loc_82229D5C;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229D58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1572);
loc_82229D5C:
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r10,r10,-30624
	ctx.r10.s64 = ctx.r10.s64 + -30624;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82229d90
	if (ctx.cr6.eq) goto loc_82229D90;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,65
	ctx.r3.s64 = 65;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1572(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 1572);
loc_82229D90:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82229db4
	if (ctx.cr6.eq) goto loc_82229DB4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lis r10,-32221
	ctx.r10.s64 = -2111635456;
	// li r3,90
	ctx.r3.s64 = 90;
	// addi r4,r10,-26056
	ctx.r4.s64 = ctx.r10.s64 + -26056;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82229DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82229DB4:
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

DEFINE_REX_FUNC(sub_8222D9CC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222D9D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8222D9D8;
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x824d46cc
	ctx.lr = 0x8222D9EC;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lwz r3,1316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1316);
	// bl 0x824d438c
	ctx.lr = 0x8222D9F8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8222da08
	if (ctx.cr6.eq) goto loc_8222DA08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d46bc
	ctx.lr = 0x8222DA08;
	__imp__VdRetrainEDRAMWorker(ctx, base);
loc_8222DA08:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d46ac
	ctx.lr = 0x8222DA30;
	__imp__VdRetrainEDRAM(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222da9c
	if (ctx.cr0.eq) goto loc_8222DA9C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8222da48
	if (!ctx.cr6.eq) goto loc_8222DA48;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822152c0
	ctx.lr = 0x8222DA48;
	sub_822152C0(ctx, base);
loc_8222DA48:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82215248
	ctx.lr = 0x8222DA54;
	sub_82215248(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d46ac
	ctx.lr = 0x8222DA78;
	__imp__VdRetrainEDRAM(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r11.u32);
	// bl 0x822152c0
	ctx.lr = 0x8222DA94;
	sub_822152C0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8222da48
	if (!ctx.cr6.eq) goto loc_8222DA48;
loc_8222DA9C:
	// lwz r3,1316(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 1316);
	// bl 0x824d437c
	ctx.lr = 0x8222DAA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x824d469c
	ctx.lr = 0x8222DAA8;
	__imp__KeLeaveCriticalRegion(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822325D0) {
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
	ctx.lr = 0x822325D8;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,48(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// addi r23,r3,48
	r23.s64 = ctx.r3.s64 + 48;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8223261c
	if (!ctx.cr6.gt) goto loc_8223261C;
	// bl 0x82215008
	ctx.lr = 0x82232618;
	sub_82215008(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8223261C:
	// mulli r26,r27,21
	r26.s64 = static_cast<int64_t>(r27.u64 * static_cast<uint64_t>(21));
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82213e40
	ctx.lr = 0x82232630;
	sub_82213E40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82232640
	if (!ctx.cr0.eq) goto loc_82232640;
	// stw r30,0(r23)
	REX_STORE_U32(r23.u32 + 0, r30.u32);
	// b 0x8223287c
	goto loc_8223287C;
loc_82232640:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x8223266c
	if (!ctx.cr0.eq) goto loc_8223266C;
	// vspltisw128 v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x1)));
	// vcsxwfp128 v63,v63,1
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v63.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x3F000000)))));
	// b 0x82232670
	goto loc_82232670;
loc_8223266C:
	// vspltisw128 v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0x0)));
loc_82232670:
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// lfs f13,4(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// beq cr6,0x82232734
	if (ctx.cr6.eq) goto loc_82232734;
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// mtctr r27
	ctx.ctr.u64 = r27.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_82232694:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvrx128 v61,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r7,56
	ctx.r7.s64 = 56;
	// vor128 v62,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// li r3,60
	ctx.r3.s64 = 60;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// vcsxwfp128 v62,v62,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// vsubfp128 v62,v62,v63
	simde_mm_store_ps(ctx.v62.f32, simde_mm_sub_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v61,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v60,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v59,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v62,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v61,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,-4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stvewx128 v59,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,24(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f11,40(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stvewx128 v59,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r10,r3
	ea = (ctx.r10.u32 + ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stfs f31,52(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f11,68(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,84
	ctx.r11.s64 = ctx.r11.s64 + 84;
	// bdnz 0x82232694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82232694;
loc_82232734:
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r8,3
	ctx.r10.u64 = ctx.r8.u64 | 3;
	// ori r11,r11,18432
	ctx.r11.u64 = ctx.r11.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r9,r26,2,6,29
	ctx.r9.u64 = (__builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FFFFFC) | (ctx.r9.u64 & 0xFFFFFFFFFC000003);
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r4,r10,20480
	ctx.r4.u64 = ctx.r10.u64 | 20480;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r9,8961
	ctx.r9.s64 = 8961;
	// ori r26,r10,8192
	r26.u64 = ctx.r10.u64 | 8192;
	// rlwinm. r10,r28,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, r24.u32);
	r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bne 0x822327cc
	if (!ctx.cr0.eq) goto loc_822327CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822327e4
	goto loc_822327E4;
loc_822327CC:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x822327e0
	if (!ctx.cr6.eq) goto loc_822327E0;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x822327e4
	goto loc_822327E4;
loc_822327E0:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_822327E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,8704
	ctx.r10.s64 = 8704;
	// li r9,8712
	ctx.r9.s64 = 8712;
	// lwz r8,276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r7,r7,13825
	ctx.r7.u64 = ctx.r7.u64 | 13825;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r10,r27,r6
	ctx.r10.s64 = int64_t(r27.s32) * int64_t(ctx.r6.s32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r22.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r10,r5,3,16,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,57,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// rldicr r12,r12,36,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	REX_STORE_U64(r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r31)
	REX_STORE_U64(r31.u32 + 32, ctx.r11.u64);
loc_8223287C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_8223D2B0) {
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
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,76(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// beq cr6,0x8223d3b8
	if (ctx.cr6.eq) goto loc_8223D3B8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,36
	ctx.r8.s64 = r31.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1992(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
loc_8223D31C:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bgt cr6,0x8223d340
	if (ctx.cr6.gt) goto loc_8223D340;
	// lbz r10,64(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 64);
	// slw r7,r3,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8223d340
	if (!ctx.cr0.eq) goto loc_8223D340;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x8223d344
	goto loc_8223D344;
loc_8223D340:
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_8223D344:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8223d31c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D31C;
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8223d368
	if (!ctx.cr6.eq) goto loc_8223D368;
	// lwz r30,80(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 80);
	// b 0x8223d36c
	goto loc_8223D36C;
loc_8223D368:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_8223D36C:
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D388;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223d3b8
	if (ctx.cr0.lt) goto loc_8223D3B8;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D3B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8223D3B8:
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

DEFINE_REX_FUNC(sub_82245910) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82245918;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224593C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822459b0
	if (ctx.cr6.lt) goto loc_822459B0;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r10,r10,48
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(48));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,-44(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -44);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822459b0
	if (ctx.cr6.gt) goto loc_822459B0;
	// subf r11,r11,r31
	ctx.r11.u64 = r31.u64 - ctx.r11.u64;
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82245984
	if (!ctx.cr0.eq) goto loc_82245984;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// b 0x822459b8
	goto loc_822459B8;
loc_82245984:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224599c
	if (!ctx.cr6.eq) goto loc_8224599C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// b 0x822459b8
	goto loc_822459B8;
loc_8224599C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x822459AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822459b8
	goto loc_822459B8;
loc_822459B0:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
loc_822459B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82246A38) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82246A40;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82246a98
	if (ctx.cr6.eq) goto loc_82246A98;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82246A5C;
	sub_822D6A10(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82246a98
	if (ctx.cr0.eq) goto loc_82246A98;
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82255b48
	ctx.lr = 0x82246A70;
	sub_82255B48(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82246a84
	if (!ctx.cr0.eq) goto loc_82246A84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82246aac
	goto loc_82246AAC;
loc_82246A84:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d6c18
	ctx.lr = 0x82246A94;
	sub_822D6C18(ctx, base);
	// b 0x82246a9c
	goto loc_82246A9C;
loc_82246A98:
	// li r31,0
	r31.s64 = 0;
loc_82246A9C:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x82255b70
	ctx.lr = 0x82246AA4;
	sub_82255B70(ctx, base);
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82246AAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822476B8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822476e8
	if (ctx.cr6.eq) goto loc_822476E8;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x822476e8
	if (!ctx.cr6.eq) goto loc_822476E8;
	// lwz r10,132(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 132);
	// addi r3,r4,16
	ctx.r3.s64 = ctx.r4.s64 + 16;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// b 0x82246a38
	sub_82246A38(ctx, base);
	return;
loc_822476E8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247F80) {
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
	// bl 0x82246220
	ctx.lr = 0x82247F9C;
	sub_82246220(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82247fd8
	if (ctx.cr6.eq) goto loc_82247FD8;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82247fd8
	if (!ctx.cr6.eq) goto loc_82247FD8;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// bl 0x82246a38
	ctx.lr = 0x82247FC0;
	sub_82246A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82247fe0
	if (ctx.cr0.lt) goto loc_82247FE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82275c60
	ctx.lr = 0x82247FD0;
	sub_82275C60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247fe0
	goto loc_82247FE0;
loc_82247FD8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82247FE0:
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

DEFINE_REX_FUNC(sub_822490C8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82246220
	ctx.lr = 0x822490E4;
	sub_82246220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82249118
	if (ctx.cr6.eq) goto loc_82249118;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82249118
	if (!ctx.cr6.eq) goto loc_82249118;
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r10,236(r11)
	REX_STORE_U32(ctx.r11.u32 + 236, ctx.r10.u32);
	// bl 0x82245e40
	ctx.lr = 0x82249110;
	sub_82245E40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82249120
	goto loc_82249120;
loc_82249118:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82249120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224AB70) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82255b48
	ctx.lr = 0x8224AB94;
	sub_82255B48(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224aba8
	if (ctx.cr0.eq) goto loc_8224ABA8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8224abac
	goto loc_8224ABAC;
loc_8224ABA8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224ABAC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224abc0
	if (!ctx.cr6.eq) goto loc_8224ABC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224abcc
	goto loc_8224ABCC;
loc_8224ABC0:
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8224ABCC:
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

DEFINE_REX_FUNC(sub_8224C388) {
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
	// addi r31,r11,25836
	r31.s64 = ctx.r11.s64 + 25836;
	// lwz r11,25856(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 25856);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224c3d4
	if (!ctx.cr0.eq) goto loc_8224C3D4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r11,25856(r10)
	REX_STORE_U32(ctx.r10.u32 + 25856, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2024(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8227ad28
	ctx.lr = 0x8224C3C8;
	sub_8227AD28(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15192
	ctx.r3.s64 = ctx.r11.s64 + 15192;
	// bl 0x822d5848
	ctx.lr = 0x8224C3D4;
	sub_822D5848(ctx, base);
loc_8224C3D4:
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

DEFINE_REX_FUNC(sub_8224DDE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8224DDE8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,-4
	r30.s64 = ctx.r3.s64 + -4;
	// li r28,27
	r28.s64 = 27;
loc_8224DDF4:
	// lwz r31,4(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x8224de20
	if (ctx.cr6.eq) goto loc_8224DE20;
loc_8224DE00:
	// lwz r29,12(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x82255b70
	ctx.lr = 0x8224DE0C;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8224DE14;
	sub_82255B70(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x8224de00
	if (!ctx.cr6.eq) goto loc_8224DE00;
loc_8224DE20:
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r28,r28,-1
	ctx.xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	r30.u32 = ea;
	// bne 0x8224ddf4
	if (!ctx.cr0.eq) goto loc_8224DDF4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8224F1E8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x8224e8e8
	ctx.lr = 0x8224F204;
	sub_8224E8E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8227af18
	ctx.lr = 0x8224F210;
	sub_8227AF18(ctx, base);
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

DEFINE_REX_FUNC(sub_82251988) {
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
	// addi r10,r10,-5876
	ctx.r10.s64 = ctx.r10.s64 + -5876;
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
	// addi r8,r8,-8408
	ctx.r8.s64 = ctx.r8.s64 + -8408;
	// addi r11,r7,-22296
	ctx.r11.s64 = ctx.r7.s64 + -22296;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27496
	ctx.r10.s64 = ctx.r6.s64 + 27496;
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
	// bl 0x8224ee28
	ctx.lr = 0x822519FC;
	sub_8224EE28(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23536
	ctx.r4.s64 = ctx.r11.s64 + 23536;
	// bl 0x822512d8
	ctx.lr = 0x82251A14;
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

DEFINE_REX_FUNC(sub_82252D80) {
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
	// addi r10,r10,-4988
	ctx.r10.s64 = ctx.r10.s64 + -4988;
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
	// addi r9,r9,-5044
	ctx.r9.s64 = ctx.r9.s64 + -5044;
	// std r31,32(r11)
	REX_STORE_U64(ctx.r11.u32 + 32, r31.u64);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r8,r8,-6880
	ctx.r8.s64 = ctx.r8.s64 + -6880;
	// addi r11,r7,-6520
	ctx.r11.s64 = ctx.r7.s64 + -6520;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r10,r6,27816
	ctx.r10.s64 = ctx.r6.s64 + 27816;
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
	// bl 0x82249418
	ctx.lr = 0x82252DF4;
	sub_82249418(ctx, base);
	// stw r3,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23672
	ctx.r4.s64 = ctx.r11.s64 + 23672;
	// bl 0x822512d8
	ctx.lr = 0x82252E0C;
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

DEFINE_REX_FUNC(sub_82255B6C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82255B88) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82255B90;
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
	// beq cr6,0x82255bbc
	if (ctx.cr6.eq) goto loc_82255BBC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82255bbc
	if (!ctx.cr6.eq) goto loc_82255BBC;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// bl 0x823cd250
	ctx.lr = 0x82255BB4;
	sub_823CD250(ctx, base);
loc_82255BB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82255c10
	goto loc_82255C10;
loc_82255BBC:
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cd118
	ctx.lr = 0x82255BC8;
	sub_823CD118(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82255bb4
	if (ctx.cr0.eq) goto loc_82255BB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x82255c0c
	if (ctx.cr6.eq) goto loc_82255C0C;
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd270
	ctx.lr = 0x82255BE4;
	sub_823CD270(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, ctx.xer);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// blt cr6,0x82255bf4
	if (ctx.cr6.lt) goto loc_82255BF4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82255BF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82255C00;
	sub_822D4FA0(ctx, base);
	// lis r4,9358
	ctx.r4.s64 = 613285888;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cd250
	ctx.lr = 0x82255C0C;
	sub_823CD250(ctx, base);
loc_82255C0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82255C10:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82256F28) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82256f8c
	if (ctx.cr6.eq) goto loc_82256F8C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82256f8c
	if (ctx.cr6.eq) goto loc_82256F8C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r4,23544(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 23544);
	// bl 0x82255c88
	ctx.lr = 0x82256F68;
	sub_82255C88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82256f7c
	if (!ctx.cr0.eq) goto loc_82256F7C;
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,22
	ctx.r3.u64 = ctx.r3.u64 | 22;
	// b 0x82256f94
	goto loc_82256F94;
loc_82256F7C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8225c5e8
	ctx.lr = 0x82256F88;
	sub_8225C5E8(ctx, base);
	// b 0x82256f94
	goto loc_82256F94;
loc_82256F8C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82256F94:
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

DEFINE_REX_FUNC(sub_82258F38) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82258f50
	if (!ctx.cr6.eq) goto loc_82258F50;
	// blr 
	return;
loc_82258F50:
	// b 0x82246418
	sub_82246418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225A078) {
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
	// addi r31,r11,29808
	r31.s64 = ctx.r11.s64 + 29808;
	// lwz r11,29828(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 29828);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225a0c0
	if (!ctx.cr0.eq) goto loc_8225A0C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,29828(r10)
	REX_STORE_U32(ctx.r10.u32 + 29828, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8227ad18
	ctx.lr = 0x8225A0B4;
	sub_8227AD18(ctx, base);
	// lis r11,-32179
	ctx.r11.s64 = -2108882944;
	// addi r3,r11,15760
	ctx.r3.s64 = ctx.r11.s64 + 15760;
	// bl 0x822d5848
	ctx.lr = 0x8225A0C0;
	sub_822D5848(ctx, base);
loc_8225A0C0:
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

DEFINE_REX_FUNC(sub_8225BB70) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82255620
	ctx.lr = 0x8225BB9C;
	sub_82255620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225bbb4
	if (!ctx.cr0.eq) goto loc_8225BBB4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255b70
	ctx.lr = 0x8225BBAC;
	sub_82255B70(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8225bbd0
	goto loc_8225BBD0;
loc_8225BBB4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8225ba10
	ctx.lr = 0x8225BBC0;
	sub_8225BA10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82255b70
	ctx.lr = 0x8225BBCC;
	sub_82255B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8225BBD0:
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

DEFINE_REX_FUNC(sub_8225D318) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225d3c4
	if (ctx.cr6.eq) goto loc_8225D3C4;
	// bl 0x822d6a10
	ctx.lr = 0x8225D33C;
	sub_822D6A10(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,104(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 104);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8225d38c
	if (ctx.cr6.eq) goto loc_8225D38C;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8225d3b8
	if (!ctx.cr6.lt) goto loc_8225D3B8;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225D378:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8225d378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225D378;
	// b 0x8225d3b8
	goto loc_8225D3B8;
loc_8225D38C:
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8225d3b8
	if (!ctx.cr6.lt) goto loc_8225D3B8;
	// subf r10,r11,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r11.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r8,-2
	ctx.r9.s64 = ctx.r8.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8225D3A4:
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lhzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r7.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sthu r7,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r7.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x8225d3a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225D3A4;
loc_8225D3B8:
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r10,0
	ctx.r10.s64 = 0;
	// sthx r10,r11,r8
	REX_STORE_U16(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u16);
loc_8225D3C4:
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

DEFINE_REX_FUNC(sub_8225F548) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x8225e810
	ctx.lr = 0x8225F580;
	sub_8225E810(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225F58C;
	sub_8224DA00(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x822d7b58
	ctx.lr = 0x8225F598;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

DEFINE_REX_FUNC(sub_82264118) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// beq cr6,0x822641bc
	if (ctx.cr6.eq) goto loc_822641BC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822641b4
	if (ctx.cr6.eq) goto loc_822641B4;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822641b4
	if (ctx.cr6.eq) goto loc_822641B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225e9f8
	ctx.lr = 0x82264164;
	sub_8225E9F8(ctx, base);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82263df0
	ctx.lr = 0x82264178;
	sub_82263DF0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82256c60
	ctx.lr = 0x822641A0;
	sub_82256C60(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82258b88
	ctx.lr = 0x822641B0;
	sub_82258B88(ctx, base);
	// b 0x822641bc
	goto loc_822641BC;
loc_822641B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8225e9f8
	ctx.lr = 0x822641BC;
	sub_8225E9F8(ctx, base);
loc_822641BC:
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x822d7b58
	ctx.lr = 0x822641C4;
	sub_822D7B58(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267228) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822672a8
	if (ctx.cr6.eq) goto loc_822672A8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822672a8
	if (ctx.cr6.eq) goto loc_822672A8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bge 0x8226725c
	if (!ctx.cr0.lt) goto loc_8226725C;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_8226725C:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r9,12(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_822672A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226A278) {
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
	ctx.lr = 0x8226A280;
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r10,232(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r9,124(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f0,132(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmuls f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bge cr6,0x8226a368
	if (!ctx.cr6.lt) goto loc_8226A368;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A2C4;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226a368
	if (!ctx.cr6.gt) goto loc_8226A368;
loc_8226A2D8:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x8225ed40
	ctx.lr = 0x8226A2EC;
	sub_8225ED40(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x8226A300;
	sub_8225E988(ctx, base);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f12,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f31,f31,f0
	f31.f64 = double(float(f31.f64 - ctx.f0.f64));
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + f31.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x8226a2d8
	if (ctx.cr6.gt) goto loc_8226A2D8;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8226a368
	if (!ctx.cr6.eq) goto loc_8226A368;
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// lwz r8,228(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 228);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r10,232(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 232);
	// divw r7,r9,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r9.s32 / ctx.r8.s32 : 0);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// andc r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r6.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// twlgei r9,-1
	if (ctx.r9.s32 == -1 || ctx.r9.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A368;
	sub_8225EB40(ctx, base);
loc_8226A368:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268e00
	ctx.lr = 0x8226A370;
	sub_82268E00(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82256c10
	ctx.lr = 0x8226A384;
	sub_82256C10(ctx, base);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// lfs f13,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8226a40c
	if (!ctx.cr6.gt) goto loc_8226A40C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8226a3b0
	if (!ctx.cr6.eq) goto loc_8226A3B0;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 124);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225eb40
	ctx.lr = 0x8226A3B0;
	sub_8225EB40(ctx, base);
loc_8226A3B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r9,0
	ctx.r9.s64 = 0;
	// fsubs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// li r29,0
	r29.s64 = 0;
	// stw r9,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// ble cr6,0x8226a528
	if (!ctx.cr6.gt) goto loc_8226A528;
	// li r30,0
	r30.s64 = 0;
loc_8226A3E4:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A3F4;
	sub_8225E9F8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a3e4
	if (ctx.cr6.lt) goto loc_8226A3E4;
	// b 0x8226a528
	goto loc_8226A528;
loc_8226A40C:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226a528
	if (!ctx.cr6.lt) goto loc_8226A528;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8226a528
	if (!ctx.cr6.gt) goto loc_8226A528;
	// li r29,0
	r29.s64 = 0;
loc_8226A434:
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// lwz r10,240(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 240);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8226a528
	if (!ctx.cr6.lt) goto loc_8226A528;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x8226A45C;
	sub_8225E9F8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82256c10
	ctx.lr = 0x8226A47C;
	sub_82256C10(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,176(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 176);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r30
	ctx.r11.u64 = r30.u64 - ctx.r11.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8225e988
	ctx.lr = 0x8226A4A0;
	sub_8225E988(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + f31.f64));
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x82256c60
	ctx.lr = 0x8226A4CC;
	sub_82256C60(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// bl 0x82264b58
	ctx.lr = 0x8226A4E8;
	sub_82264B58(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lfs f2,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x82258b88
	ctx.lr = 0x8226A4FC;
	sub_82258B88(ctx, base);
	// lwz r11,232(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 232);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + r28.u64;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwzx r3,r11,r29
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// bl 0x822562f8
	ctx.lr = 0x8226A514;
	sub_822562F8(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8226a434
	if (ctx.cr6.lt) goto loc_8226A434;
loc_8226A528:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822d7b58
	ctx.lr = 0x8226A530;
	sub_822D7B58(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-48(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82278B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82278B80;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82278bb0
	if (!ctx.cr6.eq) goto loc_82278BB0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82278c3c
	goto loc_82278C3C;
loc_82278BB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822465c0
	ctx.lr = 0x82278BC0;
	sub_822465C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82278c3c
	if (ctx.cr0.lt) goto loc_82278C3C;
	// clrlwi. r30,r30,24
	r30.u64 = r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82278c18
	if (ctx.cr0.eq) goto loc_82278C18;
loc_82278BD0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822461f0
	ctx.lr = 0x82278BDC;
	sub_822461F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82278c3c
	if (ctx.cr0.lt) goto loc_82278C3C;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82278c44
	if (ctx.cr6.eq) goto loc_82278C44;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822465c0
	ctx.lr = 0x82278C00;
	sub_822465C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82278c3c
	if (ctx.cr0.lt) goto loc_82278C3C;
	// addi r11,r30,255
	ctx.r11.s64 = r30.s64 + 255;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// bne 0x82278bd0
	if (!ctx.cr0.eq) goto loc_82278BD0;
loc_82278C18:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r28,24
	ctx.r11.u64 = r28.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82278c44
	if (!ctx.cr6.lt) goto loc_82278C44;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mulli r11,r11,48
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(48));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82278C3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
loc_82278C44:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,7
	ctx.r3.u64 = ctx.r3.u64 | 7;
	// b 0x82278c3c
	goto loc_82278C3C;
}

DEFINE_REX_FUNC(sub_8227B7C0) {
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
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_8227B7DC:
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
	// bne 0x8227b7dc
	if (!ctx.cr0.eq) goto loc_8227B7DC;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227b828
	if (!ctx.cr6.eq) goto loc_8227B828;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227b824
	if (!ctx.cr0.eq) goto loc_8227B824;
	// bl 0x8227b848
	ctx.lr = 0x8227B818;
	sub_8227B848(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82255b70
	ctx.lr = 0x8227B820;
	sub_82255B70(ctx, base);
	// b 0x8227b828
	goto loc_8227B828;
loc_8227B824:
	// bl 0x8227b848
	ctx.lr = 0x8227B828;
	sub_8227B848(ctx, base);
loc_8227B828:
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

DEFINE_REX_FUNC(sub_8227D4D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8227D4D8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bge cr6,0x8227d500
	if (!ctx.cr6.lt) goto loc_8227D500;
loc_8227D4F4:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,28
	ctx.r3.u64 = ctx.r3.u64 | 28;
	// b 0x8227d590
	goto loc_8227D590;
loc_8227D500:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r10,r10,-9
	ctx.r10.s64 = ctx.r10.s64 + -9;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lbz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 8);
	// rotlwi r31,r11,1
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, ctx.xer);
	// blt cr6,0x8227d4f4
	if (ctx.cr6.lt) goto loc_8227D4F4;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x82245ff0
	ctx.lr = 0x8227D544;
	sub_82245FF0(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8227d55c
	if (!ctx.cr0.eq) goto loc_8227D55C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227d590
	goto loc_8227D590;
loc_8227D55C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 0);
	// bl 0x822d4fa0
	ctx.lr = 0x8227D568;
	sub_822D4FA0(ctx, base);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// sthx r11,r10,r31
	REX_STORE_U16(ctx.r10.u32 + r31.u32, ctx.r11.u16);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - r31.u64;
	// stw r11,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r11.u32);
loc_8227D590:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8227F570) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82255b48
	ctx.lr = 0x8227F58C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8227f5b0
	if (ctx.cr0.eq) goto loc_8227F5B0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1572
	ctx.r11.s64 = ctx.r11.s64 + 1572;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8227f5b4
	goto loc_8227F5B4;
loc_8227F5B0:
	// li r31,0
	r31.s64 = 0;
loc_8227F5B4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8227f5c8
	if (!ctx.cr6.eq) goto loc_8227F5C8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8227f5f4
	goto loc_8227F5F4;
loc_8227F5C8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822774e0
	ctx.lr = 0x8227F5D4;
	sub_822774E0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8227F5EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r30,31
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = r30.s32 >> 31;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & r30.u64;
loc_8227F5F4:
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

DEFINE_REX_FUNC(sub_82281698) {
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
	// clrlwi r11,r4,27
	ctx.r11.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// addi r11,r11,19
	ctx.r11.s64 = ctx.r11.s64 + 19;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281700
	if (ctx.cr6.eq) goto loc_82281700;
loc_822816C0:
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822816d8
	if (ctx.cr6.eq) goto loc_822816D8;
	// lwz r4,72(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822816c0
	if (!ctx.cr6.eq) goto loc_822816C0;
loc_822816D8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82281700
	if (ctx.cr6.eq) goto loc_82281700;
	// lbz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82281700
	if (ctx.cr0.eq) goto loc_82281700;
	// bl 0x82280c78
	ctx.lr = 0x822816F0;
	sub_82280C78(ctx, base);
	// bl 0x82280c20
	ctx.lr = 0x822816F4;
	sub_82280C20(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30560
	ctx.r3.s64 = ctx.r11.s64 + 30560;
	// bl 0x8227ff40
	ctx.lr = 0x82281700;
	sub_8227FF40(ctx, base);
loc_82281700:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82284D28) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r4,24(r1)
	REX_STORE_U64(ctx.r1.u32 + 24, ctx.r4.u64);
	// lfs f13,24(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// lfs f9,32(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// lfs f11,40(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,44(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,36(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsubs f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f0.f64));
	// fsubs f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f13,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f0,f0,f10,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, -ctx.f12.f64)));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82284d7c
	if (!ctx.cr6.gt) goto loc_82284D7C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82284D7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,15944(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15944);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286430) {
	REX_FUNC_PROLOGUE();
	// stw r4,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286558) {
	REX_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r4,184(r3)
	REX_STORE_U32(ctx.r3.u32 + 184, ctx.r4.u32);
	// stw r11,144(r3)
	REX_STORE_U32(ctx.r3.u32 + 144, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82286B00) {
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
	// lwz r3,332(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// li r11,37
	ctx.r11.s64 = 37;
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r10,328(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 328);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82286B44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,56
	ctx.r4.s64 = 56;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,60
	ctx.r4.s64 = 60;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,332(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,304
	ctx.r4.s64 = 304;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82286BB4;
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

DEFINE_REX_FUNC(sub_82288DE0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82288df4
	if (!ctx.cr6.eq) goto loc_82288DF4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82288DF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_822893C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822894F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_822894FC:
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
	// bne 0x822894fc
	if (!ctx.cr0.eq) goto loc_822894FC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228AB40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8228AB48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32163
	r30.s64 = -2107834368;
	// li r31,0
	r31.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, r31.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r11,31388(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 31388);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228ab78
	if (!ctx.cr6.eq) goto loc_8228AB78;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x8228abe4
	goto loc_8228ABE4;
loc_8228AB78:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82255b48
	ctx.lr = 0x8228AB80;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228ab90
	if (ctx.cr0.eq) goto loc_8228AB90;
	// bl 0x82289698
	ctx.lr = 0x8228AB8C;
	sub_82289698(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8228AB90:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8228aba4
	if (!ctx.cr6.eq) goto loc_8228ABA4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8228abe4
	goto loc_8228ABE4;
loc_8228ABA4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,31388(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 31388);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82287db0
	ctx.lr = 0x8228ABB4;
	sub_82287DB0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x8228abdc
	if (!ctx.cr0.lt) goto loc_8228ABDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8228ABD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8228abe4
	goto loc_8228ABE4;
loc_8228ABDC:
	// stw r31,0(r28)
	REX_STORE_U32(r28.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228ABE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8228D428) {
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
	ctx.lr = 0x8228D430;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// std r4,200(r1)
	REX_STORE_U64(ctx.r1.u32 + 200, ctx.r4.u64);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// lwz r9,-2144(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// lwz r11,31384(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 31384);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq cr6,0x8228d56c
	if (ctx.cr6.eq) goto loc_8228D56C;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r11,31380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31380);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d56c
	if (ctx.cr6.eq) goto loc_8228D56C;
	// lis r31,-32163
	r31.s64 = -2107834368;
	// lwz r28,204(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r29,200(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// lis r30,-32163
	r30.s64 = -2107834368;
	// lwz r3,31396(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 31396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d4e4
	if (ctx.cr6.eq) goto loc_8228D4E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82222dc0
	ctx.lr = 0x8228D48C;
	sub_82222DC0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8228d4a4
	if (ctx.cr6.gt) goto loc_8228D4A4;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8228d4d8
	if (!ctx.cr6.gt) goto loc_8228D4D8;
loc_8228D4A4:
	// lwz r11,31396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228d4c0
	if (ctx.cr6.eq) goto loc_8228D4C0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82216cc8
	ctx.lr = 0x8228D4B8;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31396(r31)
	REX_STORE_U32(r31.u32 + 31396, ctx.r11.u32);
loc_8228D4C0:
	// lwz r3,31400(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 31400);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228d4dc
	if (ctx.cr6.eq) goto loc_8228D4DC;
	// bl 0x82216cc8
	ctx.lr = 0x8228D4D0;
	sub_82216CC8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,31400(r30)
	REX_STORE_U32(r30.u32 + 31400, ctx.r11.u32);
loc_8228D4D8:
	// lwz r11,31396(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 31396);
loc_8228D4DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228d55c
	if (!ctx.cr6.eq) goto loc_8228D55C;
loc_8228D4E4:
	// addi r11,r29,31
	ctx.r11.s64 = r29.s64 + 31;
	// addi r10,r28,31
	ctx.r10.s64 = r28.s64 + 31;
	// rlwinm r29,r11,0,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r10,0,0,26
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// bl 0x82289428
	ctx.lr = 0x8228D4F8;
	sub_82289428(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x82289408
	ctx.lr = 0x8228D500;
	sub_82289408(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// ori r8,r8,390
	ctx.r8.u64 = ctx.r8.u64 | 390;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82223018
	ctx.lr = 0x8228D528;
	sub_82223018(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,31396(r31)
	REX_STORE_U32(r31.u32 + 31396, ctx.r3.u32);
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r31,r10,r11
	r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x8228d554
	if (!ctx.cr0.lt) goto loc_8228D554;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8228D54C;
	sub_822D7B58(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8228d57c
	goto loc_8228D57C;
loc_8228D554:
	// stw r3,31400(r30)
	REX_STORE_U32(r30.u32 + 31400, ctx.r3.u32);
	// bl 0x82215e78
	ctx.lr = 0x8228D55C;
	sub_82215E78(ctx, base);
loc_8228D55C:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8228D564;
	sub_822D7B58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8228d57c
	goto loc_8228D57C;
loc_8228D56C:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x822d7b58
	ctx.lr = 0x8228D574;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_8228D57C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82293118) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82293140;
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

DEFINE_REX_FUNC(sub_82293540) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82222e80
	ctx.lr = 0x82293564;
	sub_82222E80(ctx, base);
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

DEFINE_REX_FUNC(sub_82294208) {
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
	ctx.lr = 0x82294210;
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// bne cr6,0x82294268
	if (!ctx.cr6.eq) goto loc_82294268;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,13220(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 13220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * ctx.f0.f64));
loc_8229423C:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
	// beq cr6,0x82294270
	if (ctx.cr6.eq) goto loc_82294270;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82255b48
	ctx.lr = 0x82294254;
	sub_82255B48(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r30,0(r29)
	REX_STORE_U32(r29.u32 + 0, r30.u32);
	// bne 0x8229427c
	if (!ctx.cr0.eq) goto loc_8229427C;
	// li r31,-8
	r31.s64 = -8;
	// b 0x822942a4
	goto loc_822942A4;
loc_82294268:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8229423c
	if (ctx.cr6.eq) goto loc_8229423C;
loc_82294270:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x822942a8
	goto loc_822942A8;
loc_8229427C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82294140
	ctx.lr = 0x82294290;
	sub_82294140(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822942a4
	if (!ctx.cr0.lt) goto loc_822942A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82255b70
	ctx.lr = 0x822942A0;
	sub_82255B70(ctx, base);
	// stw r27,0(r29)
	REX_STORE_U32(r29.u32 + 0, r27.u32);
loc_822942A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822942A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822979A8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,20(r11)
	REX_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82298028) {
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
	ctx.lr = 0x82298030;
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r25,4(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,12(r3)
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r24,16(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,-2144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -2144);
	// li r30,0
	r30.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bgt cr6,0x82298080
	if (ctx.cr6.gt) goto loc_82298080;
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x822d7b58
	ctx.lr = 0x82298074;
	sub_822D7B58(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x8229825c
	goto loc_8229825C;
loc_82298080:
	// lbz r11,21(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82298094
	if (ctx.cr0.eq) goto loc_82298094;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r11,13876
	r27.s64 = ctx.r11.s64 + 13876;
loc_82298094:
	// addic. r20,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r20.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble 0x82298250
	if (!ctx.cr0.gt) goto loc_82298250;
loc_8229809C:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x822982b8
	ctx.lr = 0x822980B8;
	sub_822982B8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
loc_822980C4:
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82298184
	if (!ctx.cr6.eq) goto loc_82298184;
	// li r30,0
	r30.s64 = 0;
loc_822980D8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// beq cr6,0x822980f4
	if (ctx.cr6.eq) goto loc_822980F4;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r24.u32);
	// li r29,0
	r29.s64 = 0;
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822980f8
	if (!ctx.cr0.eq) goto loc_822980F8;
loc_822980F4:
	// li r29,1
	r29.s64 = 1;
loc_822980F8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// beq cr6,0x8229811c
	if (ctx.cr6.eq) goto loc_8229811C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne cr6,0x8229811c
	if (!ctx.cr6.eq) goto loc_8229811C;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822980d8
	if (ctx.cr6.eq) goto loc_822980D8;
loc_8229811C:
	// subf r11,r30,r31
	ctx.r11.u64 = r31.u64 - r30.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822982b8
	ctx.lr = 0x82298138;
	sub_822982B8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x8229815c
	if (ctx.cr6.eq) goto loc_8229815C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x8229815c
	if (!ctx.cr6.eq) goto loc_8229815C;
	// add r11,r31,r24
	ctx.r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229815c
	if (!ctx.cr0.eq) goto loc_8229815C;
	// li r28,1
	r28.s64 = 1;
loc_8229815C:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bctrl 
	ctx.lr = 0x82298174;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ldx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822981f4
	goto loc_822981F4;
loc_82298184:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822982b8
	ctx.lr = 0x8229819C;
	sub_822982B8(ctx, base);
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmpw cr6,r31,r25
	ctx.cr6.compare<int32_t>(r31.s32, r25.s32, ctx.xer);
	// beq cr6,0x822981bc
	if (ctx.cr6.eq) goto loc_822981BC;
	// lbzx r11,r31,r24
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + r24.u32);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822981bc
	if (ctx.cr0.eq) goto loc_822981BC;
	// li r29,0
	r29.s64 = 0;
	// b 0x822981dc
	goto loc_822981DC;
loc_822981BC:
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x822981dc
	if (!ctx.cr6.eq) goto loc_822981DC;
	// add r11,r31,r24
	ctx.r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822981dc
	if (!ctx.cr0.eq) goto loc_822981DC;
	// li r28,1
	r28.s64 = 1;
loc_822981DC:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82297e90
	ctx.lr = 0x822981F0;
	sub_82297E90(ctx, base);
	// ld r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
loc_822981F4:
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82298250
	if (ctx.cr6.lt) goto loc_82298250;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq cr6,0x822980c4
	if (ctx.cr6.eq) goto loc_822980C4;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(r21.s32, 0, ctx.xer);
	// bne cr6,0x82298224
	if (!ctx.cr6.eq) goto loc_82298224;
	// add r11,r31,r24
	ctx.r11.u64 = r31.u64 + r24.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82298248
	if (ctx.cr0.eq) goto loc_82298248;
loc_82298224:
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bctrl 
	ctx.lr = 0x82298244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82298248:
	// cmpw cr6,r31,r20
	ctx.cr6.compare<int32_t>(r31.s32, r20.s32, ctx.xer);
	// blt cr6,0x8229809c
	if (ctx.cr6.lt) goto loc_8229809C;
loc_82298250:
	// lwz r3,224(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// bl 0x822d7b58
	ctx.lr = 0x82298258;
	sub_822D7B58(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8229825C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x822d4eb8
	return;
}

DEFINE_REX_FUNC(sub_822A154C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A1550) {
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
	// lwz r10,328(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x822a1590
	if (!ctx.cr6.eq) goto loc_822A1590;
	// lwz r10,332(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 332);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822a1590
	if (!ctx.cr6.eq) goto loc_822A1590;
	// lwz r10,336(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 336);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x822a1590
	if (!ctx.cr6.eq) goto loc_822A1590;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822a15c8
	if (ctx.cr6.eq) goto loc_822A15C8;
loc_822A1590:
	// lbz r10,228(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 228);
	// stw r11,328(r3)
	REX_STORE_U32(ctx.r3.u32 + 328, ctx.r11.u32);
	// stw r5,332(r3)
	REX_STORE_U32(ctx.r3.u32 + 332, ctx.r5.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r6,336(r3)
	REX_STORE_U32(ctx.r3.u32 + 336, ctx.r6.u32);
	// stw r7,340(r3)
	REX_STORE_U32(ctx.r3.u32 + 340, ctx.r7.u32);
	// beq 0x822a15c8
	if (ctx.cr0.eq) goto loc_822A15C8;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82212488
	ctx.lr = 0x822A15C8;
	sub_82212488(ctx, base);
loc_822A15C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A3E58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822a3e6c
	if (!ctx.cr0.eq) goto loc_822A3E6C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_822A3E6C:
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// b 0x822a3dc8
	sub_822A3DC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A4F90) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x822d4d68
	ctx.lr = 0x822A4FB4;
	sub_822D4D68(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d4c88
	ctx.lr = 0x822A4FC0;
	sub_822D4C88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f12,24(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,20(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f30,40(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// lfs f13,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 16, temp.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 28, temp.u32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f12,36(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 36, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 56, temp.u32);
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 60, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-32(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9880) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A99C0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,452(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r11.u32);
	// stw r8,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// stw r7,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r7.u32);
	// lwzx r3,r10,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9C68) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,1512(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1512);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9D40) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r3,1672(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1672);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A9E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,80
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(80));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,1656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1656);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x822a9ec4
	if (ctx.cr6.eq) goto loc_822A9EC4;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,1660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1660);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 / ctx.f12.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f12,1664(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 1664, temp.u32);
	// lfs f12,1660(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1660);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,1668(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 1668, temp.u32);
loc_822A9EC4:
	// lwz r11,1428(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1428);
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,1428(r3)
	REX_STORE_U32(ctx.r3.u32 + 1428, ctx.r11.u32);
	// lwz r3,31464(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 31464);
	// b 0x8229a710
	sub_8229A710(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AB558) {
	REX_FUNC_PROLOGUE();
	// lbz r10,254(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 254);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stb r4,254(r3)
	REX_STORE_U8(ctx.r3.u32 + 254, ctx.r4.u8);
	// b 0x822ab3d8
	sub_822AB3D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822AC190) {
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
	ctx.lr = 0x822AC198;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi. r27,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	r27.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq 0x822ac1ec
	if (ctx.cr0.eq) goto loc_822AC1EC;
	// li r30,0
	r30.s64 = 0;
loc_822AC1C0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r29,r30,r11
	r29.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d9950
	ctx.lr = 0x822AC1D4;
	sub_822D9950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ac1f8
	if (ctx.cr0.eq) goto loc_822AC1F8;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(r28.u32, r27.u32, ctx.xer);
	// blt cr6,0x822ac1c0
	if (ctx.cr6.lt) goto loc_822AC1C0;
loc_822AC1EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AC1F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_822AC1F8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x822ac1f0
	goto loc_822AC1F0;
}

DEFINE_REX_FUNC(sub_822ADA98) {
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
	ctx.lr = 0x822ADAA0;
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
	// bl 0x822ad190
	ctx.lr = 0x822ADAD8;
	sub_822AD190(ctx, base);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(r30.u32, r31.u32, ctx.xer);
	// lwz r5,31516(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 31516);
	// bge cr6,0x822adb54
	if (!ctx.cr6.lt) goto loc_822ADB54;
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
loc_822ADAF4:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// lwz r7,-4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,188(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822adb28
	if (ctx.cr6.lt) goto loc_822ADB28;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADB28:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adb54
	if (!ctx.cr0.eq) goto loc_822ADB54;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822adb40
	if (ctx.cr6.lt) goto loc_822ADB40;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADB40:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adb54
	if (!ctx.cr0.eq) goto loc_822ADB54;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822adaf4
	if (ctx.cr6.lt) goto loc_822ADAF4;
loc_822ADB54:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// bge cr6,0x822adbbc
	if (!ctx.cr6.lt) goto loc_822ADBBC;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_822ADB68:
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,188(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lfs f13,188(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822adb90
	if (ctx.cr6.lt) goto loc_822ADB90;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADB90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adbbc
	if (!ctx.cr0.eq) goto loc_822ADBBC;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822adba8
	if (ctx.cr6.lt) goto loc_822ADBA8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADBA8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adbbc
	if (!ctx.cr0.eq) goto loc_822ADBBC;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, ctx.xer);
	// blt cr6,0x822adb68
	if (ctx.cr6.lt) goto loc_822ADB68;
loc_822ADBBC:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x822adc34
	goto loc_822ADC34;
loc_822ADBC8:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r10,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwzx r4,r3,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r4.u32);
	// lfs f0,188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,188(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x822adbfc
	if (ctx.cr6.lt) goto loc_822ADBFC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADBFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adc30
	if (!ctx.cr0.eq) goto loc_822ADC30;
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x822adc14
	if (ctx.cr6.lt) goto loc_822ADC14;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822ADC14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822adc3c
	if (!ctx.cr0.eq) goto loc_822ADC3C;
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_822ADC2C:
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
loc_822ADC30:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_822ADC34:
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// blt cr6,0x822adbc8
	if (ctx.cr6.lt) goto loc_822ADBC8;
loc_822ADC3C:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
	// ble cr6,0x822adcbc
	if (!ctx.cr6.gt) goto loc_822ADCBC;
loc_822ADC44:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// lwz r4,-4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lfs f0,188(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 188);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,188(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 188);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x822adc7c
	if (ctx.cr6.lt) goto loc_822ADC7C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ADC7C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822adcac
	if (!ctx.cr0.eq) goto loc_822ADCAC;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r10,1
	ctx.r10.s64 = 1;
	// blt cr6,0x822adc94
	if (ctx.cr6.lt) goto loc_822ADC94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822ADC94:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822adcb8
	if (!ctx.cr0.eq) goto loc_822ADCB8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,-4(r9)
	ea = -4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822ADCAC:
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822adc44
	if (ctx.cr6.lt) goto loc_822ADC44;
loc_822ADCB8:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, r30.u32, ctx.xer);
loc_822ADCBC:
	// bne cr6,0x822add00
	if (!ctx.cr6.eq) goto loc_822ADD00;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// beq cr6,0x822add54
	if (ctx.cr6.eq) goto loc_822ADD54;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822adce0
	if (ctx.cr6.eq) goto loc_822ADCE0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_822ADCE0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// stw r3,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// b 0x822adc2c
	goto loc_822ADC2C;
loc_822ADD00:
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, r29.u32, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x822add40
	if (!ctx.cr6.eq) goto loc_822ADD40;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822add2c
	if (ctx.cr6.eq) goto loc_822ADD2C;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_822ADD2C:
	// lwzu r11,-4(r6)
	ea = -4 + ctx.r6.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x822adc34
	goto loc_822ADC34;
loc_822ADD40:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822adc30
	goto loc_822ADC30;
loc_822ADD54:
	// stw r9,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r9.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r6,4(r28)
	REX_STORE_U32(r28.u32 + 4, ctx.r6.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822BB6C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822BB6D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r30,12
	ctx.r4.s64 = r30.s64 + 12;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x822d6450
	ctx.lr = 0x822BB6F0;
	sub_822D6450(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// add r29,r10,r30
	r29.u64 = ctx.r10.u64 + r30.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 52);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mulli r5,r11,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// bl 0x822d4fa0
	ctx.lr = 0x822BB710;
	sub_822D4FA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b8668
	ctx.lr = 0x822BB72C;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bb73c
	if (ctx.cr0.eq) goto loc_822BB73C;
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 100);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
loc_822BB73C:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 60);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// rlwinm r5,r10,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + r29.u64;
	// bne cr6,0x822bb760
	if (!ctx.cr6.eq) goto loc_822BB760;
	// mulli r5,r10,24
	ctx.r5.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(24));
loc_822BB760:
	// bl 0x822d4fa0
	ctx.lr = 0x822BB764;
	sub_822D4FA0(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822b8668
	ctx.lr = 0x822BB778;
	sub_822B8668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bb790
	if (ctx.cr0.eq) goto loc_822BB790;
	// addi r4,r30,68
	ctx.r4.s64 = r30.s64 + 68;
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x822d4fa0
	ctx.lr = 0x822BB790;
	sub_822D4FA0(ctx, base);
loc_822BB790:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822C2240) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822C2248;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lis r10,1820
	ctx.r10.s64 = 119275520;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// ori r11,r10,29127
	ctx.r11.u64 = ctx.r10.u64 | 29127;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r30,-1
	r30.s64 = -1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// mulli r3,r4,36
	ctx.r3.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(36));
	// ble cr6,0x822c2280
	if (!ctx.cr6.gt) goto loc_822C2280;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822C2280:
	// bl 0x822c80d0
	ctx.lr = 0x822C2284;
	sub_822C80D0(ctx, base);
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c22a4
	if (!ctx.cr6.gt) goto loc_822C22A4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_822C22A4:
	// bl 0x822c80d0
	ctx.lr = 0x822C22A8;
	sub_822C80D0(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// mulli r5,r11,36
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// bl 0x822d5870
	ctx.lr = 0x822C22C0;
	sub_822D5870(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 52);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x822C22D4;
	sub_822D4FA0(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 48);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822C5A58) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,24504
	ctx.r11.s64 = ctx.r11.s64 + 24504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822c5a84
	if (ctx.cr0.eq) goto loc_822C5A84;
	// bl 0x822c80a8
	ctx.lr = 0x822C5A84;
	sub_822C80A8(ctx, base);
loc_822C5A84:
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

DEFINE_REX_FUNC(sub_822C5C48) {
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
	// lfs f0,112(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f13,116(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f12,120(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822C5C88;
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

DEFINE_REX_FUNC(sub_822C67A8) {
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
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r30,8(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822C67D8;
	sub_822A9AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821f3f40
	ctx.lr = 0x822C67E4;
	sub_821F3F40(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822a9aa8
	ctx.lr = 0x822C67F0;
	sub_822A9AA8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f270
	ctx.lr = 0x822C6800;
	sub_8229F270(ctx, base);
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
	ctx.lr = 0x822C6818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_822C8478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,624
	ctx.r10.s64 = 624;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3533
	ctx.r10.u64 = ctx.r10.u64 | 3533;
loc_822C848C:
	// mullw r9,r4,r10
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r4,0,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFF0000;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r7,r9,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r4,r9,1
	ctx.r4.s64 = ctx.r9.s64 + 1;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822c848c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822C848C;
	// li r11,624
	ctx.r11.s64 = 624;
	// stw r11,2500(r3)
	REX_STORE_U32(ctx.r3.u32 + 2500, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C9030) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822C9038;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822c9110
	if (ctx.cr6.eq) goto loc_822C9110;
	// bl 0x822c8af8
	ctx.lr = 0x822C9058;
	sub_822C8AF8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9110
	if (!ctx.cr0.eq) goto loc_822C9110;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822c9110
	if (!ctx.cr6.eq) goto loc_822C9110;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bne cr6,0x822c907c
	if (!ctx.cr6.eq) goto loc_822C907C;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
loc_822C907C:
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x822c9110
	if (ctx.cr0.eq) goto loc_822C9110;
	// clrlwi. r11,r29,30
	ctx.r11.u64 = r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9110
	if (!ctx.cr0.eq) goto loc_822C9110;
	// clrlwi. r11,r5,21
	ctx.r11.u64 = ctx.r5.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9110
	if (!ctx.cr0.eq) goto loc_822C9110;
	// clrlwi. r11,r28,21
	ctx.r11.u64 = r28.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c9110
	if (!ctx.cr0.eq) goto loc_822C9110;
	// li r30,0
	r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// addi r7,r31,20
	ctx.r7.s64 = r31.s64 + 20;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stb r11,68(r31)
	REX_STORE_U8(r31.u32 + 68, ctx.r11.u8);
	// stw r28,28(r31)
	REX_STORE_U32(r31.u32 + 28, r28.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(r31.u32 + 52, r30.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 56);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// bl 0x82209bf0
	ctx.lr = 0x822C90E4;
	sub_82209BF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822c911c
	if (!ctx.cr0.eq) goto loc_822C911C;
	// bl 0x822098c8
	ctx.lr = 0x822C90F0;
	sub_822098C8(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,997
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 997, ctx.xer);
	// bne cr6,0x822c9104
	if (!ctx.cr6.eq) goto loc_822C9104;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822c9114
	goto loc_822C9114;
loc_822C9104:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
loc_822C9110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822C9114:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_822C911C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,68(r31)
	REX_STORE_U8(r31.u32 + 68, r30.u8);
	// stw r11,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r11.u32);
	// b 0x822c9114
	goto loc_822C9114;
}

DEFINE_REX_FUNC(sub_822CC448) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,25964
	ctx.r11.s64 = ctx.r11.s64 + 25964;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x822cc474
	if (ctx.cr0.eq) goto loc_822CC474;
	// bl 0x822c80a8
	ctx.lr = 0x822CC474;
	sub_822C80A8(ctx, base);
loc_822CC474:
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

DEFINE_REX_FUNC(sub_822CD3A0) {
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
	// bl 0x822cd1b8
	ctx.lr = 0x822CD3BC;
	sub_822CD1B8(ctx, base);
	// addi r3,r31,536
	ctx.r3.s64 = r31.s64 + 536;
	// bl 0x82203958
	ctx.lr = 0x822CD3C4;
	sub_82203958(ctx, base);
	// addi r31,r31,536
	r31.s64 = r31.s64 + 536;
	// li r30,31
	r30.s64 = 31;
loc_822CD3CC:
	// addi r31,r31,-16
	r31.s64 = r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82203958
	ctx.lr = 0x822CD3D8;
	sub_82203958(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822cd3cc
	if (!ctx.cr0.lt) goto loc_822CD3CC;
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

DEFINE_REX_FUNC(sub_822CE288) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822CE290;
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
	ctx.lr = 0x822CE2B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,40(r31)
	REX_STORE_U8(r31.u32 + 40, r29.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CE2CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822CF4E8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822cf568
	if (ctx.cr6.eq) goto loc_822CF568;
	// lwz r5,4(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm. r11,r5,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf524
	if (ctx.cr0.eq) goto loc_822CF524;
	// clrlwi r5,r5,1
	ctx.r5.u64 = ctx.r5.u32 & 0x7FFFFFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x822cf528
	goto loc_822CF528;
loc_822CF524:
	// li r4,0
	ctx.r4.s64 = 0;
loc_822CF528:
	// bl 0x822d2318
	ctx.lr = 0x822CF52C;
	sub_822D2318(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822cf568
	if (ctx.cr6.eq) goto loc_822CF568;
	// bl 0x822d1a40
	ctx.lr = 0x822CF53C;
	sub_822D1A40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822cf568
	if (ctx.cr0.eq) goto loc_822CF568;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8229a710
	ctx.lr = 0x822CF54C;
	sub_8229A710(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822CF568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822CF568:
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

DEFINE_REX_FUNC(sub_822D19C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D19D0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x822d18b8
	ctx.lr = 0x822D19E0;
	sub_822D18B8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d19f0
	if (!ctx.cr0.eq) goto loc_822D19F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822d1a34
	goto loc_822D1A34;
loc_822D19F0:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 48);
	// addi r31,r30,48
	r31.s64 = r30.s64 + 48;
	// li r29,0
	r29.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r28.u32, ctx.xer);
	// bne cr6,0x822d1a1c
	if (!ctx.cr6.eq) goto loc_822D1A1C;
	// li r29,1
	r29.s64 = 1;
loc_822D1A1C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D1A30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_822D1A34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D2DB8) {
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
	ctx.lr = 0x822D2DC0;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// addi r25,r3,36
	r25.s64 = ctx.r3.s64 + 36;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2f00
	if (!ctx.cr6.eq) goto loc_822D2F00;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2f00
	if (!ctx.cr6.eq) goto loc_822D2F00;
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// mr r28,r31
	r28.u64 = r31.u64;
	// stw r29,4(r31)
	REX_STORE_U32(r31.u32 + 4, r29.u32);
	// li r26,2
	r26.s64 = 2;
	// li r27,-1
	r27.s64 = -1;
	// li r24,-5
	r24.s64 = -5;
loc_822D2E1C:
	// lis r11,606
	ctx.r11.s64 = 39714816;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// ori r11,r11,53399
	ctx.r11.u64 = ctx.r11.u64 | 53399;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r31,108
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(108));
	// ble cr6,0x822d2e38
	if (!ctx.cr6.gt) goto loc_822D2E38;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822D2E38:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x822d2e48
	if (!ctx.cr6.gt) goto loc_822D2E48;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822D2E48:
	// bl 0x822c80d0
	ctx.lr = 0x822D2E4C;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2e7c
	if (ctx.cr0.eq) goto loc_822D2E7C;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x822d2e70
	goto loc_822D2E70;
loc_822D2E64:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822d1668
	ctx.lr = 0x822D2E6C;
	sub_822D1668(ctx, base);
	// addi r30,r30,108
	r30.s64 = r30.s64 + 108;
loc_822D2E70:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822d2e64
	if (!ctx.cr0.lt) goto loc_822D2E64;
	// b 0x822d2e80
	goto loc_822D2E80;
loc_822D2E7C:
	// li r29,0
	r29.s64 = 0;
loc_822D2E80:
	// lis r11,1638
	ctx.r11.s64 = 107347968;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
	// stw r29,20(r28)
	REX_STORE_U32(r28.u32 + 20, r29.u32);
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r31,40
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(40));
	// ble cr6,0x822d2ea0
	if (!ctx.cr6.gt) goto loc_822D2EA0;
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_822D2EA0:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, r24.u32, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ble cr6,0x822d2eb0
	if (!ctx.cr6.gt) goto loc_822D2EB0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_822D2EB0:
	// bl 0x822c80d0
	ctx.lr = 0x822D2EB4;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d2ee8
	if (ctx.cr0.eq) goto loc_822D2EE8;
	// addi r29,r3,4
	r29.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r30,r29
	r30.u64 = r29.u64;
	// b 0x822d2edc
	goto loc_822D2EDC;
loc_822D2ECC:
	// stw r27,0(r30)
	REX_STORE_U32(r30.u32 + 0, r27.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822c88c0
	ctx.lr = 0x822D2ED8;
	sub_822C88C0(ctx, base);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
loc_822D2EDC:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bge 0x822d2ecc
	if (!ctx.cr0.lt) goto loc_822D2ECC;
	// b 0x822d2eec
	goto loc_822D2EEC;
loc_822D2EE8:
	// li r29,0
	r29.s64 = 0;
loc_822D2EEC:
	// stw r29,12(r28)
	REX_STORE_U32(r28.u32 + 12, r29.u32);
	// addic. r26,r26,-1
	ctx.xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	ctx.cr0.compare<int32_t>(r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x822d2e1c
	if (!ctx.cr0.eq) goto loc_822D2E1C;
	// li r28,1
	r28.s64 = 1;
loc_822D2F00:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822D2F14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_822D7830) {
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
	ctx.lr = 0x822D7838;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822d7884
	if (!ctx.cr6.eq) goto loc_822D7884;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d7884
	if (ctx.cr6.eq) goto loc_822D7884;
loc_822D7868:
	// bl 0x822db6c0
	ctx.lr = 0x822D786C;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822D7878;
	sub_822D6910(ctx, base);
loc_822D7878:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822D787C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ec8
	return;
loc_822D7884:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822d7868
	if (ctx.cr6.eq) goto loc_822D7868;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x822d7868
	if (ctx.cr6.eq) goto loc_822D7868;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, ctx.xer);
	// bgt cr6,0x822d7878
	if (ctx.cr6.gt) goto loc_822D7878;
loc_822D789C:
	// rlwinm. r28,r5,31,1,31
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq 0x822d790c
	if (ctx.cr0.eq) goto loc_822D790C;
	// clrlwi. r27,r5,31
	r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne 0x822d78b4
	if (!ctx.cr0.eq) goto loc_822D78B4;
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
loc_822D78B4:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r30.s32);
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// add r31,r11,r29
	r31.u64 = ctx.r11.u64 + r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bctrl 
	ctx.lr = 0x822D78CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d7904
	if (ctx.cr0.eq) goto loc_822D7904;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822d78f0
	if (!ctx.cr6.lt) goto loc_822D78F0;
	// subf r24,r30,r31
	r24.u64 = r31.u64 - r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// bne cr6,0x822d78f4
	if (!ctx.cr6.eq) goto loc_822D78F4;
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// b 0x822d78f8
	goto loc_822D78F8;
loc_822D78F0:
	// add r29,r31,r30
	r29.u64 = r31.u64 + r30.u64;
loc_822D78F4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
loc_822D78F8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(r29.u32, r24.u32, ctx.xer);
	// ble cr6,0x822d789c
	if (!ctx.cr6.gt) goto loc_822D789C;
	// b 0x822d7878
	goto loc_822D7878;
loc_822D7904:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x822d787c
	goto loc_822D787C;
loc_822D790C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d7878
	if (ctx.cr6.eq) goto loc_822D7878;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bctrl 
	ctx.lr = 0x822D7924;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & r29.u64;
	// b 0x822d787c
	goto loc_822D787C;
}

DEFINE_REX_FUNC(__savevmx_99) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(__restvmx_76) {
	REX_FUNC_PROLOGUE();
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

DEFINE_REX_FUNC(sub_822E1C48) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x822dc9d0
	ctx.lr = 0x822E1C64;
	sub_822DC9D0(ctx, base);
	// bl 0x822e1bc8
	ctx.lr = 0x822E1C68;
	sub_822E1BC8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822E3178) {
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
	ctx.lr = 0x822E3180;
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// lhz r8,10(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,836
	r20.s64 = ctx.r10.s64 + 836;
	// addi r30,r11,-16383
	r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	r21.u64 = REX_LOAD_U32(r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x822e3208
	if (!ctx.cr6.eq) goto loc_822E3208;
	// mr r11,r23
	ctx.r11.u64 = r23.u64;
loc_822E31D0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e31f0
	if (!ctx.cr6.eq) goto loc_822E31F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822e31d0
	if (ctx.cr6.lt) goto loc_822E31D0;
	// b 0x822e383c
	goto loc_822E383C;
loc_822E31F0:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// b 0x822e3840
	goto loc_822E3840;
loc_822E3208:
	// lwz r25,8(r20)
	r25.u64 = REX_LOAD_U32(r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	r26.s64 = r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// li r22,-1
	r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	r24.u64 = r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	r31.s64 = temp.s64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3354
	if (ctx.cr0.eq) goto loc_822E3354;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e32c0
	if (!ctx.cr0.eq) goto loc_822E32C0;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822e3354
	if (!ctx.cr6.lt) goto loc_822E3354;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822E32A0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e32c0
	if (!ctx.cr6.eq) goto loc_822E32C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822e32a0
	if (ctx.cr6.lt) goto loc_822E32A0;
	// b 0x822e3354
	goto loc_822E3354;
loc_822E32C0:
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e3304
	if (ctx.cr6.lt) goto loc_822E3304;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822e3308
	if (!ctx.cr6.lt) goto loc_822E3308;
loc_822E3304:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822E3308:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x822e3354
	if (ctx.cr0.lt) goto loc_822E3354;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822E3320:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822e3354
	if (ctx.cr6.eq) goto loc_822E3354;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e3344
	if (ctx.cr6.lt) goto loc_822E3344;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x822e3348
	if (!ctx.cr6.lt) goto loc_822E3348;
loc_822E3344:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822E3348:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x822e3320
	if (!ctx.cr0.lt) goto loc_822E3320;
loc_822E3354:
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = r29.u8 & 0x20 ? 0 : (r22.u32 << (r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	REX_STORE_U32(r27.u32 + r28.u32, ctx.r10.u32);
	// bge cr6,0x822e339c
	if (!ctx.cr6.lt) goto loc_822E339C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e339c
	if (ctx.cr6.eq) goto loc_822E339C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E3394:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e3394
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3394;
loc_822E339C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822e33a8
	if (ctx.cr6.eq) goto loc_822E33A8;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_822E33A8:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e33d4
	if (!ctx.cr6.lt) goto loc_822E33D4;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// b 0x822e3840
	goto loc_822E3840;
loc_822E33D4:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x822e36bc
	if (ctx.cr6.gt) goto loc_822E36BC;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, r31.u32);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_822E343C:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x822e343c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E343C;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E347C:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822e3490
	if (ctx.cr6.lt) goto loc_822E3490;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e3494
	goto loc_822E3494;
loc_822E3490:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822E3494:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822e347c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E347C;
	// addi r11,r26,1
	ctx.r11.s64 = r26.s64 + 1;
	// addi r29,r1,-152
	r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	r28.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e35c4
	if (ctx.cr0.eq) goto loc_822E35C4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r22.u32 << (r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e352c
	if (!ctx.cr0.eq) goto loc_822E352C;
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x822e35c4
	if (!ctx.cr6.lt) goto loc_822E35C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822E350C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e352c
	if (!ctx.cr6.eq) goto loc_822E352C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x822e350c
	if (ctx.cr6.lt) goto loc_822E350C;
	// b 0x822e35c4
	goto loc_822E35C4;
loc_822E352C:
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e3570
	if (ctx.cr6.lt) goto loc_822E3570;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822e3574
	if (!ctx.cr6.lt) goto loc_822E3574;
loc_822E3570:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_822E3574:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x822e35c4
	if (ctx.cr0.lt) goto loc_822E35C4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822E3590:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x822e35c4
	if (ctx.cr6.eq) goto loc_822E35C4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e35b4
	if (ctx.cr6.lt) goto loc_822E35B4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x822e35b8
	if (!ctx.cr6.lt) goto loc_822E35B8;
loc_822E35B4:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_822E35B8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x822e3590
	if (!ctx.cr0.lt) goto loc_822E3590;
loc_822E35C4:
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r22.u32 << (r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	REX_STORE_U32(r28.u32 + r29.u32, ctx.r10.u32);
	// bge cr6,0x822e360c
	if (!ctx.cr6.lt) goto loc_822E360C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e360c
	if (ctx.cr6.eq) goto loc_822E360C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822E3604:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822e3604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3604;
loc_822E360C:
	// addi r11,r21,1
	ctx.r11.s64 = r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_822E3648:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x822e3648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3648;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E3688:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e369c
	if (ctx.cr6.lt) goto loc_822E369C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e36a0
	goto loc_822E36A0;
loc_822E369C:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822E36A0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822e3688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3688;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x822e3840
	goto loc_822E3840;
loc_822E36BC:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x822e378c
	if (ctx.cr6.lt) goto loc_822E378C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = r21.s32 >> 5;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	r31.u64 = r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, r31.u32);
loc_822E3718:
	// lwz r31,4(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	r30.u64 = r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r30.u32);
	// srw r31,r31,r11
	r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x822e3718
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3718;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E3758:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x822e376c
	if (ctx.cr6.lt) goto loc_822E376C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e3770
	goto loc_822E3770;
loc_822E376C:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822E3770:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822e3758
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3758;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x822e3840
	goto loc_822E3840;
loc_822E378C:
	// srawi r11,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_822E37D4:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x822e37d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E37D4;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822E3814:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x822e3828
	if (ctx.cr6.lt) goto loc_822E3828;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822e382c
	goto loc_822E382C;
loc_822E3828:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r23.u32);
loc_822E382C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x822e3814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822E3814;
loc_822E383C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_822E3840:
	// subfic r10,r21,31
	ctx.xer.ca = r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - r21.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - r19.u64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x822e387c
	if (!ctx.cr6.eq) goto loc_822E387C;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x822e3884
	goto loc_822E3884;
loc_822E387C:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x822e3888
	if (!ctx.cr6.eq) goto loc_822E3888;
loc_822E3884:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_822E3888:
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8230D580) {
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
	ctx.lr = 0x8230D588;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r31,0
	r31.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// beq cr6,0x8230d5dc
	if (ctx.cr6.eq) goto loc_8230D5DC;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,127
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 127, ctx.xer);
	// bgt cr6,0x8230d5dc
	if (ctx.cr6.gt) goto loc_8230D5DC;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8230d5dc
	if (ctx.cr6.lt) goto loc_8230D5DC;
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,127
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 127, ctx.xer);
	// bgt cr6,0x8230d5dc
	if (ctx.cr6.gt) goto loc_8230D5DC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8230d5f0
	if (!ctx.cr6.lt) goto loc_8230D5F0;
loc_8230D5DC:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230D5F0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8230d5dc
	if (ctx.cr6.eq) goto loc_8230D5DC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,148(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 148);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r25,r30
	r25.u64 = r30.u64;
	// bl 0x822f9900
	ctx.lr = 0x8230D60C;
	sub_822F9900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230d898
	if (ctx.cr6.lt) goto loc_8230D898;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,148(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 148);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822f9900
	ctx.lr = 0x8230D628;
	sub_822F9900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230d898
	if (ctx.cr6.lt) goto loc_8230D898;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8230d76c
	if (ctx.cr6.eq) goto loc_8230D76C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d76c
	if (ctx.cr6.eq) goto loc_8230D76C;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8230d76c
	if (ctx.cr6.eq) goto loc_8230D76C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8230d76c
	if (ctx.cr6.eq) goto loc_8230D76C;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230d6d8
	if (!ctx.cr6.eq) goto loc_8230D6D8;
	// lwz r10,76(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d6d8
	if (ctx.cr6.eq) goto loc_8230D6D8;
	// stw r31,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r31.u32);
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r31.u8);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r31.u32);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, r31.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8230d058
	ctx.lr = 0x8230D6D4;
	sub_8230D058(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230D6D8:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8230d74c
	if (!ctx.cr6.eq) goto loc_8230D74C;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8230d74c
	if (ctx.cr6.eq) goto loc_8230D74C;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r31.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, r31.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,28(r8)
	REX_STORE_U32(ctx.r8.u32 + 28, r31.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r31.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r31.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x8230d058
	ctx.lr = 0x8230D748;
	sub_8230D058(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8230D74C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8230d890
	if (ctx.cr6.gt) goto loc_8230D890;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8230d780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230D780;
	// bdzf 4*cr6+eq,0x8230d76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230D76C;
	// bne cr6,0x8230d79c
	if (!ctx.cr6.eq) goto loc_8230D79C;
loc_8230D76C:
	// lis r29,-32688
	r29.s64 = -2142240768;
	// ori r29,r29,160
	r29.u64 = r29.u64 | 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230D780:
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r30.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// b 0x8230d80c
	goto loc_8230D80C;
loc_8230D79C:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,148(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 148);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// bl 0x822f9900
	ctx.lr = 0x8230D7B4;
	sub_822F9900(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8230d898
	if (ctx.cr6.lt) goto loc_8230D898;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r30.u32);
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stb r26,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r26.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r25,32(r11)
	r25.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r31,32(r7)
	REX_STORE_U8(ctx.r7.u32 + 32, r31.u8);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, r31.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lbz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// bl 0x8230d058
	ctx.lr = 0x8230D80C;
	sub_8230D058(ctx, base);
loc_8230D80C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x8230d890
	if (ctx.cr6.gt) goto loc_8230D890;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8230d76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230D76C;
	// bdzf 4*cr6+eq,0x8230d854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8230D854;
	// bne cr6,0x8230d76c
	if (!ctx.cr6.eq) goto loc_8230D76C;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, r30.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r25,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, r25.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230D854:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r30.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, r31.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, r31.u8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, r31.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// bl 0x8230d058
	ctx.lr = 0x8230D884;
	sub_8230D058(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
loc_8230D890:
	// lis r29,-32768
	r29.s64 = -2147483648;
	// ori r29,r29,16389
	r29.u64 = r29.u64 | 16389;
loc_8230D898:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82316DB8) {
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
	ctx.lr = 0x82316DC0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82316ed0
	if (!ctx.cr6.gt) goto loc_82316ED0;
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82316DE4;
	sub_823143C0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r3.u32);
	// bne cr6,0x82316e00
	if (!ctx.cr6.eq) goto loc_82316E00;
loc_82316DF0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
loc_82316E00:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82316E10;
	sub_822D5870(ctx, base);
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82316ed0
	if (!ctx.cr6.gt) goto loc_82316ED0;
	// li r29,0
	r29.s64 = 0;
loc_82316E24:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823143c0
	ctx.lr = 0x82316E30;
	sub_823143C0(ctx, base);
	// lwz r10,348(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 348);
	// stwx r3,r29,r10
	REX_STORE_U32(r29.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r9,r29,r11
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82316df0
	if (ctx.cr6.eq) goto loc_82316DF0;
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82316E5C;
	sub_822D5870(ctx, base);
	// lwz r9,244(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 244);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82316ebc
	if (!ctx.cr6.gt) goto loc_82316EBC;
	// li r30,0
	r30.s64 = 0;
loc_82316E70:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x823143c0
	ctx.lr = 0x82316E78;
	sub_823143C0(ctx, base);
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r10,r29,r11
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r3.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 348);
	// lwzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82316df0
	if (ctx.cr6.eq) goto loc_82316DF0;
	// li r5,28
	ctx.r5.s64 = 28;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82316EA8;
	sub_822D5870(ctx, base);
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82316e70
	if (ctx.cr6.lt) goto loc_82316E70;
loc_82316EBC:
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82316e24
	if (ctx.cr6.lt) goto loc_82316E24;
loc_82316ED0:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_823209B8) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320ac0
	if (ctx.cr6.eq) goto loc_82320AC0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82320aa4
	if (ctx.cr6.eq) goto loc_82320AA4;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82320a40
	if (!ctx.cr6.eq) goto loc_82320A40;
	// lwz r11,208(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 208);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82320a0c
	if (ctx.cr6.gt) goto loc_82320A0C;
	// lwz r11,200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// b 0x82320b18
	goto loc_82320B18;
loc_82320A0C:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82320b18
	goto loc_82320B18;
loc_82320A40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469e20
	ctx.lr = 0x82320A4C;
	sub_82469E20(ctx, base);
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82320a68
	if (ctx.cr6.gt) goto loc_82320A68;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82320b18
	goto loc_82320B18;
loc_82320A68:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r3,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82320b18
	goto loc_82320B18;
loc_82320AA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320ac0
	if (ctx.cr6.eq) goto loc_82320AC0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82469e20
	ctx.lr = 0x82320AB8;
	sub_82469E20(ctx, base);
	// subf r11,r30,r3
	ctx.r11.u64 = ctx.r3.u64 - r30.u64;
	// b 0x82320b18
	goto loc_82320B18;
loc_82320AC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82320b14
	if (ctx.cr6.eq) goto loc_82320B14;
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82320ae0
	if (ctx.cr6.gt) goto loc_82320AE0;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 200);
	// b 0x82320b18
	goto loc_82320B18;
loc_82320AE0:
	// lwz r11,208(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 208);
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 204);
	// subf r8,r11,r30
	ctx.r8.u64 = r30.u64 - ctx.r11.u64;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 200);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// mulld r5,r6,r7
	ctx.r5.s64 = static_cast<int64_t>(ctx.r6.u64 * ctx.r7.u64);
	// sradi r4,r5,20
	ctx.xer.ca = (ctx.r5.s64 < 0) & ((ctx.r5.u64 & 0xFFFFF) != 0);
	ctx.r4.s64 = ctx.r5.s64 >> 20;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r3
	ctx.r10.u64 = ctx.r3.u64 - r30.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82320b18
	goto loc_82320B18;
loc_82320B14:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82320B18:
	// lis r10,-1024
	ctx.r10.s64 = -67108864;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82320b30
	if (!ctx.cr6.lt) goto loc_82320B30;
	// lis r4,-1024
	ctx.r4.s64 = -67108864;
	// b 0x82320b44
	goto loc_82320B44;
loc_82320B30:
	// lis r10,1023
	ctx.r10.s64 = 67043328;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82320b44
	if (!ctx.cr6.gt) goto loc_82320B44;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82320B44:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,-16084
	ctx.r3.s64 = ctx.r11.s64 + -16084;
	// bl 0x82320518
	ctx.lr = 0x82320B50;
	sub_82320518(ctx, base);
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

DEFINE_REX_FUNC(sub_823279C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823279C8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r29,r4,16
	r29.u64 = ctx.r4.u32 & 0xFFFF;
	// rlwinm r30,r4,1,15,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1FFFE;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x823143e0
	ctx.lr = 0x823279EC;
	sub_823143E0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82327a08
	if (!ctx.cr6.eq) goto loc_82327A08;
loc_823279F8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
loc_82327A08:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82327A14;
	sub_822D5870(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82327A20;
	sub_823143E0(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823279f8
	if (ctx.cr6.eq) goto loc_823279F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82327A38;
	sub_822D5870(ctx, base);
	// rlwinm r30,r29,3,0,28
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82327A48;
	sub_823143E0(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823279f8
	if (ctx.cr6.eq) goto loc_823279F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82327A60;
	sub_822D5870(ctx, base);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82327A70;
	sub_823143E0(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823279f8
	if (ctx.cr6.eq) goto loc_823279F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82327A88;
	sub_822D5870(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823143e0
	ctx.lr = 0x82327A94;
	sub_823143E0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823279f8
	if (ctx.cr6.eq) goto loc_823279F8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x82327AAC;
	sub_822D5870(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8232B2E8) {
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
	ctx.lr = 0x8232B2F0;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// ble cr6,0x8232b370
	if (!ctx.cr6.gt) goto loc_8232B370;
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r28,r10,r6
	r28.u64 = ctx.r6.u64 - ctx.r10.u64;
loc_8232B30C:
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x8232b370
	if (!ctx.cr6.lt) goto loc_8232B370;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(r29.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// blt cr6,0x8232b360
	if (ctx.cr6.lt) goto loc_8232B360;
	// addi r31,r29,1
	r31.s64 = r29.s64 + 1;
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + ctx.r11.u64;
	// addi r3,r4,-4
	ctx.r3.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_8232B334:
	// lwzu r31,-4(r10)
	ea = -4 + ctx.r10.u32;
	r31.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwzu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	r30.u64 = REX_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	// extsw r26,r31
	r26.s64 = r31.s32;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// extsw r30,r30
	r30.s64 = r30.s32;
	// mulld r30,r26,r30
	r30.s64 = static_cast<int64_t>(r26.u64 * r30.u64);
	// sradi r30,r30,30
	ctx.xer.ca = (r30.s64 < 0) & ((r30.u64 & 0x3FFFFFFF) != 0);
	r30.s64 = r30.s64 >> 30;
	// extsw r30,r30
	r30.s64 = r30.s32;
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r31.u32);
	// bdnz 0x8232b334
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B334;
loc_8232B360:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8232b30c
	if (ctx.cr6.lt) goto loc_8232B30C;
loc_8232B370:
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
	// bge cr6,0x8232b3f0
	if (!ctx.cr6.lt) goto loc_8232B3F0;
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
loc_8232B39C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r27.u32);
	// ble cr6,0x8232b3e4
	if (!ctx.cr6.gt) goto loc_8232B3E4;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r7,r4,-4
	ctx.r7.s64 = ctx.r4.s64 + -4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_8232B3B8:
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
	// bdnz 0x8232b3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B3B8;
loc_8232B3E4:
	// addic. r29,r29,-1
	ctx.xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x8232b39c
	if (!ctx.cr0.eq) goto loc_8232B39C;
loc_8232B3F0:
	// addi r11,r28,-1
	ctx.r11.s64 = r28.s64 + -1;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
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
	// ble 0x8232b44c
	if (!ctx.cr0.gt) goto loc_8232B44C;
	// addi r7,r1,-464
	ctx.r7.s64 = ctx.r1.s64 + -464;
	// addi r11,r1,-464
	ctx.r11.s64 = ctx.r1.s64 + -464;
	// subf r6,r7,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_8232B414:
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
	// blt cr6,0x8232b414
	if (ctx.cr6.lt) goto loc_8232B414;
loc_8232B44C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r1,-464
	ctx.r10.s64 = ctx.r1.s64 + -464;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// addze r7,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r6,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// stwx r5,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r5.u32);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_82337490) {
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
	ctx.lr = 0x82337498;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// lwz r28,28(r3)
	r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// li r21,0
	r21.s64 = 0;
	// lwz r31,8(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,-32688
	ctx.r9.s64 = -2142240768;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// ori r23,r10,128
	r23.u64 = ctx.r10.u64 | 128;
	// ori r22,r9,183
	r22.u64 = ctx.r9.u64 | 183;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82337518
	if (ctx.cr6.eq) goto loc_82337518;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x82337518
	if (ctx.cr6.eq) goto loc_82337518;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f91b0
	ctx.lr = 0x82337500;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82337560
	if (!ctx.cr6.lt) goto loc_82337560;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, ctx.xer);
	// bne cr6,0x823376e4
	if (!ctx.cr6.eq) goto loc_823376E4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r11.u32);
loc_82337518:
	// extsb r26,r27
	r26.s64 = r27.s8;
	// mr r27,r21
	r27.u64 = r21.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x82337560
	if (!ctx.cr6.gt) goto loc_82337560;
loc_82337528:
	// lwz r31,0(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f91b0
	ctx.lr = 0x82337540;
	sub_822F91B0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82337560
	if (!ctx.cr6.lt) goto loc_82337560;
	// cmplw cr6,r3,r22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r22.u32, ctx.xer);
	// bne cr6,0x823376e4
	if (!ctx.cr6.eq) goto loc_823376E4;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(r27.s32, r26.s32, ctx.xer);
	// blt cr6,0x82337528
	if (ctx.cr6.lt) goto loc_82337528;
loc_82337560:
	// addi r11,r31,-1
	ctx.r11.s64 = r31.s64 + -1;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// bgt cr6,0x823376dc
	if (ctx.cr6.gt) goto loc_823376DC;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30084
	ctx.r12.s64 = ctx.r12.s64 + 30084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82337608;
	case 1:
		goto loc_82337624;
	case 2:
		goto loc_82337640;
	case 3:
		goto loc_8233765C;
	case 4:
		goto loc_82337670;
	case 5:
		goto loc_82337684;
	case 6:
		goto loc_823376B4;
	case 7:
		goto loc_823376C8;
	case 8:
		goto loc_823375D0;
	case 9:
		goto loc_823375EC;
	case 10:
		goto loc_8233769C;
	case 11:
		goto loc_823375B4;
	default:
		REX_CALL_INDIRECT_FUNC(ctx.ctr.u32); // switch fell through; bctr = jump to CTR
		return;
	}
loc_823375B4:
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823375D0:
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,22857
	ctx.r9.u64 = ctx.r11.u64 | 22857;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823375EC:
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// li r10,12
	ctx.r10.s64 = 12;
	// ori r9,r11,13385
	ctx.r9.u64 = ctx.r11.u64 | 13385;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82337608:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,21849
	ctx.r9.u64 = ctx.r11.u64 | 21849;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82337624:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22869
	ctx.r9.u64 = ctx.r11.u64 | 22869;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82337640:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r9,r11,22105
	ctx.r9.u64 = ctx.r11.u64 | 22105;
	// stw r9,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8233765C:
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82337670:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_82337684:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_8233769C:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r11,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r11.u32);
	// stw r10,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823376B4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823376C8:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r21,0(r25)
	REX_STORE_U32(r25.u32 + 0, r21.u32);
	// stw r11,0(r24)
	REX_STORE_U32(r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
loc_823376DC:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
loc_823376E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ebc
	return;
}

DEFINE_REX_FUNC(sub_823432E8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x823432F0;
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r22,0
	r22.s64 = 0;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// bl 0x822d5870
	ctx.lr = 0x82343320;
	sub_822D5870(ctx, base);
	// li r5,126
	ctx.r5.s64 = 126;
	// sth r22,192(r1)
	REX_STORE_U16(ctx.r1.u32 + 192, r22.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// bl 0x822d5870
	ctx.lr = 0x82343334;
	sub_822D5870(ctx, base);
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r21,1
	r21.s64 = 1;
	// stw r22,21916(r25)
	REX_STORE_U32(r25.u32 + 21916, r22.u32);
	// stw r22,21920(r25)
	REX_STORE_U32(r25.u32 + 21920, r22.u32);
	// mr r17,r22
	r17.u64 = r22.u64;
	// stw r21,3956(r25)
	REX_STORE_U32(r25.u32 + 3956, r21.u32);
	// mr r19,r22
	r19.u64 = r22.u64;
	// mr r20,r21
	r20.u64 = r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// mr r18,r21
	r18.u64 = r21.u64;
	// mr r16,r21
	r16.u64 = r21.u64;
	// li r30,2
	r30.s64 = 2;
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x823433cc
	if (!ctx.cr6.lt) goto loc_823433CC;
loc_82343374:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823433cc
	if (ctx.cr6.eq) goto loc_823433CC;
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
	// bge 0x823433bc
	if (!ctx.cr0.lt) goto loc_823433BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823433BC;
	sub_823380C8(ctx, base);
loc_823433BC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343374
	if (ctx.cr6.gt) goto loc_82343374;
loc_823433CC:
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
	// bge 0x82343404
	if (!ctx.cr0.lt) goto loc_82343404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343404;
	sub_823380C8(ctx, base);
loc_82343404:
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(r30.s32, 3, ctx.xer);
	// bne cr6,0x82345058
	if (!ctx.cr6.eq) goto loc_82345058;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r11,3964(r25)
	REX_STORE_U32(r25.u32 + 3964, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82343484
	if (!ctx.cr6.lt) goto loc_82343484;
loc_8234342C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343484
	if (ctx.cr6.eq) goto loc_82343484;
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
	// bge 0x82343474
	if (!ctx.cr0.lt) goto loc_82343474;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343474;
	sub_823380C8(ctx, base);
loc_82343474:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234342c
	if (ctx.cr6.gt) goto loc_8234342C;
loc_82343484:
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
	// bge 0x823434bc
	if (!ctx.cr0.lt) goto loc_823434BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823434BC;
	sub_823380C8(ctx, base);
loc_823434BC:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,2
	r30.s64 = 2;
	// stw r29,21932(r25)
	REX_STORE_U32(r25.u32 + 21932, r29.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82343534
	if (!ctx.cr6.lt) goto loc_82343534;
loc_823434DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343534
	if (ctx.cr6.eq) goto loc_82343534;
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
	// bge 0x82343524
	if (!ctx.cr0.lt) goto loc_82343524;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343524;
	sub_823380C8(ctx, base);
loc_82343524:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823434dc
	if (ctx.cr6.gt) goto loc_823434DC;
loc_82343534:
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
	// bge 0x8234356c
	if (!ctx.cr0.lt) goto loc_8234356C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234356C;
	sub_823380C8(ctx, base);
loc_8234356C:
	// stw r29,21904(r25)
	REX_STORE_U32(r25.u32 + 21904, r29.u32);
	// li r30,3
	r30.s64 = 3;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x823435e4
	if (!ctx.cr6.lt) goto loc_823435E4;
loc_8234358C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823435e4
	if (ctx.cr6.eq) goto loc_823435E4;
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
	// bge 0x823435d4
	if (!ctx.cr0.lt) goto loc_823435D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823435D4;
	sub_823380C8(ctx, base);
loc_823435D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234358c
	if (ctx.cr6.gt) goto loc_8234358C;
loc_823435E4:
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
	// bge 0x8234361c
	if (!ctx.cr0.lt) goto loc_8234361C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234361C;
	sub_823380C8(ctx, base);
loc_8234361C:
	// clrldi r11,r30,32
	ctx.r11.u64 = r30.u64 & 0xFFFFFFFF;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,21560(r25)
	REX_STORE_U64(r25.u32 + 21560, ctx.f13.u64);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x823436a4
	if (!ctx.cr6.lt) goto loc_823436A4;
loc_8234364C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823436a4
	if (ctx.cr6.eq) goto loc_823436A4;
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
	// bge 0x82343694
	if (!ctx.cr0.lt) goto loc_82343694;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343694;
	sub_823380C8(ctx, base);
loc_82343694:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234364c
	if (ctx.cr6.gt) goto loc_8234364C;
loc_823436A4:
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
	// bge 0x823436dc
	if (!ctx.cr0.lt) goto loc_823436DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823436DC;
	sub_823380C8(ctx, base);
loc_823436DC:
	// stw r28,3716(r25)
	REX_STORE_U32(r25.u32 + 3716, r28.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343754
	if (!ctx.cr6.lt) goto loc_82343754;
loc_823436FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343754
	if (ctx.cr6.eq) goto loc_82343754;
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
	// bge 0x82343744
	if (!ctx.cr0.lt) goto loc_82343744;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343744;
	sub_823380C8(ctx, base);
loc_82343744:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823436fc
	if (ctx.cr6.gt) goto loc_823436FC;
loc_82343754:
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
	// bge 0x8234378c
	if (!ctx.cr0.lt) goto loc_8234378C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234378C;
	sub_823380C8(ctx, base);
loc_8234378C:
	// stw r30,21572(r25)
	REX_STORE_U32(r25.u32 + 21572, r30.u32);
	// li r30,12
	r30.s64 = 12;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x82343804
	if (!ctx.cr6.lt) goto loc_82343804;
loc_823437AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343804
	if (ctx.cr6.eq) goto loc_82343804;
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
	// bge 0x823437f4
	if (!ctx.cr0.lt) goto loc_823437F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823437F4;
	sub_823380C8(ctx, base);
loc_823437F4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823437ac
	if (ctx.cr6.gt) goto loc_823437AC;
loc_82343804:
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
	// bge 0x8234383c
	if (!ctx.cr0.lt) goto loc_8234383C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234383C;
	sub_823380C8(ctx, base);
loc_8234383C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,12
	r30.s64 = 12;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r10,22056(r25)
	REX_STORE_U32(r25.u32 + 22056, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bge cr6,0x823438bc
	if (!ctx.cr6.lt) goto loc_823438BC;
loc_82343864:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823438bc
	if (ctx.cr6.eq) goto loc_823438BC;
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
	// bge 0x823438ac
	if (!ctx.cr0.lt) goto loc_823438AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823438AC;
	sub_823380C8(ctx, base);
loc_823438AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343864
	if (ctx.cr6.gt) goto loc_82343864;
loc_823438BC:
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
	// bge 0x823438f4
	if (!ctx.cr0.lt) goto loc_823438F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823438F4;
	sub_823380C8(ctx, base);
loc_823438F4:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,22060(r25)
	REX_STORE_U32(r25.u32 + 22060, ctx.r10.u32);
	// beq cr6,0x82343920
	if (ctx.cr6.eq) goto loc_82343920;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82343920
	if (ctx.cr6.eq) goto loc_82343920;
	// lwz r11,22056(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 22056);
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
	// lwz r10,22060(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 22060);
	// stw r10,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r10.u32);
loc_82343920:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343994
	if (!ctx.cr6.lt) goto loc_82343994;
loc_8234393C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343994
	if (ctx.cr6.eq) goto loc_82343994;
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
	// bge 0x82343984
	if (!ctx.cr0.lt) goto loc_82343984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343984;
	sub_823380C8(ctx, base);
loc_82343984:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8234393c
	if (ctx.cr6.gt) goto loc_8234393C;
loc_82343994:
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
	// bge 0x823439cc
	if (!ctx.cr0.lt) goto loc_823439CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823439CC;
	sub_823380C8(ctx, base);
loc_823439CC:
	// stw r30,21536(r25)
	REX_STORE_U32(r25.u32 + 21536, r30.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343a44
	if (!ctx.cr6.lt) goto loc_82343A44;
loc_823439EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343a44
	if (ctx.cr6.eq) goto loc_82343A44;
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
	// bge 0x82343a34
	if (!ctx.cr0.lt) goto loc_82343A34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343A34;
	sub_823380C8(ctx, base);
loc_82343A34:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823439ec
	if (ctx.cr6.gt) goto loc_823439EC;
loc_82343A44:
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
	// bge 0x82343a7c
	if (!ctx.cr0.lt) goto loc_82343A7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343A7C;
	sub_823380C8(ctx, base);
loc_82343A7C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r28,21864(r25)
	REX_STORE_U32(r25.u32 + 21864, r28.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343af4
	if (!ctx.cr6.lt) goto loc_82343AF4;
loc_82343A9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343af4
	if (ctx.cr6.eq) goto loc_82343AF4;
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
	// bge 0x82343ae4
	if (!ctx.cr0.lt) goto loc_82343AE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343AE4;
	sub_823380C8(ctx, base);
loc_82343AE4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343a9c
	if (ctx.cr6.gt) goto loc_82343A9C;
loc_82343AF4:
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
	// bge 0x82343b2c
	if (!ctx.cr0.lt) goto loc_82343B2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343B2C;
	sub_823380C8(ctx, base);
loc_82343B2C:
	// stw r30,21552(r25)
	REX_STORE_U32(r25.u32 + 21552, r30.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343ba4
	if (!ctx.cr6.lt) goto loc_82343BA4;
loc_82343B4C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343ba4
	if (ctx.cr6.eq) goto loc_82343BA4;
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
	// bge 0x82343b94
	if (!ctx.cr0.lt) goto loc_82343B94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343B94;
	sub_823380C8(ctx, base);
loc_82343B94:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343b4c
	if (ctx.cr6.gt) goto loc_82343B4C;
loc_82343BA4:
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
	// bge 0x82343bdc
	if (!ctx.cr0.lt) goto loc_82343BDC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343BDC;
	sub_823380C8(ctx, base);
loc_82343BDC:
	// stw r29,3484(r25)
	REX_STORE_U32(r25.u32 + 3484, r29.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343c38
	if (!ctx.cr6.lt) goto loc_82343C38;
loc_82343BF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343c38
	if (ctx.cr6.eq) goto loc_82343C38;
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
	// bge 0x82343c28
	if (!ctx.cr0.lt) goto loc_82343C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343C28;
	sub_823380C8(ctx, base);
loc_82343C28:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343bf8
	if (ctx.cr6.gt) goto loc_82343BF8;
loc_82343C38:
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
	// bge 0x82343c5c
	if (!ctx.cr0.lt) goto loc_82343C5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343C5C;
	sub_823380C8(ctx, base);
loc_82343C5C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343cd0
	if (!ctx.cr6.lt) goto loc_82343CD0;
loc_82343C78:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343cd0
	if (ctx.cr6.eq) goto loc_82343CD0;
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
	// bge 0x82343cc0
	if (!ctx.cr0.lt) goto loc_82343CC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343CC0;
	sub_823380C8(ctx, base);
loc_82343CC0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343c78
	if (ctx.cr6.gt) goto loc_82343C78;
loc_82343CD0:
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
	// bge 0x82343d08
	if (!ctx.cr0.lt) goto loc_82343D08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343D08;
	sub_823380C8(ctx, base);
loc_82343D08:
	// stw r29,22252(r25)
	REX_STORE_U32(r25.u32 + 22252, r29.u32);
	// mr r30,r21
	r30.u64 = r21.u64;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343d80
	if (!ctx.cr6.lt) goto loc_82343D80;
loc_82343D28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343d80
	if (ctx.cr6.eq) goto loc_82343D80;
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
	// bge 0x82343d70
	if (!ctx.cr0.lt) goto loc_82343D70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343D70;
	sub_823380C8(ctx, base);
loc_82343D70:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343d28
	if (ctx.cr6.gt) goto loc_82343D28;
loc_82343D80:
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
	// bge 0x82343db8
	if (!ctx.cr0.lt) goto loc_82343DB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343DB8;
	sub_823380C8(ctx, base);
loc_82343DB8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823448a4
	if (ctx.cr6.eq) goto loc_823448A4;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,14
	r30.s64 = 14;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x82343e34
	if (!ctx.cr6.lt) goto loc_82343E34;
loc_82343DDC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343e34
	if (ctx.cr6.eq) goto loc_82343E34;
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
	// bge 0x82343e24
	if (!ctx.cr0.lt) goto loc_82343E24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343E24;
	sub_823380C8(ctx, base);
loc_82343E24:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343ddc
	if (ctx.cr6.gt) goto loc_82343DDC;
loc_82343E34:
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
	// bge 0x82343e6c
	if (!ctx.cr0.lt) goto loc_82343E6C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343E6C;
	sub_823380C8(ctx, base);
loc_82343E6C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// li r30,14
	r30.s64 = 14;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bge cr6,0x82343ee4
	if (!ctx.cr6.lt) goto loc_82343EE4;
loc_82343E8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343ee4
	if (ctx.cr6.eq) goto loc_82343EE4;
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
	// bge 0x82343ed4
	if (!ctx.cr0.lt) goto loc_82343ED4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343ED4;
	sub_823380C8(ctx, base);
loc_82343ED4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343e8c
	if (ctx.cr6.gt) goto loc_82343E8C;
loc_82343EE4:
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
	// bge 0x82343f1c
	if (!ctx.cr0.lt) goto loc_82343F1C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343F1C;
	sub_823380C8(ctx, base);
loc_82343F1C:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(r24.u32, 0, ctx.xer);
	// beq cr6,0x82343f38
	if (ctx.cr6.eq) goto loc_82343F38;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(r23.u32, 0, ctx.xer);
	// beq cr6,0x82343f38
	if (ctx.cr6.eq) goto loc_82343F38;
	// stw r28,0(r24)
	REX_STORE_U32(r24.u32 + 0, r28.u32);
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_82343F38:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r21,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r21.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82343fb8
	if (!ctx.cr6.lt) goto loc_82343FB8;
loc_82343F60:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82343fb8
	if (ctx.cr6.eq) goto loc_82343FB8;
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
	// bge 0x82343fa8
	if (!ctx.cr0.lt) goto loc_82343FA8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343FA8;
	sub_823380C8(ctx, base);
loc_82343FA8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82343f60
	if (ctx.cr6.gt) goto loc_82343F60;
loc_82343FB8:
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
	// bge 0x82343ff0
	if (!ctx.cr0.lt) goto loc_82343FF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82343FF0;
	sub_823380C8(ctx, base);
loc_82343FF0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82344228
	if (ctx.cr6.eq) goto loc_82344228;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,4
	r30.s64 = 4;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8234406c
	if (!ctx.cr6.lt) goto loc_8234406C;
loc_82344014:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234406c
	if (ctx.cr6.eq) goto loc_8234406C;
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
	// bge 0x8234405c
	if (!ctx.cr0.lt) goto loc_8234405C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234405C;
	sub_823380C8(ctx, base);
loc_8234405C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344014
	if (ctx.cr6.gt) goto loc_82344014;
loc_8234406C:
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
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x823440a4
	if (!ctx.cr0.lt) goto loc_823440A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823440A4;
	sub_823380C8(ctx, base);
loc_823440A4:
	// cmpwi cr6,r27,15
	ctx.cr6.compare<int32_t>(r27.s32, 15, ctx.xer);
	// bne cr6,0x82344210
	if (!ctx.cr6.eq) goto loc_82344210;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82344120
	if (!ctx.cr6.lt) goto loc_82344120;
loc_823440C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344120
	if (ctx.cr6.eq) goto loc_82344120;
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
	// bge 0x82344110
	if (!ctx.cr0.lt) goto loc_82344110;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344110;
	sub_823380C8(ctx, base);
loc_82344110:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823440c8
	if (ctx.cr6.gt) goto loc_823440C8;
loc_82344120:
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
	// bge 0x82344158
	if (!ctx.cr0.lt) goto loc_82344158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344158;
	sub_823380C8(ctx, base);
loc_82344158:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addi r28,r30,1
	r28.s64 = r30.s64 + 1;
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823441d0
	if (!ctx.cr6.lt) goto loc_823441D0;
loc_82344178:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823441d0
	if (ctx.cr6.eq) goto loc_823441D0;
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
	// bge 0x823441c0
	if (!ctx.cr0.lt) goto loc_823441C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823441C0;
	sub_823380C8(ctx, base);
loc_823441C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344178
	if (ctx.cr6.gt) goto loc_82344178;
loc_823441D0:
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
	// bge 0x82344208
	if (!ctx.cr0.lt) goto loc_82344208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344208;
	sub_823380C8(ctx, base);
loc_82344208:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x82344218
	goto loc_82344218;
loc_82344210:
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_82344218:
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, r27.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, r28.u32);
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r21.u32);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
loc_82344228:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8234429c
	if (!ctx.cr6.lt) goto loc_8234429C;
loc_82344244:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234429c
	if (ctx.cr6.eq) goto loc_8234429C;
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
	// bge 0x8234428c
	if (!ctx.cr0.lt) goto loc_8234428C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234428C;
	sub_823380C8(ctx, base);
loc_8234428C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344244
	if (ctx.cr6.gt) goto loc_82344244;
loc_8234429C:
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
	// bge 0x823442d4
	if (!ctx.cr0.lt) goto loc_823442D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823442D4;
	sub_823380C8(ctx, base);
loc_823442D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823445b4
	if (ctx.cr6.eq) goto loc_823445B4;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// stw r21,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r21.u32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82344354
	if (!ctx.cr6.lt) goto loc_82344354;
loc_823442FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344354
	if (ctx.cr6.eq) goto loc_82344354;
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
	// bge 0x82344344
	if (!ctx.cr0.lt) goto loc_82344344;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344344;
	sub_823380C8(ctx, base);
loc_82344344:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823442fc
	if (ctx.cr6.gt) goto loc_823442FC;
loc_82344354:
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
	// bge 0x8234438c
	if (!ctx.cr0.lt) goto loc_8234438C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234438C;
	sub_823380C8(ctx, base);
loc_8234438C:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x82344458
	if (ctx.cr6.eq) goto loc_82344458;
	// li r30,16
	r30.s64 = 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82344408
	if (!ctx.cr6.lt) goto loc_82344408;
loc_823443B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344408
	if (ctx.cr6.eq) goto loc_82344408;
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
	// bge 0x823443f8
	if (!ctx.cr0.lt) goto loc_823443F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823443F8;
	sub_823380C8(ctx, base);
loc_823443F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823443b0
	if (ctx.cr6.gt) goto loc_823443B0;
loc_82344408:
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
	// bge 0x82344440
	if (!ctx.cr0.lt) goto loc_82344440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344440;
	sub_823380C8(ctx, base);
loc_82344440:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r21.u32);
	// mr r17,r21
	r17.u64 = r21.u64;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r16,r11
	r16.u64 = ctx.r11.u64;
	// b 0x823445b4
	goto loc_823445B4;
loc_82344458:
	// li r30,8
	r30.s64 = 8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823444bc
	if (!ctx.cr6.lt) goto loc_823444BC;
loc_82344464:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823444bc
	if (ctx.cr6.eq) goto loc_823444BC;
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
	// bge 0x823444ac
	if (!ctx.cr0.lt) goto loc_823444AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823444AC;
	sub_823380C8(ctx, base);
loc_823444AC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344464
	if (ctx.cr6.gt) goto loc_82344464;
loc_823444BC:
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
	// bge 0x823444f4
	if (!ctx.cr0.lt) goto loc_823444F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823444F4;
	sub_823380C8(ctx, base);
loc_823444F4:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r18,r28
	r18.u64 = r28.u64;
	// li r30,4
	r30.s64 = 4;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x8234456c
	if (!ctx.cr6.lt) goto loc_8234456C;
loc_82344514:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234456c
	if (ctx.cr6.eq) goto loc_8234456C;
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
	// bge 0x8234455c
	if (!ctx.cr0.lt) goto loc_8234455C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234455C;
	sub_823380C8(ctx, base);
loc_8234455C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344514
	if (ctx.cr6.gt) goto loc_82344514;
loc_8234456C:
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
	// bge 0x823445a4
	if (!ctx.cr0.lt) goto loc_823445A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823445A4;
	sub_823380C8(ctx, base);
loc_823445A4:
	// mr r20,r30
	r20.u64 = r30.u64;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r28.u32);
	// mr r19,r21
	r19.u64 = r21.u64;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r30.u32);
loc_823445B4:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82344628
	if (!ctx.cr6.lt) goto loc_82344628;
loc_823445D0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344628
	if (ctx.cr6.eq) goto loc_82344628;
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
	// bge 0x82344618
	if (!ctx.cr0.lt) goto loc_82344618;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344618;
	sub_823380C8(ctx, base);
loc_82344618:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823445d0
	if (ctx.cr6.gt) goto loc_823445D0;
loc_82344628:
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
	// bge 0x82344660
	if (!ctx.cr0.lt) goto loc_82344660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344660;
	sub_823380C8(ctx, base);
loc_82344660:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x823448a4
	if (ctx.cr6.eq) goto loc_823448A4;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x823446dc
	if (!ctx.cr6.lt) goto loc_823446DC;
loc_82344684:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823446dc
	if (ctx.cr6.eq) goto loc_823446DC;
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
	// bge 0x823446cc
	if (!ctx.cr0.lt) goto loc_823446CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823446CC;
	sub_823380C8(ctx, base);
loc_823446CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344684
	if (ctx.cr6.gt) goto loc_82344684;
loc_823446DC:
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
	// add r27,r11,r29
	r27.u64 = ctx.r11.u64 + r29.u64;
	// std r4,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r4.u64);
	// bge 0x82344714
	if (!ctx.cr0.lt) goto loc_82344714;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344714;
	sub_823380C8(ctx, base);
loc_82344714:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82344788
	if (!ctx.cr6.lt) goto loc_82344788;
loc_82344730:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344788
	if (ctx.cr6.eq) goto loc_82344788;
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
	// bge 0x82344778
	if (!ctx.cr0.lt) goto loc_82344778;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344778;
	sub_823380C8(ctx, base);
loc_82344778:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344730
	if (ctx.cr6.gt) goto loc_82344730;
loc_82344788:
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
	// bge 0x823447c0
	if (!ctx.cr0.lt) goto loc_823447C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823447C0;
	sub_823380C8(ctx, base);
loc_823447C0:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,8
	r30.s64 = 8;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82344834
	if (!ctx.cr6.lt) goto loc_82344834;
loc_823447DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344834
	if (ctx.cr6.eq) goto loc_82344834;
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
	// bge 0x82344824
	if (!ctx.cr0.lt) goto loc_82344824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344824;
	sub_823380C8(ctx, base);
loc_82344824:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823447dc
	if (ctx.cr6.gt) goto loc_823447DC;
loc_82344834:
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
	// bge 0x8234486c
	if (!ctx.cr0.lt) goto loc_8234486C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8234486C;
	sub_823380C8(ctx, base);
loc_8234486C:
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r21.u32);
	// cmpwi cr6,r27,7
	ctx.cr6.compare<int32_t>(r27.s32, 7, ctx.xer);
	// ble cr6,0x82344880
	if (!ctx.cr6.gt) goto loc_82344880;
	// li r27,7
	r27.s64 = 7;
loc_82344880:
	// stw r27,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, r27.u32);
	// cmpwi cr6,r28,9
	ctx.cr6.compare<int32_t>(r28.s32, 9, ctx.xer);
	// ble cr6,0x82344890
	if (!ctx.cr6.gt) goto loc_82344890;
	// li r28,9
	r28.s64 = 9;
loc_82344890:
	// stw r28,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, r28.u32);
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(r30.s32, 7, ctx.xer);
	// ble cr6,0x823448a0
	if (!ctx.cr6.gt) goto loc_823448A0;
	// li r11,7
	ctx.r11.s64 = 7;
loc_823448A0:
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_823448A4:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82344918
	if (!ctx.cr6.lt) goto loc_82344918;
loc_823448C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344918
	if (ctx.cr6.eq) goto loc_82344918;
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
	// bge 0x82344908
	if (!ctx.cr0.lt) goto loc_82344908;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344908;
	sub_823380C8(ctx, base);
loc_82344908:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823448c0
	if (ctx.cr6.gt) goto loc_823448C0;
loc_82344918:
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
	// bge 0x82344950
	if (!ctx.cr0.lt) goto loc_82344950;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344950;
	sub_823380C8(ctx, base);
loc_82344950:
	// stw r30,21908(r25)
	REX_STORE_U32(r25.u32 + 21908, r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq cr6,0x82344d20
	if (ctx.cr6.eq) goto loc_82344D20;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,5
	r30.s64 = 5;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x823449d0
	if (!ctx.cr6.lt) goto loc_823449D0;
loc_82344978:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823449d0
	if (ctx.cr6.eq) goto loc_823449D0;
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
	// bge 0x823449c0
	if (!ctx.cr0.lt) goto loc_823449C0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x823449C0;
	sub_823380C8(ctx, base);
loc_823449C0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344978
	if (ctx.cr6.gt) goto loc_82344978;
loc_823449D0:
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
	// bge 0x82344a08
	if (!ctx.cr0.lt) goto loc_82344A08;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344A08;
	sub_823380C8(ctx, base);
loc_82344A08:
	// stw r28,21912(r25)
	REX_STORE_U32(r25.u32 + 21912, r28.u32);
	// li r30,4
	r30.s64 = 4;
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82344a80
	if (!ctx.cr6.lt) goto loc_82344A80;
loc_82344A28:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344a80
	if (ctx.cr6.eq) goto loc_82344A80;
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
	// bge 0x82344a70
	if (!ctx.cr0.lt) goto loc_82344A70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344A70;
	sub_823380C8(ctx, base);
loc_82344A70:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344a28
	if (ctx.cr6.gt) goto loc_82344A28;
loc_82344A80:
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
	// bge 0x82344ab8
	if (!ctx.cr0.lt) goto loc_82344AB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344AB8;
	sub_823380C8(ctx, base);
loc_82344AB8:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// addi r28,r30,6
	r28.s64 = r30.s64 + 6;
	// li r30,4
	r30.s64 = 4;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82344b30
	if (!ctx.cr6.lt) goto loc_82344B30;
loc_82344AD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344b30
	if (ctx.cr6.eq) goto loc_82344B30;
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
	// bge 0x82344b20
	if (!ctx.cr0.lt) goto loc_82344B20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344B20;
	sub_823380C8(ctx, base);
loc_82344B20:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344ad8
	if (ctx.cr6.gt) goto loc_82344AD8;
loc_82344B30:
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
	// bge 0x82344b68
	if (!ctx.cr0.lt) goto loc_82344B68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344B68;
	sub_823380C8(ctx, base);
loc_82344B68:
	// lwz r11,21912(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 21912);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stw r28,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, r28.u32);
	// subfic r8,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r9,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// mr r27,r22
	r27.u64 = r22.u64;
	// addme r6,r7
	temp.u8 = (ctx.r7.u32 + 0xFFFFFFFFu < ctx.r7.u32) | (ctx.r7.u32 + 0xFFFFFFFFu + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ctx.r7.u64 + ctx.xer.ca + 0xFFFFFFFFFFFFFFFFull;
	ctx.xer.ca = temp.u8;
	// stw r11,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stw r5,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// ble cr6,0x82344d20
	if (!ctx.cr6.gt) goto loc_82344D20;
	// addi r11,r1,194
	ctx.r11.s64 = ctx.r1.s64 + 194;
	// addi r26,r11,-4
	r26.s64 = ctx.r11.s64 + -4;
loc_82344BA8:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,16
	r30.s64 = 16;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82344c1c
	if (!ctx.cr6.lt) goto loc_82344C1C;
loc_82344BC4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344c1c
	if (ctx.cr6.eq) goto loc_82344C1C;
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
	// bge 0x82344c0c
	if (!ctx.cr0.lt) goto loc_82344C0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344C0C;
	sub_823380C8(ctx, base);
loc_82344C0C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344bc4
	if (ctx.cr6.gt) goto loc_82344BC4;
loc_82344C1C:
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
	// bge 0x82344c54
	if (!ctx.cr0.lt) goto loc_82344C54;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344C54;
	sub_823380C8(ctx, base);
loc_82344C54:
	// lwz r31,84(r25)
	r31.u64 = REX_LOAD_U32(r25.u32 + 84);
	// li r30,16
	r30.s64 = 16;
	// mr r29,r22
	r29.u64 = r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82344cc8
	if (!ctx.cr6.lt) goto loc_82344CC8;
loc_82344C70:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82344cc8
	if (ctx.cr6.eq) goto loc_82344CC8;
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
	// bge 0x82344cb8
	if (!ctx.cr0.lt) goto loc_82344CB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344CB8;
	sub_823380C8(ctx, base);
loc_82344CB8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82344c70
	if (ctx.cr6.gt) goto loc_82344C70;
loc_82344CC8:
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
	// bge 0x82344d00
	if (!ctx.cr0.lt) goto loc_82344D00;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x82344D00;
	sub_823380C8(ctx, base);
loc_82344D00:
	// clrlwi r11,r28,16
	ctx.r11.u64 = r28.u32 & 0xFFFF;
	// lwz r10,21912(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 21912);
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// sth r11,2(r26)
	REX_STORE_U16(r26.u32 + 2, ctx.r11.u16);
	// sthu r9,4(r26)
	ea = 4 + r26.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	r26.u32 = ea;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82344ba8
	if (ctx.cr6.lt) goto loc_82344BA8;
loc_82344D20:
	// lwz r11,84(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 84);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82345058
	if (!ctx.cr6.eq) goto loc_82345058;
	// lwz r11,22184(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 22184);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82344e6c
	if (!ctx.cr6.eq) goto loc_82344E6C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f13,21560(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r25.u32 + 21560);
	// lfd f0,31912(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 31912);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82344e6c
	if (!ctx.cr6.eq) goto loc_82344E6C;
	// lwz r10,3716(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 3716);
	// cmpwi cr6,r10,31
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 31, ctx.xer);
	// bne cr6,0x82344e6c
	if (!ctx.cr6.eq) goto loc_82344E6C;
	// lwz r11,21864(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 21864);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,22060(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 22060);
	// beq cr6,0x82344d94
	if (ctx.cr6.eq) goto loc_82344D94;
	// cmpwi cr6,r11,486
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 486, ctx.xer);
	// ble cr6,0x82344d80
	if (!ctx.cr6.gt) goto loc_82344D80;
	// cmpwi cr6,r11,576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 576, ctx.xer);
	// li r11,25
	ctx.r11.s64 = 25;
	// ble cr6,0x82344d84
	if (!ctx.cr6.gt) goto loc_82344D84;
loc_82344D80:
	// li r11,30
	ctx.r11.s64 = 30;
loc_82344D84:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x82344db8
	goto loc_82344DB8;
loc_82344D94:
	// cmpwi cr6,r11,576
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 576, ctx.xer);
	// ble cr6,0x82344da8
	if (!ctx.cr6.gt) goto loc_82344DA8;
	// cmpwi cr6,r11,720
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 720, ctx.xer);
	// li r11,60
	ctx.r11.s64 = 60;
	// ble cr6,0x82344dac
	if (!ctx.cr6.gt) goto loc_82344DAC;
loc_82344DA8:
	// li r11,30
	ctx.r11.s64 = 30;
loc_82344DAC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_82344DB8:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// stfd f13,21560(r25)
	REX_STORE_U64(r25.u32 + 21560, ctx.f13.u64);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82344df0
	if (ctx.cr6.eq) goto loc_82344DF0;
	// addi r11,r16,17
	ctx.r11.s64 = r16.s64 + 17;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfs f0,16220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfd f10,21560(r25)
	REX_STORE_U64(r25.u32 + 21560, ctx.f10.u64);
loc_82344DF0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82344f3c
	if (ctx.cr6.eq) goto loc_82344F3C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82344f3c
	if (!ctx.cr6.gt) goto loc_82344F3C;
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(r18.s32, 8, ctx.xer);
	// bge cr6,0x82344f3c
	if (!ctx.cr6.lt) goto loc_82344F3C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82344f3c
	if (!ctx.cr6.gt) goto loc_82344F3C;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bge cr6,0x82344f3c
	if (!ctx.cr6.lt) goto loc_82344F3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// addi r9,r20,999
	ctx.r9.s64 = r20.s64 + 999;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// std r8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f11,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lwz r5,-4(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lfs f0,-29984(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -29984);
	ctx.f0.f64 = double(temp.f32);
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// b 0x82344f38
	goto loc_82344F38;
loc_82344E6C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lfd f12,21560(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(r25.u32 + 21560);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfd f0,-28912(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -28912);
	// lfd f13,-25040(r9)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + -25040);
	// fmadd f11,f12,f0,f13
	ctx.f11.f64 = std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f13.f64);
	// stfd f11,21560(r25)
	REX_STORE_U64(r25.u32 + 21560, ctx.f11.u64);
	// bne cr6,0x82344f3c
	if (!ctx.cr6.eq) goto loc_82344F3C;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82344ec0
	if (ctx.cr6.eq) goto loc_82344EC0;
	// addi r11,r16,17
	ctx.r11.s64 = r16.s64 + 17;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,16220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16220);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfd f11,21560(r25)
	REX_STORE_U64(r25.u32 + 21560, ctx.f11.u64);
loc_82344EC0:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(r19.s32, 0, ctx.xer);
	// beq cr6,0x82344f3c
	if (ctx.cr6.eq) goto loc_82344F3C;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// ble cr6,0x82344f3c
	if (!ctx.cr6.gt) goto loc_82344F3C;
	// cmpwi cr6,r18,8
	ctx.cr6.compare<int32_t>(r18.s32, 8, ctx.xer);
	// bge cr6,0x82344f3c
	if (!ctx.cr6.lt) goto loc_82344F3C;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(r20.s32, 0, ctx.xer);
	// ble cr6,0x82344f3c
	if (!ctx.cr6.gt) goto loc_82344F3C;
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(r20.s32, 3, ctx.xer);
	// bge cr6,0x82344f3c
	if (!ctx.cr6.lt) goto loc_82344F3C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-28944
	ctx.r11.s64 = ctx.r11.s64 + -28944;
	// addi r9,r20,999
	ctx.r9.s64 = r20.s64 + 999;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lwz r5,-4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfs f0,-29984(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -29984);
	ctx.f0.f64 = double(temp.f32);
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fdivs f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f9.f64));
loc_82344F38:
	// stfd f6,21560(r25)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(r25.u32 + 21560, ctx.f6.u64);
loc_82344F3C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,21560(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(r25.u32 + 21560);
	// lwz r9,3716(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 3716);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lwz r7,14836(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 14836);
	// li r6,3712
	ctx.r6.s64 = 3712;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r5,r8,-28976
	ctx.r5.s64 = ctx.r8.s64 + -28976;
	// lfd f0,4000(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 4000);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fadd f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 + ctx.f0.f64;
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,3716(r25)
	REX_STORE_U32(r25.u32 + 3716, ctx.r9.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r25,r6
	REX_STORE_U32(r25.u32 + ctx.r6.u32, ctx.f11.u32);
	// lwzx r8,r10,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// stw r8,14840(r25)
	REX_STORE_U32(r25.u32 + 14840, ctx.r8.u32);
	// bl 0x8233cca0
	ctx.lr = 0x82344F8C;
	sub_8233CCA0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,24688(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 24688);
	// bl 0x82332c58
	ctx.lr = 0x82344F98;
	sub_82332C58(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82332d20
	ctx.lr = 0x82344FA0;
	sub_82332D20(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345068
	if (!ctx.cr6.eq) goto loc_82345068;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,24688(r25)
	ctx.r3.u64 = REX_LOAD_U32(r25.u32 + 24688);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82332ca0
	ctx.lr = 0x82344FB8;
	sub_82332CA0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82332df0
	ctx.lr = 0x82344FC4;
	sub_82332DF0(ctx, base);
	// cmpwi cr6,r3,-7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -7, ctx.xer);
	// beq cr6,0x82344fdc
	if (ctx.cr6.eq) goto loc_82344FDC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82345058
	if (!ctx.cr6.eq) goto loc_82345058;
	// stw r22,22040(r25)
	REX_STORE_U32(r25.u32 + 22040, r22.u32);
	// b 0x82344fe0
	goto loc_82344FE0;
loc_82344FDC:
	// stw r21,22040(r25)
	REX_STORE_U32(r25.u32 + 22040, r21.u32);
loc_82344FE0:
	// stw r22,448(r25)
	REX_STORE_U32(r25.u32 + 448, r22.u32);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r22,3944(r25)
	REX_STORE_U32(r25.u32 + 3944, r22.u32);
	// stw r22,3980(r25)
	REX_STORE_U32(r25.u32 + 3980, r22.u32);
	// stw r22,15364(r25)
	REX_STORE_U32(r25.u32 + 15364, r22.u32);
	// stw r22,4004(r25)
	REX_STORE_U32(r25.u32 + 4004, r22.u32);
	// stw r22,3940(r25)
	REX_STORE_U32(r25.u32 + 3940, r22.u32);
	// stw r22,14884(r25)
	REX_STORE_U32(r25.u32 + 14884, r22.u32);
	// stw r21,1792(r25)
	REX_STORE_U32(r25.u32 + 1792, r21.u32);
	// stw r22,400(r25)
	REX_STORE_U32(r25.u32 + 400, r22.u32);
	// bl 0x8233cf70
	ctx.lr = 0x8234500C;
	sub_8233CF70(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8233d0f0
	ctx.lr = 0x82345014;
	sub_8233D0F0(ctx, base);
	// lwz r9,1968(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 1968);
	// lwz r8,3216(r25)
	ctx.r8.u64 = REX_LOAD_U32(r25.u32 + 3216);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// addi r10,r11,-8752
	ctx.r10.s64 = ctx.r11.s64 + -8752;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r7,3980(r25)
	ctx.r7.u64 = REX_LOAD_U32(r25.u32 + 3980);
	// lwz r6,3992(r25)
	ctx.r6.u64 = REX_LOAD_U32(r25.u32 + 3992);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// stw r10,3192(r25)
	REX_STORE_U32(r25.u32 + 3192, ctx.r10.u32);
	// stw r21,3408(r25)
	REX_STORE_U32(r25.u32 + 3408, r21.u32);
	// stw r22,3404(r25)
	REX_STORE_U32(r25.u32 + 3404, r22.u32);
	// stw r22,3400(r25)
	REX_STORE_U32(r25.u32 + 3400, r22.u32);
	// bne cr6,0x82345058
	if (!ctx.cr6.eq) goto loc_82345058;
	// lwz r11,15364(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 15364);
	// lwz r10,3996(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 3996);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82345064
	if (ctx.cr6.eq) goto loc_82345064;
loc_82345058:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822d4ea8
	return;
loc_82345064:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82345068:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_823C5E10) {
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
	ctx.lr = 0x823C5E18;
	// lwz r26,92(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// rlwinm r10,r8,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// addi r11,r11,-8968
	ctx.r11.s64 = ctx.r11.s64 + -8968;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// addi r28,r26,1
	r28.s64 = r26.s64 + 1;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,33
	ctx.cr6.compare<uint32_t>(r28.u32, 33, ctx.xer);
	// bgt cr6,0x823c5f0c
	if (ctx.cr6.gt) goto loc_823C5F0C;
	// lwz r29,84(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r27,r6,r4
	r27.u64 = ctx.r4.u64 - ctx.r6.u64;
	// li r25,4
	r25.s64 = 4;
loc_823C5E4C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// ble cr6,0x823c5e94
	if (!ctx.cr6.gt) goto loc_823C5E94;
	// addi r11,r1,-208
	ctx.r11.s64 = ctx.r1.s64 + -208;
	// lhz r9,2(r30)
	ctx.r9.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U16(r30.u32 + 0);
	// mtctr r28
	ctx.ctr.u64 = r28.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// extsh r4,r9
	ctx.r4.s64 = ctx.r9.s16;
	// extsh r3,r8
	ctx.r3.s64 = ctx.r8.s16;
	// add r11,r27,r6
	ctx.r11.u64 = r27.u64 + ctx.r6.u64;
loc_823C5E74:
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r3
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823c5e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5E74;
loc_823C5E94:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// ble cr6,0x823c5f00
	if (!ctx.cr6.gt) goto loc_823C5F00;
	// mtctr r26
	ctx.ctr.u64 = r26.u64;
	// subf r8,r7,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r7.u64;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
loc_823C5EA8:
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 2);
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 0);
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r29,r4
	ctx.r11.u64 = ctx.r4.u64 - r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// srawi. r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x823c5ee4
	if (!ctx.cr0.lt) goto loc_823C5EE4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823c5ef0
	goto loc_823C5EF0;
loc_823C5EE4:
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823c5ef0
	if (!ctx.cr6.gt) goto loc_823C5EF0;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823C5EF0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbux r11,r8,r7
	ea = ctx.r8.u32 + ctx.r7.u32;
	REX_STORE_U8(ea, ctx.r11.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x823c5ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823C5EA8;
loc_823C5F00:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// bne 0x823c5e4c
	if (!ctx.cr0.eq) goto loc_823C5E4C;
loc_823C5F0C:
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823CB2E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r7,4(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x823cb3c0
	if (!ctx.cr6.gt) goto loc_823CB3C0;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x823cb374
	if (ctx.cr6.lt) goto loc_823CB374;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,8
	ctx.r10.s64 = 8;
loc_823CB304:
	// lwzx r6,r10,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r6,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x823cb3c0
	if (ctx.cr6.gt) goto loc_823CB3C0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// lfs f0,-12(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x823cb3ac
	if (ctx.cr6.gt) goto loc_823CB3AC;
	// addi r9,r10,24
	ctx.r9.s64 = ctx.r10.s64 + 24;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r5,-8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + -8);
	// stw r5,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r5.u32);
	// lfs f0,-8(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x823cb3b4
	if (ctx.cr6.gt) goto loc_823CB3B4;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r9,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// lfs f0,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x823cb3bc
	if (ctx.cr6.gt) goto loc_823CB3BC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r7,-3
	ctx.r9.s64 = ctx.r7.s64 + -3;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823cb304
	if (ctx.cr6.lt) goto loc_823CB304;
loc_823CB374:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823cb428
	if (!ctx.cr6.lt) goto loc_823CB428;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
loc_823CB384:
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r8,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bgt cr6,0x823cb3c0
	if (ctx.cr6.gt) goto loc_823CB3C0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823cb384
	if (ctx.cr6.lt) goto loc_823CB384;
	// b 0x823cb3c0
	goto loc_823CB3C0;
loc_823CB3AC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x823cb3c0
	goto loc_823CB3C0;
loc_823CB3B4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x823cb3c0
	goto loc_823CB3C0;
loc_823CB3BC:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_823CB3C0:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x823cb428
	if (!ctx.cr6.lt) goto loc_823CB428;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r6,-8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r10,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lfs f0,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// lfs f13,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// stw r8,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lfs f12,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// stw r8,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r8.u32);
	// lfs f11,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// stw r6,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r6.u32);
	// lfs f10,-4(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f7,f0,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// fsubs f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f10.f64));
	// fdivs f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmadds f1,f6,f9,f11
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, ctx.f9.f64, ctx.f11.f64)));
	// blr 
	return;
loc_823CB428:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r10.u32);
	// lfs f1,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823CE370) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x823ce3ac
	if (ctx.cr6.eq) goto loc_823CE3AC;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8220bca8
	ctx.lr = 0x823CE3A4;
	sub_8220BCA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ce3b0
	goto loc_823CE3B0;
loc_823CE3AC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823CE3B0:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d4b7c
	ctx.lr = 0x823CE3C0;
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x823ce3e8
	if (ctx.cr0.lt) goto loc_823CE3E8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x823ce3dc
	if (ctx.cr6.eq) goto loc_823CE3DC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CE3DC:
	// bl 0x8220a618
	ctx.lr = 0x823CE3E0;
	sub_8220A618(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823ce3f0
	goto loc_823CE3F0;
loc_823CE3E8:
	// bl 0x8220c390
	ctx.lr = 0x823CE3EC;
	sub_8220C390(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823CE3F0:
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

DEFINE_REX_FUNC(sub_823D0448) {
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
	ctx.lr = 0x823D0450;
	// add r28,r4,r5
	r28.u64 = ctx.r4.u64 + ctx.r5.u64;
	// lwz r14,11016(r3)
	r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 11016);
	// lwz r29,0(r3)
	r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lbz r8,11956(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 11956);
	// addi r26,r3,11956
	r26.s64 = ctx.r3.s64 + 11956;
	// lwz r10,11952(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 11952);
	// addi r25,r3,11952
	r25.s64 = ctx.r3.s64 + 11952;
	// lwz r30,11012(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 11012);
	// addi r24,r3,11012
	r24.s64 = ctx.r3.s64 + 11012;
	// addi r18,r3,3644
	r18.s64 = ctx.r3.s64 + 3644;
	// addi r17,r3,9020
	r17.s64 = ctx.r3.s64 + 9020;
	// addi r16,r3,24
	r16.s64 = ctx.r3.s64 + 24;
	// addi r15,r3,2072
	r15.s64 = ctx.r3.s64 + 2072;
	// addi r20,r3,2584
	r20.s64 = ctx.r3.s64 + 2584;
	// addi r19,r3,3256
	r19.s64 = ctx.r3.s64 + 3256;
	// addi r23,r3,3508
	r23.s64 = ctx.r3.s64 + 3508;
	// addi r22,r3,3636
	r22.s64 = ctx.r3.s64 + 3636;
	// addi r27,r3,12
	r27.s64 = ctx.r3.s64 + 12;
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// bge cr6,0x823d084c
	if (!ctx.cr6.lt) goto loc_823D084C;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r21,16
	r21.s64 = 16;
	// addi r9,r9,-13792
	ctx.r9.s64 = ctx.r9.s64 + -13792;
	// lvx128 v11,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_823D04B4:
	// rlwinm r9,r10,11,21,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FE;
	// lhax r7,r9,r16
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r16.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bge 0x823d04f4
	if (!ctx.cr0.lt) goto loc_823D04F4;
	// lis r9,32
	ctx.r9.s64 = 2097152;
loc_823D04C8:
	// and r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 & ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// xori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 ^ 1;
	// subf r7,r7,r6
	ctx.r7.u64 = ctx.r6.u64 - ctx.r7.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r7,r7,r18
	ctx.r7.s64 = int16_t(REX_LOAD_U16(ctx.r7.u32 + r18.u32));
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blt 0x823d04c8
	if (ctx.cr0.lt) goto loc_823D04C8;
loc_823D04F4:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(r30.u32, r14.u32, ctx.xer);
	// bge cr6,0x823d086c
	if (!ctx.cr6.lt) goto loc_823D086C;
	// lbzx r9,r7,r20
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r20.u32);
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823d053c
	if (ctx.cr0.gt) goto loc_823D053C;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r6,r9
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r5,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823D053C:
	// addic. r6,r7,-256
	ctx.xer.ca = ctx.r7.u32 > 255;
	ctx.r6.s64 = ctx.r7.s64 + -256;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge 0x823d0554
	if (!ctx.cr0.lt) goto loc_823D0554;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// stbx r9,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r9.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// b 0x823d0844
	goto loc_823D0844;
loc_823D0554:
	// clrlwi r5,r6,29
	ctx.r5.u64 = ctx.r6.u32 & 0x7;
	// cmpwi cr6,r5,7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 7, ctx.xer);
	// bne cr6,0x823d05e4
	if (!ctx.cr6.eq) goto loc_823D05E4;
	// rlwinm r9,r10,9,23,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FE;
	// lhax r9,r9,r15
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r15.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge 0x823d05a0
	if (!ctx.cr0.lt) goto loc_823D05A0;
	// lis r7,128
	ctx.r7.s64 = 8388608;
loc_823D0574:
	// and r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r5,r5,27,5,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// xori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 ^ 1;
	// subf r9,r9,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r9,r17
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + r17.u32));
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt 0x823d0574
	if (ctx.cr0.lt) goto loc_823D0574;
loc_823D05A0:
	// lbzx r7,r9,r19
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + r19.u32);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bgt 0x823d05e0
	if (ctx.cr0.gt) goto loc_823D05E0;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r5,r7
	ctx.r5.s64 = static_cast<int64_t>(-ctx.r7.u64);
	// lbz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r3,r8,r3
	ctx.r3.u64 = ctx.r8.u64 | ctx.r3.u64;
	// extsb r8,r7
	ctx.r8.s64 = ctx.r7.s8;
	// slw r7,r3,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_823D05E0:
	// addi r5,r9,7
	ctx.r5.s64 = ctx.r9.s64 + 7;
loc_823D05E4:
	// srawi r9,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 3;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// ble cr6,0x823d0760
	if (!ctx.cr6.gt) goto loc_823D0760;
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lbz r7,12004(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// blt cr6,0x823d06d8
	if (ctx.cr6.lt) goto loc_823D06D8;
	// addic. r7,r7,-3
	ctx.xer.ca = ctx.r7.u32 > 2;
	ctx.r7.s64 = ctx.r7.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x823d0668
	if (ctx.cr0.eq) goto loc_823D0668;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r9
	ctx.r7.s64 = ctx.r9.s8;
	// addi r3,r9,-3
	ctx.r3.s64 = ctx.r9.s64 + -3;
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// subfic r7,r9,35
	ctx.xer.ca = ctx.r9.u32 <= 35;
	ctx.r7.u64 = static_cast<uint64_t>(35) - ctx.r9.u64;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823d066c
	if (ctx.cr0.gt) goto loc_823D066C;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x823d066c
	goto loc_823D066C;
loc_823D0668:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823D066C:
	// rlwinm r3,r10,7,25,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r6,3014
	ctx.r7.s64 = ctx.r6.s64 + 3014;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r3,r23
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + r23.u32);
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r9,r7,r22
	ctx.r9.u64 = REX_LOAD_U8(ctx.r7.u32 + r22.u32);
	// subf r8,r9,r31
	ctx.r8.u64 = r31.u64 - ctx.r9.u64;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x823d06d0
	if (ctx.cr0.gt) goto loc_823D06D0;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823D06D0:
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// b 0x823d074c
	goto loc_823D074C;
loc_823D06D8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823d0740
	if (ctx.cr6.eq) goto loc_823D0740;
	// lbz r9,12004(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 12004);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subfic r7,r3,32
	ctx.xer.ca = ctx.r3.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r3.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// mr. r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// slw r10,r10,r3
	ctx.r10.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r3.u8 & 0x3F));
	// bgt 0x823d072c
	if (ctx.cr0.gt) goto loc_823D072C;
	// lbz r8,1(r30)
	ctx.r8.u64 = REX_LOAD_U8(r30.u32 + 1);
	// neg r3,r9
	ctx.r3.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// lbz r31,0(r30)
	r31.u64 = REX_LOAD_U8(r30.u32 + 0);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// or r31,r8,r31
	r31.u64 = ctx.r8.u64 | r31.u64;
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// slw r9,r31,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (r31.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823D072C:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// b 0x823d074c
	goto loc_823D074C;
loc_823D0740:
	// addi r9,r6,3014
	ctx.r9.s64 = ctx.r6.s64 + 3014;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_823D074C:
	// lwz r7,4(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 4);
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// stw r7,8(r27)
	REX_STORE_U32(r27.u32 + 8, ctx.r7.u32);
	// stw r6,4(r27)
	REX_STORE_U32(r27.u32 + 4, ctx.r6.u32);
	// b 0x823d0770
	goto loc_823D0770;
loc_823D0760:
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,0(r27)
	ctx.r6.u64 = REX_LOAD_U32(r27.u32 + 0);
	// lwzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + r27.u32);
	// stwx r6,r7,r27
	REX_STORE_U32(ctx.r7.u32 + r27.u32, ctx.r6.u32);
loc_823D0770:
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r6,r9,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r9.u64;
	// stw r9,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// and r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ctx.r7.u64;
	// subf r6,r7,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r7.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x823d07b8
	if (!ctx.cr6.lt) goto loc_823D07B8;
	// cmplwi cr6,r6,16
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 16, ctx.xer);
	// bge cr6,0x823d07b8
	if (!ctx.cr6.lt) goto loc_823D07B8;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_823D07A0:
	// lbzu r6,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stbx r6,r29,r4
	REX_STORE_U8(r29.u32 + ctx.r4.u32, ctx.r6.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bgt 0x823d07a0
	if (ctx.cr0.gt) goto loc_823D07A0;
	// b 0x823d0844
	goto loc_823D0844;
loc_823D07B8:
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// ble cr6,0x823d0808
	if (!ctx.cr6.gt) goto loc_823D0808;
	// addi r6,r9,-17
	ctx.r6.s64 = ctx.r9.s64 + -17;
	// add r31,r29,r4
	r31.u64 = r29.u64 + ctx.r4.u64;
	// rlwinm r6,r6,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// add r3,r7,r29
	ctx.r3.u64 = ctx.r7.u64 + r29.u64;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// rlwinm r6,r5,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
loc_823D07E8:
	// lvlx128 v63,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r21,r3
	temp.u32 = r21.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// stvlx128 v63,r0,r31
	ea = r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r21
	ea = r31.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// bdnz 0x823d07e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823D07E8;
loc_823D0808:
	// lvlx128 v63,r7,r29
	temp.u32 = ctx.r7.u32 + r29.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r6,r29,r4
	ctx.r6.u64 = r29.u64 + ctx.r4.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + r29.u64;
	// lvlx128 v62,r29,r4
	temp.u32 = r29.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,-1
	ctx.r5.s64 = -1;
	// lvrx128 v61,r21,r6
	temp.u32 = r21.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v60,r21,r7
	temp.u32 = r21.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v0,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// lvsr v12,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vor128 v13,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// vcmpgtub v12,v11,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_cmpgt_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)));
	// vsel v12,v0,v13,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stvlx v12,r29,r4
	ea = r29.u32 + ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stvrx v12,r6,r21
	ea = ctx.r6.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
loc_823D0844:
	// cmpw cr6,r4,r28
	ctx.cr6.compare<int32_t>(ctx.r4.s32, r28.s32, ctx.xer);
	// blt cr6,0x823d04b4
	if (ctx.cr6.lt) goto loc_823D04B4;
loc_823D084C:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// subf r3,r28,r4
	ctx.r3.u64 = ctx.r4.u64 - r28.u64;
	// stb r8,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r8.u8);
	// and r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ctx.r4.u64;
	// stw r10,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stw r30,0(r24)
	REX_STORE_U32(r24.u32 + 0, r30.u32);
	// stw r9,11960(r11)
	REX_STORE_U32(ctx.r11.u32 + 11960, ctx.r9.u32);
loc_823D0868:
	// b 0x822d4ea0
	return;
loc_823D086C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823d0868
	goto loc_823D0868;
}

DEFINE_REX_FUNC(sub_823E0B50) {
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
	ctx.lr = 0x823E0B58;
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
	// beq cr6,0x823e0b90
	if (ctx.cr6.eq) goto loc_823E0B90;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x823E0B8C;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E0B90:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823e0bac
	if (ctx.cr6.eq) goto loc_823E0BAC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc0b0
	ctx.lr = 0x823E0BA8;
	sub_823DC0B0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_823E0BAC:
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
	// bne 0x823e0c18
	if (!ctx.cr0.eq) goto loc_823E0C18;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e0c20
	goto loc_823E0C20;
loc_823E0C18:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_823E0C20:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823e0c38
	if (ctx.cr6.eq) goto loc_823E0C38;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x823E0C38;
	sub_823DC658(ctx, base);
loc_823E0C38:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823e0f0c
	if (!ctx.cr6.gt) goto loc_823E0F0C;
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// lis r7,-32251
	ctx.r7.s64 = -2113601536;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r25,r30,2,0,29
	r25.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r29
	ctx.r9.u64 = r29.u64 - r30.u64;
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lfd f11,-9120(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r7.u32 + -9120);
	// subf r30,r25,r28
	r30.u64 = r28.u64 - r25.u64;
	// lfs f5,-13044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -13044);
	ctx.f5.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r28,-32255
	r28.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfs f12,16288(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16288);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f13,-7224(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -7224);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17176(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 17176);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f7,21348(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 21348);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r27,12
	r29.s64 = r27.s64 + 12;
	// lfs f4,2028(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2028);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,23032(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 23032);
	ctx.f6.f64 = double(temp.f32);
loc_823E0CAC:
	// add r11,r29,r10
	ctx.r11.u64 = r29.u64 + ctx.r10.u64;
	// lfsx f10,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 + f29.f64));
	// rlwinm r7,r26,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xC;
	// lwz r6,92(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lfs f9,-12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,-8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fadds f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 + f31.f64));
	// fadds f8,f8,f30
	ctx.f8.f64 = double(float(ctx.f8.f64 + f30.f64));
	// lfsx f3,r7,r24
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + r24.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f10,f10,f4
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmuls f9,f9,f6
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f8,f8,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f6.f64));
	// fadds f2,f10,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fadds f1,f9,f3
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f3,f8,f3
	ctx.f3.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fctiwz f2,f2
	ctx.f2.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f2,f1
	ctx.f2.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// fctiwz f3,f3
	ctx.f3.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f3.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x823e0e5c
	if (ctx.cr6.eq) goto loc_823E0E5C;
	// extsw r28,r4
	r28.s64 = ctx.r4.s32;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// std r28,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, r28.u64);
	// extsw r28,r6
	r28.s64 = ctx.r6.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f3,96(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r28,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, r28.u64);
	// lfd f31,112(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f3,f3
	ctx.f3.f64 = double(ctx.f3.s64);
	// lfd f2,104(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// fcfid f31,f31
	f31.f64 = double(f31.s64);
	// fcfid f2,f2
	ctx.f2.f64 = double(ctx.f2.s64);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// fsubs f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f3.f64));
	// frsp f3,f31
	ctx.f3.f64 = double(float(f31.f64));
	// fmuls f9,f9,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fsubs f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// frsp f3,f2
	ctx.f3.f64 = double(float(ctx.f2.f64));
	// fmadds f2,f9,f0,f1
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f1.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fmuls f8,f8,f7
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fsubs f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f3.f64));
	// fmul f2,f8,f11
	ctx.f2.f64 = ctx.f8.f64 * ctx.f11.f64;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// fmul f3,f9,f11
	ctx.f3.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmuls f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// frsp f30,f2
	f30.f64 = double(float(ctx.f2.f64));
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f2,f9,f13,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f13.f64, ctx.f2.f64)));
	// stfs f2,16(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f2,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f9,f9,f12,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f2.f64)));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f8,f12,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f8.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f9,20(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r7,r11,20
	ctx.r7.s64 = ctx.r11.s64 + 20;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f9,f10,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// frsp f31,f3
	f31.f64 = double(float(ctx.f3.f64));
	// fmadds f9,f10,f13,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f9,28(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmul f3,f10,f11
	ctx.f3.f64 = ctx.f10.f64 * ctx.f11.f64;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lfs f9,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f10,f10,f12,f9
	ctx.f10.f64 = double(float(std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f9.f64)));
	// stfs f10,28(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// frsp f29,f3
	f29.f64 = double(float(ctx.f3.f64));
loc_823E0E5C:
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// blt cr6,0x823e0e6c
	if (ctx.cr6.lt) goto loc_823E0E6C;
	// li r11,127
	ctx.r11.s64 = 127;
loc_823E0E6C:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x823e0e84
	if (!ctx.cr6.gt) goto loc_823E0E84;
	// cmpwi cr6,r5,127
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 127, ctx.xer);
	// blt cr6,0x823e0e88
	if (ctx.cr6.lt) goto loc_823E0E88;
	// li r5,127
	ctx.r5.s64 = 127;
	// b 0x823e0e88
	goto loc_823E0E88;
loc_823E0E84:
	// li r5,-127
	ctx.r5.s64 = -127;
loc_823E0E88:
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// blt cr6,0x823e0e98
	if (ctx.cr6.lt) goto loc_823E0E98;
	// li r11,127
	ctx.r11.s64 = 127;
loc_823E0E98:
	// cmpwi cr6,r11,-127
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -127, ctx.xer);
	// ble cr6,0x823e0eb0
	if (!ctx.cr6.gt) goto loc_823E0EB0;
	// cmpwi cr6,r6,127
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 127, ctx.xer);
	// blt cr6,0x823e0eb4
	if (ctx.cr6.lt) goto loc_823E0EB4;
	// li r6,127
	ctx.r6.s64 = 127;
	// b 0x823e0eb4
	goto loc_823E0EB4;
loc_823E0EB0:
	// li r6,-127
	ctx.r6.s64 = -127;
loc_823E0EB4:
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// blt cr6,0x823e0ec4
	if (ctx.cr6.lt) goto loc_823E0EC4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_823E0EC4:
	// cmpwi cr6,r11,-255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -255, ctx.xer);
	// ble cr6,0x823e0edc
	if (!ctx.cr6.gt) goto loc_823E0EDC;
	// cmpwi cr6,r4,255
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 255, ctx.xer);
	// blt cr6,0x823e0ee0
	if (ctx.cr6.lt) goto loc_823E0EE0;
	// li r4,255
	ctx.r4.s64 = 255;
	// b 0x823e0ee0
	goto loc_823E0EE0;
loc_823E0EDC:
	// li r4,-255
	ctx.r4.s64 = -255;
loc_823E0EE0:
	// rlwimi r6,r4,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwimi r5,r11,8,0,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r5.u64 & 0xFFFFFFFF000000FF);
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// stwux r5,r30,r25
	ea = r30.u32 + r25.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823e0cac
	if (ctx.cr6.lt) goto loc_823E0CAC;
loc_823E0F0C:
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

DEFINE_REX_FUNC(sub_823E7EE8) {
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
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823e7f20
	if (ctx.cr6.eq) goto loc_823E7F20;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// subf r10,r6,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_823E7F08:
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x823e7f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823E7F08;
loc_823E7F20:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82226590
	ctx.lr = 0x823E7F28;
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

DEFINE_REX_FUNC(sub_823EADA8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x823EADB0;
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
	// b 0x823eadd4
	goto loc_823EADD4;
loc_823EADC8:
	// lwz r31,36(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x823eadf8
	if (ctx.cr6.eq) goto loc_823EADF8;
loc_823EADD4:
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
	// bl 0x823e89e0
	ctx.lr = 0x823EADEC;
	sub_823E89E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x823eadc8
	if (!ctx.cr0.lt) goto loc_823EADC8;
	// b 0x823eadfc
	goto loc_823EADFC;
loc_823EADF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EADFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_823EBFF8) {
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
	ctx.lr = 0x823EC000;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// b 0x823ec01c
	goto loc_823EC01C;
loc_823EC018:
	// lbzu r11,1(r28)
	ea = 1 + r28.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	r28.u32 = ea;
loc_823EC01C:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcab8
	ctx.lr = 0x823EC024;
	sub_822DCAB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ec018
	if (!ctx.cr0.eq) goto loc_823EC018;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcad8
	ctx.lr = 0x823EC038;
	sub_822DCAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ec064
	if (!ctx.cr0.eq) goto loc_823EC064;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x823ec064
	if (ctx.cr6.eq) goto loc_823EC064;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x823ec064
	if (ctx.cr6.eq) goto loc_823EC064;
loc_823EC058:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823ec258
	goto loc_823EC258;
loc_823EC064:
	// li r30,1
	r30.s64 = 1;
loc_823EC068:
	// lbzx r11,r30,r28
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + r28.u32);
	// add r26,r30,r28
	r26.u64 = r30.u64 + r28.u64;
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822dcad8
	ctx.lr = 0x823EC078;
	sub_822DCAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823ec08c
	if (!ctx.cr0.eq) goto loc_823EC08C;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x823ec094
	if (!ctx.cr6.eq) goto loc_823EC094;
loc_823EC08C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x823ec068
	goto loc_823EC068;
loc_823EC094:
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 16);
	// li r31,0
	r31.s64 = 0;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(r27.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r29,r11,r3
	r29.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823ec12c
	if (ctx.cr6.eq) goto loc_823EC12C;
loc_823EC0B8:
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r31,r11,31,1,31
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// add r5,r11,r3
	ctx.r5.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beq cr6,0x823ec10c
	if (ctx.cr6.eq) goto loc_823EC10C;
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// subf r4,r28,r5
	ctx.r4.u64 = ctx.r5.u64 - r28.u64;
loc_823EC0E0:
	// lbzx r8,r4,r11
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// extsb r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823ec24c
	if (ctx.cr6.lt) goto loc_823EC24C;
	// bgt cr6,0x823ec120
	if (ctx.cr6.gt) goto loc_823EC120;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// blt cr6,0x823ec0e0
	if (ctx.cr6.lt) goto loc_823EC0E0;
loc_823EC10C:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, ctx.xer);
	// bne cr6,0x823ec12c
	if (!ctx.cr6.eq) goto loc_823EC12C;
	// lbzx r11,r9,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823ec12c
	if (ctx.cr0.eq) goto loc_823EC12C;
loc_823EC120:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823EC124:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x823ec0b8
	if (ctx.cr6.lt) goto loc_823EC0B8;
loc_823EC12C:
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823ec058
	if (ctx.cr6.eq) goto loc_823EC058;
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + r29.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r28,r10,r3
	r28.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq cr6,0x823ec19c
	if (ctx.cr6.eq) goto loc_823EC19C;
	// addi r8,r11,-20
	ctx.r8.s64 = ctx.r11.s64 + -20;
loc_823EC150:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ec190
	if (ctx.cr6.eq) goto loc_823EC190;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823EC164:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x823ec188
	if (ctx.cr0.eq) goto loc_823EC188;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ec164
	if (ctx.cr6.eq) goto loc_823EC164;
loc_823EC188:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ec19c
	if (!ctx.cr0.eq) goto loc_823EC19C;
loc_823EC190:
	// addic. r31,r31,-1
	ctx.xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// addi r8,r8,-20
	ctx.r8.s64 = ctx.r8.s64 + -20;
	// bne 0x823ec150
	if (!ctx.cr0.eq) goto loc_823EC150;
loc_823EC19C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// rlwinm r30,r31,2,0,29
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x823ebc78
	ctx.lr = 0x823EC1B4;
	sub_823EBC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ec058
	if (ctx.cr0.eq) goto loc_823EC058;
	// mulli r11,r31,20
	ctx.r11.s64 = static_cast<int64_t>(r31.u64 * static_cast<uint64_t>(20));
	// add r29,r11,r29
	r29.u64 = ctx.r11.u64 + r29.u64;
loc_823EC1C4:
	// stw r3,0(r25)
	REX_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16);
	// addi r25,r3,36
	r25.s64 = ctx.r3.s64 + 36;
	// addi r29,r29,20
	r29.s64 = r29.s64 + 20;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823ec254
	if (!ctx.cr6.lt) goto loc_823EC254;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823ec22c
	if (ctx.cr6.eq) goto loc_823EC22C;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823EC200:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x823ec224
	if (ctx.cr0.eq) goto loc_823EC224;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823ec200
	if (ctx.cr6.eq) goto loc_823EC200;
loc_823EC224:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823ec254
	if (!ctx.cr0.eq) goto loc_823EC254;
loc_823EC22C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + ctx.r11.u32);
	// bl 0x823ebc78
	ctx.lr = 0x823EC240;
	sub_823EBC78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823ec1c4
	if (!ctx.cr0.eq) goto loc_823EC1C4;
	// b 0x823ec058
	goto loc_823EC058;
loc_823EC24C:
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// b 0x823ec124
	goto loc_823EC124;
loc_823EC254:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823EC258:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823F4D98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F4DA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,440(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f4dc4
	if (ctx.cr6.eq) goto loc_823F4DC4;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823F4DC4:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x823F4DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x823f4e5c
	if (ctx.cr6.eq) goto loc_823F4E5C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x823f4eb8
	if (!ctx.cr6.eq) goto loc_823F4EB8;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r10.u32);
	// beq cr6,0x823f4e3c
	if (ctx.cr6.eq) goto loc_823F4E3C;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823f4eb8
	if (ctx.cr6.eq) goto loc_823F4EB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,59
	ctx.r10.s64 = 59;
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
	ctx.lr = 0x823F4E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823F4E3C:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 148);
	// lwz r10,156(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 156);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823f4eb8
	if (!ctx.cr6.gt) goto loc_823F4EB8;
	// stw r11,156(r31)
	REX_STORE_U32(r31.u32 + 156, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823F4E5C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823f4e84
	if (ctx.cr6.eq) goto loc_823F4E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f47e0
	ctx.lr = 0x823F4E70;
	sub_823F47E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_823F4E84:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823f4eb0
	if (!ctx.cr6.eq) goto loc_823F4EB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// li r10,35
	ctx.r10.s64 = 35;
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
	ctx.lr = 0x823F4EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4EB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f4d28
	ctx.lr = 0x823F4EB8;
	sub_823F4D28(ctx, base);
loc_823F4EB8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823F7CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x823F7D00;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f7e40
	if (ctx.cr6.eq) goto loc_823F7E40;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,49
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 49, ctx.xer);
	// bne cr6,0x823f7e40
	if (!ctx.cr6.eq) goto loc_823F7E40;
	// cmplwi cr6,r6,56
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 56, ctx.xer);
	// bne cr6,0x823f7e40
	if (!ctx.cr6.eq) goto loc_823F7E40;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f7d38
	if (!ctx.cr6.eq) goto loc_823F7D38;
	// li r3,-2
	ctx.r3.s64 = -2;
	// b 0x823f7e44
	goto loc_823F7E44;
loc_823F7D38:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r29,0
	r29.s64 = 0;
	// stw r29,24(r31)
	REX_STORE_U32(r31.u32 + 24, r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f7d5c
	if (!ctx.cr6.eq) goto loc_823F7D5C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// stw r29,40(r31)
	REX_STORE_U32(r31.u32 + 40, r29.u32);
	// addi r11,r11,4920
	ctx.r11.s64 = ctx.r11.s64 + 4920;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_823F7D5C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823f7d74
	if (!ctx.cr6.eq) goto loc_823F7D74;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r11,r11,5016
	ctx.r11.s64 = ctx.r11.s64 + 5016;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
loc_823F7D74:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F7D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// bne 0x823f7da0
	if (!ctx.cr0.eq) goto loc_823F7DA0;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x823f7e44
	goto loc_823F7E44;
loc_823F7DA0:
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, r29.u32);
	// bge cr6,0x823f7dc4
	if (!ctx.cr6.lt) goto loc_823F7DC4;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// neg r30,r30
	r30.s64 = static_cast<int64_t>(-r30.u64);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_823F7DC4:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// blt cr6,0x823f7e2c
	if (ctx.cr6.lt) goto loc_823F7E2C;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(r30.s32, 15, ctx.xer);
	// bgt cr6,0x823f7e2c
	if (ctx.cr6.gt) goto loc_823F7E2C;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stw r30,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, r30.u32);
	// slw r5,r11,r30
	ctx.r5.u64 = r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (r30.u8 & 0x3F));
	// addi r11,r9,-1088
	ctx.r11.s64 = ctx.r9.s64 + -1088;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82401470
	ctx.lr = 0x823F7E04;
	sub_82401470(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
	// bne 0x823f7e1c
	if (!ctx.cr0.eq) goto loc_823F7E1C;
	// li r30,-4
	r30.s64 = -4;
	// b 0x823f7e30
	goto loc_823F7E30;
loc_823F7E1C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823f7c80
	ctx.lr = 0x823F7E24;
	sub_823F7C80(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823f7e44
	goto loc_823F7E44;
loc_823F7E2C:
	// li r30,-2
	r30.s64 = -2;
loc_823F7E30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82299fd0
	ctx.lr = 0x823F7E38;
	sub_82299FD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823f7e44
	goto loc_823F7E44;
loc_823F7E40:
	// li r3,-6
	ctx.r3.s64 = -6;
loc_823F7E44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_823FC218) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x823FC220;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r21,448(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823fc2c4
	if (ctx.cr6.eq) goto loc_823FC2C4;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fc2c4
	if (!ctx.cr6.eq) goto loc_823FC2C4;
	// lwz r10,16(r21)
	ctx.r10.u64 = REX_LOAD_U32(r21.u32 + 16);
	// lwz r11,444(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r31,16(r21)
	REX_STORE_U32(r21.u32 + 16, r31.u32);
	// lwz r7,444(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 444);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x823FC27C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r10,332(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 332);
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823fc2ac
	if (!ctx.cr6.gt) goto loc_823FC2AC;
	// addi r10,r21,16
	ctx.r10.s64 = r21.s64 + 16;
loc_823FC298:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// lwz r9,332(r25)
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + 332);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823fc298
	if (ctx.cr6.lt) goto loc_823FC298;
loc_823FC2AC:
	// lwz r11,280(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 280);
	// stw r11,36(r21)
	REX_STORE_U32(r21.u32 + 36, ctx.r11.u32);
	// lwz r10,420(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 420);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823fc2c4
	if (!ctx.cr6.eq) goto loc_823FC2C4;
	// stw r31,8(r21)
	REX_STORE_U32(r21.u32 + 8, r31.u32);
loc_823FC2C4:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823fc6d8
	if (!ctx.cr6.eq) goto loc_823FC6D8;
	// lwz r11,24(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 24);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(r21.u32 + 20);
	// addi r23,r21,20
	r23.s64 = r21.s64 + 20;
	// lwz r8,24(r21)
	ctx.r8.u64 = REX_LOAD_U32(r21.u32 + 24);
	// mr r18,r31
	r18.u64 = r31.u64;
	// lwz r7,28(r21)
	ctx.r7.u64 = REX_LOAD_U32(r21.u32 + 28);
	// lwz r6,32(r21)
	ctx.r6.u64 = REX_LOAD_U32(r21.u32 + 32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,360(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 360);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r4,12(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 12);
	// lwz r5,16(r21)
	ctx.r5.u64 = REX_LOAD_U32(r21.u32 + 16);
	// stw r25,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// ble cr6,0x823fc694
	if (!ctx.cr6.gt) goto loc_823FC694;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// mr r20,r30
	r20.u64 = r30.u64;
	// addi r22,r25,364
	r22.s64 = r25.s64 + 364;
	// addi r24,r21,112
	r24.s64 = r21.s64 + 112;
	// li r26,1
	r26.s64 = 1;
	// addi r19,r11,1768
	r19.s64 = ctx.r11.s64 + 1768;
	// addi r27,r10,4200
	r27.s64 = ctx.r10.s64 + 4200;
loc_823FC348:
	// lwz r29,0(r20)
	r29.u64 = REX_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// lwz r31,-40(r24)
	r31.u64 = REX_LOAD_U32(r24.u32 + -40);
	// lwz r28,0(r24)
	r28.u64 = REX_LOAD_U32(r24.u32 + 0);
	// bge cr6,0x823fc394
	if (!ctx.cr6.lt) goto loc_823FC394;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC368;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fc394
	if (!ctx.cr6.lt) goto loc_823FC394;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x823fc3c8
	goto loc_823FC3C8;
loc_823FC388:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb0
	return;
loc_823FC394:
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
	// beq cr6,0x823fc3c4
	if (ctx.cr6.eq) goto loc_823FC3C4;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r31,1168(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x823fc3e8
	goto loc_823FC3E8;
loc_823FC3C4:
	// li r7,9
	ctx.r7.s64 = 9;
loc_823FC3C8:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fc0f0
	ctx.lr = 0x823FC3D4;
	sub_823FC0F0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823fc388
	if (ctx.cr6.lt) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC3E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823fc444
	if (ctx.cr6.eq) goto loc_823FC444;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x823fc414
	if (!ctx.cr6.lt) goto loc_823FC414;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC404;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC414:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// slw r10,r26,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r11,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r27.u32);
	// and r31,r10,r9
	r31.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cmpw cr6,r31,r8
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823fc444
	if (!ctx.cr6.lt) goto loc_823FC444;
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r31,r11,r31
	r31.u64 = ctx.r11.u64 + r31.u64;
loc_823FC444:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fc46c
	if (ctx.cr6.eq) goto loc_823FC46C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + r31.u64;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// sth r11,0(r29)
	REX_STORE_U16(r29.u32 + 0, ctx.r11.u16);
loc_823FC46C:
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(r24.u32 + 80);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823fc59c
	if (ctx.cr6.eq) goto loc_823FC59C;
loc_823FC47C:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fc4b0
	if (!ctx.cr6.lt) goto loc_823FC4B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC490;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fc4b0
	if (!ctx.cr6.lt) goto loc_823FC4B0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x823fc4e4
	goto loc_823FC4E4;
loc_823FC4B0:
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
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fc4e0
	if (ctx.cr6.eq) goto loc_823FC4E0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x823fc500
	goto loc_823FC500;
loc_823FC4E0:
	// li r7,9
	ctx.r7.s64 = 9;
loc_823FC4E4:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fc0f0
	ctx.lr = 0x823FC4F0;
	sub_823FC0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823fc388
	if (ctx.cr6.lt) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC500:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823fc580
	if (ctx.cr6.eq) goto loc_823FC580;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x823fc538
	if (!ctx.cr6.lt) goto loc_823FC538;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC528;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC538:
	// slw r11,r26,r31
	ctx.r11.u64 = r31.u8 & 0x20 ? 0 : (r26.u32 << (r31.u8 & 0x3F));
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r9,r4,r5
	temp.u32 = ctx.r5.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r9.s64 = ctx.r4.s32 >> temp.u32;
	// lwzx r8,r10,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823fc568
	if (!ctx.cr6.lt) goto loc_823FC568;
	// addi r9,r27,64
	ctx.r9.s64 = r27.s64 + 64;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_823FC568:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwzx r8,r10,r19
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + r19.u32);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r7,r29
	REX_STORE_U16(ctx.r7.u32 + r29.u32, ctx.r9.u16);
	// b 0x823fc58c
	goto loc_823FC58C;
loc_823FC580:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x823fc678
	if (!ctx.cr6.eq) goto loc_823FC678;
	// addi r30,r30,15
	r30.s64 = r30.s64 + 15;
loc_823FC58C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x823fc47c
	if (ctx.cr6.lt) goto loc_823FC47C;
	// b 0x823fc678
	goto loc_823FC678;
loc_823FC59C:
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fc5d0
	if (!ctx.cr6.lt) goto loc_823FC5D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC5B0;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r5,8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 8, ctx.xer);
	// bge cr6,0x823fc5d0
	if (!ctx.cr6.lt) goto loc_823FC5D0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x823fc604
	goto loc_823FC604;
loc_823FC5D0:
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
	// lwzx r10,r8,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823fc600
	if (ctx.cr6.eq) goto loc_823FC600;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
	// subf r5,r10,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r10.u64;
	// lbz r3,1168(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 1168);
	// b 0x823fc620
	goto loc_823FC620;
loc_823FC600:
	// li r7,9
	ctx.r7.s64 = 9;
loc_823FC604:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fc0f0
	ctx.lr = 0x823FC610;
	sub_823FC0F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x823fc388
	if (ctx.cr6.lt) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC620:
	// clrlwi r31,r3,28
	r31.u64 = ctx.r3.u32 & 0xF;
	// srawi r11,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x823fc660
	if (ctx.cr6.eq) goto loc_823FC660;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r31.s32, ctx.xer);
	// bge cr6,0x823fc658
	if (!ctx.cr6.lt) goto loc_823FC658;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823fbf88
	ctx.lr = 0x823FC648;
	sub_823FBF88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823fc388
	if (ctx.cr6.eq) goto loc_823FC388;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823FC658:
	// subf r5,r31,r5
	ctx.r5.u64 = ctx.r5.u64 - r31.u64;
	// b 0x823fc66c
	goto loc_823FC66C;
loc_823FC660:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x823fc678
	if (!ctx.cr6.eq) goto loc_823FC678;
	// addi r30,r30,15
	r30.s64 = r30.s64 + 15;
loc_823FC66C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,64
	ctx.cr6.compare<int32_t>(r30.s32, 64, ctx.xer);
	// blt cr6,0x823fc59c
	if (ctx.cr6.lt) goto loc_823FC59C;
loc_823FC678:
	// lwz r11,360(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 360);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r20,r20,4
	r20.s64 = r20.s64 + 4;
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823fc348
	if (ctx.cr6.lt) goto loc_823FC348;
loc_823FC694:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,24(r25)
	ctx.r10.u64 = REX_LOAD_U32(r25.u32 + 24);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r4,12(r21)
	REX_STORE_U32(r21.u32 + 12, ctx.r4.u32);
	// stw r5,16(r21)
	REX_STORE_U32(r21.u32 + 16, ctx.r5.u32);
	// stw r7,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r7.u32);
	// stw r6,4(r23)
	REX_STORE_U32(r23.u32 + 4, ctx.r6.u32);
	// stw r3,8(r23)
	REX_STORE_U32(r23.u32 + 8, ctx.r3.u32);
	// stw r11,12(r23)
	REX_STORE_U32(r23.u32 + 12, ctx.r11.u32);
loc_823FC6D8:
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(r21.u32 + 36);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,36(r21)
	REX_STORE_U32(r21.u32 + 36, ctx.r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_82412C68) {
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
	ctx.lr = 0x82412C70;
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
	// blt cr6,0x82412cb8
	if (ctx.cr6.lt) goto loc_82412CB8;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,17144
	ctx.r5.s64 = ctx.r11.s64 + 17144;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412CB8;
	sub_8240E308(ctx, base);
loc_82412CB8:
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
	// blt cr6,0x82412cec
	if (ctx.cr6.lt) goto loc_82412CEC;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// addi r5,r11,17072
	ctx.r5.s64 = ctx.r11.s64 + 17072;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82412CEC;
	sub_8240E308(ctx, base);
loc_82412CEC:
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
	// bl 0x82412bf8
	ctx.lr = 0x82412D0C;
	sub_82412BF8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82412FC0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82413C58) {
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
	ctx.lr = 0x82413C60;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r8,11088
	ctx.r8.s64 = ctx.r8.s64 + 11088;
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
	// beq cr6,0x82413cdc
	if (ctx.cr6.eq) goto loc_82413CDC;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82413cdc
	if (ctx.cr6.eq) goto loc_82413CDC;
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
	ctx.lr = 0x82413CD4;
	sub_82413040(ctx, base);
	// stw r5,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r5.u32);
	// stw r30,88(r31)
	REX_STORE_U32(r31.u32 + 88, r30.u32);
loc_82413CDC:
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
	ctx.lr = 0x82413D00;
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
	ctx.lr = 0x82413D20;
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

DEFINE_REX_FUNC(sub_82419798) {
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
	ctx.lr = 0x824197A0;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f38
	ctx.lr = 0x824197A8;
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
	// beq cr6,0x824197d4
	if (ctx.cr6.eq) goto loc_824197D4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82413040
	ctx.lr = 0x824197D0;
	sub_82413040(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824197D4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x824197f0
	if (ctx.cr6.eq) goto loc_824197F0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82413dd0
	ctx.lr = 0x824197EC;
	sub_82413DD0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
loc_824197F0:
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
	// bne 0x82419860
	if (!ctx.cr0.eq) goto loc_82419860;
	// li r29,0
	r29.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// b 0x82419868
	goto loc_82419868;
loc_82419860:
	// addi r29,r11,-1
	r29.s64 = ctx.r11.s64 + -1;
	// li r30,-1
	r30.s64 = -1;
loc_82419868:
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82419880
	if (ctx.cr6.eq) goto loc_82419880;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc658
	ctx.lr = 0x82419880;
	sub_823DC658(ctx, base);
loc_82419880:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82419c08
	if (!ctx.cr6.gt) goto loc_82419C08;
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
loc_824198E4:
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
	// beq cr6,0x82419b1c
	if (ctx.cr6.eq) goto loc_82419B1C;
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
loc_82419B1C:
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// blt cr6,0x82419b2c
	if (ctx.cr6.lt) goto loc_82419B2C;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82419B2C:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x82419b44
	if (!ctx.cr6.gt) goto loc_82419B44;
	// cmpwi cr6,r3,32767
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32767, ctx.xer);
	// blt cr6,0x82419b48
	if (ctx.cr6.lt) goto loc_82419B48;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x82419b48
	goto loc_82419B48;
loc_82419B44:
	// li r3,-32767
	ctx.r3.s64 = -32767;
loc_82419B48:
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// blt cr6,0x82419b58
	if (ctx.cr6.lt) goto loc_82419B58;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82419B58:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x82419b70
	if (!ctx.cr6.gt) goto loc_82419B70;
	// cmpwi cr6,r4,32767
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 32767, ctx.xer);
	// blt cr6,0x82419b74
	if (ctx.cr6.lt) goto loc_82419B74;
	// li r4,32767
	ctx.r4.s64 = 32767;
	// b 0x82419b74
	goto loc_82419B74;
loc_82419B70:
	// li r4,-32767
	ctx.r4.s64 = -32767;
loc_82419B74:
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// blt cr6,0x82419b84
	if (ctx.cr6.lt) goto loc_82419B84;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82419B84:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x82419b9c
	if (!ctx.cr6.gt) goto loc_82419B9C;
	// cmpwi cr6,r5,32767
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 32767, ctx.xer);
	// blt cr6,0x82419ba0
	if (ctx.cr6.lt) goto loc_82419BA0;
	// li r5,32767
	ctx.r5.s64 = 32767;
	// b 0x82419ba0
	goto loc_82419BA0;
loc_82419B9C:
	// li r5,-32767
	ctx.r5.s64 = -32767;
loc_82419BA0:
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// blt cr6,0x82419bb0
	if (ctx.cr6.lt) goto loc_82419BB0;
	// li r10,32767
	ctx.r10.s64 = 32767;
loc_82419BB0:
	// cmpwi cr6,r10,-32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32767, ctx.xer);
	// ble cr6,0x82419bc8
	if (!ctx.cr6.gt) goto loc_82419BC8;
	// cmpwi cr6,r6,32767
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 32767, ctx.xer);
	// blt cr6,0x82419bcc
	if (ctx.cr6.lt) goto loc_82419BCC;
	// li r6,32767
	ctx.r6.s64 = 32767;
	// b 0x82419bcc
	goto loc_82419BCC;
loc_82419BC8:
	// li r6,-32767
	ctx.r6.s64 = -32767;
loc_82419BCC:
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
	// blt cr6,0x824198e4
	if (ctx.cr6.lt) goto loc_824198E4;
loc_82419C08:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x822d4f84
	ctx.lr = 0x82419C14;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82427840) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82427848;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82427100
	ctx.lr = 0x82427858;
	sub_82427100(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,-5800
	ctx.r11.s64 = ctx.r11.s64 + -5800;
	// stw r29,48(r31)
	REX_STORE_U32(r31.u32 + 48, r29.u32);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r29,52(r31)
	REX_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r29,56(r31)
	REX_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	REX_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,2736(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// addi r3,r11,184
	ctx.r3.s64 = ctx.r11.s64 + 184;
	// bl 0x82424978
	ctx.lr = 0x82427890;
	sub_82424978(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	REX_STORE_U8(r31.u32 + 5, ctx.r11.u8);
	// lbz r11,1380(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 1380);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8242790c
	if (!ctx.cr0.eq) goto loc_8242790C;
	// lwz r28,1452(r30)
	r28.u64 = REX_LOAD_U32(r30.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82412d18
	ctx.lr = 0x824278B8;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x824278d4
	if (ctx.cr0.eq) goto loc_824278D4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82428e48
	ctx.lr = 0x824278D0;
	sub_82428E48(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_824278D4:
	// lwz r11,2736(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 2736);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824278F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824288c8
	ctx.lr = 0x82427900;
	sub_824288C8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82427208
	ctx.lr = 0x8242790C;
	sub_82427208(ctx, base);
loc_8242790C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824296B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x824296C0;
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
	ctx.lr = 0x824296DC;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r29.u32);
	// beq 0x824296fc
	if (ctx.cr0.eq) goto loc_824296FC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824292b0
	ctx.lr = 0x824296F8;
	sub_824292B0(ctx, base);
	// b 0x82429700
	goto loc_82429700;
loc_824296FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429700:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8242A060) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8242A068;
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
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82412d18
	ctx.lr = 0x8242A088;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r28.u32);
	// beq 0x8242a0ac
	if (ctx.cr0.eq) goto loc_8242A0AC;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824282a0
	ctx.lr = 0x8242A0A8;
	sub_824282A0(ctx, base);
	// b 0x8242a0b0
	goto loc_8242A0B0;
loc_8242A0AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242A0B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8242C698) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8242c6c4
	if (ctx.cr0.eq) goto loc_8242C6C4;
	// bl 0x82473600
	ctx.lr = 0x8242C6C4;
	sub_82473600(ctx, base);
loc_8242C6C4:
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

DEFINE_REX_FUNC(sub_8242D190) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_8242D1A4:
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
	// bne 0x8242d1a4
	if (!ctx.cr0.eq) goto loc_8242D1A4;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8242d200
	if (!ctx.cr6.eq) goto loc_8242D200;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8242d1ec
	if (ctx.cr6.eq) goto loc_8242D1EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242D1E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8242d1f0
	goto loc_8242D1F0;
loc_8242D1EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8242D1F0:
	// bl 0x82473600
	ctx.lr = 0x8242D1F4;
	sub_82473600(ctx, base);
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r3,r11,7712
	ctx.r3.s64 = ctx.r11.s64 + 7712;
	// bl 0x8242c330
	ctx.lr = 0x8242D200;
	sub_8242C330(ctx, base);
loc_8242D200:
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

DEFINE_REX_FUNC(sub_82431458) {
	REX_FUNC_PROLOGUE();
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,36(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwz r30,20(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r31,32(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82431588
	if (!ctx.cr6.eq) goto loc_82431588;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82431588
	if (ctx.cr6.eq) goto loc_82431588;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82431508
	if (ctx.cr6.eq) goto loc_82431508;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8243160c
	if (!ctx.cr6.eq) goto loc_8243160C;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f13,0(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// stfs f11,-56(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f10,-52(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// bne cr6,0x824314e4
	if (!ctx.cr6.eq) goto loc_824314E4;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// b 0x8243160c
	goto loc_8243160C;
loc_824314E4:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,40(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,60(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 60);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,-48(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f12,-44(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f11,-40(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f10,-36(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// b 0x8243160c
	goto loc_8243160C;
loc_82431508:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f12,-60(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// bne cr6,0x82431544
	if (!ctx.cr6.eq) goto loc_82431544;
	// ld r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
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
	// std r10,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r10.u64);
	// b 0x8243160c
	goto loc_8243160C;
loc_82431544:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fadds f7,f9,f11
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// stfs f8,-56(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// lfs f13,2008(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2008);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f6,f12,f13
	ctx.f6.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f7,-52(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// fmuls f5,f11,f13
	ctx.f5.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f6,-48(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f5,-44(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f6,-40(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f5,-36(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// b 0x8243160c
	goto loc_8243160C;
loc_82431588:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-64(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// bne cr6,0x824315c0
	if (!ctx.cr6.eq) goto loc_824315C0;
	// stfs f13,-60(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// ld r10,-64(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// std r10,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r10.u64);
	// stfs f0,-44(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f0,-36(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
	// b 0x8243160c
	goto loc_8243160C;
loc_824315C0:
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f11,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f10,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fadds f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// stfs f9,-60(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -60, temp.u32);
	// lfs f13,16228(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16228);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f13
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f12,2008(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2008);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,16172(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16172);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f7,f11,f12,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f10.f64)));
	// fmadds f6,f11,f13,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f10.f64)));
	// stfs f7,-56(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -56, temp.u32);
	// stfs f6,-52(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -52, temp.u32);
	// stfs f8,-48(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// stfs f8,-44(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f8,-40(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f8,-36(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -36, temp.u32);
loc_8243160C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stfs f0,-20(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r5,r1,-64
	ctx.r5.s64 = ctx.r1.s64 + -64;
	// addi r4,r1,-64
	ctx.r4.s64 = ctx.r1.s64 + -64;
	// addi r3,r1,-48
	ctx.r3.s64 = ctx.r1.s64 + -48;
	// lfs f0,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// stfs f0,-32(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvrx128 v61,r6,r5
	temp.u32 = ctx.r6.u32 + ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r7,r1,-32
	ctx.r7.s64 = ctx.r1.s64 + -32;
	// lvlx128 v60,r0,r4
	temp.u32 = ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v59,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v58,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v63,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r8,r11,0,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	// lvlx128 v62,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vor128 v0,v58,v59
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// vor128 v13,v60,v61
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8)));
	// beq cr6,0x824316c8
	if (ctx.cr6.eq) goto loc_824316C8;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(r30.u32, 15, ctx.xer);
	// ble cr6,0x824317c0
	if (!ctx.cr6.gt) goto loc_824317C0;
loc_82431678:
	// vmaddfp v12,v0,v5,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v57,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvlx128 v56,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// vmulfp128 v63,v56,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v57,v0,15,1
	simde_mm_store_ps(ctx.v57.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 147), 15));
	// vor128 v0,v57,v57
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v57.u8));
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vrlimi128 v13,v12,15,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 147), 15));
	// beq cr6,0x824316a8
	if (ctx.cr6.eq) goto loc_824316A8;
	// lvlx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v55
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v55.f32)));
loc_824316A8:
	// vspltw128 v54,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v54.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stvewx128 v54,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r11,0,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82431678
	if (!ctx.cr6.eq) goto loc_82431678;
loc_824316C8:
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(r30.u32, 15, ctx.xer);
	// ble cr6,0x824317c0
	if (!ctx.cr6.gt) goto loc_824317C0;
	// rlwinm r10,r30,2,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFC0;
	// clrlwi r30,r30,28
	r30.u64 = r30.u32 & 0xF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x824317c0
	if (ctx.cr6.eq) goto loc_824317C0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r8,r10,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// li r3,512
	ctx.r3.s64 = 512;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82431704:
	// lvrx128 v53,r7,r9
	temp.u32 = ctx.r7.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r10,-16
	ctx.r8.s64 = ctx.r10.s64 + -16;
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v51,r0,r10
	temp.u32 = ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v11,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// lvrx128 v50,r6,r10
	temp.u32 = ctx.r6.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvrx128 v49,r6,r8
	temp.u32 = ctx.r6.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvlx128 v48,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v47,r6,r7
	temp.u32 = ctx.r6.u32 + ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v48,v49
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8)));
	// lvlx128 v46,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v46,v47
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// dcbt r11,r3
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8243177c
	if (ctx.cr6.eq) goto loc_8243177C;
	// lvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v12,v11,v13,v12
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v12.f32)));
	// lvx128 v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v8,v13,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v10,v7,v13,v10
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v10.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddfp v9,v6,v13,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vaddfp v13,v13,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// b 0x8243179c
	goto loc_8243179C;
loc_8243177C:
	// vaddfp128 v45,v13,v0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v45.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v11,v13
	simde_mm_store_ps(ctx.v12.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v44,v45,v0
	simde_mm_store_ps(ctx.v44.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v45.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v8,v45
	simde_mm_store_ps(ctx.v11.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v8.f32), simde_mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v43,v44,v0
	simde_mm_store_ps(ctx.v43.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v44.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v7,v44
	simde_mm_store_ps(ctx.v10.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vmulfp128 v9,v6,v43
	simde_mm_store_ps(ctx.v9.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v13,v43,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v43.f32), simde_mm_load_ps(ctx.v0.f32)));
loc_8243179C:
	// stvx128 v11,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// stvx128 v12,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// stvx128 v10,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx128 v9,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82431704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82431704;
loc_824317C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82431810
	if (ctx.cr6.eq) goto loc_82431810;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
loc_824317D0:
	// vmaddfp v12,v0,v5,v13
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v5.f32)), simde_mm_load_ps(ctx.v13.f32)));
	// vor128 v42,v0,v0
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_load_si128((simde__m128i*)ctx.v0.u8));
	// lvlx128 v41,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// vmulfp128 v63,v41,v13
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v41.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v42,v0,15,1
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v0.f32), 147), 15));
	// vor128 v0,v42,v42
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)ctx.v42.u8));
	// vor v13,v12,v12
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_load_si128((simde__m128i*)ctx.v12.u8));
	// vrlimi128 v13,v12,15,1
	simde_mm_store_ps(ctx.v13.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v12.f32), 147), 15));
	// beq cr6,0x82431800
	if (ctx.cr6.eq) goto loc_82431800;
	// lvlx128 v40,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v63,v63,v40
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v40.f32)));
loc_82431800:
	// vspltw128 v39,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v39.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v39,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x824317d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824317D0;
loc_82431810:
	// ld r30,-16(r1)
	r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8244E8F0) {
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
	ctx.lr = 0x8244E8F8;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r22,24(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r28,r11,32
	r28.s64 = ctx.r11.s64 + 32;
	// lwz r24,0(r3)
	r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r10.u32);
	// lfs f13,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f12.u64);
	// lwz r7,-204(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// lfd f11,-208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// stw r8,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r8.u32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lwz r23,4(r3)
	r23.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r21,28(r3)
	r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f7,21052(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21052);
	ctx.f7.f64 = double(temp.f32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(r22.u32, 0, ctx.xer);
	// rlwinm r25,r7,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x8244e9e8
	if (ctx.cr6.eq) goto loc_8244E9E8;
	// lhz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U16(r24.u32 + 0);
	// lhz r9,2(r24)
	ctx.r9.u64 = REX_LOAD_U16(r24.u32 + 2);
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// lhz r5,4(r24)
	ctx.r5.u64 = REX_LOAD_U16(r24.u32 + 4);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// lhz r7,6(r24)
	ctx.r7.u64 = REX_LOAD_U16(r24.u32 + 6);
	// std r4,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r4.u64);
	// extsh r6,r5
	ctx.r6.s64 = ctx.r5.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// std r7,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r7.u64);
	// lfd f9,-200(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f4,f9
	ctx.f4.f64 = double(ctx.f9.s64);
	// lfd f13,-208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r10,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r10.u64);
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r6,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r6.u64);
	// lfd f11,-208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// frsp f2,f8
	ctx.f2.f64 = double(float(ctx.f8.f64));
	// frsp f13,f4
	ctx.f13.f64 = double(float(ctx.f4.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f11,f2,f7
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfs f11,4(r28)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r28.u32 + 4, temp.u32);
	// fmuls f9,f13,f7
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// stfs f9,12(r28)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r28.u32 + 12, temp.u32);
	// fmuls f12,f3,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f12,8(r28)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r28.u32 + 8, temp.u32);
	// fmuls f10,f1,f7
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// stfs f10,0(r28)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_8244E9E8:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// lfs f10,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f10.f64 = double(temp.f32);
	// bge cr6,0x8244eaf4
	if (!ctx.cr6.lt) goto loc_8244EAF4;
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
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r7,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r6,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r5,2,0,29
	r27.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r10,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r6,r10,r9
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subf r5,r10,r31
	ctx.r5.u64 = r31.u64 - ctx.r10.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r10,r30
	r30.u64 = r30.u64 - ctx.r10.u64;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// add r31,r7,r28
	r31.u64 = ctx.r7.u64 + r28.u64;
	// add r4,r6,r28
	ctx.r4.u64 = ctx.r6.u64 + r28.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + r28.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + r28.u64;
	// add r6,r30,r28
	ctx.r6.u64 = r30.u64 + r28.u64;
	// add r7,r27,r28
	ctx.r7.u64 = r27.u64 + r28.u64;
loc_8244EA58:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// bge cr6,0x8244ecdc
	if (!ctx.cr6.lt) goto loc_8244ECDC;
	// lfs f4,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lfsux f13,r7,r10
	ea = ctx.r7.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// lfs f2,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// lfsux f12,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r6.u32 = ea;
	// lfs f5,-4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f1,f2,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f12.f64));
	// lfsux f11,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfsux f9,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f9.f64 = double(temp.f32);
	ctx.r5.u32 = ea;
	// lfsux f8,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f8.f64 = double(temp.f32);
	r31.u32 = ea;
	// fsubs f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f8,f8,f5
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f5.f64));
	// fmadds f4,f3,f0,f13
	ctx.f4.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f13.f64)));
	// stfs f4,0(r9)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f3,f1,f0,f12
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfsu f3,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f2,f9,f0,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f11.f64)));
	// stfsu f2,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f1,f8,f0,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfsu f1,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x8244eaec
	if (ctx.cr6.lt) goto loc_8244EAEC;
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
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_8244EAEC:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8244ea58
	if (ctx.cr6.lt) goto loc_8244EA58;
loc_8244EAF4:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// bge cr6,0x8244ecdc
	if (!ctx.cr6.lt) goto loc_8244ECDC;
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
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r7,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r6,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,64
	r31.s64 = ctx.r11.s64 + 64;
	// subf r6,r10,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r10.u64;
	// subf r5,r10,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r4,r10,r30
	ctx.r4.u64 = r30.u64 - ctx.r10.u64;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// subf r26,r10,r26
	r26.u64 = r26.u64 - ctx.r10.u64;
	// add r30,r6,r24
	r30.u64 = ctx.r6.u64 + r24.u64;
	// add r31,r5,r24
	r31.u64 = ctx.r5.u64 + r24.u64;
	// add r9,r9,r23
	ctx.r9.u64 = ctx.r9.u64 + r23.u64;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + r24.u64;
	// add r7,r7,r24
	ctx.r7.u64 = ctx.r7.u64 + r24.u64;
	// add r4,r4,r24
	ctx.r4.u64 = ctx.r4.u64 + r24.u64;
	// add r5,r27,r24
	ctx.r5.u64 = r27.u64 + r24.u64;
	// add r6,r26,r24
	ctx.r6.u64 = r26.u64 + r24.u64;
loc_8244EB6C:
	// lhzux r26,r6,r10
	ea = ctx.r6.u32 + ctx.r10.u32;
	r26.u64 = REX_LOAD_U16(ea);
	ctx.r6.u32 = ea;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lhzux r27,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	r27.u64 = REX_LOAD_U16(ea);
	ctx.r5.u32 = ea;
	// extsh r23,r26
	r23.s64 = r26.s16;
	// lhzux r26,r31,r10
	ea = r31.u32 + ctx.r10.u32;
	r26.u64 = REX_LOAD_U16(ea);
	r31.u32 = ea;
	// extsh r19,r27
	r19.s64 = r27.s16;
	// lhzux r27,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	r27.u64 = REX_LOAD_U16(ea);
	ctx.r4.u32 = ea;
	// extsh r18,r26
	r18.s64 = r26.s16;
	// lhz r20,2(r8)
	r20.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// extsh r27,r27
	r27.s64 = r27.s16;
	// lhz r16,0(r8)
	r16.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// extsh r20,r20
	r20.s64 = r20.s16;
	// lhz r17,-2(r8)
	r17.u64 = REX_LOAD_U16(ctx.r8.u32 + -2);
	// subf r27,r18,r27
	r27.u64 = r27.u64 - r18.u64;
	// lhzux r26,r30,r10
	ea = r30.u32 + ctx.r10.u32;
	r26.u64 = REX_LOAD_U16(ea);
	r30.u32 = ea;
	// subf r20,r19,r20
	r20.u64 = r20.u64 - r19.u64;
	// extsw r27,r27
	r27.s64 = r27.s32;
	// extsh r17,r17
	r17.s64 = r17.s16;
	// std r27,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r27.u64);
	// extsh r27,r16
	r27.s64 = r16.s16;
	// extsh r26,r26
	r26.s64 = r26.s16;
	// lfd f9,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// subf r27,r23,r27
	r27.u64 = r27.u64 - r23.u64;
	// extsw r20,r20
	r20.s64 = r20.s32;
	// subf r26,r17,r26
	r26.u64 = r26.u64 - r17.u64;
	// extsw r19,r19
	r19.s64 = r19.s32;
	// std r20,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r20.u64);
	// extsw r27,r27
	r27.s64 = r27.s32;
	// lfd f12,-208(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// extsw r18,r18
	r18.s64 = r18.s32;
	// std r19,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, r19.u64);
	// extsw r26,r26
	r26.s64 = r26.s32;
	// lfd f11,-192(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// extsw r20,r17
	r20.s64 = r17.s32;
	// std r27,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, r27.u64);
	// lfd f3,-152(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// std r18,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r18.u64);
	// lfd f8,-176(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// std r26,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r26.u64);
	// lfd f5,-168(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// std r20,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, r20.u64);
	// lfd f4,-160(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsw r15,r23
	r15.s64 = r23.s32;
	// std r15,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, r15.u64);
	// lfd f13,-200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// fcfid f13,f12
	ctx.f13.f64 = double(ctx.f12.s64);
	// fcfid f12,f11
	ctx.f12.f64 = double(ctx.f11.s64);
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// fcfid f11,f9
	ctx.f11.f64 = double(ctx.f9.s64);
	// fcfid f9,f8
	ctx.f9.f64 = double(ctx.f8.s64);
	// fcfid f8,f5
	ctx.f8.f64 = double(ctx.f5.s64);
	// fcfid f5,f4
	ctx.f5.f64 = double(ctx.f4.s64);
	// frsp f3,f1
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// frsp f4,f2
	ctx.f4.f64 = double(float(ctx.f2.f64));
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// frsp f12,f9
	ctx.f12.f64 = double(float(ctx.f9.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// frsp f9,f5
	ctx.f9.f64 = double(float(ctx.f5.f64));
	// fmadds f8,f4,f0,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f3.f64)));
	// fmadds f5,f2,f0,f1
	ctx.f5.f64 = double(float(std::fma(ctx.f2.f64, ctx.f0.f64, ctx.f1.f64)));
	// fmadds f4,f13,f0,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f3,f11,f0,f9
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f9.f64)));
	// fmuls f2,f8,f7
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// stfs f2,0(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfsu f1,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmuls f13,f4,f7
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmuls f12,f3,f7
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfsu f12,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// dcbt r0,r7
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// add r11,r25,r11
	ctx.r11.u64 = r25.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// blt cr6,0x8244ecd4
	if (ctx.cr6.lt) goto loc_8244ECD4;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
loc_8244ECD4:
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(r29.u32, r21.u32, ctx.xer);
	// blt cr6,0x8244eb6c
	if (ctx.cr6.lt) goto loc_8244EB6C;
loc_8244ECDC:
	// addi r10,r22,-4
	ctx.r10.s64 = r22.s64 + -4;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8244ecec
	if (!ctx.cr6.lt) goto loc_8244ECEC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8244ECEC:
	// subf r10,r22,r11
	ctx.r10.u64 = ctx.r11.u64 - r22.u64;
	// stfs f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// neg r8,r22
	ctx.r8.s64 = static_cast<int64_t>(-r22.u64);
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244edbc
	if (!ctx.cr6.lt) goto loc_8244EDBC;
	// subf r10,r11,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r11.u64;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244ed80
	if (ctx.cr6.lt) goto loc_8244ED80;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
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
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + r28.u64;
loc_8244ED44:
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
	// blt cr6,0x8244ed44
	if (ctx.cr6.lt) goto loc_8244ED44;
loc_8244ED80:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8244edbc
	if (!ctx.cr6.lt) goto loc_8244EDBC;
	// add r7,r11,r22
	ctx.r7.u64 = ctx.r11.u64 + r22.u64;
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
loc_8244EDB0:
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
	// bdnz 0x8244edb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244EDB0;
loc_8244EDBC:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8244ee98
	if (ctx.cr6.lt) goto loc_8244EE98;
	// subfic r9,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r9.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + r22.u64;
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
	// addi r7,r22,2
	ctx.r7.s64 = r22.s64 + 2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r22,3
	ctx.r6.s64 = r22.s64 + 3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// add r9,r8,r24
	ctx.r9.u64 = ctx.r8.u64 + r24.u64;
loc_8244EDFC:
	// add r3,r6,r11
	ctx.r3.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lhz r4,6(r9)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r9.u32 + 6);
	// add r5,r7,r11
	ctx.r5.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lhzu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r8,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r8.u64);
	// lfd f0,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lhzx r3,r3,r24
	ctx.r3.u64 = REX_LOAD_U16(ctx.r3.u32 + r24.u32);
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lhzx r5,r5,r24
	ctx.r5.u64 = REX_LOAD_U16(ctx.r5.u32 + r24.u32);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// std r4,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r4.u64);
	// lfd f13,-160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// extsh r8,r5
	ctx.r8.s64 = ctx.r5.s16;
	// fcfid f10,f13
	ctx.f10.f64 = double(ctx.f13.s64);
	// extsw r5,r3
	ctx.r5.s64 = ctx.r3.s32;
	// std r8,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r8.u64);
	// lfd f12,-168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// lfd f11,-176(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// frsp f5,f10
	ctx.f5.f64 = double(float(ctx.f10.f64));
	// frsp f4,f9
	ctx.f4.f64 = double(float(ctx.f9.f64));
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// fmuls f1,f5,f7
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f0,f4,f7
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// stfs f0,8(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f13,f3,f7
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// stfs f13,12(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f12,f2,f7
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// stfsu f12,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244edfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244EDFC;
loc_8244EE98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8244eeec
	if (!ctx.cr6.lt) goto loc_8244EEEC;
	// add r9,r11,r22
	ctx.r9.u64 = ctx.r11.u64 + r22.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r8,r11
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + r24.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8244EEC4:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r8.u64);
	// lfd f0,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f7
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244eec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244EEC4;
loc_8244EEEC:
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8246BD90) {
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
	ctx.lr = 0x8246BD98;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// li r24,0
	r24.s64 = 0;
	// lwz r27,0(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8246bdc8
	if (ctx.cr6.eq) goto loc_8246BDC8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8246bf50
	if (ctx.cr6.eq) goto loc_8246BF50;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
loc_8246BDC8:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246bf40
	if (!ctx.cr6.lt) goto loc_8246BF40;
	// addi r25,r31,224
	r25.s64 = r31.s64 + 224;
loc_8246BDE0:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r9,304(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 304);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,400(r27)
	ctx.r7.u64 = REX_LOAD_U32(r27.u32 + 400);
	// lwz r10,320(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 320);
	// mulli r11,r8,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(1776));
	// subf r4,r7,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r7.u64;
	// add r28,r11,r10
	r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8246e538
	ctx.lr = 0x8246BE08;
	sub_8246E538(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c0a0
	if (ctx.cr6.lt) goto loc_8246C0A0;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8246bf08
	if (ctx.cr6.eq) goto loc_8246BF08;
	// lwz r26,12(r28)
	r26.u64 = REX_LOAD_U32(r28.u32 + 12);
	// stb r24,0(r26)
	REX_STORE_U8(r26.u32 + 0, r24.u8);
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 404);
	// lwz r10,264(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 264);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r9.u32);
loc_8246BE34:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lwz r9,308(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 308);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r11,404(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 404);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r11
	r29.u64 = ctx.r11.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8246be60
	if (ctx.cr6.gt) goto loc_8246BE60;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8246BE60:
	// lwz r11,268(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8246bef4
	if (!ctx.cr6.lt) goto loc_8246BEF4;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8246be80
	if (ctx.cr6.lt) goto loc_8246BE80;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_8246BE80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824658f8
	ctx.lr = 0x8246BE90;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c0a0
	if (ctx.cr6.lt) goto loc_8246C0A0;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// stbx r10,r9,r26
	REX_STORE_U8(ctx.r9.u32 + r26.u32, ctx.r10.u8);
	// lhz r7,152(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lbzx r5,r6,r26
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + r26.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8246becc
	if (ctx.cr6.eq) goto loc_8246BECC;
	// lbz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U8(r26.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,0(r26)
	REX_STORE_U8(r26.u32 + 0, ctx.r11.u8);
	// b 0x8246bedc
	goto loc_8246BEDC;
loc_8246BECC:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 36);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - r29.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + r30.u64;
	// stw r10,36(r28)
	REX_STORE_U32(r28.u32 + 36, ctx.r10.u32);
loc_8246BEDC:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r9.u16);
	// b 0x8246be34
	goto loc_8246BE34;
loc_8246BEF4:
	// lwz r11,304(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 304);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8246bf0c
	if (!ctx.cr6.lt) goto loc_8246BF0C;
	// stbx r24,r8,r26
	REX_STORE_U8(ctx.r8.u32 + r26.u32, r24.u8);
	// b 0x8246bf0c
	goto loc_8246BF0C;
loc_8246BF08:
	// stw r24,36(r28)
	REX_STORE_U32(r28.u32 + 36, r24.u32);
loc_8246BF0C:
	// lwz r11,400(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 400);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// sth r10,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r10.u16);
	// lhz r9,150(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// sth r7,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r7.u16);
	// lhz r6,34(r27)
	ctx.r6.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8246bde0
	if (ctx.cr6.lt) goto loc_8246BDE0;
loc_8246BF40:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r11.u32);
	// sth r24,150(r31)
	REX_STORE_U16(r31.u32 + 150, r24.u16);
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
loc_8246BF50:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lhz r10,34(r27)
	ctx.r10.u64 = REX_LOAD_U16(r27.u32 + 34);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246c0a0
	if (!ctx.cr6.lt) goto loc_8246C0A0;
	// lis r11,-32245
	ctx.r11.s64 = -2113208320;
	// addi r26,r11,-24896
	r26.s64 = ctx.r11.s64 + -24896;
loc_8246BF6C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// lwz r10,320(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 320);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// mulli r11,r9,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(1776));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8246c074
	if (ctx.cr6.eq) goto loc_8246C074;
	// lwz r29,12(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8246c074
	if (ctx.cr6.eq) goto loc_8246C074;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8246bfdc
	if (!ctx.cr6.eq) goto loc_8246BFDC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x824658f8
	ctx.lr = 0x8246BFBC;
	sub_824658F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c0a0
	if (ctx.cr6.lt) goto loc_8246C0A0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r11,-19
	ctx.r10.s64 = ctx.r11.s64 + -19;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// sth r8,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r8.u16);
loc_8246BFDC:
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8246c074
	if (!ctx.cr6.lt) goto loc_8246C074;
	// addi r28,r31,224
	r28.s64 = r31.s64 + 224;
loc_8246BFF4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82325c30
	ctx.lr = 0x8246C00C;
	sub_82325C30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c0a0
	if (ctx.cr6.lt) goto loc_8246C0A0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82319a70
	ctx.lr = 0x8246C020;
	sub_82319A70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8246c0a0
	if (ctx.cr6.lt) goto loc_8246C0A0;
	// lhz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 152);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r10,-18
	ctx.r9.s64 = ctx.r10.s64 + -18;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lhz r8,152(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 152);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// clrlwi r4,r6,16
	ctx.r4.u64 = ctx.r6.u32 & 0xFFFF;
	// sth r6,152(r31)
	REX_STORE_U16(r31.u32 + 152, ctx.r6.u16);
	// lbz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U8(r29.u32 + 0);
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8246bff4
	if (ctx.cr6.lt) goto loc_8246BFF4;
loc_8246C074:
	// sth r24,152(r31)
	REX_STORE_U16(r31.u32 + 152, r24.u16);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,150(r31)
	REX_STORE_U16(r31.u32 + 150, ctx.r9.u16);
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// lhz r8,34(r27)
	ctx.r8.u64 = REX_LOAD_U16(r27.u32 + 34);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8246bf6c
	if (ctx.cr6.lt) goto loc_8246BF6C;
loc_8246C0A0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ec8
	return;
}

DEFINE_REX_FUNC(sub_82474D40) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x82474D48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82474dec
	if (ctx.cr6.eq) goto loc_82474DEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474D70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82474d98
	if (ctx.cr0.eq) goto loc_82474D98;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82474d98
	if (!ctx.cr6.eq) goto loc_82474D98;
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// b 0x82474dec
	goto loc_82474DEC;
loc_82474D98:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r5,r10,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x82474dc4
	if (ctx.cr6.eq) goto loc_82474DC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474DC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82474DC4:
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82474ddc
	if (ctx.cr6.eq) goto loc_82474DDC;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, r28.u32);
	// b 0x82474de0
	goto loc_82474DE0;
loc_82474DDC:
	// bl 0x82473600
	ctx.lr = 0x82474DE0;
	sub_82473600(ctx, base);
loc_82474DE0:
	// stw r28,184(r31)
	REX_STORE_U32(r31.u32 + 184, r28.u32);
	// stw r28,188(r31)
	REX_STORE_U32(r31.u32 + 188, r28.u32);
	// stw r28,192(r31)
	REX_STORE_U32(r31.u32 + 192, r28.u32);
loc_82474DEC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82474e58
	if (ctx.cr6.eq) goto loc_82474E58;
	// addi r29,r31,132
	r29.s64 = r31.s64 + 132;
loc_82474DFC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82474838
	ctx.lr = 0x82474E04;
	sub_82474838(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 8);
	// rlwinm r5,r11,0,3,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// beq cr6,0x82474e30
	if (ctx.cr6.eq) goto loc_82474E30;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474E30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82474E30:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82474e44
	if (ctx.cr6.eq) goto loc_82474E44;
	// stw r28,36(r30)
	REX_STORE_U32(r30.u32 + 36, r28.u32);
	// b 0x82474e4c
	goto loc_82474E4C;
loc_82474E44:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82473600
	ctx.lr = 0x82474E4C;
	sub_82473600(ctx, base);
loc_82474E4C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82474dfc
	if (!ctx.cr6.eq) goto loc_82474DFC;
loc_82474E58:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82474e80
	if (!ctx.cr6.eq) goto loc_82474E80;
	// lwz r3,268(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82474e80
	if (ctx.cr6.eq) goto loc_82474E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82474E80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82474E80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_8247C9B0) {
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
	// mflr r0
	ctx.r0.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r0,8(r1)
	REX_STORE_U32(ctx.r1.u32 + 8, ctx.r0.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r0,312(r3)
	ctx.r0.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr1,r0,0
	ctx.cr1.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne 0x8247c9dc
	if (!ctx.cr0.eq) goto loc_8247C9DC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8247C9DC:
	// bne cr1,0x8247cc9c
	if (!ctx.cr1.eq) goto loc_8247CC9C;
	// lwz r3,308(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,144(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 144);
	// bl 0x822e6b30
	ctx.lr = 0x8247C9EC;
	sub_822E6B30(ctx, base);
	// lfd f14,0(r7)
	ctx.fpscr.disableFlushMode();
	f14.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// lfd f15,8(r7)
	f15.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// lfd f16,16(r7)
	f16.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// lfd f17,24(r7)
	f17.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// lfd f18,32(r7)
	f18.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// lfd f19,40(r7)
	f19.u64 = REX_LOAD_U64(ctx.r7.u32 + 40);
	// lfd f20,48(r7)
	f20.u64 = REX_LOAD_U64(ctx.r7.u32 + 48);
	// lfd f21,56(r7)
	f21.u64 = REX_LOAD_U64(ctx.r7.u32 + 56);
	// lfd f22,64(r7)
	f22.u64 = REX_LOAD_U64(ctx.r7.u32 + 64);
	// lfd f23,72(r7)
	f23.u64 = REX_LOAD_U64(ctx.r7.u32 + 72);
	// lfd f24,80(r7)
	f24.u64 = REX_LOAD_U64(ctx.r7.u32 + 80);
	// lfd f25,88(r7)
	f25.u64 = REX_LOAD_U64(ctx.r7.u32 + 88);
	// lfd f26,96(r7)
	f26.u64 = REX_LOAD_U64(ctx.r7.u32 + 96);
	// lfd f27,104(r7)
	f27.u64 = REX_LOAD_U64(ctx.r7.u32 + 104);
	// lfd f28,112(r7)
	f28.u64 = REX_LOAD_U64(ctx.r7.u32 + 112);
	// lfd f29,120(r7)
	f29.u64 = REX_LOAD_U64(ctx.r7.u32 + 120);
	// lfd f30,128(r7)
	f30.u64 = REX_LOAD_U64(ctx.r7.u32 + 128);
	// lfd f31,136(r7)
	f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 136);
	// ld r13,152(r7)
	ctx.r13.u64 = REX_LOAD_U64(ctx.r7.u32 + 152);
	// ld r14,160(r7)
	r14.u64 = REX_LOAD_U64(ctx.r7.u32 + 160);
	// ld r15,168(r7)
	r15.u64 = REX_LOAD_U64(ctx.r7.u32 + 168);
	// ld r16,176(r7)
	r16.u64 = REX_LOAD_U64(ctx.r7.u32 + 176);
	// ld r17,184(r7)
	r17.u64 = REX_LOAD_U64(ctx.r7.u32 + 184);
	// ld r18,192(r7)
	r18.u64 = REX_LOAD_U64(ctx.r7.u32 + 192);
	// ld r19,200(r7)
	r19.u64 = REX_LOAD_U64(ctx.r7.u32 + 200);
	// ld r20,208(r7)
	r20.u64 = REX_LOAD_U64(ctx.r7.u32 + 208);
	// ld r21,216(r7)
	r21.u64 = REX_LOAD_U64(ctx.r7.u32 + 216);
	// ld r22,224(r7)
	r22.u64 = REX_LOAD_U64(ctx.r7.u32 + 224);
	// ld r23,232(r7)
	r23.u64 = REX_LOAD_U64(ctx.r7.u32 + 232);
	// ld r24,240(r7)
	r24.u64 = REX_LOAD_U64(ctx.r7.u32 + 240);
	// ld r25,248(r7)
	r25.u64 = REX_LOAD_U64(ctx.r7.u32 + 248);
	// ld r26,256(r7)
	r26.u64 = REX_LOAD_U64(ctx.r7.u32 + 256);
	// ld r27,264(r7)
	r27.u64 = REX_LOAD_U64(ctx.r7.u32 + 264);
	// ld r28,272(r7)
	r28.u64 = REX_LOAD_U64(ctx.r7.u32 + 272);
	// ld r29,280(r7)
	r29.u64 = REX_LOAD_U64(ctx.r7.u32 + 280);
	// ld r30,288(r7)
	r30.u64 = REX_LOAD_U64(ctx.r7.u32 + 288);
	// ld r31,296(r7)
	r31.u64 = REX_LOAD_U64(ctx.r7.u32 + 296);
	// li r3,320
	ctx.r3.s64 = 320;
	// lvx128 v64,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v64.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,336
	ctx.r3.s64 = 336;
	// lvx128 v65,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v65.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,352
	ctx.r3.s64 = 352;
	// lvx128 v66,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v66.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,368
	ctx.r3.s64 = 368;
	// lvx128 v67,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v67.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,384
	ctx.r3.s64 = 384;
	// lvx128 v68,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v68.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,400
	ctx.r3.s64 = 400;
	// lvx128 v69,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v69.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,416
	ctx.r3.s64 = 416;
	// lvx128 v70,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v70.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,432
	ctx.r3.s64 = 432;
	// lvx128 v71,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v71.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// lvx128 v72,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v72.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,464
	ctx.r3.s64 = 464;
	// lvx128 v73,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v73.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,480
	ctx.r3.s64 = 480;
	// lvx128 v74,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,496
	ctx.r3.s64 = 496;
	// lvx128 v75,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,512
	ctx.r3.s64 = 512;
	// lvx128 v76,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,528
	ctx.r3.s64 = 528;
	// lvx128 v77,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,544
	ctx.r3.s64 = 544;
	// lvx128 v78,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,560
	ctx.r3.s64 = 560;
	// lvx128 v79,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,576
	ctx.r3.s64 = 576;
	// lvx128 v80,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,592
	ctx.r3.s64 = 592;
	// lvx128 v81,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,608
	ctx.r3.s64 = 608;
	// lvx128 v82,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,624
	ctx.r3.s64 = 624;
	// lvx128 v83,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,640
	ctx.r3.s64 = 640;
	// lvx128 v84,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,656
	ctx.r3.s64 = 656;
	// lvx128 v85,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,672
	ctx.r3.s64 = 672;
	// lvx128 v86,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,688
	ctx.r3.s64 = 688;
	// lvx128 v87,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,704
	ctx.r3.s64 = 704;
	// lvx128 v88,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,720
	ctx.r3.s64 = 720;
	// lvx128 v89,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,736
	ctx.r3.s64 = 736;
	// lvx128 v90,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,752
	ctx.r3.s64 = 752;
	// lvx128 v91,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,768
	ctx.r3.s64 = 768;
	// lvx128 v92,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,784
	ctx.r3.s64 = 784;
	// lvx128 v93,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,800
	ctx.r3.s64 = 800;
	// lvx128 v94,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,816
	ctx.r3.s64 = 816;
	// lvx128 v95,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,832
	ctx.r3.s64 = 832;
	// lvx128 v96,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,848
	ctx.r3.s64 = 848;
	// lvx128 v97,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,864
	ctx.r3.s64 = 864;
	// lvx128 v98,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,880
	ctx.r3.s64 = 880;
	// lvx128 v99,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,896
	ctx.r3.s64 = 896;
	// lvx128 v100,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,912
	ctx.r3.s64 = 912;
	// lvx128 v101,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,928
	ctx.r3.s64 = 928;
	// lvx128 v102,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,944
	ctx.r3.s64 = 944;
	// lvx128 v103,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,960
	ctx.r3.s64 = 960;
	// lvx128 v104,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,976
	ctx.r3.s64 = 976;
	// lvx128 v105,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,992
	ctx.r3.s64 = 992;
	// lvx128 v106,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1008
	ctx.r3.s64 = 1008;
	// lvx128 v107,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lvx128 v108,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1040
	ctx.r3.s64 = 1040;
	// lvx128 v109,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1056
	ctx.r3.s64 = 1056;
	// lvx128 v110,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1072
	ctx.r3.s64 = 1072;
	// lvx128 v111,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1088
	ctx.r3.s64 = 1088;
	// lvx128 v112,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1104
	ctx.r3.s64 = 1104;
	// lvx128 v113,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1120
	ctx.r3.s64 = 1120;
	// lvx128 v114,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1136
	ctx.r3.s64 = 1136;
	// lvx128 v115,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1152
	ctx.r3.s64 = 1152;
	// lvx128 v116,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1168
	ctx.r3.s64 = 1168;
	// lvx128 v117,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1184
	ctx.r3.s64 = 1184;
	// lvx128 v118,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1200
	ctx.r3.s64 = 1200;
	// lvx128 v119,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1216
	ctx.r3.s64 = 1216;
	// lvx128 v120,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1232
	ctx.r3.s64 = 1232;
	// lvx128 v121,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1248
	ctx.r3.s64 = 1248;
	// lvx128 v122,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1264
	ctx.r3.s64 = 1264;
	// lvx128 v123,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1280
	ctx.r3.s64 = 1280;
	// lvx128 v124,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1296
	ctx.r3.s64 = 1296;
	// lvx128 v125,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1312
	ctx.r3.s64 = 1312;
	// lvx128 v126,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r3,1328
	ctx.r3.s64 = 1328;
	// lvx128 v127,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,308(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 308);
	// lwz r4,304(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 304);
	// mtlr r5
	ctx.lr = ctx.r5.u64;
	// ld r1,144(r7)
	ctx.r1.u64 = REX_LOAD_U64(ctx.r7.u32 + 144);
	// mtcr r4
	ctx.cr0.lt = (ctx.r4.u32 & 0x80000000) != 0;
	ctx.cr0.gt = (ctx.r4.u32 & 0x40000000) != 0;
	ctx.cr0.eq = (ctx.r4.u32 & 0x20000000) != 0;
	ctx.cr0.so = (ctx.r4.u32 & 0x10000000) != 0;
	ctx.cr1.lt = (ctx.r4.u32 & 0x8000000) != 0;
	ctx.cr1.gt = (ctx.r4.u32 & 0x4000000) != 0;
	ctx.cr1.eq = (ctx.r4.u32 & 0x2000000) != 0;
	ctx.cr1.so = (ctx.r4.u32 & 0x1000000) != 0;
	ctx.cr2.lt = (ctx.r4.u32 & 0x800000) != 0;
	ctx.cr2.gt = (ctx.r4.u32 & 0x400000) != 0;
	ctx.cr2.eq = (ctx.r4.u32 & 0x200000) != 0;
	ctx.cr2.so = (ctx.r4.u32 & 0x100000) != 0;
	ctx.cr3.lt = (ctx.r4.u32 & 0x80000) != 0;
	ctx.cr3.gt = (ctx.r4.u32 & 0x40000) != 0;
	ctx.cr3.eq = (ctx.r4.u32 & 0x20000) != 0;
	ctx.cr3.so = (ctx.r4.u32 & 0x10000) != 0;
	ctx.cr4.lt = (ctx.r4.u32 & 0x8000) != 0;
	ctx.cr4.gt = (ctx.r4.u32 & 0x4000) != 0;
	ctx.cr4.eq = (ctx.r4.u32 & 0x2000) != 0;
	ctx.cr4.so = (ctx.r4.u32 & 0x1000) != 0;
	ctx.cr5.lt = (ctx.r4.u32 & 0x800) != 0;
	ctx.cr5.gt = (ctx.r4.u32 & 0x400) != 0;
	ctx.cr5.eq = (ctx.r4.u32 & 0x200) != 0;
	ctx.cr5.so = (ctx.r4.u32 & 0x100) != 0;
	ctx.cr6.lt = (ctx.r4.u32 & 0x80) != 0;
	ctx.cr6.gt = (ctx.r4.u32 & 0x40) != 0;
	ctx.cr6.eq = (ctx.r4.u32 & 0x20) != 0;
	ctx.cr6.so = (ctx.r4.u32 & 0x10) != 0;
	ctx.cr7.lt = (ctx.r4.u32 & 0x8) != 0;
	ctx.cr7.gt = (ctx.r4.u32 & 0x4) != 0;
	ctx.cr7.eq = (ctx.r4.u32 & 0x2) != 0;
	ctx.cr7.so = (ctx.r4.u32 & 0x1) != 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// blr 
	return;
loc_8247CC9C:
	// lwz r3,4(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// bl 0x822e6b30
	ctx.lr = 0x8247CCA8;
	sub_822E6B30(ctx, base);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r4,4(r7)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// bl 0x824d4a8c
	ctx.lr = 0x8247CCB4;
	__imp__RtlUnwind(ctx, base);
	// lwz r0,8(r1)
	ctx.r0.u64 = REX_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r0
	ctx.lr = ctx.r0.u64;
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824A9CE0) {
	REX_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e7c
	ctx.lr = 0x824A9CE8;
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// vspltish v0,1
	simde_mm_store_si128((simde__m128i*)ctx.v0.s16, simde_mm_set1_epi16(short(0x1)));
	// vspltish v13,4
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x4)));
	// li r6,48
	ctx.r6.s64 = 48;
	// bne cr6,0x824a9e38
	if (!ctx.cr6.eq) goto loc_824A9E38;
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v12,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r7,144
	ctx.r7.s64 = 144;
	// lvx128 v11,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,64
	ctx.r11.s64 = 64;
	// li r8,112
	ctx.r8.s64 = 112;
	// li r31,160
	r31.s64 = 160;
	// li r30,16
	r30.s64 = 16;
	// lvx128 v10,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// lvx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r29,304
	r29.s64 = 304;
	// lvx128 v62,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r10,336
	ctx.r10.s64 = 336;
	// lvx128 v61,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v8,v11,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), 14));
	// lvx128 v60,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v7,v10,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), 14));
	// vsldoi128 v6,v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), 14));
	// li r31,352
	r31.s64 = 352;
	// vsldoi128 v5,v12,v60,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), 14));
	// li r11,192
	ctx.r11.s64 = 192;
	// vaddshs v4,v8,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// li r30,208
	r30.s64 = 208;
	// vaddshs v3,v7,v10
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// li r8,240
	ctx.r8.s64 = 240;
	// vaddshs v2,v6,v9
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// li r28,256
	r28.s64 = 256;
	// vaddshs v31,v5,v12
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vslh v30,v4,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v3,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v2,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v1
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v25,v29,v1
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v24,v28,v1
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v23,v27,v1
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v22,v26,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v21,v25,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v20,v24,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v19,v23,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v22,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v21,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v20,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v20.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v19,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v19.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v57,r3,r29
	ea = (ctx.r3.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r3,r31
	ea = (ctx.r3.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r3,r30
	ea = (ctx.r3.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r3,r28
	ea = (ctx.r3.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v18,v12,v56,2
	simde_mm_store_si128((simde__m128i*)v18.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), 14));
	// vsldoi128 v17,v11,v57,2
	simde_mm_store_si128((simde__m128i*)v17.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8), 14));
	// vaddshs v16,v18,v12
	simde_mm_store_si128((simde__m128i*)v16.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// vsldoi128 v15,v10,v59,2
	simde_mm_store_si128((simde__m128i*)v15.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), 14));
	// vsldoi128 v14,v9,v58,2
	simde_mm_store_si128((simde__m128i*)v14.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), 14));
	// vaddshs v12,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v11,v15,v10
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v10,v14,v9
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v9,v16,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v16.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v9.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
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
	// vslh v6,v10,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v5,v9,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v4,v8,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v3,v7,v1
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v2,v6,v1
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v6.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v1,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v3,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v2,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v1,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v31,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x822d4ecc
	return;
loc_824A9E38:
	// li r9,4
	ctx.r9.s64 = 4;
	// subf r8,r4,r3
	ctx.r8.u64 = ctx.r3.u64 - ctx.r4.u64;
	// li r25,-48
	r25.s64 = -48;
	// li r26,-80
	r26.s64 = -80;
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// addi r5,r8,-96
	ctx.r5.s64 = ctx.r8.s64 + -96;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r9,-32
	ctx.r9.s64 = -32;
	// li r27,-64
	r27.s64 = -64;
	// li r28,-16
	r28.s64 = -16;
	// li r29,32
	r29.s64 = 32;
	// li r30,80
	r30.s64 = 80;
	// li r31,-96
	r31.s64 = -96;
loc_824A9E80:
	// lvx128 v12,r11,r3
	ea = (ctx.r11.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r10,r5
	ea = (ctx.r10.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v4,v8,v12,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), 14));
	// lvx128 v10,r11,r8
	ea = (ctx.r11.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v9,r11,r7
	ea = (ctx.r11.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddshs v31,v4,v8
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// lvx128 v55,r11,r27
	ea = (ctx.r11.u32 + r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v30,v7,v11,2
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), 14));
	// lvx128 v54,r11,r28
	ea = (ctx.r11.u32 + r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v29,v6,v10,2
	simde_mm_store_si128((simde__m128i*)v29.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8), 14));
	// lvx128 v53,r11,r29
	ea = (ctx.r11.u32 + r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi v26,v5,v9,2
	simde_mm_store_si128((simde__m128i*)v26.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8), 14));
	// lvx128 v52,r11,r30
	ea = (ctx.r11.u32 + r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsldoi128 v4,v12,v55,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8), 14));
	// vsldoi128 v3,v11,v54,2
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), 14));
	// vaddshs v28,v30,v7
	simde_mm_store_si128((simde__m128i*)v28.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vsldoi128 v8,v10,v53,2
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8), 14));
	// vaddshs v27,v29,v6
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v6.s16)));
	// vsldoi128 v2,v9,v52,2
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_alignr_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v52.u8), 14));
	// vaddshs v21,v26,v5
	simde_mm_store_si128((simde__m128i*)v21.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v26.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vaddshs v25,v4,v12
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v12.s16)));
	// addi r11,r11,192
	ctx.r11.s64 = ctx.r11.s64 + 192;
	// vaddshs v24,v3,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v23,v8,v10
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v22,v2,v9
	simde_mm_store_si128((simde__m128i*)v22.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vslh v20,v31,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v28,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v28.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v27,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v21,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v21.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v25,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v24,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v14,v23,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v14.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v12,v22,v0
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v22.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v0.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v11,v20,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v10,v19,v1
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v9,v18,v1
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v8,v17,v1
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v7,v16,v1
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v6,v15,v1
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v5,v14,v1
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v14.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vaddshs v4,v12,v1
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vsrah v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v3,r10,r31
	ea = (ctx.r10.u32 + r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v28,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v2,r10,r25
	ea = (ctx.r10.u32 + r25.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v27,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v31,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vsrah v26,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v26.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// stvx128 v30,r10,r6
	ea = (ctx.r10.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v29,r10,r26
	ea = (ctx.r10.u32 + r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v28,r10,r9
	ea = (ctx.r10.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v27,r10,r8
	ea = (ctx.r10.u32 + ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r10,r7
	ea = (ctx.r10.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,192
	ctx.r10.s64 = ctx.r10.s64 + 192;
	// bdnz 0x824a9e80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824A9E80;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824B4548) {
	REX_FUNC_PROLOGUE();
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// bl 0x822d4e7c
	ctx.lr = 0x824B4550;
	// stwu r1,-928(r1)
	ea = -928 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lvx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// vspltish v13,1
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x1)));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r29,1012(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 1012);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v62,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v58,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// subfic r9,r9,8
	ctx.xer.ca = ctx.r9.u32 <= 8;
	ctx.r9.u64 = static_cast<uint64_t>(8) - ctx.r9.u64;
	// lvx128 v56,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lvx128 v59,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lvx128 v57,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cntlzw r9,r29
	ctx.r9.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// lvx128 v61,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r7,r9,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v63,v61,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v2,v62,v59,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// vperm128 v31,v57,v56,v3
	simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v3.u8)));
	// add r8,r31,r3
	ctx.r8.u64 = r31.u64 + ctx.r3.u64;
	// vperm128 v1,v60,v58,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)ctx.v4.u8)));
	// lvx128 v55,r31,r3
	ea = (r31.u32 + ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// and r9,r7,r30
	ctx.r9.u64 = ctx.r7.u64 & r30.u64;
	// vmrghb v12,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r31,r1,144
	r31.s64 = ctx.r1.s64 + 144;
	// vmrghb v10,v0,v31
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// vmrghb v11,v0,v1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v1.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v5,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// addi r26,r1,240
	r26.s64 = ctx.r1.s64 + 240;
	// vperm128 v6,v55,v54,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v2,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// li r6,1
	ctx.r6.s64 = 1;
	// vadduhm v1,v5,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v8.u16)));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// vadduhm v31,v4,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// li r25,4
	r25.s64 = 4;
	// vmrghb v9,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v29,v2,v10
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v30,v3,v11
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// vadduhm v28,v1,v12
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v1.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// lvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v26,v31,v11
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v31.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// slw r6,r25,r30
	ctx.r6.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// vadduhm v25,v30,v10
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vsplth v1,v27,1
	simde_mm_store_si128((simde__m128i*)ctx.v1.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u16), simde_mm_set1_epi16(short(0xD0C))));
	// vadduhm v24,v29,v9
	simde_mm_store_si128((simde__m128i*)v24.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// stvx128 v28,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v24,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bne cr6,0x824b4730
	if (!ctx.cr6.eq) goto loc_824B4730;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v53,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// vslh v12,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v12.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r31,r3
	r31.u64 = r31.u64 + ctx.r3.u64;
	// add r30,r8,r11
	r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lvx128 v52,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v9,v12,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v12.u16), simde_mm_load_si128((simde__m128i*)ctx.v9.u16)));
	// lvx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r29,r1,288
	r29.s64 = ctx.r1.s64 + 288;
	// lvx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r28,r1,336
	r28.s64 = ctx.r1.s64 + 336;
	// lvx128 v49,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,384
	r27.s64 = ctx.r1.s64 + 384;
	// lvx128 v48,r30,r10
	ea = (r30.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r26,r1,432
	r26.s64 = ctx.r1.s64 + 432;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v5,r0,r30
	temp.u32 = r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v4,v53,v51,v7
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vperm128 v3,v52,v49,v6
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8)));
	// lvx128 v47,r31,r10
	ea = (r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vperm128 v2,v50,v48,v5
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8), simde_mm_load_si128((simde__m128i*)ctx.v5.u8)));
	// lvx128 v46,r0,r31
	ea = (r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvsl v7,r0,r31
	temp.u32 = r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v4
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v4.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v3
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v3.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v10,v0,v2
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v2.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v6,v46,v47,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v46.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vslh v5,v12,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v5.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v4,v11,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v11.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v4.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v3,v10,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v10.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v3.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vmrghb v2,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vadduhm v31,v9,v12
	simde_mm_store_si128((simde__m128i*)v31.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v30,v5,v12
	simde_mm_store_si128((simde__m128i*)v30.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.u16), simde_mm_load_si128((simde__m128i*)ctx.v12.u16)));
	// vadduhm v29,v4,v11
	simde_mm_store_si128((simde__m128i*)v29.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v28,v3,v10
	simde_mm_store_si128((simde__m128i*)v28.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// stvx128 v31,r0,r29
	ea = (r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vadduhm v27,v30,v11
	simde_mm_store_si128((simde__m128i*)v27.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v30.u16), simde_mm_load_si128((simde__m128i*)ctx.v11.u16)));
	// vadduhm v26,v29,v10
	simde_mm_store_si128((simde__m128i*)v26.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v29.u16), simde_mm_load_si128((simde__m128i*)ctx.v10.u16)));
	// vadduhm v25,v28,v2
	simde_mm_store_si128((simde__m128i*)v25.u16, simde_mm_add_epi16(simde_mm_load_si128((simde__m128i*)v28.u16), simde_mm_load_si128((simde__m128i*)ctx.v2.u16)));
	// stvx128 v27,r0,r28
	ea = (r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v26,r0,r27
	ea = (r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v25,r0,r26
	ea = (r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_824B4730:
	// cmpwi cr6,r6,8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 8, ctx.xer);
	// blt cr6,0x824b47ac
	if (ctx.cr6.lt) goto loc_824B47AC;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x824b47ac
	if (!ctx.cr6.gt) goto loc_824B47AC;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r27,r9,r11
	r27.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r3,r10,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r31,r3,1
	r31.s64 = ctx.r3.s64 + 1;
	// subf r3,r9,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r11,r30,-48
	ctx.r11.s64 = r30.s64 + -48;
	// mtctr r31
	ctx.ctr.u64 = r31.u64;
loc_824B476C:
	// lbzux r8,r3,r9
	ea = ctx.r3.u32 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// lbzx r26,r27,r10
	r26.u64 = REX_LOAD_U8(r27.u32 + ctx.r10.u32);
	// rotlwi r30,r8,1
	r30.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbz r31,0(r10)
	r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// rotlwi r28,r26,1
	r28.u64 = __builtin_rotateleft32(r26.u32, 1);
	// add r30,r8,r30
	r30.u64 = ctx.r8.u64 + r30.u64;
	// add r8,r26,r28
	ctx.r8.u64 = r26.u64 + r28.u64;
	// add r30,r30,r26
	r30.u64 = r30.u64 + r26.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// extsh r31,r30
	r31.s64 = r30.s16;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sth r31,48(r11)
	REX_STORE_U16(ctx.r11.u32 + 48, r31.u16);
	// mr r29,r26
	r29.u64 = r26.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// sthu r8,96(r11)
	ea = 96 + ctx.r11.u32;
	REX_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x824b476c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824B476C;
loc_824B47AC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824b0fd8
	ctx.lr = 0x824B47B4;
	sub_824B0FD8(ctx, base);
	// addi r1,r1,928
	ctx.r1.s64 = ctx.r1.s64 + 928;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_824D3AC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25212
	ctx.r3.s64 = ctx.r11.s64 + 25212;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3B28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,25780
	ctx.r3.s64 = ctx.r11.s64 + 25780;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3BE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26080
	ctx.r3.s64 = ctx.r11.s64 + 26080;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26720
	ctx.r3.s64 = ctx.r11.s64 + 26720;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3E60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,30524
	ctx.r3.s64 = ctx.r11.s64 + 30524;
	// b 0x82291920
	sub_82291920(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3FE0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200028a
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4140) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010143
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D42C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100da
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4440) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010089
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010052
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4740) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000046
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48C0) {
	REX_FUNC_PROLOGUE();
	// .long 0x200030d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A40) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010244
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BC0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010224
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

