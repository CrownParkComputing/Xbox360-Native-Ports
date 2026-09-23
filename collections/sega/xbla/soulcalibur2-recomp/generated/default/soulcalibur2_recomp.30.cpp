#include "soulcalibur2_funcs.30.h"

DEFINE_REX_FUNC(sub_820E1448) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r3,12
	ctx.r5.s64 = ctx.r3.s64 + 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// bl 0x820e00c0
	ctx.lr = 0x820E147C;
	sub_820E00C0(ctx, base);
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f13,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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

DEFINE_REX_FUNC(sub_820E7E88) {
	REX_FUNC_PROLOGUE();
	// stw r4,396(r3)
	REX_STORE_U32(ctx.r3.u32 + 396, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E80B8) {
	REX_FUNC_PROLOGUE();
	// stw r4,504(r3)
	REX_STORE_U32(ctx.r3.u32 + 504, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8590) {
	REX_FUNC_PROLOGUE();
	// b 0x820e8460
	sub_820E8460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E85F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,576(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 576, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E98E0) {
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
	ctx.lr = 0x820E98E8;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,452(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 452);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e9ae4
	if (ctx.cr6.eq) goto loc_820E9AE4;
	// lwa r11,444(r3)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r3.u32 + 444));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r9,428(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 428);
	// lwz r7,432(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 432);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,436(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,440(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r4,412(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 412);
	// stfs f0,400(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 400, temp.u32);
	// lwz r3,416(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 416);
	// lwz r30,420(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 420);
	// lwz r29,424(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 424);
	// lwz r28,456(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 456);
	// stw r5,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r5.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r6,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r4,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// stw r3,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r3.u32);
	// stw r30,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, r30.u32);
	// stw r29,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, r29.u32);
	// beq cr6,0x820e9988
	if (ctx.cr6.eq) goto loc_820E9988;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,128(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_820E9988:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x820e01b0
	ctx.lr = 0x820E9990;
	sub_820E01B0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f1,484(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 484);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e0778
	ctx.lr = 0x820E999C;
	sub_820E0778(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1ec0
	ctx.lr = 0x820E99AC;
	sub_820E1EC0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1ec0
	ctx.lr = 0x820E99BC;
	sub_820E1EC0(ctx, base);
	// lfs f13,496(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,464(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 464);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f12,472(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f11.f64 = double(temp.f32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f10,136(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f10.f64 = double(temp.f32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f9,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,504(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 504);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f1,128(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// fadds f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fadds f2,f13,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f2,136(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// fadds f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x82125860
	ctx.lr = 0x820E9A14;
	sub_82125860(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2352(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2352);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x820e9a30
	if (ctx.cr6.gt) goto loc_820E9A30;
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_820E9A30:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822007a8
	ctx.lr = 0x820E9A3C;
	sub_822007A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f3,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820E9A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82200888
	ctx.lr = 0x820E9A68;
	sub_82200888(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 460);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e9858
	ctx.lr = 0x820E9A74;
	sub_820E9858(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822019a0
	ctx.lr = 0x820E9A90;
	sub_822019A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x820E9A9C;
	sub_822006F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200700
	ctx.lr = 0x820E9AA8;
	sub_82200700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200708
	ctx.lr = 0x820E9AB4;
	sub_82200708(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200820
	ctx.lr = 0x820E9AC0;
	sub_82200820(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200828
	ctx.lr = 0x820E9ACC;
	sub_82200828(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200830
	ctx.lr = 0x820E9AD8;
	sub_82200830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x820E9AE4;
	sub_82200818(ctx, base);
loc_820E9AE4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_820F9738) {
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
	// ble cr6,0x820f97a4
	if (!ctx.cr6.gt) goto loc_820F97A4;
	// addi r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 + 48;
loc_820F9758:
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
	// lbz r10,46(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 46);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x820f9790
	if (ctx.cr0.eq) goto loc_820F9790;
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
loc_820F9790:
	// lhz r11,2076(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2076);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820f9758
	if (ctx.cr6.lt) goto loc_820F9758;
loc_820F97A4:
	// sth r7,2076(r3)
	REX_STORE_U16(ctx.r3.u32 + 2076, ctx.r7.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FC020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32177
	ctx.r11.s64 = -2108751872;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r11,8836
	ctx.r9.s64 = ctx.r11.s64 + 8836;
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
loc_820FC044:
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
	// bdnz 0x820fc044
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC044;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_820FC098:
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
	// bdnz 0x820fc098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FC098;
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

DEFINE_REX_FUNC(sub_820FE508) {
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
	// blt cr6,0x820fe5c4
	if (ctx.cr6.lt) goto loc_820FE5C4;
	// beq cr6,0x820fe5a4
	if (ctx.cr6.eq) goto loc_820FE5A4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820fe564
	if (ctx.cr6.lt) goto loc_820FE564;
	// bne cr6,0x820fe618
	if (!ctx.cr6.eq) goto loc_820FE618;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE54C;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x820fe618
	if (!ctx.cr0.eq) goto loc_820FE618;
loc_820FE55C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x820fe614
	goto loc_820FE614;
loc_820FE564:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE574;
	sub_820F8D58(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lbz r11,165(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 165);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe58c
	if (ctx.cr0.eq) goto loc_820FE58C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820fe614
	goto loc_820FE614;
loc_820FE58C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// ble cr6,0x820fe618
	if (!ctx.cr6.gt) goto loc_820FE618;
	// b 0x820fe55c
	goto loc_820FE55C;
loc_820FE5A4:
	// li r5,8192
	ctx.r5.s64 = 8192;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x820f8d58
	ctx.lr = 0x820FE5B4;
	sub_820F8D58(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// b 0x820fe614
	goto loc_820FE614;
loc_820FE5C4:
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8db8
	ctx.lr = 0x820FE5D8;
	sub_820F8DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820fe600
	if (!ctx.cr0.eq) goto loc_820FE600;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lhz r11,586(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 586);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820fe600
	if (ctx.cr0.eq) goto loc_820FE600;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE5FC;
	sub_820F8D58(ctx, base);
	// b 0x820fe618
	goto loc_820FE618;
loc_820FE600:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f8d58
	ctx.lr = 0x820FE610;
	sub_820F8D58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_820FE614:
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
loc_820FE618:
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

DEFINE_REX_FUNC(sub_82104A28) {
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
	ctx.lr = 0x82104A30;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r28,2
	r28.s64 = 2;
	// addi r30,r11,-32480
	r30.s64 = ctx.r11.s64 + -32480;
	// lwz r29,-32480(r11)
	r29.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104a70
	if (ctx.cr0.eq) goto loc_82104A70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82104738
	ctx.lr = 0x82104A60;
	sub_82104738(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82104a70
	if (!ctx.cr0.eq) goto loc_82104A70;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
loc_82104A70:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82104a9c
	if (ctx.cr0.eq) goto loc_82104A9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82104f38
	ctx.lr = 0x82104A88;
	sub_82104F38(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82104c58
	if (ctx.cr0.eq) goto loc_82104C58;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// b 0x82104c58
	goto loc_82104C58;
loc_82104A9C:
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82104abc
	if (ctx.cr0.eq) goto loc_82104ABC;
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r10,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82104abc
	if (ctx.cr0.eq) goto loc_82104ABC;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82104ABC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82104ABC:
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104b80
	if (ctx.cr0.eq) goto loc_82104B80;
	// lis r9,-32170
	ctx.r9.s64 = -2108293120;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// lwz r9,22576(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 22576);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82104b5c
	if (ctx.cr6.eq) goto loc_82104B5C;
	// lwz r9,136(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 136);
	// addi r30,r11,80
	r30.s64 = ctx.r11.s64 + 80;
	// rlwinm. r11,r9,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82104b2c
	if (!ctx.cr0.eq) goto loc_82104B2C;
	// rlwinm. r11,r10,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82104b2c
	if (!ctx.cr0.eq) goto loc_82104B2C;
	// rlwinm. r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104b20
	if (ctx.cr0.eq) goto loc_82104B20;
	// rlwinm. r11,r10,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// beq 0x82104b18
	if (ctx.cr0.eq) goto loc_82104B18;
	// lis r10,1
	ctx.r10.s64 = 65536;
loc_82104B10:
	// ori r10,r10,32832
	ctx.r10.u64 = ctx.r10.u64 | 32832;
	// b 0x82104b58
	goto loc_82104B58;
loc_82104B18:
	// lis r10,0
	ctx.r10.s64 = 0;
	// b 0x82104b10
	goto loc_82104B10;
loc_82104B20:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// b 0x82104b5c
	goto loc_82104B5C;
loc_82104B2C:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82104b50
	if (ctx.cr0.eq) goto loc_82104B50;
	// lwz r11,156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82104b50
	if (ctx.cr6.eq) goto loc_82104B50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82104B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82104B50:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 120);
	// li r10,64
	ctx.r10.s64 = 64;
loc_82104B58:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82104B5C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
loc_82104B78:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82104c58
	goto loc_82104C58;
loc_82104B80:
	// rlwinm. r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104b94
	if (ctx.cr0.eq) goto loc_82104B94;
loc_82104B88:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x82104c58
	goto loc_82104C58;
loc_82104B94:
	// rlwinm. r11,r10,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104bc0
	if (ctx.cr0.eq) goto loc_82104BC0;
	// rlwinm. r11,r10,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82104b88
	if (!ctx.cr0.eq) goto loc_82104B88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821047e8
	ctx.lr = 0x82104BAC;
	sub_821047E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82104c58
	if (!ctx.cr0.eq) goto loc_82104C58;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r10,256
	ctx.r10.s64 = 256;
	// b 0x82104b78
	goto loc_82104B78;
loc_82104BC0:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104c44
	if (ctx.cr0.eq) goto loc_82104C44;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82104c58
	if (!ctx.cr6.eq) goto loc_82104C58;
	// lhz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82104c58
	if (!ctx.cr0.eq) goto loc_82104C58;
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r11,r11,22576
	ctx.r11.s64 = ctx.r11.s64 + 22576;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82104c0c
	if (ctx.cr6.eq) goto loc_82104C0C;
	// lwz r9,200(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 200);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,164(r10)
	REX_STORE_U32(ctx.r10.u32 + 164, ctx.r8.u32);
	// lwz r9,132(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 132);
	// stw r9,188(r10)
	REX_STORE_U32(ctx.r10.u32 + 188, ctx.r9.u32);
loc_82104C0C:
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 120);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 80);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// sth r8,40(r9)
	REX_STORE_U16(ctx.r9.u32 + 40, ctx.r8.u16);
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82104c58
	if (ctx.cr6.eq) goto loc_82104C58;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// b 0x82104c58
	goto loc_82104C58;
loc_82104C44:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82104c58
	if (ctx.cr0.eq) goto loc_82104C58;
	// stw r28,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f8230
	ctx.lr = 0x82104C58;
	sub_821F8230(ctx, base);
loc_82104C58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821124D8) {
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
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821125f8
	if (ctx.cr6.eq) goto loc_821125F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r8,101(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 101);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// stw r7,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r7.u32);
	// beq 0x8211259c
	if (ctx.cr0.eq) goto loc_8211259C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,29340(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 29340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f8c30
	ctx.lr = 0x82112554;
	sub_821F8C30(ctx, base);
	// lfs f2,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32170
	ctx.r11.s64 = -2108293120;
	// lfs f1,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
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
	// addi r11,r11,23960
	ctx.r11.s64 = ctx.r11.s64 + 23960;
	// lbz r6,100(r31)
	ctx.r6.u64 = REX_LOAD_U8(r31.u32 + 100);
	// addi r5,r10,29648
	ctx.r5.s64 = ctx.r10.s64 + 29648;
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r9,5(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 5);
	// lbz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 6);
	// addi r10,r10,2000
	ctx.r10.s64 = ctx.r10.s64 + 2000;
	// bl 0x821f9730
	ctx.lr = 0x82112598;
	sub_821F9730(ctx, base);
	// b 0x821125ec
	goto loc_821125EC;
loc_8211259C:
	// lfs f2,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
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
	// addi r10,r10,23960
	ctx.r10.s64 = ctx.r10.s64 + 23960;
	// lfd f3,28816(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 28816);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfd f3,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f3.u64);
	// addi r8,r31,108
	ctx.r8.s64 = r31.s64 + 108;
	// addi r5,r9,29624
	ctx.r5.s64 = ctx.r9.s64 + 29624;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r11,6(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 6);
	// lbz r9,5(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 5);
	// addi r10,r11,2000
	ctx.r10.s64 = ctx.r11.s64 + 2000;
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x821eaf80
	ctx.lr = 0x821125EC;
	sub_821EAF80(ctx, base);
loc_821125EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821f8c30
	ctx.lr = 0x821125F8;
	sub_821F8C30(ctx, base);
loc_821125F8:
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

DEFINE_REX_FUNC(sub_82117250) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// stb r10,61(r3)
	REX_STORE_U8(ctx.r3.u32 + 61, ctx.r10.u8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 24);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lfs f31,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	f31.f64 = double(temp.f32);
	// stw r11,152(r3)
	REX_STORE_U32(ctx.r3.u32 + 152, ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821172a4
	if (!ctx.cr6.eq) goto loc_821172A4;
	// stfs f31,160(r3)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// b 0x821172b0
	goto loc_821172B0;
loc_821172A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,16036(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16036);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 160, temp.u32);
loc_821172B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,16184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,31832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 31832);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 164, temp.u32);
	// stfs f13,168(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 168, temp.u32);
	// bl 0x821eb2c0
	ctx.lr = 0x821172D0;
	sub_821EB2C0(ctx, base);
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// addi r4,r10,31808
	ctx.r4.s64 = ctx.r10.s64 + 31808;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,980(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 980);
	// bl 0x822d55f8
	ctx.lr = 0x821172EC;
	sub_822D55F8(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-4224
	ctx.r11.s64 = ctx.r11.s64 + -4224;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfd f1,26664(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 26664);
	// addi r8,r11,112
	ctx.r8.s64 = ctx.r11.s64 + 112;
	// stfd f1,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.f1.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 48);
	// addi r4,r31,200
	ctx.r4.s64 = r31.s64 + 200;
	// addi r3,r31,196
	ctx.r3.s64 = r31.s64 + 196;
	// bl 0x821eb1a0
	ctx.lr = 0x8211731C;
	sub_821EB1A0(ctx, base);
	// li r11,1200
	ctx.r11.s64 = 1200;
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f31,208(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 208, temp.u32);
	// sth r11,42(r31)
	REX_STORE_U16(r31.u32 + 42, ctx.r11.u16);
	// sth r10,40(r31)
	REX_STORE_U16(r31.u32 + 40, ctx.r10.u16);
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

DEFINE_REX_FUNC(sub_8211A588) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r11,-31108
	ctx.r6.s64 = ctx.r11.s64 + -31108;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x8211A5C0;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211a5d8
	if (ctx.cr0.eq) goto loc_8211A5D8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r31,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, r31.u32);
	// addi r11,r11,-31196
	ctx.r11.s64 = ctx.r11.s64 + -31196;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8211A5D8:
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

DEFINE_REX_FUNC(sub_8211C0F0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,24604
	r30.s64 = ctx.r11.s64 + 24604;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// bl 0x820e2128
	ctx.lr = 0x8211C13C;
	sub_820E2128(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2020);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x8211c188
	if (!ctx.cr6.lt) goto loc_8211C188;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,24588
	ctx.r8.s64 = ctx.r11.s64 + 24588;
	// lfs f0,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 8, temp.u32);
	// stfs f13,12(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f0,24588(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 24588, temp.u32);
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f13,12(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// b 0x8211c194
	goto loc_8211C194;
loc_8211C188:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,24588
	ctx.r3.s64 = ctx.r11.s64 + 24588;
	// bl 0x820e2290
	ctx.lr = 0x8211C194;
	sub_820E2290(ctx, base);
loc_8211C194:
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

DEFINE_REX_FUNC(sub_8211EDD8) {
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
	ctx.lr = 0x8211EDE0;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ee34
	if (ctx.cr6.eq) goto loc_8211EE34;
	// lwz r10,156(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bge cr6,0x8211eee4
	if (!ctx.cr6.lt) goto loc_8211EEE4;
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// lis r9,-32238
	ctx.r9.s64 = -2112749568;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r9,-4648
	ctx.r9.s64 = ctx.r9.s64 + -4648;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,22
	ctx.r11.s64 = ctx.r11.s64 + 22;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r11.u32);
	// b 0x8211eee4
	goto loc_8211EEE4;
loc_8211EE34:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// lis r29,-32170
	r29.s64 = -2108293120;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8211ee94
	if (ctx.cr6.gt) goto loc_8211EE94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,29428(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 29428);
	// bl 0x8211eba8
	ctx.lr = 0x8211EE50;
	sub_8211EBA8(ctx, base);
	// lfs f4,176(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 176);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,172(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 172);
	ctx.f3.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f2,168(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 168);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,180(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 180);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8211c270
	ctx.lr = 0x8211EE68;
	sub_8211C270(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8211ee94
	if (ctx.cr6.eq) goto loc_8211EE94;
	// bl 0x821feec8
	ctx.lr = 0x8211EE74;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 236);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f0,16260(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// b 0x8211eeb4
	goto loc_8211EEB4;
loc_8211EE94:
	// bl 0x821feec8
	ctx.lr = 0x8211EE98;
	sub_821FEEC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// bl 0x821fee08
	ctx.lr = 0x8211EEA8;
	sub_821FEE08(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmuls f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f0,16260(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16260);
	ctx.f0.f64 = double(temp.f32);
loc_8211EEB4:
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,29428(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 29428);
	// fmuls f31,f13,f0
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8211eba8
	ctx.lr = 0x8211EEC4;
	sub_8211EBA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f31.f64;
	// lfs f2,16276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16276);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,16228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8211c518
	ctx.lr = 0x8211EEDC;
	sub_8211C518(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,164(r31)
	REX_STORE_U32(r31.u32 + 164, ctx.r11.u32);
loc_8211EEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82123168) {
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
	// bge cr6,0x821232a4
	if (!ctx.cr6.lt) goto loc_821232A4;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// lis r7,-32238
	ctx.r7.s64 = -2112749568;
	// addi r6,r8,-30224
	ctx.r6.s64 = ctx.r8.s64 + -30224;
	// addi r9,r11,6040
	ctx.r9.s64 = ctx.r11.s64 + 6040;
	// addi r8,r10,5272
	ctx.r8.s64 = ctx.r10.s64 + 5272;
	// addi r7,r7,4376
	ctx.r7.s64 = ctx.r7.s64 + 4376;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,137
	ctx.r4.s64 = 137;
	// bl 0x821f7d50
	ctx.lr = 0x821231D0;
	sub_821F7D50(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821231e8
	if (ctx.cr0.eq) goto loc_821231E8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,31764
	ctx.r10.s64 = ctx.r10.s64 + 31764;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821231ec
	goto loc_821231EC;
loc_821231E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821231EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821232a4
	if (ctx.cr6.eq) goto loc_821232A4;
	// lwz r10,29816(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 29816);
	// fsqrts f9,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(sqrt(f31.f64)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stw r10,29816(r30)
	REX_STORE_U32(r30.u32 + 29816, ctx.r10.u32);
	// addi r10,r11,80
	ctx.r10.s64 = ctx.r11.s64 + 80;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// lfs f13,-30444(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -30444);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f0,1996(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// li r9,12
	ctx.r9.s64 = 12;
	// lfs f10,17124(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17124);
	ctx.f10.f64 = double(temp.f32);
	// li r8,60
	ctx.r8.s64 = 60;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,-30228(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -30228);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,18116(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 18116);
	ctx.f11.f64 = double(temp.f32);
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
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// stfs f0,144(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,152(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stb r9,256(r11)
	REX_STORE_U8(ctx.r11.u32 + 256, ctx.r9.u8);
	// stfs f0,156(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stb r7,257(r11)
	REX_STORE_U8(ctx.r11.u32 + 257, ctx.r7.u8);
	// stfs f0,160(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 160, temp.u32);
	// stb r9,258(r11)
	REX_STORE_U8(ctx.r11.u32 + 258, ctx.r9.u8);
	// stfs f0,168(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 168, temp.u32);
	// sth r8,212(r11)
	REX_STORE_U16(ctx.r11.u32 + 212, ctx.r8.u16);
	// stfs f0,172(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 172, temp.u32);
	// stw r10,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r10.u32);
	// stfs f12,164(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 164, temp.u32);
	// stfs f11,176(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 176, temp.u32);
	// fmuls f0,f31,f13
	ctx.f0.f64 = double(float(f31.f64 * ctx.f13.f64));
	// stfs f0,192(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 192, temp.u32);
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
loc_821232A4:
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

DEFINE_REX_FUNC(sub_82128908) {
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
	ctx.lr = 0x82128910;
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,48
	r27.s64 = ctx.r3.s64 + 48;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x820e1c28
	ctx.lr = 0x8212893C;
	sub_820E1C28(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x820e1c28
	ctx.lr = 0x8212894C;
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
	// blt cr6,0x82128a94
	if (ctx.cr6.lt) goto loc_82128A94;
	// lfs f13,12(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fdivs f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// blt cr6,0x82128a94
	if (ctx.cr6.lt) goto loc_82128A94;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(f31.f64, ctx.f0.f64);
	// bgt cr6,0x82128a94
	if (ctx.cr6.gt) goto loc_82128A94;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x820e2028
	ctx.lr = 0x821289A4;
	sub_820E2028(ctx, base);
	// addi r28,r30,16
	r28.s64 = r30.s64 + 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1bf0
	ctx.lr = 0x821289B8;
	sub_820E1BF0(ctx, base);
	// addi r27,r30,32
	r27.s64 = r30.s64 + 32;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1bf0
	ctx.lr = 0x821289CC;
	sub_820E1BF0(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r31,r11,7808
	r31.s64 = ctx.r11.s64 + 7808;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x820e1bf0
	ctx.lr = 0x821289E4;
	sub_820E1BF0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1bf0
	ctx.lr = 0x821289F4;
	sub_820E1BF0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e1c50
	ctx.lr = 0x82128A04;
	sub_820E1C50(ctx, base);
	// addi r5,r31,16
	ctx.r5.s64 = r31.s64 + 16;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1c50
	ctx.lr = 0x82128A14;
	sub_820E1C50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x820e1c28
	ctx.lr = 0x82128A20;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82128a94
	if (ctx.cr6.lt) goto loc_82128A94;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x820e1bf0
	ctx.lr = 0x82128A38;
	sub_820E1BF0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1bf0
	ctx.lr = 0x82128A48;
	sub_820E1BF0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c50
	ctx.lr = 0x82128A58;
	sub_820E1C50(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x820e1c28
	ctx.lr = 0x82128A64;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82128a94
	if (ctx.cr6.lt) goto loc_82128A94;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1c28
	ctx.lr = 0x82128A78;
	sub_820E1C28(ctx, base);
	// fcmpu cr6,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// blt cr6,0x82128a94
	if (ctx.cr6.lt) goto loc_82128A94;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82128a8c
	if (ctx.cr6.eq) goto loc_82128A8C;
	// stfs f31,0(r26)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
loc_82128A8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82128a98
	goto loc_82128A98;
loc_82128A94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82128A98:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8212C3B8) {
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
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212c3e4
	if (ctx.cr6.eq) goto loc_8212C3E4;
loc_8212C3DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8212c4d8
	goto loc_8212C4D8;
loc_8212C3E4:
	// lbz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 18);
	// li r4,0
	ctx.r4.s64 = 0;
	// lha r11,30(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 30));
	// li r5,4
	ctx.r5.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8212c404
	if (ctx.cr0.eq) goto loc_8212C404;
	// li r11,3
	ctx.r11.s64 = 3;
loc_8212C404:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r10,-23024(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -23024);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x8212c470
	if (ctx.cr6.lt) goto loc_8212C470;
	// beq cr6,0x8212c488
	if (ctx.cr6.eq) goto loc_8212C488;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x8212c45c
	if (ctx.cr6.lt) goto loc_8212C45C;
	// beq cr6,0x8212c450
	if (ctx.cr6.eq) goto loc_8212C450;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x8212c43c
	if (ctx.cr6.lt) goto loc_8212C43C;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x8212c488
	if (ctx.cr6.eq) goto loc_8212C488;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8212c4d8
	goto loc_8212C4D8;
loc_8212C43C:
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lwz r11,-7176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -7176);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8212c3dc
	if (!ctx.cr6.eq) goto loc_8212C3DC;
	// li r6,2
	ctx.r6.s64 = 2;
loc_8212C450:
	// li r4,2
	ctx.r4.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8212c488
	goto loc_8212C488;
loc_8212C45C:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r6,20308(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20308);
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
	// stw r11,20308(r10)
	REX_STORE_U32(ctx.r10.u32 + 20308, ctx.r11.u32);
	// b 0x8212c488
	goto loc_8212C488;
loc_8212C470:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212c488
	if (!ctx.cr6.eq) goto loc_8212C488;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r6,20304(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20304);
	// xori r11,r6,1
	ctx.r11.u64 = ctx.r6.u64 ^ 1;
	// stw r11,20304(r10)
	REX_STORE_U32(ctx.r10.u32 + 20304, ctx.r11.u32);
loc_8212C488:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r11,15284
	ctx.r3.s64 = ctx.r11.s64 + 15284;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x822042f8
	ctx.lr = 0x8212C49C;
	sub_822042F8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq 0x8212c4c8
	if (ctx.cr0.eq) goto loc_8212C4C8;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lbz r11,-22960(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -22960);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8212c4d4
	if (ctx.cr0.eq) goto loc_8212C4D4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,7
	ctx.r3.s64 = 7;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8212C4C4;
	sub_8212BC38(ctx, base);
	// b 0x8212c4d4
	goto loc_8212C4D4;
loc_8212C4C8:
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r11,-23036(r10)
	REX_STORE_U32(ctx.r10.u32 + -23036, ctx.r11.u32);
loc_8212C4D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8212C4D8:
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

DEFINE_REX_FUNC(sub_821305A0) {
	REX_FUNC_PROLOGUE();
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8213064c
	if (ctx.cr6.eq) goto loc_8213064C;
	// lwz r8,32(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// lis r11,1525
	ctx.r11.s64 = 99942400;
	// ori r11,r11,57500
	ctx.r11.u64 = ctx.r11.u64 | 57500;
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821305cc
	if (ctx.cr6.lt) goto loc_821305CC;
	// stw r11,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r11.u32);
	// b 0x8213064c
	goto loc_8213064C;
loc_821305CC:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,23000
	ctx.r9.s64 = ctx.r11.s64 + 23000;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_821305DC:
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82130654
	if (ctx.cr6.lt) goto loc_82130654;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r6,r9,804
	ctx.r6.s64 = ctx.r9.s64 + 804;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x821305dc
	if (!ctx.cr6.gt) goto loc_821305DC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82130600:
	// lwz r10,32(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r10,32(r7)
	REX_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
loc_8213061C:
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82130640
	if (ctx.cr6.lt) goto loc_82130640;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r7,r9,804
	ctx.r7.s64 = ctx.r9.s64 + 804;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x8213061c
	if (!ctx.cr6.gt) goto loc_8213061C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82130640:
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8213064C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82130654:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// b 0x82130600
	goto loc_82130600;
}

DEFINE_REX_FUNC(sub_82132E40) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r9.u32);
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// stw r8,-28(r1)
	REX_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lis r8,-4096
	ctx.r8.s64 = -268435456;
	// stw r6,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r6.u32);
	// stw r9,-20(r1)
	REX_STORE_U32(ctx.r1.u32 + -20, ctx.r9.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x82132ed0
	if (ctx.cr6.eq) goto loc_82132ED0;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r9,r11,22984
	ctx.r9.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r3
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// or r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 | ctx.r8.u64;
	// andc r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r7.u64;
	// stwx r8,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u32);
	// lbzx r11,r4,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x82132ef0
	goto loc_82132EF0;
loc_82132ED0:
	// lis r11,-32175
	ctx.r11.s64 = -2108620800;
	// addi r11,r11,22984
	ctx.r11.s64 = ctx.r11.s64 + 22984;
	// lbzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
loc_82132EF0:
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134F58) {
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
	ctx.lr = 0x82134F60;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lhz r10,30(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 30);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x82134f88
	if (ctx.cr6.eq) goto loc_82134F88;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,23240(r10)
	REX_STORE_U32(ctx.r10.u32 + 23240, ctx.r11.u32);
	// b 0x82135274
	goto loc_82135274;
loc_82134F88:
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// lwz r10,220(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 220);
	// lwz r9,216(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r31,r8,23912
	r31.s64 = ctx.r8.s64 + 23912;
	// lis r8,-32169
	ctx.r8.s64 = -2108227584;
	// li r15,0
	r15.s64 = 0;
	// lbz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r22,r8,23240
	r22.s64 = ctx.r8.s64 + 23240;
	// lbz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r26,20(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 20);
	// mr r11,r22
	ctx.r11.u64 = r22.u64;
	// lwz r25,24(r31)
	r25.u64 = REX_LOAD_U32(r31.u32 + 24);
	// extsb r18,r10
	r18.s64 = ctx.r10.s8;
	// lwz r28,28(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 28);
	// extsb r17,r9
	r17.s64 = ctx.r9.s8;
	// lwz r27,32(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lwz r30,76(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 76);
loc_82134FD4:
	// stw r15,288(r11)
	REX_STORE_U32(ctx.r11.u32 + 288, r15.u32);
	// stwu r15,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r15.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82134fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82134FD4;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r21,r11,23208
	r21.s64 = ctx.r11.s64 + 23208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x822d5870
	ctx.lr = 0x82134FF8;
	sub_822D5870(ctx, base);
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// lwz r16,48(r31)
	r16.u64 = REX_LOAD_U32(r31.u32 + 48);
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// addi r19,r11,21824
	r19.s64 = ctx.r11.s64 + 21824;
	// addi r20,r10,22000
	r20.s64 = ctx.r10.s64 + 22000;
loc_82135010:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// beq cr6,0x8213505c
	if (ctx.cr6.eq) goto loc_8213505C;
	// mulli r11,r30,324
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(324));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r10,10
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 + r28.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r8.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r31,22(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 22);
	// b 0x82135090
	goto loc_82135090;
loc_8213505C:
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhax r11,r8,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbz r31,12(r11)
	r31.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
loc_82135090:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82131010
	ctx.lr = 0x821350A8;
	sub_82131010(ctx, base);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821350c0
	if (ctx.cr0.eq) goto loc_821350C0;
	// mulli r11,r18,3
	ctx.r11.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, r31.u32);
loc_821350C0:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821350d8
	if (ctx.cr0.eq) goto loc_821350D8;
	// mulli r11,r17,3
	ctx.r11.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(3));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r11,r21
	REX_STORE_U32(ctx.r11.u32 + r21.u32, r31.u32);
loc_821350D8:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x82135010
	if (ctx.cr6.lt) goto loc_82135010;
	// mr r31,r15
	r31.u64 = r15.u64;
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// addi r29,r21,4
	r29.s64 = r21.s64 + 4;
	// li r24,1
	r24.s64 = 1;
loc_821350F4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r7,r15
	ctx.r7.u64 = r15.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r8,-4(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + -4);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r9,r8
	temp.u8 = (~ctx.r9.u32 + ctx.r8.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r23)
	REX_STORE_U32(r23.u32 + 0, ctx.r11.u32);
loc_82135130:
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82131010
	ctx.lr = 0x82135148;
	sub_82131010(ctx, base);
	// add r11,r31,r7
	ctx.r11.u64 = r31.u64 + ctx.r7.u64;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(r16.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r21
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	// beq cr6,0x82135190
	if (ctx.cr6.eq) goto loc_82135190;
	// mulli r11,r30,324
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(324));
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + r20.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r10,10
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(10));
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r10,r28
	ctx.r11.u64 = ctx.r10.u64 + r28.u64;
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + r27.u64;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// b 0x821351b4
	goto loc_821351B4;
loc_82135190:
	// mulli r11,r30,88
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(88));
	// rlwinm r10,r26,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + r19.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// addi r10,r10,14
	ctx.r10.s64 = ctx.r10.s64 + 14;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lhax r11,r10,r9
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
loc_821351B4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821351d4
	if (!ctx.cr0.eq) goto loc_821351D4;
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82135200
	if (ctx.cr0.eq) goto loc_82135200;
loc_821351D4:
	// mulli r9,r18,71
	ctx.r9.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(71));
	// slw r11,r24,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r18,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r22,4
	ctx.r6.s64 = r22.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r22,572
	ctx.r5.s64 = r22.s64 + 572;
	// stwx r11,r9,r6
	REX_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
	// stfsx f0,r10,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, temp.u32);
loc_82135200:
	// rlwinm. r11,r3,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82135210
	if (!ctx.cr0.eq) goto loc_82135210;
	// rlwinm. r11,r3,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8213523c
	if (ctx.cr0.eq) goto loc_8213523C;
loc_82135210:
	// mulli r9,r17,71
	ctx.r9.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(71));
	// slw r11,r24,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r17,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r22,4
	ctx.r8.s64 = r22.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r22,572
	ctx.r6.s64 = r22.s64 + 572;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// stfsx f0,r10,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, temp.u32);
loc_8213523C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// blt cr6,0x82135130
	if (ctx.cr6.lt) goto loc_82135130;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r11,r21,28
	ctx.r11.s64 = r21.s64 + 28;
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821350f4
	if (ctx.cr6.lt) goto loc_821350F4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r22)
	REX_STORE_U32(r22.u32 + 0, ctx.r11.u32);
loc_82135274:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x822d4ea4
	return;
}

DEFINE_REX_FUNC(sub_8214CDB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8214CDC0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r4,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214cde8
	if (ctx.cr0.eq) goto loc_8214CDE8;
	// lwz r11,212(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 212);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x8214ce04
	goto loc_8214CE04;
loc_8214CDE8:
	// rlwinm. r11,r4,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8214ce08
	if (ctx.cr0.eq) goto loc_8214CE08;
	// lwz r11,212(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x8214ce04
	if (!ctx.cr6.gt) goto loc_8214CE04;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8214CE04:
	// stw r11,212(r31)
	REX_STORE_U32(r31.u32 + 212, ctx.r11.u32);
loc_8214CE08:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 200);
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// lwz r8,212(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 212);
	// ori r30,r11,3696
	r30.u64 = ctx.r11.u64 | 3696;
	// addi r29,r9,-7072
	r29.s64 = ctx.r9.s64 + -7072;
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(r30.s32);
	// addi r10,r29,5596
	ctx.r10.s64 = r29.s64 + 5596;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r4,212(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 212);
	// bl 0x8214cc98
	ctx.lr = 0x8214CE38;
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
	// lwz r3,212(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 212);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8214F7F8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8214f80c
	if (!ctx.cr6.eq) goto loc_8214F80C;
	// lha r3,8(r3)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(ctx.r3.u32 + 8));
	// blr 
	return;
loc_8214F80C:
	// ble cr6,0x8214f874
	if (!ctx.cr6.gt) goto loc_8214F874;
	// lha r10,8(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// addi r9,r11,12
	ctx.r9.s64 = ctx.r11.s64 + 12;
	// lha r8,6(r11)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 6));
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r6,r8,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// andc r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r3,r6,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r6.u64;
	// twlgei r11,-1
	if (ctx.r11.s32 == -1 || ctx.r11.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_8214F84C:
	// lbzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8214f860
	if (ctx.cr0.eq) goto loc_8214F860;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
loc_8214F860:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8214f84c
	if (!ctx.cr6.gt) goto loc_8214F84C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8214f84c
	goto loc_8214F84C;
loc_8214F874:
	// lha r10,6(r11)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 6));
	// addi r8,r11,12
	ctx.r8.s64 = ctx.r11.s64 + 12;
	// lha r9,8(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 8));
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// rotlwi r10,r9,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r6,r9,r7
	ctx.r6.u64 = uint32_t((ctx.r7.s32 && !(ctx.r9.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r9.s32 / ctx.r7.s32 : 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// andc r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
loc_8214F8A8:
	// lbzx r10,r8,r3
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r3.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8214f8bc
	if (ctx.cr0.eq) goto loc_8214F8BC;
	// addic. r4,r4,1
	ctx.xer.ca = ctx.r4.u32 > 4294967294;
	ctx.r4.s64 = ctx.r4.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgelr 
	if (!ctx.cr0.lt) return;
loc_8214F8BC:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8214f8a8
	if (!ctx.cr0.lt) goto loc_8214F8A8;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
	// extsh r3,r10
	ctx.r3.s64 = ctx.r10.s16;
	// b 0x8214f8a8
	goto loc_8214F8A8;
}

DEFINE_REX_FUNC(sub_82155C78) {
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
	// bl 0x822d4e64
	ctx.lr = 0x82155C80;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f00
	ctx.lr = 0x82155C88;
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
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
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfs f29,16292(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16292);
	f29.f64 = double(temp.f32);
	// lfs f31,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	f31.f64 = double(temp.f32);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f26,16588(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 16588);
	f26.f64 = double(temp.f32);
	// mr r31,r28
	r31.u64 = r28.u64;
	// lfs f27,2360(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2360);
	f27.f64 = double(temp.f32);
	// fmr f14,f30
	f14.f64 = f30.f64;
	// lfs f28,2380(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2380);
	f28.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82155CD8:
	// addi r11,r31,25
	ctx.r11.s64 = r31.s64 + 25;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821fee88
	ctx.lr = 0x82155CE4;
	sub_821FEE88(ctx, base);
	// lfsx f0,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmadds f0,f1,f27,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, ctx.f0.f64)));
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + f26.f64));
	// bl 0x82204b00
	ctx.lr = 0x82155CF8;
	sub_82204B00(ctx, base);
	// stfsx f1,r30,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r30.u32 + r27.u32, temp.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(r31.u32, 1, ctx.xer);
	// blt cr6,0x82155d40
	if (ctx.cr6.lt) goto loc_82155D40;
	// beq cr6,0x82155d28
	if (ctx.cr6.eq) goto loc_82155D28;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(r31.u32, 3, ctx.xer);
	// bge cr6,0x82155d50
	if (!ctx.cr6.lt) goto loc_82155D50;
	// lfs f25,120(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 120);
	f25.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x82155D18;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x82155d50
	goto loc_82155D50;
loc_82155D28:
	// lfs f25,116(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 116);
	f25.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x82155D30;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// fmuls f0,f0,f25
	ctx.f0.f64 = double(float(ctx.f0.f64 * f25.f64));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x82155d50
	goto loc_82155D50;
loc_82155D40:
	// lfs f25,112(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 112);
	f25.f64 = double(temp.f32);
	// bl 0x820e0028
	ctx.lr = 0x82155D48;
	sub_820E0028(ctx, base);
	// fmadds f0,f1,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f28.f64)));
	// fmuls f14,f0,f25
	f14.f64 = double(float(ctx.f0.f64 * f25.f64));
loc_82155D50:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(r31.s32, 3, ctx.xer);
	// blt cr6,0x82155cd8
	if (ctx.cr6.lt) goto loc_82155CD8;
	// lwz r11,68(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 68);
	// stfs f14,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,68(r27)
	REX_STORE_U32(r27.u32 + 68, ctx.r11.u32);
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// blt cr6,0x82155d78
	if (ctx.cr6.lt) goto loc_82155D78;
	// stw r28,68(r27)
	REX_STORE_U32(r27.u32 + 68, r28.u32);
loc_82155D78:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r10,68(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 68);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r9,92(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 92);
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r23.s64 = ctx.r10.s32 >> 1;
	// addi r20,r11,432
	r20.s64 = ctx.r11.s64 + 432;
	// addi r11,r23,26
	ctx.r11.s64 = r23.s64 + 26;
	// lfs f26,17064(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 17064);
	f26.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// clrlwi r30,r11,24
	r30.u64 = ctx.r11.u32 & 0xFF;
	// addi r10,r23,2
	ctx.r10.s64 = r23.s64 + 2;
	// stb r30,104(r9)
	REX_STORE_U8(ctx.r9.u32 + 104, r30.u8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lfs f16,28668(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 28668);
	f16.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// stb r31,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, r31.u8);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f15,16336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16336);
	f15.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f27,16032(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16032);
	f27.f64 = double(temp.f32);
	// lfs f17,16204(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16204);
	f17.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lha r11,30(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 30));
	// lfs f28,2356(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2356);
	f28.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f18,27848(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 27848);
	f18.f64 = double(temp.f32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f19,32064(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32064);
	f19.f64 = double(temp.f32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f20,16264(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16264);
	f20.f64 = double(temp.f32);
	// li r25,1
	r25.s64 = 1;
	// lfs f21,2012(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2012);
	f21.f64 = double(temp.f32);
	// li r26,2
	r26.s64 = 2;
	// lfs f29,-17484(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -17484);
	f29.f64 = double(temp.f32);
	// li r19,6
	r19.s64 = 6;
	// lfs f22,-17488(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17488);
	f22.f64 = double(temp.f32);
	// li r21,8
	r21.s64 = 8;
	// lfs f23,-17492(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -17492);
	f23.f64 = double(temp.f32);
	// li r22,4
	r22.s64 = 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215614c
	if (ctx.cr6.eq) goto loc_8215614C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215614c
	if (ctx.cr6.eq) goto loc_8215614C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17500
	ctx.r5.s64 = ctx.r11.s64 + -17500;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821f7778
	ctx.lr = 0x82155E58;
	sub_821F7778(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,80(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 80);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stfs f31,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r25,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, r25.u8);
	// addic. r11,r11,3568
	ctx.xer.ca = ctx.r11.u32 > 4294963727;
	ctx.r11.s64 = ctx.r11.s64 + 3568;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r26,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r26.u64);
	// sth r19,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r19.u16);
	// stb r28,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r28.u8);
	// stb r25,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, r25.u8);
	// beq 0x82155e88
	if (ctx.cr0.eq) goto loc_82155E88;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
loc_82155E88:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r28,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, r28.u8);
	// beq cr6,0x82155e9c
	if (ctx.cr6.eq) goto loc_82155E9C;
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stb r30,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, r30.u8);
loc_82155E9C:
	// stb r31,107(r3)
	REX_STORE_U8(ctx.r3.u32 + 107, r31.u8);
	// stb r26,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, r26.u8);
	// stb r25,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, r25.u8);
	// sth r21,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r21.u16);
	// sth r26,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, r26.u16);
	// sth r22,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, r22.u16);
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lfs f0,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,92(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lfs f11,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f11.f64 = double(temp.f32);
	// addi r31,r11,112
	r31.s64 = ctx.r11.s64 + 112;
	// lfs f13,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fnmsubs f24,f11,f23,f12
	f24.f64 = double(float(-std::fma(ctx.f11.f64, f23.f64, -ctx.f12.f64)));
	// stfs f30,16(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f29,24(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// fmadds f13,f11,f22,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f22.f64, ctx.f13.f64)));
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stfs f24,20(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r24,r31,32
	r24.s64 = r31.s64 + 32;
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f4,156(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// fadds f14,f13,f0
	f14.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bl 0x82202c38
	ctx.lr = 0x82155F14;
	sub_82202C38(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f20
	ctx.f2.f64 = f20.f64;
	// fsubs f1,f0,f21
	ctx.f1.f64 = double(float(ctx.f0.f64 - f21.f64));
	// bl 0x82204b00
	ctx.lr = 0x82155F24;
	sub_82204B00(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * f19.f64));
	// stfs f1,96(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f0,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 - f18.f64));
	// bl 0x82204ae0
	ctx.lr = 0x82155F48;
	sub_82204AE0(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f4,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x82155F64;
	sub_822028C8(ctx, base);
	// stfs f30,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f4,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
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
	// bl 0x822028c8
	ctx.lr = 0x82155F80;
	sub_822028C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f25,-24024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24024);
	f25.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f24,84(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// addi r29,r30,64
	r29.s64 = r30.s64 + 64;
	// stfs f29,88(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// addi r3,r29,32
	ctx.r3.s64 = r29.s64 + 32;
	// stfs f25,80(r30)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// stfs f30,64(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stfs f30,68(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f24,16272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16272);
	f24.f64 = double(temp.f32);
	// fmr f1,f24
	ctx.f1.f64 = f24.f64;
	// bl 0x820e2028
	ctx.lr = 0x82155FC4;
	sub_820E2028(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// stfs f31,108(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stfs f30,16(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f14,20(r29)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f29,24(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// stfs f31,0(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f28,4(r29)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// stfs f17,128(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f16,132(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f15,136(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// bl 0x820e1f50
	ctx.lr = 0x8215602C;
	sub_820E1F50(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stfs f31,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r30,r29,32
	r30.s64 = r29.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stfs f25,16(r29)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r29.u32 + 16, temp.u32);
	// stfs f14,20(r29)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(r29.u32 + 20, temp.u32);
	// stfs f29,24(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 24, temp.u32);
	// stfs f31,28(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 28, temp.u32);
	// stw r28,12(r29)
	REX_STORE_U32(r29.u32 + 12, r28.u32);
	// stfs f30,0(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// stfs f28,4(r29)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r29.u32 + 4, temp.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r11,32(r29)
	REX_STORE_U32(r29.u32 + 32, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r29)
	REX_STORE_U32(r29.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r11,40(r29)
	REX_STORE_U32(r29.u32 + 40, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r11,44(r29)
	REX_STORE_U32(r29.u32 + 44, ctx.r11.u32);
	// bl 0x820e1f50
	ctx.lr = 0x821560A8;
	sub_820E1F50(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// fmr f1,f24
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f24.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e2028
	ctx.lr = 0x821560BC;
	sub_820E2028(ctx, base);
	// stfs f31,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// stfs f30,80(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 80, temp.u32);
	// addi r11,r29,64
	ctx.r11.s64 = r29.s64 + 64;
	// stfs f27,84(r29)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r29.u32 + 84, temp.u32);
	// stfs f29,88(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 88, temp.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfs f31,92(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 92, temp.u32);
	// stw r28,76(r29)
	REX_STORE_U32(r29.u32 + 76, r28.u32);
	// stfs f31,64(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 64, temp.u32);
	// stfs f26,68(r29)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,104(r29)
	REX_STORE_U32(r29.u32 + 104, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,108(r29)
	REX_STORE_U32(r29.u32 + 108, ctx.r10.u32);
	// stfs f30,108(r29)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r29.u32 + 108, temp.u32);
	// stfs f25,16(r11)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stfs f30,0(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f26,4(r11)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// lfs f14,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	f14.f64 = double(temp.f32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f30,44(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_8215614C:
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// li r10,30
	ctx.r10.s64 = 30;
	// lwz r9,96(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 96);
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + r23.u64;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// mulli r10,r10,30
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(30));
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r10,r11,26
	ctx.r10.s64 = ctx.r11.s64 + 26;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r31,r11,24
	r31.u64 = ctx.r11.u32 & 0xFF;
	// stb r30,104(r9)
	REX_STORE_U8(ctx.r9.u32 + 104, r30.u8);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// stb r31,107(r11)
	REX_STORE_U8(ctx.r11.u32 + 107, r31.u8);
	// lha r11,30(r20)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r20.u32 + 30));
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8215647c
	if (ctx.cr6.eq) goto loc_8215647C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8215647c
	if (ctx.cr6.eq) goto loc_8215647C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r11,-17508
	ctx.r5.s64 = ctx.r11.s64 + -17508;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x821f7778
	ctx.lr = 0x821561B8;
	sub_821F7778(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 12);
	// lwz r10,80(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 80);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// stfs f31,120(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// stb r25,110(r3)
	REX_STORE_U8(ctx.r3.u32 + 110, r25.u8);
	// addic. r11,r11,4592
	ctx.xer.ca = ctx.r11.u32 > 4294962703;
	ctx.r11.s64 = ctx.r11.s64 + 4592;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r26,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, r26.u64);
	// sth r19,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r19.u16);
	// stb r28,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, r28.u8);
	// stb r25,91(r3)
	REX_STORE_U8(ctx.r3.u32 + 91, r25.u8);
	// beq 0x821561e8
	if (ctx.cr0.eq) goto loc_821561E8;
	// stw r11,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
loc_821561E8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r28,109(r3)
	REX_STORE_U8(ctx.r3.u32 + 109, r28.u8);
	// beq cr6,0x821561fc
	if (ctx.cr6.eq) goto loc_821561FC;
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// stb r30,104(r3)
	REX_STORE_U8(ctx.r3.u32 + 104, r30.u8);
loc_821561FC:
	// stb r26,106(r3)
	REX_STORE_U8(ctx.r3.u32 + 106, r26.u8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// sth r26,42(r3)
	REX_STORE_U16(ctx.r3.u32 + 42, r26.u16);
	// sth r21,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, r21.u16);
	// sth r22,40(r3)
	REX_STORE_U16(ctx.r3.u32 + 40, r22.u16);
	// stb r25,105(r3)
	REX_STORE_U8(ctx.r3.u32 + 105, r25.u8);
	// stb r31,107(r3)
	REX_STORE_U8(ctx.r3.u32 + 107, r31.u8);
	// lfs f25,-24312(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -24312);
	f25.f64 = double(temp.f32);
	// lwz r30,92(r3)
	r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// lfs f0,132(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// addi r31,r11,112
	r31.s64 = ctx.r11.s64 + 112;
	// lfs f12,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r31,32
	r26.s64 = r31.s64 + 32;
	// fmadds f11,f12,f22,f13
	ctx.f11.f64 = double(float(std::fma(ctx.f12.f64, f22.f64, ctx.f13.f64)));
	// stfs f25,16(r30)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f29,24(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f31,28(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 28, temp.u32);
	// fadds f22,f11,f0
	f22.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fnmsubs f24,f12,f23,f13
	f24.f64 = double(float(-std::fma(ctx.f12.f64, f23.f64, -ctx.f13.f64)));
	// stfs f24,20(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f30,0(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r28,12(r30)
	REX_STORE_U32(r30.u32 + 12, r28.u32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 4, temp.u32);
	// lfs f2,148(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,144(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f1.f64 = double(temp.f32);
	// lfs f4,156(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 156);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,152(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82202c38
	ctx.lr = 0x8215627C;
	sub_82202C38(ctx, base);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f20
	ctx.f2.f64 = f20.f64;
	// fsubs f1,f0,f21
	ctx.f1.f64 = double(float(ctx.f0.f64 - f21.f64));
	// bl 0x82204b00
	ctx.lr = 0x8215628C;
	sub_82204B00(ctx, base);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmuls f0,f0,f19
	ctx.f0.f64 = double(float(ctx.f0.f64 * f19.f64));
	// stfs f1,112(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// lfs f0,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f18
	ctx.f1.f64 = double(float(ctx.f0.f64 - f18.f64));
	// bl 0x82204ae0
	ctx.lr = 0x821562B0;
	sub_82204AE0(ctx, base);
	// stfs f1,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r29,r30,32
	r29.s64 = r30.s64 + 32;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfs f4,124(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f3,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822028c8
	ctx.lr = 0x821562D0;
	sub_822028C8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lfs f1,16628(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16628);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e2028
	ctx.lr = 0x821562E8;
	sub_820E2028(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f30,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 44, temp.u32);
	// stfs f24,84(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// addi r10,r30,64
	ctx.r10.s64 = r30.s64 + 64;
	// stfs f29,88(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// addi r29,r10,64
	r29.s64 = ctx.r10.s64 + 64;
	// addi r11,r10,32
	ctx.r11.s64 = ctx.r10.s64 + 32;
	// lfs f24,16036(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16036);
	f24.f64 = double(temp.f32);
	// addi r4,r29,32
	ctx.r4.s64 = r29.s64 + 32;
	// stfs f24,80(r30)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// stfs f31,64(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f30,68(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r9,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r9.u32);
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r9,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r9,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// stfs f31,108(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f25,80(r10)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f22,84(r10)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(ctx.r10.u32 + 84, temp.u32);
	// stfs f29,88(r10)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r10.u32 + 88, temp.u32);
	// stfs f31,92(r10)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// stw r28,76(r10)
	REX_STORE_U32(ctx.r10.u32 + 76, r28.u32);
	// stfs f30,64(r10)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r10.u32 + 64, temp.u32);
	// stfs f28,68(r10)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stfs f17,144(r1)
	temp.f32 = float(f17.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stfs f16,148(r1)
	temp.f32 = float(f16.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stfs f15,152(r1)
	temp.f32 = float(f15.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stfs f31,156(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// bl 0x820e1f50
	ctx.lr = 0x8215639C;
	sub_820E1F50(ctx, base);
	// stfs f31,44(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 44, temp.u32);
	// addi r30,r29,64
	r30.s64 = r29.s64 + 64;
	// stfs f24,80(r29)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(r29.u32 + 80, temp.u32);
	// stfs f22,84(r29)
	temp.f32 = float(f22.f64);
	REX_STORE_U32(r29.u32 + 84, temp.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f29,88(r29)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r29.u32 + 88, temp.u32);
	// addi r4,r30,32
	ctx.r4.s64 = r30.s64 + 32;
	// stfs f31,92(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 92, temp.u32);
	// stw r28,76(r29)
	REX_STORE_U32(r29.u32 + 76, r28.u32);
	// stfs f31,64(r29)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 64, temp.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stfs f28,68(r29)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(r29.u32 + 68, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// bl 0x820e1f50
	ctx.lr = 0x821563F0;
	sub_820E1F50(ctx, base);
	// stfs f31,108(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r29.u32 + 108, temp.u32);
	// stfs f25,80(r30)
	temp.f32 = float(f25.f64);
	REX_STORE_U32(r30.u32 + 80, temp.u32);
	// addi r11,r30,64
	ctx.r11.s64 = r30.s64 + 64;
	// stfs f27,84(r30)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(r30.u32 + 84, temp.u32);
	// stfs f29,88(r30)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r30.u32 + 88, temp.u32);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stfs f31,92(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 92, temp.u32);
	// stw r28,76(r30)
	REX_STORE_U32(r30.u32 + 76, r28.u32);
	// stfs f30,64(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f26,68(r30)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r30.u32 + 68, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,96(r30)
	REX_STORE_U32(r30.u32 + 96, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,100(r30)
	REX_STORE_U32(r30.u32 + 100, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,104(r30)
	REX_STORE_U32(r30.u32 + 104, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,108(r30)
	REX_STORE_U32(r30.u32 + 108, ctx.r10.u32);
	// stfs f30,108(r30)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r30.u32 + 108, temp.u32);
	// stfs f24,16(r11)
	temp.f32 = float(f24.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f27,20(r11)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f29,24(r11)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f31,28(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r28.u32);
	// stfs f26,4(r11)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 32);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 36);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f30,44(r11)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
loc_8215647C:
	// lwz r11,92(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 92);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,152(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f31,156(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// stfs f14,144(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// stfs f14,144(r11)
	temp.f32 = float(f14.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// stfs f0,148(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// stfs f13,152(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 152, temp.u32);
	// stfs f31,156(r11)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r11.u32 + 156, temp.u32);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x822d4f4c
	ctx.lr = 0x821564B8;
	// b 0x822d4eb4
	return;
}

DEFINE_REX_FUNC(sub_8217E3C8) {
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
	ctx.lr = 0x8217E3D0;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f38
	ctx.lr = 0x8217E3D8;
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// addi r30,r3,84
	r30.s64 = ctx.r3.s64 + 84;
	// addi r29,r11,-7072
	r29.s64 = ctx.r11.s64 + -7072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r5,r29,10484
	ctx.r5.s64 = r29.s64 + 10484;
	// addi r4,r11,14180
	ctx.r4.s64 = ctx.r11.s64 + 14180;
	// bl 0x820e1b70
	ctx.lr = 0x8217E400;
	sub_820E1B70(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f30,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x820e1cf8
	ctx.lr = 0x8217E418;
	sub_820E1CF8(ctx, base);
	// lis r28,-32166
	r28.s64 = -2108030976;
	// addis r11,r29,1
	ctx.r11.s64 = r29.s64 + 65536;
	// addi r27,r28,7808
	r27.s64 = r28.s64 + 7808;
	// addi r5,r29,10484
	ctx.r5.s64 = r29.s64 + 10484;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,14180
	ctx.r4.s64 = ctx.r11.s64 + 14180;
	// bl 0x820e1ba8
	ctx.lr = 0x8217E434;
	sub_820E1BA8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f31,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// stfs f31,4(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// bl 0x820e22e8
	ctx.lr = 0x8217E448;
	sub_820E22E8(ctx, base);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// lfs f2,7808(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 7808);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82204dc0
	ctx.lr = 0x8217E45C;
	sub_82204DC0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// bl 0x820e01b0
	ctx.lr = 0x8217E468;
	sub_820E01B0(ctx, base);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x820e0778
	ctx.lr = 0x8217E474;
	sub_820E0778(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 12, temp.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,7808(r28)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r28.u32 + 7808, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 4, temp.u32);
	// stfs f0,8(r27)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r27.u32 + 8, temp.u32);
	// bl 0x820e1bf0
	ctx.lr = 0x8217E49C;
	sub_820E1BF0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e01b0
	ctx.lr = 0x8217E4A4;
	sub_820E01B0(ctx, base);
	// lfs f0,7808(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 7808);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f12,8(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f31,140(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// bl 0x820e01b0
	ctx.lr = 0x8217E4C8;
	sub_820E01B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lfs f0,16204(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16204);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f29,f30,f0
	ctx.f0.f64 = double(float(std::fma(f29.f64, f30.f64, ctx.f0.f64)));
	// lfs f3,-30672(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -30672);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-4684(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4684);
	ctx.f2.f64 = double(temp.f32);
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 / ctx.f0.f64));
	// bl 0x820e0d78
	ctx.lr = 0x8217E4F4;
	sub_820E0D78(ctx, base);
	// addi r30,r31,132
	r30.s64 = r31.s64 + 132;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// bl 0x820e0368
	ctx.lr = 0x8217E508;
	sub_820E0368(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820e0368
	ctx.lr = 0x8217E518;
	sub_820E0368(ctx, base);
	// lis r10,-32166
	ctx.r10.s64 = -2108030976;
	// addi r4,r31,100
	ctx.r4.s64 = r31.s64 + 100;
	// lwz r11,7792(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 7792);
	// addi r3,r11,1700
	ctx.r3.s64 = ctx.r11.s64 + 1700;
	// lwz r9,1644(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 1644);
	// lfs f0,40(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 116, temp.u32);
	// stfs f13,120(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 120, temp.u32);
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 124, temp.u32);
	// stfs f31,128(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// bl 0x82202070
	ctx.lr = 0x8217E54C;
	sub_82202070(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x822d4f84
	ctx.lr = 0x8217E558;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82182720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,8
	ctx.r11.s64 = 8;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82182730:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r7,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 3;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r8,r5,r3
	ctx.r8.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r3.u32);
	// stw r6,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 | ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82182730
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182730;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82183E98) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82183EA0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16516(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16516);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16520(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16520);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r8,16512(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 16512);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82183ed0
	if (!ctx.cr6.eq) goto loc_82183ED0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82183f08
	goto loc_82183F08;
loc_82183ED0:
	// mulli r11,r11,516
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(516));
	// lwz r5,512(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 512);
	// add r29,r11,r31
	r29.u64 = ctx.r11.u64 + r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82183EE8;
	sub_822D4FA0(ctx, base);
	// lwz r11,512(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 512);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,512(r29)
	REX_STORE_U32(r29.u32 + 512, ctx.r11.u32);
	// lwz r10,16520(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16520);
	// lwz r11,16516(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16516);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,16516(r31)
	REX_STORE_U32(r31.u32 + 16516, ctx.r11.u32);
loc_82183F08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8218552C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821856A8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x821856B0;
	// stwu r1,-1424(r1)
	ea = -1424 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82184a00
	ctx.lr = 0x821856C4;
	sub_82184A00(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82188300
	ctx.lr = 0x821856CC;
	sub_82188300(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x82208cc8
	ctx.lr = 0x821856D4;
	sub_82208CC8(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x821856fc
	if (!ctx.cr6.eq) goto loc_821856FC;
	// lhz r9,1384(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 1384);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_821856FC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r3,492(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 492);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// subfic r11,r11,1264
	ctx.xer.ca = ctx.r11.u32 <= 1264;
	ctx.r11.u64 = static_cast<uint64_t>(1264) - ctx.r11.u64;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82189ba8
	ctx.lr = 0x82185714;
	sub_82189BA8(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// sth r3,1384(r1)
	REX_STORE_U16(ctx.r1.u32 + 1384, ctx.r3.u16);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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
	// beq 0x82185794
	if (ctx.cr0.eq) goto loc_82185794;
	// li r29,0
	r29.s64 = 0;
loc_8218573C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r29.u32);
	// lbz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8218576c
	if (!ctx.cr0.eq) goto loc_8218576C;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x821855a0
	ctx.lr = 0x8218576C;
	sub_821855A0(ctx, base);
loc_8218576C:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
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
	// blt cr6,0x8218573c
	if (ctx.cr6.lt) goto loc_8218573C;
loc_82185794:
	// addi r1,r1,1424
	ctx.r1.s64 = ctx.r1.s64 + 1424;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82188E68) {
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
	// lbz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x82188ed8
	if (!ctx.cr6.eq) goto loc_82188ED8;
	// lbz r10,1(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 1);
	// cmplwi cr6,r10,115
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 115, ctx.xer);
	// bne cr6,0x82188ed8
	if (!ctx.cr6.eq) goto loc_82188ED8;
	// lbz r10,2(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 2);
	// cmplwi cr6,r10,99
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 99, ctx.xer);
	// bne cr6,0x82188ed8
	if (!ctx.cr6.eq) goto loc_82188ED8;
	// lbz r10,3(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 3);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82188ed8
	if (!ctx.cr6.eq) goto loc_82188ED8;
	// addi r5,r6,-4
	ctx.r5.s64 = ctx.r6.s64 + -4;
	// addi r31,r3,4
	r31.s64 = ctx.r3.s64 + 4;
	// stw r5,516(r3)
	REX_STORE_U32(ctx.r3.u32 + 516, ctx.r5.u32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82188ECC;
	sub_822D4FA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-17080
	ctx.r3.s64 = r30.s64 + -17080;
	// bl 0x82183fe0
	ctx.lr = 0x82188ED8;
	sub_82183FE0(ctx, base);
loc_82188ED8:
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

DEFINE_REX_FUNC(sub_8218A6E8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4f34
	ctx.lr = 0x8218A6F8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8218a714
	if (!ctx.cr6.eq) goto loc_8218A714;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28056
	ctx.r11.s64 = ctx.r11.s64 + 28056;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8218A714:
	// addic. r11,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r11.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// blt 0x8218a7e4
	if (ctx.cr0.lt) goto loc_8218A7E4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f1,1992(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
loc_8218A72C:
	// lfs f13,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r4,16
	ctx.r6.s64 = ctx.r4.s64 + 16;
	// lfs f12,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f11,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f2.f64 = double(temp.f32);
	// bne cr6,0x8218a76c
	if (!ctx.cr6.eq) goto loc_8218A76C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8218A76C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8218a7d8
	if (!ctx.cr6.gt) goto loc_8218A7D8;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
loc_8218A780:
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f30,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	f30.f64 = double(temp.f32);
	// fmuls f29,f0,f7
	f29.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f28,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	f28.f64 = double(temp.f32);
	// fmuls f27,f0,f3
	f27.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfsu f0,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// stfs f1,12(r9)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmadds f31,f0,f11,f31
	f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f11.f64, f31.f64)));
	// fmadds f29,f0,f6,f29
	f29.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, f29.f64)));
	// fmadds f0,f0,f2,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, f27.f64)));
	// fmadds f31,f28,f8,f31
	f31.f64 = double(float(std::fma(f28.f64, ctx.f8.f64, f31.f64)));
	// fmadds f29,f28,f9,f29
	f29.f64 = double(float(std::fma(f28.f64, ctx.f9.f64, f29.f64)));
	// fmadds f0,f28,f4,f0
	ctx.f0.f64 = double(float(std::fma(f28.f64, ctx.f4.f64, ctx.f0.f64)));
	// fmadds f31,f30,f13,f31
	f31.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, f31.f64)));
	// stfs f31,0(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f31,f30,f10,f29
	f31.f64 = double(float(std::fma(f30.f64, ctx.f10.f64, f29.f64)));
	// stfs f31,4(r9)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmadds f0,f30,f5,f0
	ctx.f0.f64 = double(float(std::fma(f30.f64, ctx.f5.f64, ctx.f0.f64)));
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bdnz 0x8218a780
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218A780;
loc_8218A7D8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bge 0x8218a72c
	if (!ctx.cr0.lt) goto loc_8218A72C;
loc_8218A7E4:
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stw r11,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f80
	ctx.lr = 0x8218A810;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191788) {
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
	// lwz r3,80(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x822cb390
	ctx.lr = 0x821917A8;
	sub_822CB390(ctx, base);
	// lwz r31,80(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// beq cr6,0x821917cc
	if (ctx.cr6.eq) goto loc_821917CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822cb5f0
	ctx.lr = 0x821917BC;
	sub_822CB5F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822c80a8
	ctx.lr = 0x821917C4;
	sub_822C80A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	REX_STORE_U32(r30.u32 + 80, ctx.r11.u32);
loc_821917CC:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// addi r3,r11,-32032
	ctx.r3.s64 = ctx.r11.s64 + -32032;
	// bl 0x821f1f38
	ctx.lr = 0x821917D8;
	sub_821F1F38(ctx, base);
	// lis r10,-32169
	ctx.r10.s64 = -2108227584;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,30848(r10)
	REX_STORE_U32(ctx.r10.u32 + 30848, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82193F40) {
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
	ctx.lr = 0x82193F48;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r27,1
	r27.s64 = 1;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82193f70
	if (!ctx.cr6.eq) goto loc_82193F70;
	// stb r27,164(r3)
	REX_STORE_U8(ctx.r3.u32 + 164, r27.u8);
loc_82193F70:
	// lbz r11,129(r29)
	ctx.r11.u64 = REX_LOAD_U8(r29.u32 + 129);
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// lis r7,1536
	ctx.r7.s64 = 100663296;
	// lis r6,3840
	ctx.r6.s64 = 251658240;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r5,3840
	ctx.r5.s64 = 251658240;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r8,r8,177
	ctx.r8.u64 = ctx.r8.u64 | 177;
	// ori r7,r7,1
	ctx.r7.u64 = ctx.r7.u64 | 1;
	// ori r6,r6,62
	ctx.r6.u64 = ctx.r6.u64 | 62;
	// beq 0x82193fa8
	if (ctx.cr0.eq) goto loc_82193FA8;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// b 0x82193fac
	goto loc_82193FAC;
loc_82193FA8:
	// ori r5,r5,59
	ctx.r5.u64 = ctx.r5.u64 | 59;
loc_82193FAC:
	// bl 0x82191f50
	ctx.lr = 0x82193FB0;
	sub_82191F50(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lbz r9,164(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 164);
	// mulli r10,r4,136
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(136));
	// addi r28,r11,13128
	r28.s64 = ctx.r11.s64 + 13128;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r30,r10,r28
	r30.u64 = ctx.r10.u64 + r28.u64;
	// beq 0x82193fdc
	if (ctx.cr0.eq) goto loc_82193FDC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82193fe8
	if (ctx.cr0.eq) goto loc_82193FE8;
loc_82193FDC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821886a0
	ctx.lr = 0x82193FE4;
	sub_821886A0(ctx, base);
	// stb r27,164(r31)
	REX_STORE_U8(r31.u32 + 164, r27.u8);
loc_82193FE8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lis r31,-32169
	r31.s64 = -2108227584;
	// andi. r11,r11,16416
	ctx.r11.u64 = ctx.r11.u64 & 16416;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8219401c
	if (ctx.cr0.eq) goto loc_8219401C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212bc38
	ctx.lr = 0x8219400C;
	sub_8212BC38(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82188648
	ctx.lr = 0x82194014;
	sub_82188648(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,30856(r31)
	REX_STORE_U16(r31.u32 + 30856, ctx.r11.u16);
loc_8219401C:
	// lbz r11,1888(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 1888);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82194038
	if (ctx.cr0.eq) goto loc_82194038;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82188648
	ctx.lr = 0x82194030;
	sub_82188648(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// sth r11,30856(r31)
	REX_STORE_U16(r31.u32 + 30856, ctx.r11.u16);
loc_82194038:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82199A70) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r3)
	REX_STORE_U8(ctx.r3.u32 + 96, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82199A88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r4,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r4.u8);
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stb r4,76(r11)
	REX_STORE_U8(ctx.r11.u32 + 76, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219A028) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r5,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// b 0x82199cf0
	sub_82199CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219A7A8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219B290) {
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
	// li r3,27
	ctx.r3.s64 = 27;
	// bl 0x82100768
	ctx.lr = 0x8219B2B0;
	sub_82100768(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219b2d8
	if (ctx.cr0.eq) goto loc_8219B2D8;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219b2d8
	if (ctx.cr6.eq) goto loc_8219B2D8;
	// lwz r3,232(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 232);
	// bl 0x82101d68
	ctx.lr = 0x8219B2D0;
	sub_82101D68(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
loc_8219B2D8:
	// cmpwi cr6,r30,256
	ctx.cr6.compare<int32_t>(r30.s32, 256, ctx.xer);
	// bne cr6,0x8219b2e8
	if (!ctx.cr6.eq) goto loc_8219B2E8;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,36(r31)
	REX_STORE_U8(r31.u32 + 36, ctx.r11.u8);
loc_8219B2E8:
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

DEFINE_REX_FUNC(sub_8219BFF8) {
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
	ctx.lr = 0x8219C000;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r29,0
	r29.s64 = 0;
	// addi r30,r11,-32480
	r30.s64 = ctx.r11.s64 + -32480;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// lwz r11,-32480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32480);
	// addi r10,r10,-8304
	ctx.r10.s64 = ctx.r10.s64 + -8304;
	// stw r29,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, r29.u32);
	// lwz r31,12(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 12);
	// addi r5,r31,12
	ctx.r5.s64 = r31.s64 + 12;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// mulli r4,r11,176
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(176));
	// stw r4,232(r31)
	REX_STORE_U32(r31.u32 + 232, ctx.r4.u32);
	// lwz r3,496(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 496);
	// lwz r28,204(r31)
	r28.u64 = REX_LOAD_U32(r31.u32 + 204);
	// bl 0x82190558
	ctx.lr = 0x8219C040;
	sub_82190558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219c058
	if (!ctx.cr0.eq) goto loc_8219C058;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// b 0x8219c0cc
	goto loc_8219C0CC;
loc_8219C058:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// sth r29,8(r31)
	REX_STORE_U16(r31.u32 + 8, r29.u16);
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x1;
	// lwz r9,196(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 196);
	// addi r11,r11,30520
	ctx.r11.s64 = ctx.r11.s64 + 30520;
	// stb r10,10(r31)
	REX_STORE_U8(r31.u32 + 10, ctx.r10.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stb r10,11(r31)
	REX_STORE_U8(r31.u32 + 11, ctx.r10.u8);
	// lhz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r9.u32 + 4);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,24(r31)
	REX_STORE_U8(r31.u32 + 24, ctx.r11.u8);
	// cmplwi cr6,r11,33
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 33, ctx.xer);
	// bne cr6,0x8219c0a4
	if (!ctx.cr6.eq) goto loc_8219C0A4;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// b 0x8219c0ac
	goto loc_8219C0AC;
loc_8219C0A4:
	// li r11,2
	ctx.r11.s64 = 2;
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_8219C0AC:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// stb r29,26(r31)
	REX_STORE_U8(r31.u32 + 26, r29.u8);
	// stb r29,25(r31)
	REX_STORE_U8(r31.u32 + 25, r29.u8);
	// stb r29,29(r31)
	REX_STORE_U8(r31.u32 + 29, r29.u8);
	// lfs f0,160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 224, temp.u32);
	// lfs f0,164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 164);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,228(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 228, temp.u32);
loc_8219C0CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821A0330) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e60
	ctx.lr = 0x821A0338;
	// stfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -144, f29.u64);
	// stfd f30,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,76(r3)
	r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r31,12(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r18,0
	r18.s64 = 0;
	// lwz r25,52(r3)
	r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r28,4(r22)
	r28.u64 = REX_LOAD_U32(r22.u32 + 4);
	// lwz r27,56(r22)
	r27.u64 = REX_LOAD_U32(r22.u32 + 56);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x821a05d8
	if (ctx.cr6.eq) goto loc_821A05D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r10,-32174
	ctx.r10.s64 = -2108555264;
	// lis r9,-32174
	ctx.r9.s64 = -2108555264;
	// lis r8,-32174
	ctx.r8.s64 = -2108555264;
	// lfs f29,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f29.f64 = double(temp.f32);
	// lis r7,-32174
	ctx.r7.s64 = -2108555264;
	// lis r11,-32174
	ctx.r11.s64 = -2108555264;
	// lfs f30,1996(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1996);
	f30.f64 = double(temp.f32);
	// addi r21,r10,27936
	r21.s64 = ctx.r10.s64 + 27936;
	// addi r20,r9,28576
	r20.s64 = ctx.r9.s64 + 28576;
	// addi r24,r8,23880
	r24.s64 = ctx.r8.s64 + 23880;
	// addi r23,r7,14984
	r23.s64 = ctx.r7.s64 + 14984;
	// addi r19,r11,11804
	r19.s64 = ctx.r11.s64 + 11804;
loc_821A03A4:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(r28.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821a03c8
	if (ctx.cr0.eq) goto loc_821A03C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// sth r11,16(r28)
	REX_STORE_U16(r28.u32 + 16, ctx.r11.u16);
	// bl 0x8219cef8
	ctx.lr = 0x821A03C0;
	sub_8219CEF8(ctx, base);
	// sth r3,268(r28)
	REX_STORE_U16(r28.u32 + 268, ctx.r3.u16);
	// b 0x821a05cc
	goto loc_821A05CC;
loc_821A03C8:
	// lwz r25,52(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 52);
	// addi r8,r28,60
	ctx.r8.s64 = r28.s64 + 60;
	// lwz r7,24(r22)
	ctx.r7.u64 = REX_LOAD_U32(r22.u32 + 24);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a0490
	if (ctx.cr6.eq) goto loc_821A0490;
	// lwz r10,92(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 92);
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a0404
	if (ctx.cr6.eq) goto loc_821A0404;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_821A0404:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bge cr6,0x821a0410
	if (!ctx.cr6.lt) goto loc_821A0410;
	// fmr f0,f30
	ctx.f0.f64 = f30.f64;
loc_821A0410:
	// lhz r10,268(r28)
	ctx.r10.u64 = REX_LOAD_U16(r28.u32 + 268);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// lhz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r9,10(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
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
	// lhz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,6,10,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3FFFC0;
	// lfsux f0,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 64, temp.u32);
	// lfs f0,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
	// lfs f0,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 128, temp.u32);
	// lfs f0,36(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 132, temp.u32);
	// lfs f0,48(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 192, temp.u32);
	// lfs f0,52(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 196, temp.u32);
loc_821A0490:
	// lwz r11,108(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 108);
	// lfs f0,8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a04b4
	if (ctx.cr6.eq) goto loc_821A04B4;
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
loc_821A04B4:
	// lwz r11,32(r22)
	ctx.r11.u64 = REX_LOAD_U32(r22.u32 + 32);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a04cc
	if (ctx.cr0.eq) goto loc_821A04CC;
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// ble cr6,0x821a04cc
	if (!ctx.cr6.gt) goto loc_821A04CC;
	// fmr f0,f29
	ctx.f0.f64 = f29.f64;
loc_821A04CC:
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 56);
	// lfs f13,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,236(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 236, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 44, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 108, temp.u32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 172, temp.u32);
	// lha r9,18(r28)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(r28.u32 + 18));
	// cmpwi cr6,r9,23
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 23, ctx.xer);
	// blt cr6,0x821a0548
	if (ctx.cr6.lt) goto loc_821A0548;
	// lha r10,92(r27)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r27.u32 + 92));
	// addi r11,r9,-23
	ctx.r11.s64 = ctx.r9.s64 + -23;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x821a0510
	if (!ctx.cr6.eq) goto loc_821A0510;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + r19.u32);
	// b 0x821a051c
	goto loc_821A051C;
loc_821A0510:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821a051c
	if (ctx.cr6.lt) goto loc_821A051C;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A051C:
	// mulli r10,r10,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(5));
	// lha r8,142(r27)
	ctx.r8.s64 = int16_t(REX_LOAD_U16(r27.u32 + 142));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r11,r24
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + r24.u32));
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r30,r11,r23
	r30.u64 = ctx.r11.u64 + r23.u64;
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// b 0x821a0570
	goto loc_821A0570;
loc_821A0548:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r30,r11,r20
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + r20.u32);
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 12);
	f31.f64 = double(temp.f32);
	// bne cr6,0x821a0564
	if (!ctx.cr6.eq) goto loc_821A0564;
	// li r9,64
	ctx.r9.s64 = 64;
	// b 0x821a0570
	goto loc_821A0570;
loc_821A0564:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821a0570
	if (!ctx.cr6.eq) goto loc_821A0570;
	// li r9,72
	ctx.r9.s64 = 72;
loc_821A0570:
	// lwz r11,10148(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 10148);
	// rlwinm r10,r9,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r29,r11,r10
	r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x820e1df8
	ctx.lr = 0x821A058C;
	sub_820E1DF8(ctx, base);
	// addi r5,r30,16
	ctx.r5.s64 = r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x820e1df8
	ctx.lr = 0x821A059C;
	sub_820E1DF8(ctx, base);
	// lha r11,88(r27)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r27.u32 + 88));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfsx f0,r11,r21
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + r21.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * f31.f64));
	// bl 0x821a00c0
	ctx.lr = 0x821A05BC;
	sub_821A00C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821a05cc
	if (!ctx.cr0.eq) goto loc_821A05CC;
	// addi r31,r31,256
	r31.s64 = r31.s64 + 256;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
loc_821A05CC:
	// lwz r28,4(r28)
	r28.u64 = REX_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// bne cr6,0x821a03a4
	if (!ctx.cr6.eq) goto loc_821A03A4;
loc_821A05D8:
	// rlwinm r11,r18,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFC;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(r18.s32, 0, ctx.xer);
	// sth r11,8(r26)
	REX_STORE_U16(r26.u32 + 8, ctx.r11.u16);
	// beq cr6,0x821a05f0
	if (ctx.cr6.eq) goto loc_821A05F0;
	// lbz r3,24(r26)
	ctx.r3.u64 = REX_LOAD_U8(r26.u32 + 24);
	// bl 0x8218c0a8
	ctx.lr = 0x821A05F0;
	sub_8218C0A8(ctx, base);
loc_821A05F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-144(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// lfd f30,-136(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x822d4eb0
	return;
}

DEFINE_REX_FUNC(sub_821AB898) {
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
	ctx.lr = 0x821AB8B0;
	sub_82187B58(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 120);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821ab9d4
	if (ctx.cr6.lt) goto loc_821AB9D4;
	// beq cr6,0x821ab9cc
	if (ctx.cr6.eq) goto loc_821AB9CC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821aba0c
	if (ctx.cr6.lt) goto loc_821ABA0C;
	// beq cr6,0x821ab9bc
	if (ctx.cr6.eq) goto loc_821AB9BC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x821ab950
	if (ctx.cr6.lt) goto loc_821AB950;
	// beq cr6,0x821ab904
	if (ctx.cr6.eq) goto loc_821AB904;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bge cr6,0x821aba14
	if (!ctx.cr6.lt) goto loc_821ABA14;
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// lwz r11,144(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821aba14
	if (!ctx.cr6.eq) goto loc_821ABA14;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// b 0x821aba14
	goto loc_821ABA14;
loc_821AB904:
	// bl 0x821a9ce0
	ctx.lr = 0x821AB908;
	sub_821A9CE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821aba14
	if (!ctx.cr0.eq) goto loc_821ABA14;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r9,r11,432
	ctx.r9.s64 = ctx.r11.s64 + 432;
	// addi r11,r10,13128
	ctx.r11.s64 = ctx.r10.s64 + 13128;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,2980(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2980);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821aba14
	if (ctx.cr0.eq) goto loc_821ABA14;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,84(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 84);
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
	// lwz r3,140(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 140);
	// bl 0x82101d68
	ctx.lr = 0x821AB94C;
	sub_82101D68(ctx, base);
	// b 0x821aba14
	goto loc_821ABA14;
loc_821AB950:
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r6,r10,-12792
	ctx.r6.s64 = ctx.r10.s64 + -12792;
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
	ctx.lr = 0x821AB978;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ab9ac
	if (ctx.cr0.eq) goto loc_821AB9AC;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lwz r5,88(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r10,r10,13128
	ctx.r10.s64 = ctx.r10.s64 + 13128;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,2980(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2980);
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82192960
	ctx.lr = 0x821AB9A8;
	sub_82192960(ctx, base);
	// b 0x821ab9b0
	goto loc_821AB9B0;
loc_821AB9AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AB9B0:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r3,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// b 0x821aba10
	goto loc_821ABA10;
loc_821AB9BC:
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,-11708(r10)
	REX_STORE_U8(ctx.r10.u32 + -11708, ctx.r11.u8);
	// b 0x821aba14
	goto loc_821ABA14;
loc_821AB9CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821aba10
	goto loc_821ABA10;
loc_821AB9D4:
	// lis r11,-32169
	ctx.r11.s64 = -2108227584;
	// addi r11,r11,31868
	ctx.r11.s64 = ctx.r11.s64 + 31868;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821aba0c
	if (ctx.cr6.eq) goto loc_821ABA0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// stw r9,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r9.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U8(r31.u32 + 92);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x82188810
	ctx.lr = 0x821ABA08;
	sub_82188810(ctx, base);
	// b 0x821aba14
	goto loc_821ABA14;
loc_821ABA0C:
	// li r11,3
	ctx.r11.s64 = 3;
loc_821ABA10:
	// stw r11,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r11.u32);
loc_821ABA14:
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

DEFINE_REX_FUNC(sub_821B4478) {
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
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821B449C;
	sub_821D6210(ctx, base);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,-7176
	ctx.r11.s64 = ctx.r11.s64 + -7176;
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r11,88
	ctx.r4.s64 = ctx.r11.s64 + 88;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// stw r10,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r9.u32);
	// addi r3,r8,-4224
	ctx.r3.s64 = ctx.r8.s64 + -4224;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bl 0x82115ef8
	ctx.lr = 0x821B44DC;
	sub_82115EF8(ctx, base);
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

DEFINE_REX_FUNC(sub_821BA3F8) {
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
	ctx.lr = 0x821BA400;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f38
	ctx.lr = 0x821BA408;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32168
	ctx.r10.s64 = -2108162048;
	// addi r31,r11,432
	r31.s64 = ctx.r11.s64 + 432;
	// lis r11,-32165
	ctx.r11.s64 = -2107965440;
	// li r24,0
	r24.s64 = 0;
	// addi r25,r11,13128
	r25.s64 = ctx.r11.s64 + 13128;
	// lis r23,-32173
	r23.s64 = -2108489728;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// addi r28,r10,-7072
	r28.s64 = ctx.r10.s64 + -7072;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ba570
	if (!ctx.cr6.eq) goto loc_821BA570;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// lfs f2,16688(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16688);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,2024(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2024);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8212f220
	ctx.lr = 0x821BA454;
	sub_8212F220(ctx, base);
	// bl 0x8212bfb8
	ctx.lr = 0x821BA458;
	sub_8212BFB8(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,876(r31)
	REX_STORE_U32(r31.u32 + 876, r24.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r24,884(r31)
	REX_STORE_U32(r31.u32 + 884, r24.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r24,880(r31)
	REX_STORE_U32(r31.u32 + 880, r24.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// lwz r11,496(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 496);
	// sth r11,34(r31)
	REX_STORE_U16(r31.u32 + 34, ctx.r11.u16);
	// bl 0x821b78b0
	ctx.lr = 0x821BA480;
	sub_821B78B0(ctx, base);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ba494
	if (!ctx.cr6.eq) goto loc_821BA494;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,884(r31)
	REX_STORE_U32(r31.u32 + 884, ctx.r11.u32);
loc_821BA494:
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r24,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, r24.u32);
	// sth r24,308(r31)
	REX_STORE_U16(r31.u32 + 308, r24.u16);
	// bl 0x8218e510
	ctx.lr = 0x821BA4B4;
	sub_8218E510(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218e510
	ctx.lr = 0x821BA4BC;
	sub_8218E510(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8218e510
	ctx.lr = 0x821BA4C8;
	sub_8218E510(ctx, base);
	// lwz r11,84(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ba4f4
	if (!ctx.cr6.eq) goto loc_821BA4F4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BA4DC;
	sub_821AFEF0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8212e440
	ctx.lr = 0x821BA4EC;
	sub_8212E440(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,84(r28)
	REX_STORE_U32(r28.u32 + 84, ctx.r11.u32);
loc_821BA4F4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3780
	ctx.r11.u64 = ctx.r11.u64 | 3780;
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ba534
	if (!ctx.cr6.eq) goto loc_821BA534;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821afef0
	ctx.lr = 0x821BA510;
	sub_821AFEF0(ctx, base);
	// addis r11,r28,1
	ctx.r11.s64 = r28.s64 + 65536;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,3696
	ctx.r3.s64 = ctx.r11.s64 + 3696;
	// bl 0x8212e440
	ctx.lr = 0x821BA524;
	sub_8212E440(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r11,-1
	ctx.r11.s64 = -1;
	// ori r10,r10,3780
	ctx.r10.u64 = ctx.r10.u64 | 3780;
	// stwx r11,r28,r10
	REX_STORE_U32(r28.u32 + ctx.r10.u32, ctx.r11.u32);
loc_821BA534:
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821d6210
	ctx.lr = 0x821BA540;
	sub_821D6210(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,504(r23)
	ctx.r11.u64 = REX_LOAD_U32(r23.u32 + 504);
	// lfs f0,15628(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 15628);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,48(r31)
	REX_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,892(r31)
	REX_STORE_U32(r31.u32 + 892, ctx.r10.u32);
	// stw r24,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, r24.u32);
loc_821BA570:
	// lwz r10,884(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 884);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x821ba5b0
	if (ctx.cr6.gt) goto loc_821BA5B0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + r28.u64;
loc_821BA590:
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821ba5c8
	if (!ctx.cr6.eq) goto loc_821BA5C8;
	// addis r9,r28,1
	ctx.r9.s64 = r28.s64 + 65536;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,3696
	ctx.r9.s64 = ctx.r9.s64 + 3696;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x821ba590
	if (!ctx.cr6.gt) goto loc_821BA590;
loc_821BA5B0:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_821BA5B4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x821ba5d0
	if (!ctx.cr6.eq) goto loc_821BA5D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r11.u32);
	// b 0x821ba5d4
	goto loc_821BA5D4;
loc_821BA5C8:
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
	// b 0x821ba5b4
	goto loc_821BA5B4;
loc_821BA5D0:
	// lwz r11,876(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 876);
loc_821BA5D4:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r10,-32170
	ctx.r10.s64 = -2108293120;
	// lis r9,-32168
	ctx.r9.s64 = -2108162048;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f31,1996(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 1996);
	f31.f64 = double(temp.f32);
	// addi r29,r10,-28232
	r29.s64 = ctx.r10.s64 + -28232;
	// lfs f28,16788(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16788);
	f28.f64 = double(temp.f32);
	// addi r26,r9,-8304
	r26.s64 = ctx.r9.s64 + -8304;
	// blt cr6,0x821ba614
	if (ctx.cr6.lt) goto loc_821BA614;
	// beq cr6,0x821ba6c4
	if (ctx.cr6.eq) goto loc_821BA6C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x821ba824
	if (!ctx.cr6.lt) goto loc_821BA824;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 48);
	// stw r11,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r11.u32);
	// b 0x821ba824
	goto loc_821BA824;
loc_821BA614:
	// lwz r3,828(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 828);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x821eb660
	ctx.lr = 0x821BA620;
	sub_821EB660(ctx, base);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,880(r31)
	REX_STORE_U32(r31.u32 + 880, r24.u32);
	// bl 0x821b0d38
	ctx.lr = 0x821BA62C;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne 0x821ba660
	if (!ctx.cr0.eq) goto loc_821BA660;
	// bl 0x821c9e88
	ctx.lr = 0x821BA648;
	sub_821C9E88(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9e88
	ctx.lr = 0x821BA65C;
	sub_821C9E88(ctx, base);
	// b 0x821ba698
	goto loc_821BA698;
loc_821BA660:
	// bl 0x821c9e88
	ctx.lr = 0x821BA664;
	sub_821C9E88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e510
	ctx.lr = 0x821BA66C;
	sub_8218E510(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8218e1b0
	ctx.lr = 0x821BA674;
	sub_8218E1B0(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,-1
	ctx.r5.s64 = -1;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821c9e88
	ctx.lr = 0x821BA688;
	sub_821C9E88(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8218e510
	ctx.lr = 0x821BA690;
	sub_8218E510(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 8);
	// bl 0x8218e1b0
	ctx.lr = 0x821BA698;
	sub_8218E1B0(ctx, base);
loc_821BA698:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,876(r31)
	REX_STORE_U32(r31.u32 + 876, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821cd2a8
	ctx.lr = 0x821BA6AC;
	sub_821CD2A8(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x821b25c8
	ctx.lr = 0x821BA6BC;
	sub_821B25C8(ctx, base);
	// stfs f31,7216(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 7216, temp.u32);
	// stfs f31,7208(r30)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r30.u32 + 7208, temp.u32);
loc_821BA6C4:
	// lhz r11,30(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 30);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x821ba6ec
	if (!ctx.cr6.eq) goto loc_821BA6EC;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ba6e4
	if (!ctx.cr6.eq) goto loc_821BA6E4;
	// bl 0x82141218
	ctx.lr = 0x821BA6E0;
	sub_82141218(ctx, base);
	// b 0x821ba700
	goto loc_821BA700;
loc_821BA6E4:
	// bl 0x82141230
	ctx.lr = 0x821BA6E8;
	sub_82141230(ctx, base);
	// b 0x821ba700
	goto loc_821BA700;
loc_821BA6EC:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821ba700
	if (ctx.cr6.eq) goto loc_821BA700;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b3ea8
	ctx.lr = 0x821BA700;
	sub_821B3EA8(ctx, base);
loc_821BA700:
	// lwz r11,880(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 880);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ba7d4
	if (!ctx.cr6.eq) goto loc_821BA7D4;
	// bl 0x821b0d38
	ctx.lr = 0x821BA710;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821ba744
	if (!ctx.cr0.eq) goto loc_821BA744;
	// lbz r11,222(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 222);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821ba72c
	if (ctx.cr0.eq) goto loc_821BA72C;
	// li r6,1
	ctx.r6.s64 = 1;
loc_821BA72C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x820f1090
	ctx.lr = 0x821BA740;
	sub_820F1090(ctx, base);
	// b 0x821ba7d4
	goto loc_821BA7D4;
loc_821BA744:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// lfs f2,-8492(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -8492);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x820f3460
	ctx.lr = 0x821BA764;
	sub_820F3460(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x820f2e70
	ctx.lr = 0x821BA774;
	sub_820F2E70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA78C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lfs f1,10176(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10176);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822006f8
	ctx.lr = 0x821BA79C;
	sub_822006F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82200708
	ctx.lr = 0x821BA7A8;
	sub_82200708(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,2008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200818
	ctx.lr = 0x821BA7B8;
	sub_82200818(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82200ad0
	ctx.lr = 0x821BA7C0;
	sub_82200AD0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f1,2000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82200ac8
	ctx.lr = 0x821BA7D0;
	sub_82200AC8(ctx, base);
	// stfs f31,888(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 888, temp.u32);
loc_821BA7D4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,1840(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r25.u32 + 1840);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,880(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 880);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfs f0,27892(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27892);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,880(r31)
	REX_STORE_U32(r31.u32 + 880, ctx.r11.u32);
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821ba824
	if (ctx.cr6.lt) goto loc_821BA824;
	// lwz r11,884(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 884);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r24,84(r30)
	REX_STORE_U32(r30.u32 + 84, r24.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r24,876(r31)
	REX_STORE_U32(r31.u32 + 876, r24.u32);
	// stw r24,880(r31)
	REX_STORE_U32(r31.u32 + 880, r24.u32);
	// stw r11,884(r31)
	REX_STORE_U32(r31.u32 + 884, ctx.r11.u32);
loc_821BA824:
	// bl 0x821b0d38
	ctx.lr = 0x821BA828;
	sub_821B0D38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821ba938
	if (ctx.cr0.eq) goto loc_821BA938;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x821ba938
	if (ctx.cr6.eq) goto loc_821BA938;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821BA850;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f12,888(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 888);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lfs f0,10172(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10172);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f31,16308(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16308);
	f31.f64 = double(temp.f32);
	// lfs f13,10168(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10168);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821ba884
	if (ctx.cr6.lt) goto loc_821BA884;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821BA884:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(r30.u32 + 0);
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,888(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 888, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821ba8ac
	if (!ctx.cr0.eq) goto loc_821BA8AC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,10164(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10164);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x821ba8b8
	goto loc_821BA8B8;
loc_821BA8AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,16708(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16708);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_821BA8B8:
	// bl 0x82200700
	ctx.lr = 0x821BA8BC;
	sub_82200700(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822009c8
	ctx.lr = 0x821BA8C4;
	sub_822009C8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,10160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 10160);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lfs f0,2384(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2384);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,10156(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 10156);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x821ba8f0
	if (ctx.cr6.lt) goto loc_821BA8F0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_821BA8F0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82200720
	ctx.lr = 0x821BA8FC;
	sub_82200720(ctx, base);
	// lhz r11,90(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 90);
	// lfs f3,10540(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10540);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// lfs f1,10532(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 10532);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x821ba92c
	if (!ctx.cr6.eq) goto loc_821BA92C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f2,16204(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16204);
	ctx.f2.f64 = double(temp.f32);
	// b 0x821ba934
	goto loc_821BA934;
loc_821BA92C:
	// lfs f0,10536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r30.u32 + 10536);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f0,f31
	ctx.f2.f64 = double(float(ctx.f0.f64 + f31.f64));
loc_821BA934:
	// bctrl 
	ctx.lr = 0x821BA938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821BA938:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821bac6c
	if (!ctx.cr6.eq) goto loc_821BAC6C;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lbz r7,6(r28)
	ctx.r7.u64 = REX_LOAD_U8(r28.u32 + 6);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lis r11,-32168
	ctx.r11.s64 = -2108162048;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lfs f29,9948(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 9948);
	f29.f64 = double(temp.f32);
	// addi r27,r11,-9912
	r27.s64 = ctx.r11.s64 + -9912;
	// lfs f30,15632(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 15632);
	f30.f64 = double(temp.f32);
	// addi r29,r10,9936
	r29.s64 = ctx.r10.s64 + 9936;
	// bne 0x821baa88
	if (!ctx.cr0.eq) goto loc_821BAA88;
	// bl 0x821159c8
	ctx.lr = 0x821BA978;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821baa88
	if (!ctx.cr0.eq) goto loc_821BAA88;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821baa88
	if (ctx.cr6.lt) goto loc_821BAA88;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x821baa88
	if (!ctx.cr6.lt) goto loc_821BAA88;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821ba9b0
	if (!ctx.cr6.eq) goto loc_821BA9B0;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821baa88
	if (!ctx.cr6.eq) goto loc_821BAA88;
loc_821BA9B0:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821baa88
	if (!ctx.cr6.eq) goto loc_821BAA88;
	// lbz r11,6(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 6);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821baa88
	if (!ctx.cr0.eq) goto loc_821BAA88;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821baa00
	if (!ctx.cr6.eq) goto loc_821BAA00;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821baa00
	if (ctx.cr0.eq) goto loc_821BAA00;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821baa00
	if (ctx.cr0.eq) goto loc_821BAA00;
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 0);
	// lbz r10,27(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 27);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821baa88
	if (ctx.cr6.eq) goto loc_821BAA88;
loc_821BAA00:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821baa6c
	if (!ctx.cr6.eq) goto loc_821BAA6C;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821baa6c
	if (ctx.cr0.eq) goto loc_821BAA6C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821baa2c
	if (!ctx.cr6.eq) goto loc_821BAA2C;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BAA2C:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BAA3C;
	sub_820E68B8(ctx, base);
	// stfs f30,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// stfs f31,28(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// bl 0x821eaf80
	ctx.lr = 0x821BAA64;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_821BAA6C:
	// lbz r11,2(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 2);
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
	// bne 0x821babcc
	if (!ctx.cr0.eq) goto loc_821BABCC;
loc_821BAA88:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r30,48(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 48);
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821babe8
	if (!ctx.cr0.eq) goto loc_821BABE8;
	// bl 0x821159c8
	ctx.lr = 0x821BAAA4;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821babe8
	if (!ctx.cr0.eq) goto loc_821BABE8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821babe8
	if (ctx.cr6.lt) goto loc_821BABE8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r30.s32, ctx.xer);
	// bge cr6,0x821babe8
	if (!ctx.cr6.lt) goto loc_821BABE8;
	// lha r10,30(r31)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r31.u32 + 30));
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x821baadc
	if (!ctx.cr6.eq) goto loc_821BAADC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x821babe8
	if (!ctx.cr6.eq) goto loc_821BABE8;
loc_821BAADC:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821babe8
	if (!ctx.cr6.eq) goto loc_821BABE8;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,3702
	ctx.r11.u64 = ctx.r11.u64 | 3702;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821babe8
	if (!ctx.cr0.eq) goto loc_821BABE8;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// bne cr6,0x821bab3c
	if (!ctx.cr6.eq) goto loc_821BAB3C;
	// lbz r11,18(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bab3c
	if (ctx.cr0.eq) goto loc_821BAB3C;
	// lbz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 14);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bab3c
	if (ctx.cr0.eq) goto loc_821BAB3C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lbz r11,27(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 27);
	// ori r10,r10,3696
	ctx.r10.u64 = ctx.r10.u64 | 3696;
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// lbzx r11,r28,r10
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x821babe8
	if (ctx.cr6.eq) goto loc_821BABE8;
loc_821BAB3C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821baba8
	if (!ctx.cr6.eq) goto loc_821BABA8;
	// lwz r11,1852(r25)
	ctx.r11.u64 = REX_LOAD_U32(r25.u32 + 1852);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821baba8
	if (ctx.cr0.eq) goto loc_821BABA8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x821bab68
	if (!ctx.cr6.eq) goto loc_821BAB68;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_821BAB68:
	// lis r3,1792
	ctx.r3.s64 = 117440512;
	// lwz r4,344(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 344);
	// ori r3,r3,147
	ctx.r3.u64 = ctx.r3.u64 | 147;
	// bl 0x820e68b8
	ctx.lr = 0x821BAB78;
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
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// li r6,-1
	ctx.r6.s64 = -1;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// bl 0x821eaf80
	ctx.lr = 0x821BABA0;
	sub_821EAF80(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	REX_STORE_U32(r27.u32 + 0, ctx.r11.u32);
loc_821BABA8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// ori r11,r11,3698
	ctx.r11.u64 = ctx.r11.u64 | 3698;
	// lbzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + ctx.r11.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mulli r11,r11,136
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(136));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821babe8
	if (ctx.cr0.eq) goto loc_821BABE8;
loc_821BABCC:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r30,44(r31)
	REX_STORE_U32(r31.u32 + 44, r30.u32);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
	// stw r24,84(r28)
	REX_STORE_U32(r28.u32 + 84, r24.u32);
	// ori r9,r10,3780
	ctx.r9.u64 = ctx.r10.u64 | 3780;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stwx r24,r28,r9
	REX_STORE_U32(r28.u32 + ctx.r9.u32, r24.u32);
loc_821BABE8:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 44);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821bac6c
	if (ctx.cr6.lt) goto loc_821BAC6C;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 40);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r10,40(r31)
	REX_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r9.u32);
	// stw r8,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r8.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// bl 0x821159c8
	ctx.lr = 0x821BAC1C;
	sub_821159C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821bac30
	if (!ctx.cr0.eq) goto loc_821BAC30;
	// lwz r3,828(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 828);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// bl 0x821eb660
	ctx.lr = 0x821BAC30;
	sub_821EB660(ctx, base);
loc_821BAC30:
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 10);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821bac58
	if (ctx.cr0.eq) goto loc_821BAC58;
	// lwz r11,88(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bac58
	if (ctx.cr6.eq) goto loc_821BAC58;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,88(r27)
	REX_STORE_U32(r27.u32 + 88, r24.u32);
	// sth r10,40(r11)
	REX_STORE_U16(ctx.r11.u32 + 40, ctx.r10.u16);
	// mr r11,r24
	ctx.r11.u64 = r24.u64;
loc_821BAC58:
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 892);
	// lwz r10,504(r23)
	ctx.r10.u64 = REX_LOAD_U32(r23.u32 + 504);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,92(r10)
	REX_STORE_U32(ctx.r10.u32 + 92, ctx.r11.u32);
loc_821BAC6C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x822d4f84
	ctx.lr = 0x821BAC7C;
	// b 0x822d4ec4
	return;
}

DEFINE_REX_FUNC(sub_821DBF00) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e70
	ctx.lr = 0x821DBF08;
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16468);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r27,8(r3)
	r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r31,r3,16472
	r31.s64 = ctx.r3.s64 + 16472;
	// li r25,-1
	r25.s64 = -1;
	// li r26,-1
	r26.s64 = -1;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dc02c
	if (!ctx.cr6.gt) goto loc_821DC02C;
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// addi r22,r27,16472
	r22.s64 = r27.s64 + 16472;
	// addi r23,r11,432
	r23.s64 = ctx.r11.s64 + 432;
loc_821DBF40:
	// lwz r11,16468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16468);
	// mr r30,r22
	r30.u64 = r22.u64;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x821dbfdc
	if (!ctx.cr6.gt) goto loc_821DBFDC;
loc_821DBF54:
	// lha r11,0(r31)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// lha r10,0(r30)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(r30.u32 + 0));
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821dbfc8
	if (!ctx.cr6.eq) goto loc_821DBFC8;
	// lhz r10,2(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821dbfc8
	if (!ctx.cr6.eq) goto loc_821DBFC8;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r25.s32, ctx.xer);
	// bne cr6,0x821dbf84
	if (!ctx.cr6.eq) goto loc_821DBF84;
	// sth r26,2(r31)
	REX_STORE_U16(r31.u32 + 2, r26.u16);
	// b 0x821dbfc8
	goto loc_821DBFC8;
loc_821DBF84:
	// lha r3,0(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// bl 0x821c8d20
	ctx.lr = 0x821DBF8C;
	sub_821C8D20(ctx, base);
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(ctx.f0.f64));
	// bl 0x821fedc8
	ctx.lr = 0x821DBFA4;
	sub_821FEDC8(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// sth r11,2(r31)
	REX_STORE_U16(r31.u32 + 2, ctx.r11.u16);
	// lhz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 2);
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 2);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821dbf84
	if (ctx.cr6.eq) goto loc_821DBF84;
loc_821DBFC8:
	// lwz r11,16468(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 16468);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dbf54
	if (ctx.cr6.lt) goto loc_821DBF54;
loc_821DBFDC:
	// lha r3,0(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// lhz r10,10(r23)
	ctx.r10.u64 = REX_LOAD_U16(r23.u32 + 10);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lha r26,2(r31)
	r26.s64 = int16_t(REX_LOAD_U16(r31.u32 + 2));
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821dc018
	if (!ctx.cr0.eq) goto loc_821DC018;
	// bl 0x821c8138
	ctx.lr = 0x821DBFF8;
	sub_821C8138(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821dc00c
	if (ctx.cr0.eq) goto loc_821DC00C;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r11.u16);
	// b 0x821dc018
	goto loc_821DC018;
loc_821DC00C:
	// lha r3,0(r31)
	ctx.r3.s64 = int16_t(REX_LOAD_U16(r31.u32 + 0));
	// bl 0x821dad10
	ctx.lr = 0x821DC014;
	sub_821DAD10(ctx, base);
	// sth r3,4(r31)
	REX_STORE_U16(r31.u32 + 4, ctx.r3.u16);
loc_821DC018:
	// lwz r11,16468(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 16468);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x821dbf40
	if (ctx.cr6.lt) goto loc_821DBF40;
loc_821DC02C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x822d4ec0
	return;
}

DEFINE_REX_FUNC(sub_821E0FD8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// addi r3,r11,26556
	ctx.r3.s64 = ctx.r11.s64 + 26556;
	// bl 0x821eacb0
	ctx.lr = 0x821E1008;
	sub_821EACB0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,15968(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 15968);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820e6950
	ctx.lr = 0x821E1014;
	sub_820E6950(ctx, base);
	// lis r11,-32166
	ctx.r11.s64 = -2108030976;
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// addi r10,r10,-5416
	ctx.r10.s64 = ctx.r10.s64 + -5416;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,344(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// lwzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x820e68b8
	ctx.lr = 0x821E1034;
	sub_820E68B8(ctx, base);
	// stfs f30,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stfs f31,20(r1)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// ld r4,28(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 28);
	// ld r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 20);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x820e6e20
	ctx.lr = 0x821E1054;
	sub_820E6E20(ctx, base);
	// bl 0x820e6980
	ctx.lr = 0x821E1058;
	sub_820E6980(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_821E2910) {
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
	// bne 0x821e2950
	if (!ctx.cr0.eq) goto loc_821E2950;
	// lbz r11,2973(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 2973);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e2950
	if (!ctx.cr0.eq) goto loc_821E2950;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,40
	ctx.r11.s64 = 40;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// adde r11,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
loc_821E2950:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E3468) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,432
	ctx.r11.s64 = ctx.r11.s64 + 432;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,3396
	ctx.r11.s64 = ctx.r11.s64 + 3396;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r9,15884
	ctx.r6.s64 = ctx.r9.s64 + 15884;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stbx r5,r11,r10
	REX_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r5.u8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821f7d50
	ctx.lr = 0x821E34B8;
	sub_821F7D50(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e34c8
	if (ctx.cr0.eq) goto loc_821E34C8;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x821e33a8
	ctx.lr = 0x821E34C8;
	sub_821E33A8(ctx, base);
loc_821E34C8:
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

DEFINE_REX_FUNC(sub_821E5030) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5038) {
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
	ctx.lr = 0x821E5040;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r6,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r6.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stfs f2,116(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 116, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r5,-32226
	ctx.r5.s64 = -2111963136;
	// lfs f13,1996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f12,16088(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16088);
	ctx.f12.f64 = double(temp.f32);
	// li r9,2
	ctx.r9.s64 = 2;
	// lfs f0,1992(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r5,16008
	ctx.r6.s64 = ctx.r5.s64 + 16008;
	// addi r10,r3,112
	ctx.r10.s64 = ctx.r3.s64 + 112;
	// stfs f13,192(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// li r30,1
	r30.s64 = 1;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// li r7,770
	ctx.r7.s64 = 770;
	// stfs f12,120(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// li r29,7
	r29.s64 = 7;
	// stfs f0,124(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 124, temp.u32);
	// li r28,196
	r28.s64 = 196;
	// stfs f0,144(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// stfs f0,148(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// sth r7,16(r3)
	REX_STORE_U16(ctx.r3.u32 + 16, ctx.r7.u16);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// std r9,80(r3)
	REX_STORE_U64(ctx.r3.u32 + 80, ctx.r9.u64);
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// sth r30,88(r3)
	REX_STORE_U16(ctx.r3.u32 + 88, r30.u16);
	// stb r9,90(r3)
	REX_STORE_U8(ctx.r3.u32 + 90, ctx.r9.u8);
	// addi r4,r3,164
	ctx.r4.s64 = ctx.r3.s64 + 164;
	// stw r10,92(r3)
	REX_STORE_U32(ctx.r3.u32 + 92, ctx.r10.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// stw r11,96(r3)
	REX_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stb r29,104(r31)
	REX_STORE_U8(r31.u32 + 104, r29.u8);
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// stb r30,105(r31)
	REX_STORE_U8(r31.u32 + 105, r30.u8);
	// stb r11,106(r31)
	REX_STORE_U8(r31.u32 + 106, ctx.r11.u8);
	// stb r11,91(r31)
	REX_STORE_U8(r31.u32 + 91, ctx.r11.u8);
	// stb r11,109(r31)
	REX_STORE_U8(r31.u32 + 109, ctx.r11.u8);
	// stb r28,186(r31)
	REX_STORE_U8(r31.u32 + 186, r28.u8);
	// bl 0x821e3550
	ctx.lr = 0x821E50F8;
	sub_821E3550(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stb r30,188(r31)
	REX_STORE_U8(r31.u32 + 188, r30.u8);
	// lfs f13,16228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16228);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821E9088) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// clrlwi r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x821e90b4
	if (!ctx.cr6.eq) goto loc_821E90B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// ble cr6,0x821e90b4
	if (!ctx.cr6.gt) goto loc_821E90B4;
loc_821E90A4:
	// rldicl r11,r11,60,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 60) & 0xFFFFFFFFFFFFFFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bgt cr6,0x821e90a4
	if (ctx.cr6.gt) goto loc_821E90A4;
loc_821E90B4:
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x821e90dc
	goto loc_821E90DC;
loc_821E90C4:
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x821e90f4
	if (ctx.cr6.eq) goto loc_821E90F4;
	// clrlwi r8,r10,28
	ctx.r8.u64 = ctx.r10.u32 & 0xF;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// sradi r10,r10,4
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s64 >> 4;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
loc_821E90DC:
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bgt cr6,0x821e90c4
	if (ctx.cr6.gt) goto loc_821E90C4;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// bne cr6,0x821e9120
	if (!ctx.cr6.eq) goto loc_821E9120;
loc_821E90F4:
	// subfic r10,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_821E9114:
	// stbu r10,-1(r11)
	ea = -1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r10.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x821e9114
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E9114;
	// blr 
	return;
loc_821E9120:
	// sradi r9,r10,4
	ctx.xer.ca = (ctx.r10.s64 < 0) & ((ctx.r10.u64 & 0xF) != 0);
	ctx.r9.s64 = ctx.r10.s64 >> 4;
	// cmpdi cr6,r9,0
	ctx.cr6.compare<int64_t>(ctx.r9.s64, 0, ctx.xer);
	// beq cr6,0x821e913c
	if (ctx.cr6.eq) goto loc_821E913C;
	// cmpdi cr6,r9,-1
	ctx.cr6.compare<int64_t>(ctx.r9.s64, -1, ctx.xer);
	// beq cr6,0x821e913c
	if (ctx.cr6.eq) goto loc_821E913C;
	// li r10,86
	ctx.r10.s64 = 86;
	// b 0x821e9144
	goto loc_821E9144;
loc_821E913C:
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// lbzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
loc_821E9144:
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EC718) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x821EC720;
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
	// beq cr6,0x821ec7b4
	if (ctx.cr6.eq) goto loc_821EC7B4;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ec7b4
	if (ctx.cr6.eq) goto loc_821EC7B4;
	// mulli r31,r6,144
	r31.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(144));
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + ctx.r11.u64;
	// bl 0x8229e988
	ctx.lr = 0x821EC750;
	sub_8229E988(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + r31.u64;
	// addi r31,r10,-1
	r31.s64 = ctx.r10.s64 + -1;
	// bl 0x8229e9b0
	ctx.lr = 0x821EC764;
	sub_8229E9B0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// stw r10,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// beq cr6,0x821ec790
	if (ctx.cr6.eq) goto loc_821EC790;
loc_821EC77C:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// rlwinm. r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// bne 0x821ec77c
	if (!ctx.cr0.eq) goto loc_821EC77C;
loc_821EC790:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// beq cr6,0x821ec7c0
	if (ctx.cr6.eq) goto loc_821EC7C0;
loc_821EC79C:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// bne 0x821ec79c
	if (!ctx.cr0.eq) goto loc_821EC79C;
	// b 0x821ec7c0
	goto loc_821EC7C0;
loc_821EC7B4:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// stw r11,0(r28)
	REX_STORE_U32(r28.u32 + 0, ctx.r11.u32);
loc_821EC7C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_821F0638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,17700(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17700);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821f0654
	if (ctx.cr6.lt) goto loc_821F0654;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F0654:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f069c
	if (ctx.cr0.eq) goto loc_821F069C;
	// lfs f12,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821f0670
	if (ctx.cr6.lt) goto loc_821F0670;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F0670:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f069c
	if (ctx.cr0.eq) goto loc_821F069C;
	// lfs f12,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blt cr6,0x821f068c
	if (ctx.cr6.lt) goto loc_821F068C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F068C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f069c
	if (ctx.cr0.eq) goto loc_821F069C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821f06fc
	goto loc_821F06FC;
loc_821F069C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,17704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17704);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f06b4
	if (ctx.cr6.gt) goto loc_821F06B4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F06B4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f06f8
	if (ctx.cr0.eq) goto loc_821F06F8;
	// lfs f13,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f06d0
	if (ctx.cr6.gt) goto loc_821F06D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F06D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f06f8
	if (ctx.cr0.eq) goto loc_821F06F8;
	// lfs f13,148(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f06ec
	if (ctx.cr6.gt) goto loc_821F06EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F06EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne 0x821f06fc
	if (!ctx.cr0.eq) goto loc_821F06FC;
loc_821F06F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F06FC:
	// stw r11,320(r3)
	REX_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F2F08) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,4(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f13,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f13.f64 = double(temp.f32);
	// lfs f31,2000(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2000);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x821f2f64
	if (!ctx.cr6.eq) goto loc_821F2F64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// b 0x821f2fe0
	goto loc_821F2FE0;
loc_821F2F64:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// fdivs f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lwz r7,12(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// ble cr6,0x821f2f9c
	if (!ctx.cr6.gt) goto loc_821F2F9C;
	// fneg f1,f1
	ctx.f1.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x821f2fc4
	goto loc_821F2FC4;
loc_821F2F9C:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// ble cr6,0x821f2fb4
	if (!ctx.cr6.gt) goto loc_821F2FB4;
loc_821F2FAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f3008
	goto loc_821F3008;
loc_821F2FB4:
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821f2fac
	if (ctx.cr6.gt) goto loc_821F2FAC;
loc_821F2FC4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1cc0
	ctx.lr = 0x821F2FD0;
	sub_820E1CC0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e1b28
	ctx.lr = 0x821F2FE0;
	sub_820E1B28(ctx, base);
loc_821F2FE0:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821f2fac
	if (ctx.cr6.gt) goto loc_821F2FAC;
	// lfs f0,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bgt cr6,0x821f3008
	if (ctx.cr6.gt) goto loc_821F3008;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F3008:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

DEFINE_REX_FUNC(sub_821F9810) {
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
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r30,4
	r30.s64 = 4;
loc_821F9834:
	// lfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x822d6d28
	ctx.lr = 0x821F983C;
	sub_822D6D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821f9848
	if (ctx.cr0.eq) goto loc_821F9848;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
loc_821F9848:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x821f9834
	if (!ctx.cr0.eq) goto loc_821F9834;
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

DEFINE_REX_FUNC(sub_821FABE8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821fac10
	if (!ctx.cr6.eq) goto loc_821FAC10;
	// stw r3,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r3.u32);
	// stw r3,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r3.u32);
	// stw r3,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r3.u32);
	// blr 
	return;
loc_821FAC10:
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// stw r3,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r3.u32);
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// stw r3,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// stw r3,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FE078) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32165
	ctx.r10.s64 = -2107965440;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r6,r10,9824
	ctx.r6.s64 = ctx.r10.s64 + 9824;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,2
	ctx.r8.s64 = 2;
	// lfs f11,21008(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 21008);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lfs f12,21004(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 21004);
	ctx.f12.f64 = double(temp.f32);
loc_821FE09C:
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r7,32
	ctx.r9.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r11,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r11.u64);
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// std r9,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// lfd f13,-24(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r9,6
	ctx.r9.s64 = 6;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// li r11,3
	ctx.r11.s64 = 3;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
loc_821FE0DC:
	// addi r9,r11,31
	ctx.r9.s64 = ctx.r11.s64 + 31;
	// stfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r5.u64);
	// lfd f9,-8(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f9,f11
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// stfs f10,12(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfsu f13,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821fe0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FE0DC;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// bne 0x821fe09c
	if (!ctx.cr0.eq) goto loc_821FE09C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,584(r6)
	REX_STORE_U8(ctx.r6.u32 + 584, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200770) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,72(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,248(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200928) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,228(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,228(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822009F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,332(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 332);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82200AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82201AC8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// bge cr6,0x82201ae0
	if (!ctx.cr6.lt) goto loc_82201AE0;
	// addi r11,r4,61
	ctx.r11.s64 = ctx.r4.s64 + 61;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82201AE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822025C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x822021a0
	sub_822021A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82202740) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lfs f31,2028(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2028);
	f31.f64 = double(temp.f32);
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r6,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// bl 0x820e1cc0
	ctx.lr = 0x82202790;
	sub_820E1CC0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// lfs f30,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822027A8;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822027C8;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f1,104(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// stb r11,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r11.u8);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x822027E8;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f1,108(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// stb r11,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r11.u8);
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x82204ae0
	ctx.lr = 0x82202808;
	sub_82204AE0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_822068B8) {
	REX_FUNC_PROLOGUE();
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r9,159
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 159, ctx.xer);
	// bge cr6,0x82206900
	if (!ctx.cr6.lt) goto loc_82206900;
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// bge cr6,0x822068e0
	if (!ctx.cr6.lt) goto loc_822068E0;
	// addi r11,r11,-129
	ctx.r11.s64 = ctx.r11.s64 + -129;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,33
	ctx.r10.s64 = ctx.r11.s64 + 33;
	// b 0x822068ec
	goto loc_822068EC;
loc_822068E0:
	// addi r11,r11,-224
	ctx.r11.s64 = ctx.r11.s64 + -224;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,95
	ctx.r10.s64 = ctx.r11.s64 + 95;
loc_822068EC:
	// cmplwi cr6,r9,127
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 127, ctx.xer);
	// ble cr6,0x822068f8
	if (!ctx.cr6.gt) goto loc_822068F8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_822068F8:
	// addi r11,r9,-31
	ctx.r11.s64 = ctx.r9.s64 + -31;
	// b 0x8220691c
	goto loc_8220691C;
loc_82206900:
	// cmplwi cr6,r11,160
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 160, ctx.xer);
	// bge cr6,0x82206910
	if (!ctx.cr6.lt) goto loc_82206910;
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// b 0x82206914
	goto loc_82206914;
loc_82206910:
	// addi r11,r11,-176
	ctx.r11.s64 = ctx.r11.s64 + -176;
loc_82206914:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r9,-126
	ctx.r11.s64 = ctx.r9.s64 + -126;
loc_8220691C:
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208D48) {
	REX_FUNC_PROLOGUE();
	// b 0x824d3fac
	__imp__XamShowDeviceSelectorUI(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208D50) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x824d3fbc
	ctx.lr = 0x82208D68;
	__imp__XamShowMessageBoxUI(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822097E8) {
	REX_FUNC_PROLOGUE();
	// b 0x824d401c
	__imp__XamContentGetCreator(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209800) {
	REX_FUNC_PROLOGUE();
	// b 0x824d404c
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82209BF0) {
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
	ctx.lr = 0x82209BF8;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82209c20
	if (ctx.cr6.eq) goto loc_82209C20;
	// stw r28,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, r28.u32);
loc_82209C20:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x82209cc4
	if (ctx.cr6.eq) goto loc_82209CC4;
	// li r6,259
	ctx.r6.s64 = 259;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r6,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r6.u32);
	// lwz r11,4384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4384);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addic r7,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 & r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82209C78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82209ca0
	if (ctx.cr0.lt) goto loc_82209CA0;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x82209ca0
	if (ctx.cr6.eq) goto loc_82209CA0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82209c98
	if (ctx.cr6.eq) goto loc_82209C98;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82209C98:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82209d64
	goto loc_82209D64;
loc_82209CA0:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82209d5c
	if (!ctx.cr6.eq) goto loc_82209D5C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82209cbc
	if (ctx.cr6.eq) goto loc_82209CBC;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
loc_82209CBC:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82209d5c
	goto loc_82209D5C;
loc_82209CC4:
	// lwz r11,4384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4384);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82209CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82209d10
	if (!ctx.cr6.eq) goto loc_82209D10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824d41ac
	ctx.lr = 0x82209D04;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82209d28
	if (ctx.cr0.lt) goto loc_82209D28;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82209D10:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82209d28
	if (ctx.cr6.lt) goto loc_82209D28;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
	// b 0x82209d64
	goto loc_82209D64;
loc_82209D28:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 17;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82209d44
	if (!ctx.cr6.eq) goto loc_82209D44;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r28,0(r29)
	REX_STORE_U32(r29.u32 + 0, r28.u32);
	// b 0x82209d64
	goto loc_82209D64;
loc_82209D44:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82209d5c
	if (!ctx.cr6.eq) goto loc_82209D5C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(r29.u32 + 0, ctx.r11.u32);
loc_82209D5C:
	// bl 0x8220a840
	ctx.lr = 0x82209D60;
	sub_8220A840(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82209D64:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82210928) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210AD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82210E88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,12816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12816);
	// li r12,1
	ctx.r12.s64 = 1;
	// lwz r9,10460(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 10460);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// stw r4,12292(r3)
	REX_STORE_U32(ctx.r3.u32 + 12292, ctx.r4.u32);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// rlwimi r11,r9,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10460(r3)
	REX_STORE_U32(ctx.r3.u32 + 10460, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82211830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212228) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822132A0) {
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
	// stw r4,12832(r3)
	REX_STORE_U32(ctx.r3.u32 + 12832, ctx.r4.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822133e4
	if (ctx.cr6.eq) goto loc_822133E4;
	// lwz r11,12816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822132d8
	if (!ctx.cr6.eq) goto loc_822132D8;
	// bl 0x82212e80
	ctx.lr = 0x822132D8;
	sub_82212E80(ctx, base);
loc_822132D8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 28);
	// stw r11,10376(r31)
	REX_STORE_U32(r31.u32 + 10376, ctx.r11.u32);
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// lbz r9,11071(r31)
	ctx.r9.u64 = REX_LOAD_U8(r31.u32 + 11071);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// stw r11,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// beq 0x822133c0
	if (ctx.cr0.eq) goto loc_822133C0;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82213318
	if (ctx.cr0.eq) goto loc_82213318;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822133a8
	goto loc_822133A8;
loc_82213318:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822133a0
	if (ctx.cr0.eq) goto loc_822133A0;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213338
	if (ctx.cr6.eq) goto loc_82213338;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822133a0
	if (!ctx.cr6.eq) goto loc_822133A0;
loc_82213338:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213350
	if (ctx.cr6.eq) goto loc_82213350;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822133a0
	if (!ctx.cr6.eq) goto loc_822133A0;
loc_82213350:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213368
	if (ctx.cr6.eq) goto loc_82213368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822133a0
	if (!ctx.cr6.eq) goto loc_822133A0;
loc_82213368:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213380
	if (ctx.cr6.eq) goto loc_82213380;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822133a0
	if (!ctx.cr6.eq) goto loc_822133A0;
loc_82213380:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213398
	if (ctx.cr6.eq) goto loc_82213398;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822133a0
	if (!ctx.cr6.eq) goto loc_822133A0;
loc_82213398:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822133a4
	goto loc_822133A4;
loc_822133A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822133A4:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822133A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822133c0
	if (ctx.cr0.eq) goto loc_822133C0;
	// lwz r11,10368(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10368);
	// lwz r10,13548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13548);
	// rlwimi r11,r10,18,0,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFC0000) | (ctx.r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	REX_STORE_U32(r31.u32 + 10368, ctx.r11.u32);
loc_822133C0:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,55,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// b 0x82213404
	goto loc_82213404;
loc_822133E4:
	// lwz r11,10560(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10560);
	// lbz r10,11070(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11070);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,10560(r31)
	REX_STORE_U32(r31.u32 + 10560, ctx.r11.u32);
	// stb r10,11070(r31)
	REX_STORE_U8(r31.u32 + 11070, ctx.r10.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
loc_82213404:
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// lwz r11,13092(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 13092);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134e0
	if (!ctx.cr6.eq) goto loc_822134E0;
	// lbz r11,11068(r31)
	ctx.r11.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822134e0
	if (!ctx.cr0.eq) goto loc_822134E0;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822134e0
	if (!ctx.cr0.eq) goto loc_822134E0;
	// lbz r10,12563(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 12563);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822134e0
	if (!ctx.cr0.eq) goto loc_822134E0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82213444
	if (ctx.cr0.eq) goto loc_82213444;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822134d4
	goto loc_822134D4;
loc_82213444:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822134cc
	if (ctx.cr0.eq) goto loc_822134CC;
	// lwz r11,12816(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12816);
	// lwz r10,13104(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213464
	if (ctx.cr6.eq) goto loc_82213464;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134cc
	if (!ctx.cr6.eq) goto loc_822134CC;
loc_82213464:
	// lwz r11,12820(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12820);
	// lwz r10,13108(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13108);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221347c
	if (ctx.cr6.eq) goto loc_8221347C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134cc
	if (!ctx.cr6.eq) goto loc_822134CC;
loc_8221347C:
	// lwz r11,12824(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12824);
	// lwz r10,13112(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82213494
	if (ctx.cr6.eq) goto loc_82213494;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134cc
	if (!ctx.cr6.eq) goto loc_822134CC;
loc_82213494:
	// lwz r11,12828(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12828);
	// lwz r10,13116(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13116);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822134ac
	if (ctx.cr6.eq) goto loc_822134AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134cc
	if (!ctx.cr6.eq) goto loc_822134CC;
loc_822134AC:
	// lwz r11,12832(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// lwz r10,13120(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 13120);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822134c4
	if (ctx.cr6.eq) goto loc_822134C4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822134cc
	if (!ctx.cr6.eq) goto loc_822134CC;
loc_822134C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822134d0
	goto loc_822134D0;
loc_822134CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822134D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822134D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x822134e4
	if (!ctx.cr0.eq) goto loc_822134E4;
loc_822134E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822134E4:
	// lbz r10,11068(r31)
	ctx.r10.u64 = REX_LOAD_U8(r31.u32 + 11068);
	// lwz r9,12308(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12308);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,11068(r31)
	REX_STORE_U8(r31.u32 + 11068, ctx.r10.u8);
	// lwz r11,10548(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 10548);
	// lwz r10,12832(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,12308(r31)
	REX_STORE_U32(r31.u32 + 12308, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,1,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10548(r31)
	REX_STORE_U32(r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// lwz r11,12312(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12312);
	// lwz r10,10548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 10548);
	// lwz r9,12832(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 12832);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,12312(r31)
	REX_STORE_U32(r31.u32 + 12312, ctx.r11.u32);
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwimi r11,r10,0,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	REX_STORE_U32(r31.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r31)
	REX_STORE_U64(r31.u32 + 16, ctx.r11.u64);
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

DEFINE_REX_FUNC(sub_82222DC0) {
	REX_FUNC_PROLOGUE();
	// b 0x82221f48
	sub_82221F48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82222DC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82222DD0;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82222148
	ctx.lr = 0x82222E14;
	sub_82222148(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x823cd118
	ctx.lr = 0x82222E20;
	sub_823CD118(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r31.s32, 0, ctx.xer);
	// bne 0x82222e30
	if (!ctx.cr0.eq) goto loc_82222E30;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82222e78
	goto loc_82222E78;
loc_82222E30:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r11.u32);
	// bl 0x82215e78
	ctx.lr = 0x82222E74;
	sub_82215E78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82222E78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82225040) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82225188
	if (ctx.cr6.eq) goto loc_82225188;
	// lwz r11,64(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8222507c
	if (ctx.cr6.eq) goto loc_8222507C;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// bne cr6,0x82225080
	if (!ctx.cr6.eq) goto loc_82225080;
loc_8222507C:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_82225080:
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 720, ctx.xer);
	// or r31,r9,r10
	r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x822250b4
	if (!ctx.cr6.eq) goto loc_822250B4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,480
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 480, ctx.xer);
	// beq cr6,0x822250b0
	if (ctx.cr6.eq) goto loc_822250B0;
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// bne cr6,0x822250b4
	if (!ctx.cr6.eq) goto loc_822250B4;
loc_822250B0:
	// ori r31,r31,2
	r31.u64 = r31.u64 | 2;
loc_822250B4:
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// rlwinm. r11,r11,0,26,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82225114
	if (ctx.cr0.eq) goto loc_82225114;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// beq cr6,0x822250f0
	if (ctx.cr6.eq) goto loc_822250F0;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x822250dc
	if (ctx.cr6.eq) goto loc_822250DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-29880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -29880);
	ctx.f1.f64 = double(temp.f32);
	// b 0x822250f8
	goto loc_822250F8;
loc_822250DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1920
	ctx.r3.s64 = 1920;
	// li r4,2205
	ctx.r4.s64 = 2205;
	// lfs f1,26552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26552);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82225100
	goto loc_82225100;
loc_822250F0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,19796(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 19796);
	ctx.f1.f64 = double(temp.f32);
loc_822250F8:
	// li r4,1470
	ctx.r4.s64 = 1470;
	// li r3,1280
	ctx.r3.s64 = 1280;
loc_82225100:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x824d462c
	ctx.lr = 0x8222510C;
	__imp__VdSetDisplayModeOverride(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8222517c
	goto loc_8222517C;
loc_82225114:
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82225124:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82225124
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82225124;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824d461c
	ctx.lr = 0x82225134;
	__imp__VdQueryVideoMode(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1280
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1280, ctx.xer);
	// bne cr6,0x8222514c
	if (!ctx.cr6.eq) goto loc_8222514C;
	// cmplwi cr6,r10,1470
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1470, ctx.xer);
	// beq cr6,0x8222515c
	if (ctx.cr6.eq) goto loc_8222515C;
loc_8222514C:
	// cmplwi cr6,r11,1920
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1920, ctx.xer);
	// bne cr6,0x82225180
	if (!ctx.cr6.eq) goto loc_82225180;
	// cmplwi cr6,r10,2205
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2205, ctx.xer);
	// bne cr6,0x82225180
	if (!ctx.cr6.eq) goto loc_82225180;
loc_8222515C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f1,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x824d462c
	ctx.lr = 0x82225178;
	__imp__VdSetDisplayModeOverride(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222517C:
	// bl 0x82224b08
	ctx.lr = 0x82225180;
	sub_82224B08(ctx, base);
loc_82225180:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d460c
	ctx.lr = 0x82225188;
	__imp__VdSetDisplayMode(ctx, base);
loc_82225188:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x824d45fc
	ctx.lr = 0x82225190;
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,200(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 200);
	// lhz r10,202(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 202);
	// lhz r9,214(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 214);
	// stw r11,21952(r30)
	REX_STORE_U32(r30.u32 + 21952, ctx.r11.u32);
	// stw r10,21956(r30)
	REX_STORE_U32(r30.u32 + 21956, ctx.r10.u32);
	// stw r9,21960(r30)
	REX_STORE_U32(r30.u32 + 21960, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_8222C848) {
	REX_FUNC_PROLOGUE();
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8222c874
	if (!ctx.cr6.eq) goto loc_8222C874;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8222c88c
	goto loc_8222C88C;
loc_8222C874:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-25016(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -25016);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8222beb8
	ctx.lr = 0x8222C888;
	sub_8222BEB8(ctx, base);
	// fdivs f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / f31.f64));
loc_8222C88C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222DCD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r3,56
	ctx.r11.s64 = ctx.r3.s64 + 56;
loc_8222DCDC:
	// ld r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// stw r4,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r4.u32);
	// ld r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8222DCF0:
	// mfmsr r8
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r8.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r9,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r9.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r9,r7
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x8222dd14
	if (!ctx.cr6.eq) goto loc_8222DD14;
	// stdcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8222dcf0
	if (!ctx.cr0.eq) goto loc_8222DCF0;
	// b 0x8222dd1c
	goto loc_8222DD1C;
loc_8222DD14:
	// stdcx. r9,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8222DD1C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpd cr6,r9,r7
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x8222dcdc
	if (!ctx.cr6.eq) goto loc_8222DCDC;
	// lwz r11,-16(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822310F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822310F8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82231110
	if (!ctx.cr6.eq) goto loc_82231110;
	// addi r11,r3,10372
	ctx.r11.s64 = ctx.r3.s64 + 10372;
	// b 0x8223111c
	goto loc_8223111C;
loc_82231110:
	// addi r11,r5,2594
	ctx.r11.s64 = ctx.r5.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
loc_8223111C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// bne cr6,0x82231140
	if (!ctx.cr6.eq) goto loc_82231140;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x82230c78
	ctx.lr = 0x8223113C;
	sub_82230C78(ctx, base);
	// b 0x822311a4
	goto loc_822311A4;
loc_82231140:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r10,-17440
	ctx.r8.s64 = ctx.r10.s64 + -17440;
	// addi r10,r11,27512
	ctx.r10.s64 = ctx.r11.s64 + 27512;
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// lbzx r8,r3,r8
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r31,r8,r9
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x82231174
	if (!ctx.cr6.eq) goto loc_82231174;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82231174:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82230c78
	ctx.lr = 0x82231194;
	sub_82230C78(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// ble cr6,0x822311a4
	if (!ctx.cr6.gt) goto loc_822311A4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822311A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,10800(r30)
	REX_STORE_U32(r30.u32 + 10800, ctx.r11.u32);
	// stw r10,10804(r30)
	REX_STORE_U32(r30.u32 + 10804, ctx.r10.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 32);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// std r11,32(r30)
	REX_STORE_U64(r30.u32 + 32, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82234C50) {
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
	ctx.lr = 0x82234C58;
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r3,820(r1)
	REX_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r31.u32);
	// li r3,3329
	ctx.r3.s64 = 3329;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x82234450
	ctx.lr = 0x82234C8C;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82234378
	ctx.lr = 0x82234CB4;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3586
	ctx.r3.s64 = 3586;
	// addi r30,r11,48
	r30.s64 = ctx.r11.s64 + 48;
	// bl 0x82234450
	ctx.lr = 0x82234CD0;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82234378
	ctx.lr = 0x82234CF8;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r3,3603
	ctx.r3.s64 = 3603;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// bl 0x82234450
	ctx.lr = 0x82234D14;
	sub_82234450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x82234378
	ctx.lr = 0x82234D3C;
	sub_82234378(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x824d47bc
	ctx.lr = 0x82234D54;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x822d6a10
	ctx.lr = 0x82234D64;
	sub_822D6A10(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,144
	r26.s64 = ctx.r1.s64 + 144;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// addi r25,r1,152
	r25.s64 = ctx.r1.s64 + 152;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r27,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r27.u32);
	// li r5,5
	ctx.r5.s64 = 5;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// li r3,3603
	ctx.r3.s64 = 3603;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r26.u32);
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// bl 0x822344d8
	ctx.lr = 0x82234DB4;
	sub_822344D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234DC8;
	sub_822346B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234DD4;
	sub_822346B0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234DE0;
	sub_822346B0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234DEC;
	sub_822346B0(ctx, base);
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234DF8;
	sub_822346B0(ctx, base);
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822346b0
	ctx.lr = 0x82234E04;
	sub_822346B0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,5
	ctx.r6.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822345d8
	ctx.lr = 0x82234E28;
	sub_822345D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82234e84
	if (ctx.cr0.lt) goto loc_82234E84;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, r31.u64);
	// std r31,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, r31.u64);
	// std r31,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x824d3ecc
	ctx.lr = 0x82234E7C;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82234eb0
	if (!ctx.cr0.lt) goto loc_82234EB0;
loc_82234E84:
	// li r31,1627
	r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82234e98
	if (ctx.cr6.eq) goto loc_82234E98;
	// stw r3,24(r29)
	REX_STORE_U32(r29.u32 + 24, ctx.r3.u32);
	// b 0x82234e9c
	goto loc_82234E9C;
loc_82234E98:
	// bl 0x8220a828
	ctx.lr = 0x82234E9C;
	sub_8220A828(ctx, base);
loc_82234E9C:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82234ed4
	if (ctx.cr6.eq) goto loc_82234ED4;
	// bl 0x824d47ac
	ctx.lr = 0x82234EAC;
	__imp__XamFree(ctx, base);
	// b 0x82234ed4
	goto loc_82234ED4;
loc_82234EB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x82234ec0
	if (ctx.cr6.eq) goto loc_82234EC0;
	// li r31,997
	r31.s64 = 997;
	// b 0x82234ed4
	goto loc_82234ED4;
loc_82234EC0:
	// bl 0x8220a878
	ctx.lr = 0x82234EC4;
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
loc_82234ED4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8223BFE0) {
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
	// beq cr6,0x8223c03c
	if (ctx.cr6.eq) goto loc_8223C03C;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8223c020
	if (ctx.cr6.eq) goto loc_8223C020;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x823cd250
	ctx.lr = 0x8223C01C;
	sub_823CD250(ctx, base);
	// stw r30,4(r31)
	REX_STORE_U32(r31.u32 + 4, r30.u32);
loc_8223C020:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8223b780
	ctx.lr = 0x8223C028;
	sub_8223B780(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(r31.u32 + 0, r30.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x823cd250
	ctx.lr = 0x8223C03C;
	sub_823CD250(ctx, base);
loc_8223C03C:
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

DEFINE_REX_FUNC(sub_8223DBD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8223DBD8;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dc30
	if (!ctx.cr6.gt) goto loc_8223DC30;
	// addi r30,r3,20
	r30.s64 = ctx.r3.s64 + 20;
loc_8223DBF4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U64(r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82238868
	ctx.lr = 0x8223DC10;
	sub_82238868(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r30.u32 = ea;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8223b1f8
	ctx.lr = 0x8223DC20;
	sub_8223B1F8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223dbf4
	if (ctx.cr6.lt) goto loc_8223DBF4;
loc_8223DC30:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dc68
	if (!ctx.cr6.gt) goto loc_8223DC68;
	// addi r29,r31,8
	r29.s64 = r31.s64 + 8;
loc_8223DC44:
	// lwzu r3,4(r29)
	ea = 4 + r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223DC58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223dc44
	if (ctx.cr6.lt) goto loc_8223DC44;
loc_8223DC68:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82244348) {
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
	ctx.lr = 0x82244350;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// stw r4,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
	// stw r5,676(r1)
	REX_STORE_U32(ctx.r1.u32 + 676, ctx.r5.u32);
	// stw r7,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// bne cr6,0x82244394
	if (!ctx.cr6.eq) goto loc_82244394;
	// li r17,16
	r17.s64 = 16;
	// cmpwi cr6,r4,320
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 320, ctx.xer);
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// ble cr6,0x822443c4
	if (!ctx.cr6.gt) goto loc_822443C4;
	// addi r11,r4,-320
	ctx.r11.s64 = ctx.r4.s64 + -320;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// b 0x822443c0
	goto loc_822443C0;
loc_82244394:
	// li r17,32
	r17.s64 = 32;
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// stw r17,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r17.u32);
	// bne cr6,0x822443c4
	if (!ctx.cr6.eq) goto loc_822443C4;
	// cmpwi cr6,r4,640
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 640, ctx.xer);
	// ble cr6,0x822443c4
	if (!ctx.cr6.gt) goto loc_822443C4;
	// addi r11,r4,-640
	ctx.r11.s64 = ctx.r4.s64 + -640;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
loc_822443C0:
	// stw r4,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
loc_822443C4:
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r21,-32
	r21.s64 = -32;
	// addi r22,r11,-14792
	r22.s64 = ctx.r11.s64 + -14792;
	// li r24,32
	r24.s64 = 32;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// addi r23,r4,-32
	r23.s64 = ctx.r4.s64 + -32;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r22.u32);
loc_822443E0:
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// add r26,r24,r21
	r26.u64 = r24.u64 + r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82244488
	if (ctx.cr6.lt) goto loc_82244488;
	// addi r30,r3,-1
	r30.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// subf r29,r6,r5
	r29.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_8224440C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82244424
	if (!ctx.cr0.lt) goto loc_82244424;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82244430
	goto loc_82244430;
loc_82244424:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82244430
	if (!ctx.cr6.gt) goto loc_82244430;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82244430:
	// rlwinm r20,r11,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r10
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + ctx.r10.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// subf r11,r9,r26
	ctx.r11.u64 = r26.u64 - ctx.r9.u64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r20,r22
	ctx.r9.u64 = REX_LOAD_U32(r20.u32 + r22.u32);
	// add r27,r9,r27
	r27.u64 = ctx.r9.u64 + r27.u64;
	// bge 0x82244458
	if (!ctx.cr0.lt) goto loc_82244458;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82244464
	goto loc_82244464;
loc_82244458:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82244464
	if (!ctx.cr6.gt) goto loc_82244464;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82244464:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r30.s32, ctx.xer);
	// lwzx r11,r9,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// add r28,r11,r28
	r28.u64 = ctx.r11.u64 + r28.u64;
	// blt cr6,0x8224440c
	if (ctx.cr6.lt) goto loc_8224440C;
loc_82244488:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822444c4
	if (!ctx.cr6.lt) goto loc_822444C4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// subf r9,r11,r26
	ctx.r9.u64 = r26.u64 - ctx.r11.u64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822444ac
	if (!ctx.cr0.lt) goto loc_822444AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822444b8
	goto loc_822444B8;
loc_822444AC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x822444b8
	if (!ctx.cr6.gt) goto loc_822444B8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822444B8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r25,r9,r22
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
loc_822444C4:
	// add r11,r28,r27
	ctx.r11.u64 = r28.u64 + r27.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// blt cr6,0x822444d8
	if (ctx.cr6.lt) goto loc_822444D8;
	// mr r21,r26
	r21.u64 = r26.u64;
loc_822444D8:
	// srawi. r24,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r24.s64 = r24.s32 >> 1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// bgt 0x822443e0
	if (ctx.cr0.gt) goto loc_822443E0;
	// stw r21,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// li r29,0
	r29.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82244588
	if (ctx.cr6.lt) goto loc_82244588;
	// addi r28,r3,-1
	r28.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// subf r27,r6,r5
	r27.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_8224450C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// subf r9,r11,r21
	ctx.r9.u64 = r21.u64 - ctx.r11.u64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82244524
	if (!ctx.cr0.lt) goto loc_82244524;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82244530
	goto loc_82244530;
loc_82244524:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82244530
	if (!ctx.cr6.gt) goto loc_82244530;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82244530:
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + r27.u32);
	// stw r11,-4(r10)
	REX_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// subf r11,r9,r21
	ctx.r11.u64 = r21.u64 - ctx.r9.u64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r25,r22
	ctx.r9.u64 = REX_LOAD_U32(r25.u32 + r22.u32);
	// add r29,r9,r29
	r29.u64 = ctx.r9.u64 + r29.u64;
	// bge 0x82244558
	if (!ctx.cr0.lt) goto loc_82244558;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82244564
	goto loc_82244564;
loc_82244558:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82244564
	if (!ctx.cr6.gt) goto loc_82244564;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82244564:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, r28.s32, ctx.xer);
	// lwzx r11,r9,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
	// blt cr6,0x8224450c
	if (ctx.cr6.lt) goto loc_8224450C;
loc_82244588:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x822445c4
	if (!ctx.cr6.lt) goto loc_822445C4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// subf r9,r11,r21
	ctx.r9.u64 = r21.u64 - ctx.r11.u64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x822445ac
	if (!ctx.cr0.lt) goto loc_822445AC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822445b8
	goto loc_822445B8;
loc_822445AC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x822445b8
	if (!ctx.cr6.gt) goto loc_822445B8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_822445B8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r26,r9,r22
	r26.u64 = REX_LOAD_U32(ctx.r9.u32 + r22.u32);
loc_822445C4:
	// add r11,r30,r29
	ctx.r11.u64 = r30.u64 + r29.u64;
	// li r18,0
	r18.s64 = 0;
	// add r20,r11,r26
	r20.u64 = ctx.r11.u64 + r26.u64;
	// li r19,0
	r19.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822446d4
	if (!ctx.cr6.gt) goto loc_822446D4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r26,r1,172
	r26.s64 = ctx.r1.s64 + 172;
	// addi r25,r1,112
	r25.s64 = ctx.r1.s64 + 112;
	// addi r24,r1,176
	r24.s64 = ctx.r1.s64 + 176;
	// subf r27,r6,r10
	r27.u64 = ctx.r10.u64 - ctx.r6.u64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r31,r6,r7
	r31.u64 = ctx.r7.u64 - ctx.r6.u64;
	// subf r30,r6,r5
	r30.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r29,r6,r4
	r29.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r28,r6,r3
	r28.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r26,r6,r26
	r26.u64 = r26.u64 - ctx.r6.u64;
	// subf r25,r6,r25
	r25.u64 = r25.u64 - ctx.r6.u64;
	// subf r24,r6,r24
	r24.u64 = r24.u64 - ctx.r6.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r23,r1,96
	r23.s64 = ctx.r1.s64 + 96;
	// addi r22,r1,160
	r22.s64 = ctx.r1.s64 + 160;
	// addi r21,r1,100
	r21.s64 = ctx.r1.s64 + 100;
loc_82244654:
	// lwz r7,-8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r4,-4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r17,4(r11)
	r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,8(r11)
	r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r15,12(r11)
	r15.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,16(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r7,r10,r23
	REX_STORE_U32(ctx.r10.u32 + r23.u32, ctx.r7.u32);
	// stwx r7,r10,r22
	REX_STORE_U32(ctx.r10.u32 + r22.u32, ctx.r7.u32);
	// stwx r4,r10,r21
	REX_STORE_U32(ctx.r10.u32 + r21.u32, ctx.r4.u32);
	// stwx r4,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r3,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r17,r31,r11
	REX_STORE_U32(r31.u32 + ctx.r11.u32, r17.u32);
	// stwx r17,r30,r11
	REX_STORE_U32(r30.u32 + ctx.r11.u32, r17.u32);
	// stwx r16,r29,r11
	REX_STORE_U32(r29.u32 + ctx.r11.u32, r16.u32);
	// stwx r16,r28,r11
	REX_STORE_U32(r28.u32 + ctx.r11.u32, r16.u32);
	// stwx r15,r27,r11
	REX_STORE_U32(r27.u32 + ctx.r11.u32, r15.u32);
	// stwx r15,r26,r11
	REX_STORE_U32(r26.u32 + ctx.r11.u32, r15.u32);
	// stwx r14,r25,r11
	REX_STORE_U32(r25.u32 + ctx.r11.u32, r14.u32);
	// stwx r14,r24,r11
	REX_STORE_U32(r24.u32 + ctx.r11.u32, r14.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82244654
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244654;
	// lwz r7,692(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r5,676(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r4,668(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r3,660(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r17,80(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,84(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,88(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822446D4:
	// addic. r24,r17,-1
	ctx.xer.ca = r17.u32 > 0;
	r24.s64 = r17.s64 + -1;
	ctx.cr0.compare<int32_t>(r24.s32, 0, ctx.xer);
	// mr r29,r20
	r29.u64 = r20.u64;
	// mr r27,r17
	r27.u64 = r17.u64;
	// ble 0x822448c4
	if (!ctx.cr0.gt) goto loc_822448C4;
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r26,r4,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r25,r24
	r25.u64 = r24.u64;
	// addi r28,r11,-4
	r28.s64 = ctx.r11.s64 + -4;
	// mr r30,r11
	r30.u64 = ctx.r11.u64;
loc_82244700:
	// add r11,r20,r29
	ctx.r11.u64 = r20.u64 + r29.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r26.s32, ctx.xer);
	// bgt cr6,0x822447e0
	if (ctx.cr6.gt) goto loc_822447E0;
	// li r9,99
	ctx.r9.s64 = 99;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x822447a8
	if (!ctx.cr6.gt) goto loc_822447A8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r4,r5,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r5.u64;
	// subf r31,r5,r31
	r31.u64 = r31.u64 - ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82244740:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8224476c
	if (!ctx.cr6.gt) goto loc_8224476C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,0(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r21
	ctx.r10.u64 = r21.u64 - ctx.r10.u64;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - r23.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8224476c
	if (!ctx.cr6.lt) goto loc_8224476C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
loc_8224476C:
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8224479c
	if (!ctx.cr6.gt) goto loc_8224479C;
	// neg r10,r10
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r10.u64);
	// lwz r23,4(r11)
	r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r23,r10
	ctx.r10.u64 = ctx.r10.u64 - r23.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8224479c
	if (!ctx.cr6.lt) goto loc_8224479C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r19,r8,1
	r19.s64 = ctx.r8.s64 + 1;
loc_8224479C:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82244740
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244740;
loc_822447A8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwu r19,-4(r30)
	ea = -4 + r30.u32;
	REX_STORE_U32(ea, r19.u32);
	r30.u32 = ea;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzx r11,r8,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + r22.u32);
	// lwzx r10,r4,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + r22.u32);
	// subf r11,r11,r29
	ctx.r11.u64 = r29.u64 - ctx.r11.u64;
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x822448bc
	goto loc_822448BC;
loc_822447E0:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-99
	ctx.r10.s64 = -99;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// blt 0x8224488c
	if (ctx.cr0.lt) goto loc_8224488C;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r23,r4,31,1,31
	r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r4,r4,r5
	ctx.r4.u64 = ctx.r5.u64 - ctx.r4.u64;
	// addi r31,r11,-4
	r31.s64 = ctx.r11.s64 + -4;
	// mtctr r23
	ctx.ctr.u64 = r23.u64;
loc_8224481C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x8224484c
	if (!ctx.cr6.lt) goto loc_8224484C;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// lwzx r23,r31,r9
	r23.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8224484c
	if (!ctx.cr6.gt) goto loc_8224484C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r18,r8
	r18.u64 = ctx.r8.u64;
loc_8224484C:
	// lwz r11,-4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82244880
	if (!ctx.cr6.lt) goto loc_82244880;
	// add r23,r4,r9
	r23.u64 = ctx.r4.u64 + ctx.r9.u64;
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-4(r23)
	r23.u64 = REX_LOAD_U32(r23.u32 + -4);
	// subf r11,r23,r11
	ctx.r11.u64 = ctx.r11.u64 - r23.u64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82244880
	if (!ctx.cr6.gt) goto loc_82244880;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r18,r8,-1
	r18.s64 = ctx.r8.s64 + -1;
loc_82244880:
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bdnz 0x8224481c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8224481C;
loc_8224488C:
	// rlwinm r9,r18,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r18,4(r28)
	ea = 4 + r28.u32;
	REX_STORE_U32(ea, r18.u32);
	r28.u32 = ea;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r9,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzx r10,r10,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + r22.u32);
	// lwzx r11,r4,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + r22.u32);
	// subf r10,r10,r20
	ctx.r10.u64 = r20.u64 - ctx.r10.u64;
	// add r20,r11,r10
	r20.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822448BC:
	// addic. r25,r25,-1
	ctx.xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	ctx.cr0.compare<int32_t>(r25.s32, 0, ctx.xer);
	// bne 0x82244700
	if (!ctx.cr0.eq) goto loc_82244700;
loc_822448C4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82244950
	if (!ctx.cr6.gt) goto loc_82244950;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// subf r8,r6,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r6.u64;
	// subf r5,r6,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r6.u64;
	// subf r4,r6,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r6.u64;
	// subf r3,r6,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r6.u64;
	// subf r6,r6,r31
	ctx.r6.u64 = r31.u64 - ctx.r6.u64;
loc_82244910:
	// lwz r31,24(r10)
	r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r30,r8,r11
	r30.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r29,r5,r11
	r29.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r28,r4,r11
	r28.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r26,r3,r11
	r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r25,r6,r11
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzu r9,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r31,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, r31.u32);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r29.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, r28.u32);
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r26,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, r26.u32);
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, r25.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82244910
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244910;
loc_82244950:
	// addic. r11,r17,-4
	ctx.xer.ca = r17.u32 > 3;
	ctx.r11.s64 = r17.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ble 0x822449ac
	if (!ctx.cr0.gt) goto loc_822449AC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82244980:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r6,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82244980
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82244980;
loc_822449AC:
	// cmpw cr6,r5,r24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, r24.s32, ctx.xer);
	// bge cr6,0x822449d4
	if (!ctx.cr6.lt) goto loc_822449D4;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r5,r24
	ctx.r11.u64 = r24.u64 - ctx.r5.u64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5428
	ctx.lr = 0x822449D4;
	sub_822D5428(ctx, base);
loc_822449D4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8225D4D8) {
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
	// stw r5,132(r3)
	REX_STORE_U32(ctx.r3.u32 + 132, ctx.r5.u32);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82256c10
	ctx.lr = 0x8225D504;
	sub_82256C10(ctx, base);
	// addi r4,r31,92
	ctx.r4.s64 = r31.s64 + 92;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82256cb0
	ctx.lr = 0x8225D510;
	sub_82256CB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 132);
	// bl 0x82256880
	ctx.lr = 0x8225D51C;
	sub_82256880(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8225E050) {
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
	// li r4,2001
	ctx.r4.s64 = 2001;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8225da70
	ctx.lr = 0x8225E078;
	sub_8225DA70(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8227c2b8
	ctx.lr = 0x8225E084;
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

DEFINE_REX_FUNC(sub_8225EE88) {
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
	// bl 0x8225e0a0
	ctx.lr = 0x8225EEA8;
	sub_8225E0A0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x8225EEB4;
	sub_8224DA00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
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

DEFINE_REX_FUNC(sub_822602B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// lfs f0,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 96, temp.u32);
	// lwz r10,240(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,240(r11)
	REX_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82263948) {
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
	ctx.lr = 0x82263950;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// li r27,1
	r27.s64 = 1;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82263990
	if (ctx.cr6.eq) goto loc_82263990;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x82263a48
	if (ctx.cr6.eq) goto loc_82263A48;
	// cmplwi cr6,r11,2000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2000, ctx.xer);
	// beq cr6,0x82263a34
	if (ctx.cr6.eq) goto loc_82263A34;
	// cmplwi cr6,r11,2001
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2001, ctx.xer);
	// bne cr6,0x82263990
	if (!ctx.cr6.eq) goto loc_82263990;
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, r27.u32);
loc_82263990:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x82263c04
	if (ctx.cr6.eq) goto loc_82263C04;
	// cmplwi cr6,r11,2006
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2006, ctx.xer);
	// beq cr6,0x82263bf0
	if (ctx.cr6.eq) goto loc_82263BF0;
	// cmplwi cr6,r11,2015
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2015, ctx.xer);
	// beq cr6,0x82263b44
	if (ctx.cr6.eq) goto loc_82263B44;
	// cmplwi cr6,r11,2017
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2017, ctx.xer);
	// beq cr6,0x82263ab0
	if (ctx.cr6.eq) goto loc_82263AB0;
	// cmplwi cr6,r11,2022
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2022, ctx.xer);
	// beq cr6,0x82263a6c
	if (ctx.cr6.eq) goto loc_82263A6C;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bne cr6,0x82263c40
	if (!ctx.cr6.eq) goto loc_82263C40;
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822639dc
	if (ctx.cr6.eq) goto loc_822639DC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82263c40
	if (!ctx.cr6.eq) goto loc_82263C40;
loc_822639DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225cea0
	ctx.lr = 0x822639E4;
	sub_8225CEA0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82263c3c
	if (ctx.cr0.eq) goto loc_82263C3C;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82247078
	ctx.lr = 0x82263A00;
	sub_82247078(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8224da00
	ctx.lr = 0x82263A0C;
	sub_8224DA00(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82263c3c
	goto loc_82263C3C;
loc_82263A34:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82263990
	goto loc_82263990;
loc_82263A48:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lbz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r11.u32 + 12);
	// bl 0x82255d40
	ctx.lr = 0x82263A54;
	sub_82255D40(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82263990
	if (ctx.cr6.eq) goto loc_82263990;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// b 0x82263c40
	goto loc_82263C40;
loc_82263A6C:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// lwz r4,23608(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 23608);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bl 0x82246920
	ctx.lr = 0x82263A80;
	sub_82246920(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82263c40
	if (!ctx.cr6.eq) goto loc_82263C40;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225cea0
	ctx.lr = 0x82263A94;
	sub_8225CEA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82263c40
	if (ctx.cr0.eq) goto loc_82263C40;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8224da00
	ctx.lr = 0x82263AA4;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82263c40
	if (!ctx.cr0.lt) goto loc_82263C40;
	// b 0x82263c44
	goto loc_82263C44;
loc_82263AB0:
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82263b54
	if (!ctx.cr6.eq) goto loc_82263B54;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225cea0
	ctx.lr = 0x82263AC8;
	sub_8225CEA0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x82263b70
	if (ctx.cr0.eq) goto loc_82263B70;
	// lwz r27,4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82263ADC;
	sub_822469C0(ctx, base);
	// bl 0x822562b8
	ctx.lr = 0x82263AE0;
	sub_822562B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8225e4f8
	ctx.lr = 0x82263AF8;
	sub_8225E4F8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82263b18
	if (ctx.cr6.eq) goto loc_82263B18;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8224da00
	ctx.lr = 0x82263B10;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263c44
	if (ctx.cr0.lt) goto loc_82263C44;
loc_82263B18:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,16(r30)
	REX_STORE_U32(r30.u32 + 16, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,20(r30)
	REX_STORE_U32(r30.u32 + 20, ctx.r11.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r11,24(r30)
	REX_STORE_U32(r30.u32 + 24, ctx.r11.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r11.u32);
	// b 0x82263c40
	goto loc_82263C40;
loc_82263B44:
	// lwz r30,16(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82263b60
	if (ctx.cr6.eq) goto loc_82263B60;
loc_82263B54:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,33
	ctx.r3.u64 = ctx.r3.u64 | 33;
	// b 0x82263c44
	goto loc_82263C44;
loc_82263B60:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225cea0
	ctx.lr = 0x82263B68;
	sub_8225CEA0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// bne 0x82263b7c
	if (!ctx.cr0.eq) goto loc_82263B7C;
loc_82263B70:
	// lis r3,-32720
	ctx.r3.s64 = -2144337920;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x82263c44
	goto loc_82263C44;
loc_82263B7C:
	// lwz r27,4(r30)
	r27.u64 = REX_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
	// bl 0x822469c0
	ctx.lr = 0x82263B88;
	sub_822469C0(ctx, base);
	// bl 0x822562b8
	ctx.lr = 0x82263B8C;
	sub_822562B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x82247020
	ctx.lr = 0x82263BA4;
	sub_82247020(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82263bc4
	if (ctx.cr6.eq) goto loc_82263BC4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8224da00
	ctx.lr = 0x82263BBC;
	sub_8224DA00(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82263c44
	if (ctx.cr0.lt) goto loc_82263C44;
loc_82263BC4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r30.u32 + 16, temp.u32);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r11,32(r30)
	REX_STORE_U32(r30.u32 + 32, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r11,36(r30)
	REX_STORE_U32(r30.u32 + 36, ctx.r11.u32);
	// b 0x82263c40
	goto loc_82263C40;
loc_82263BF0:
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82263718
	ctx.lr = 0x82263C00;
	sub_82263718(ctx, base);
	// b 0x82263c40
	goto loc_82263C40;
loc_82263C04:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8225cea0
	ctx.lr = 0x82263C0C;
	sub_8225CEA0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// beq 0x82263c40
	if (ctx.cr0.eq) goto loc_82263C40;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 16);
	// bl 0x82255e88
	ctx.lr = 0x82263C20;
	sub_82255E88(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82263c30
	if (ctx.cr6.eq) goto loc_82263C30;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x82263c40
	if (!ctx.cr6.eq) goto loc_82263C40;
loc_82263C30:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8224da00
	ctx.lr = 0x82263C3C;
	sub_8224DA00(ctx, base);
loc_82263C3C:
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
loc_82263C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82263C44:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822724D8) {
	REX_FUNC_PROLOGUE();
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
	// bl 0x822d4e80
	ctx.lr = 0x822724E0;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f38
	ctx.lr = 0x822724E8;
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,168(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// bl 0x8225b210
	ctx.lr = 0x82272514;
	sub_8225B210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82272548
	if (ctx.cr0.lt) goto loc_82272548;
	// addi r28,r31,56
	r28.s64 = r31.s64 + 56;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r31,52
	r27.s64 = r31.s64 + 52;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8225e988
	ctx.lr = 0x82272534;
	sub_8225E988(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x82272558
	if (!ctx.cr0.lt) goto loc_82272558;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822516b0
	ctx.lr = 0x82272544;
	sub_822516B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82272548:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x822d4f84
	ctx.lr = 0x82272554;
	// b 0x822d4ed0
	return;
loc_82272558:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-2092
	ctx.r4.s64 = ctx.r11.s64 + -2092;
	// bl 0x822464a0
	ctx.lr = 0x8227256C;
	sub_822464A0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-2108
	ctx.r4.s64 = ctx.r11.s64 + -2108;
	// bl 0x822464a0
	ctx.lr = 0x82272580;
	sub_822464A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8227acf8
	ctx.lr = 0x82272588;
	sub_8227ACF8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8227acf8
	ctx.lr = 0x82272590;
	sub_8227ACF8(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225e988
	ctx.lr = 0x822725A0;
	sub_8225E988(ctx, base);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x82264750
	ctx.lr = 0x822725B0;
	sub_82264750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822725c0
	if (ctx.cr0.lt) goto loc_822725C0;
	// lfs f28,164(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	f28.f64 = double(temp.f32);
	// b 0x822725c4
	goto loc_822725C4;
loc_822725C0:
	// lfs f28,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	f28.f64 = double(temp.f32);
loc_822725C4:
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82264750
	ctx.lr = 0x822725D4;
	sub_82264750(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822725e4
	if (ctx.cr0.lt) goto loc_822725E4;
	// lfs f29,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	f29.f64 = double(temp.f32);
	// b 0x822725e8
	goto loc_822725E8;
loc_822725E4:
	// lfs f29,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	f29.f64 = double(temp.f32);
loc_822725E8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f31,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// blt cr6,0x82272608
	if (ctx.cr6.lt) goto loc_82272608;
	// lfs f0,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82272660
	if (!ctx.cr6.lt) goto loc_82272660;
loc_82272608:
	// stw r26,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256e40
	ctx.lr = 0x82272618;
	sub_82256E40(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272630
	if (!ctx.cr6.eq) goto loc_82272630;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,1172
	ctx.r11.s64 = ctx.r11.s64 + 1172;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_82272630:
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82256e40
	ctx.lr = 0x82272640;
	sub_82256E40(ctx, base);
	// lfs f0,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82272650
	if (!ctx.cr6.lt) goto loc_82272650;
	// stfs f31,0(r27)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r27.u32 + 0, temp.u32);
loc_82272650:
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, f31.f64);
	// bge cr6,0x82272660
	if (!ctx.cr6.lt) goto loc_82272660;
	// stfs f31,0(r28)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r28.u32 + 0, temp.u32);
loc_82272660:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x822516b0
	ctx.lr = 0x82272668;
	sub_822516B0(ctx, base);
	// lfs f12,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x8227267c
	if (!ctx.cr6.lt) goto loc_8227267C;
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_8227267C:
	// lfs f13,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82272690
	if (!ctx.cr6.lt) goto loc_82272690;
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82272690:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,1996(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f30.f64 = double(temp.f32);
	// bne cr6,0x822726c8
	if (!ctx.cr6.eq) goto loc_822726C8;
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,148(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fadds f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(f28.f64 - ctx.f0.f64));
	// stfs f0,136(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
	// fsubs f0,f29,f11
	ctx.f0.f64 = double(float(f29.f64 - ctx.f11.f64));
	// stfs f0,140(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// b 0x822726d0
	goto loc_822726D0;
loc_822726C8:
	// stfs f30,140(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 140, temp.u32);
	// stfs f30,136(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 136, temp.u32);
loc_822726D0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,21056(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 21056);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x822726f0
	if (ctx.cr6.eq) goto loc_822726F0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82272708
	if (!ctx.cr6.eq) goto loc_82272708;
loc_822726F0:
	// lfs f11,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// fsubs f11,f11,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8227270c
	if (!ctx.cr6.lt) goto loc_8227270C;
loc_82272708:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8227270C:
	// stw r10,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272720
	if (ctx.cr6.eq) goto loc_82272720;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82272738
	if (!ctx.cr6.eq) goto loc_82272738;
loc_82272720:
	// lfs f11,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f11.f64 = double(temp.f32);
	// mr r11,r30
	ctx.r11.u64 = r30.u64;
	// fsubs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fabs f11,f11
	ctx.f11.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// bge cr6,0x8227273c
	if (!ctx.cr6.lt) goto loc_8227273C;
loc_82272738:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_8227273C:
	// stw r11,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8227274c
	if (!ctx.cr6.eq) goto loc_8227274C;
	// stfs f12,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 68, temp.u32);
loc_8227274C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82272758
	if (!ctx.cr6.eq) goto loc_82272758;
	// stfs f13,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
loc_82272758:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82264958
	ctx.lr = 0x82272768;
	sub_82264958(ctx, base);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272a60
	if (ctx.cr6.eq) goto loc_82272A60;
	// lwz r11,244(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 244);
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f30.f64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227278c
	if (ctx.cr0.eq) goto loc_8227278C;
	// lfs f30,136(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 136);
	f30.f64 = double(temp.f32);
	// lfs f0,140(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
loc_8227278C:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8227295c
	if (ctx.cr6.eq) goto loc_8227295C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822728ac
	if (ctx.cr6.eq) goto loc_822728AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8227288c
	if (!ctx.cr6.gt) goto loc_8227288C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8227288c
	if (ctx.cr6.gt) goto loc_8227288C;
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f29,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f29.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x822727E0;
	sub_822D6500(ctx, base);
	// lfs f0,84(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x82272800
	if (ctx.cr6.lt) goto loc_82272800;
	// bl 0x822d60f0
	ctx.lr = 0x822727FC;
	sub_822D60F0(ctx, base);
	// b 0x82272804
	goto loc_82272804;
loc_82272800:
	// bl 0x822d6130
	ctx.lr = 0x82272804;
	sub_822D6130(ctx, base);
loc_82272804:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f29,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f29.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,224
	ctx.r12.s64 = 224;
	// stfiwx f0,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lfs f0,144(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x82272844;
	sub_822D6500(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x82272864
	if (ctx.cr6.lt) goto loc_82272864;
	// bl 0x822d60f0
	ctx.lr = 0x82272860;
	sub_822D60F0(ctx, base);
	// b 0x82272868
	goto loc_82272868;
loc_82272864:
	// bl 0x822d6130
	ctx.lr = 0x82272868;
	sub_822D6130(ctx, base);
loc_82272868:
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lwz r10,224(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 224);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// li r12,228
	ctx.r12.s64 = 228;
	// stfiwx f0,r31,r12
	REX_STORE_U32(r31.u32 + ctx.r12.u32, ctx.f0.u32);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// b 0x82272a0c
	goto loc_82272A0C;
loc_8227288C:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,65535
	r31.u64 = r31.u64 | 65535;
loc_82272894:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8227b2c8
	ctx.lr = 0x8227289C;
	sub_8227B2C8(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8227b2c8
	ctx.lr = 0x822728A4;
	sub_8227B2C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82272548
	goto loc_82272548;
loc_822728AC:
	// lfs f0,144(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,88(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f29,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	f29.f64 = double(temp.f32);
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - f30.f64));
	// fdivs f31,f0,f13
	f31.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x822728DC;
	sub_822D6500(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(f29.f64 + ctx.f0.f64));
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, f29.f64);
	// blt cr6,0x8227290c
	if (ctx.cr6.lt) goto loc_8227290C;
	// bl 0x822d60f0
	ctx.lr = 0x822728F8;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82272920
	goto loc_82272920;
loc_8227290C:
	// bl 0x822d6130
	ctx.lr = 0x82272910;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82272920:
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,228(r31)
	REX_STORE_U32(r31.u32 + 228, ctx.r11.u32);
	// lfs f13,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,68(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x8227294C;
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
	// b 0x82272a08
	goto loc_82272A08;
loc_8227295C:
	// lfs f13,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 148);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f12,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,84(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// lfs f30,0(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 0);
	f30.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fdivs f31,f0,f12
	f31.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x822d6500
	ctx.lr = 0x8227298C;
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
	// blt cr6,0x822729bc
	if (ctx.cr6.lt) goto loc_822729BC;
	// bl 0x822d60f0
	ctx.lr = 0x822729A8;
	sub_822D60F0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x822729d0
	goto loc_822729D0;
loc_822729BC:
	// bl 0x822d6130
	ctx.lr = 0x822729C0;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_822729D0:
	// lfs f0,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r11,224(r31)
	REX_STORE_U32(r31.u32 + 224, ctx.r11.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
	// lfs f0,60(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r27)
	temp.u32 = REX_LOAD_U32(r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f12,72(r31)
	temp.u32 = REX_LOAD_U32(r31.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2000(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2000);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f12,f0
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f12.f64, ctx.f0.f64)));
	// bl 0x822d6130
	ctx.lr = 0x82272A04;
	sub_822D6130(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
loc_82272A08:
	// stfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 80, temp.u32);
loc_82272A0C:
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82272a1c
	if (!ctx.cr6.lt) goto loc_82272A1C;
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
loc_82272A1C:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82272a2c
	if (!ctx.cr6.lt) goto loc_82272A2C;
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
loc_82272A2C:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82272a6c
	if (!ctx.cr6.lt) goto loc_82272A6C;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82272a4c
	if (!ctx.cr6.eq) goto loc_82272A4C;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 228);
	// b 0x82272a58
	goto loc_82272A58;
loc_82272A4C:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82272a68
	if (!ctx.cr6.eq) goto loc_82272A68;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 224);
loc_82272A58:
	// stw r11,172(r31)
	REX_STORE_U32(r31.u32 + 172, ctx.r11.u32);
	// b 0x82272a6c
	goto loc_82272A6C;
loc_82272A60:
	// stw r30,224(r31)
	REX_STORE_U32(r31.u32 + 224, r30.u32);
	// stw r30,228(r31)
	REX_STORE_U32(r31.u32 + 228, r30.u32);
loc_82272A68:
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
loc_82272A6C:
	// lwz r10,220(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82272a90
	if (ctx.cr6.lt) goto loc_82272A90;
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 236);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,236(r31)
	REX_STORE_U32(r31.u32 + 236, ctx.r10.u32);
loc_82272A90:
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x82272A98;
	sub_82255B48(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82272ab0
	if (!ctx.cr0.eq) goto loc_82272AB0;
loc_82272AA4:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x82272894
	goto loc_82272894;
loc_82272AB0:
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82272ae4
	if (!ctx.cr6.gt) goto loc_82272AE4;
loc_82272AC0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82268d58
	ctx.lr = 0x82272ACC;
	sub_82268D58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82272b08
	if (ctx.cr0.lt) goto loc_82272B08;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 172);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82272ac0
	if (ctx.cr6.lt) goto loc_82272AC0;
loc_82272AE4:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272b10
	if (ctx.cr6.eq) goto loc_82272B10;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82272b10
	if (ctx.cr6.eq) goto loc_82272B10;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82272b10
	if (ctx.cr6.eq) goto loc_82272B10;
	// lwz r27,224(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 224);
	// b 0x82272b14
	goto loc_82272B14;
loc_82272B08:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82272894
	goto loc_82272894;
loc_82272B10:
	// lwz r27,228(r31)
	r27.u64 = REX_LOAD_U32(r31.u32 + 228);
loc_82272B14:
	// rlwinm r3,r27,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82255b48
	ctx.lr = 0x82272B1C;
	sub_82255B48(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r3.u32);
	// beq 0x82272aa4
	if (ctx.cr0.eq) goto loc_82272AA4;
	// mr r28,r26
	r28.u64 = r26.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// ble cr6,0x82272b9c
	if (!ctx.cr6.gt) goto loc_82272B9C;
	// mr r30,r26
	r30.u64 = r26.u64;
loc_82272B38:
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
	ctx.lr = 0x82272B54;
	sub_8225B210(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82272b08
	if (ctx.cr0.lt) goto loc_82272B08;
	// lwz r29,44(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x82272b6c
	if (!ctx.cr6.eq) goto loc_82272B6C;
	// lwz r29,0(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 0);
loc_82272B6C:
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x8225e9f8
	ctx.lr = 0x82272B7C;
	sub_8225E9F8(ctx, base);
	// lwz r11,184(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + r30.u32);
	// bl 0x82256880
	ctx.lr = 0x82272B8C;
	sub_82256880(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(r28.s32, r27.s32, ctx.xer);
	// blt cr6,0x82272b38
	if (ctx.cr6.lt) goto loc_82272B38;
loc_82272B9C:
	// stw r27,180(r31)
	REX_STORE_U32(r31.u32 + 180, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82256758
	ctx.lr = 0x82272BA8;
	sub_82256758(ctx, base);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272bbc
	if (ctx.cr6.eq) goto loc_82272BBC;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272BBC;
	sub_82256880(ctx, base);
loc_82272BBC:
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272bd0
	if (ctx.cr6.eq) goto loc_82272BD0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272BD0;
	sub_82256880(ctx, base);
loc_82272BD0:
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272be4
	if (ctx.cr6.eq) goto loc_82272BE4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272BE4;
	sub_82256880(ctx, base);
loc_82272BE4:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272bf8
	if (ctx.cr6.eq) goto loc_82272BF8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272BF8;
	sub_82256880(ctx, base);
loc_82272BF8:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82272c0c
	if (ctx.cr6.eq) goto loc_82272C0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x82256880
	ctx.lr = 0x82272C0C;
	sub_82256880(ctx, base);
loc_82272C0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82256758
	ctx.lr = 0x82272C14;
	sub_82256758(ctx, base);
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822716f0
	ctx.lr = 0x82272C20;
	sub_822716F0(ctx, base);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 236);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82272c74
	if (ctx.cr6.eq) goto loc_82272C74;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272c74
	if (ctx.cr6.eq) goto loc_82272C74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,232(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 232);
	// bl 0x82270af0
	ctx.lr = 0x82272C44;
	sub_82270AF0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82272c68
	goto loc_82272C68;
loc_82272C4C:
	// stw r26,28(r31)
	REX_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// bl 0x8225ed40
	ctx.lr = 0x82272C5C;
	sub_8225ED40(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272c74
	if (ctx.cr6.eq) goto loc_82272C74;
loc_82272C68:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(r30.s32, r29.s32, ctx.xer);
	// ble cr6,0x82272c4c
	if (!ctx.cr6.gt) goto loc_82272C4C;
loc_82272C74:
	// mr r31,r26
	r31.u64 = r26.u64;
	// b 0x82272894
	goto loc_82272894;
}

DEFINE_REX_FUNC(sub_82293198) {
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
	// bl 0x82226af8
	ctx.lr = 0x822931AC;
	sub_82226AF8(ctx, base);
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

DEFINE_REX_FUNC(sub_822933F8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// bl 0x82226ed8
	ctx.lr = 0x82293414;
	sub_82226ED8(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
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

DEFINE_REX_FUNC(sub_82294C80) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x82294C88;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82294ca8
	if (!ctx.cr6.eq) goto loc_82294CA8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// b 0x82294d2c
	goto loc_82294D2C;
loc_82294CA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lhz r9,680(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 680);
	// lhz r11,678(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 678);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// extsh r30,r11
	r30.s64 = ctx.r11.s16;
	// beq 0x82294cec
	if (ctx.cr0.eq) goto loc_82294CEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2008(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2008);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x822d60f0
	ctx.lr = 0x82294CDC;
	sub_822D60F0(ctx, base);
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 86);
	// add r30,r11,r30
	r30.u64 = ctx.r11.u64 + r30.u64;
loc_82294CEC:
	// extsh r11,r30
	ctx.r11.s64 = r30.s16;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lha r11,660(r10)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + 660));
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
loc_82294D2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82299240) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r30,20(r11)
	r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82299270
	if (!ctx.cr6.gt) goto loc_82299270;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_82299270:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822992e4
	if (ctx.cr6.eq) goto loc_822992E4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 12);
	// bl 0x822d4fa0
	ctx.lr = 0x82299288;
	sub_822D4FA0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 20);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 16);
	// subf r9,r30,r9
	ctx.r9.u64 = ctx.r9.u64 - r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stw r10,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subf r10,r30,r10
	ctx.r10.u64 = ctx.r10.u64 - r30.u64;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822992e4
	if (!ctx.cr6.eq) goto loc_822992E4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_822992E4:
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

DEFINE_REX_FUNC(sub_8229E1D0) {
	REX_FUNC_PROLOGUE();
	// addi r10,r3,12004
	ctx.r10.s64 = ctx.r3.s64 + 12004;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8229e200
	if (ctx.cr6.eq) goto loc_8229E200;
	// addi r11,r9,12
	ctx.r11.s64 = ctx.r9.s64 + 12;
loc_8229E1E4:
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// stw r11,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8229e1e4
	if (!ctx.cr6.eq) goto loc_8229E1E4;
loc_8229E200:
	// stw r9,12020(r3)
	REX_STORE_U32(ctx.r3.u32 + 12020, ctx.r9.u32);
	// stw r10,12016(r3)
	REX_STORE_U32(ctx.r3.u32 + 12016, ctx.r10.u32);
	// stw r10,12012(r3)
	REX_STORE_U32(ctx.r3.u32 + 12012, ctx.r10.u32);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229E8B0) {
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
	// lbz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 120);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229e8d8
	if (!ctx.cr0.eq) goto loc_8229E8D8;
loc_8229E8D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8229e928
	goto loc_8229E928;
loc_8229E8D8:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229e8d0
	if (ctx.cr6.eq) goto loc_8229E8D0;
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,31492(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 31492);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x822a9958
	ctx.lr = 0x8229E8F8;
	sub_822A9958(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r6,r10,16
	ctx.r6.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8229dc28
	ctx.lr = 0x8229E928;
	sub_8229DC28(ctx, base);
loc_8229E928:
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

DEFINE_REX_FUNC(sub_8229F8C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8229F8D0;
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
	// beq cr6,0x8229f990
	if (ctx.cr6.eq) goto loc_8229F990;
	// li r29,0
	r29.s64 = 0;
loc_8229F8E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229f928
	if (ctx.cr6.eq) goto loc_8229F928;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// bl 0x8229f8c8
	ctx.lr = 0x8229F924;
	sub_8229F8C8(ctx, base);
	// b 0x8229f93c
	goto loc_8229F93C;
loc_8229F928:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, r29.u32);
loc_8229F93C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229f97c
	if (ctx.cr6.eq) goto loc_8229F97C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r11.u32);
	// lwz r31,8(r31)
	r31.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8229f8e8
	if (!ctx.cr6.eq) goto loc_8229F8E8;
	// b 0x8229f990
	goto loc_8229F990;
loc_8229F97C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r29,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, r29.u32);
loc_8229F990:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822A3C40) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x822186c0
	ctx.lr = 0x822A3C60;
	sub_822186C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
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

DEFINE_REX_FUNC(sub_822A4120) {
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
	ctx.lr = 0x822A4128;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,26
	ctx.r11.s64 = 1703936;
	// stw r4,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// lis r8,44
	ctx.r8.s64 = 2883584;
	// stw r4,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// ori r11,r11,9126
	ctx.r11.u64 = ctx.r11.u64 | 9126;
	// stw r6,88(r3)
	REX_STORE_U32(ctx.r3.u32 + 88, ctx.r6.u32);
	// lis r7,44
	ctx.r7.s64 = 2883584;
	// stw r5,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r5.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// ori r26,r8,9125
	r26.u64 = ctx.r8.u64 | 9125;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// ori r8,r7,33700
	ctx.r8.u64 = ctx.r7.u64 | 33700;
	// stb r10,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r27,0
	r27.s64 = 0;
	// stb r10,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r10,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// li r7,10
	ctx.r7.s64 = 10;
	// stb r11,83(r1)
	REX_STORE_U8(ctx.r1.u32 + 83, ctx.r11.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// stb r27,88(r1)
	REX_STORE_U8(ctx.r1.u32 + 88, r27.u8);
	// li r4,5
	ctx.r4.s64 = 5;
	// stb r9,84(r1)
	REX_STORE_U8(ctx.r1.u32 + 84, ctx.r9.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stb r7,89(r1)
	REX_STORE_U8(ctx.r1.u32 + 89, ctx.r7.u8);
	// stb r6,90(r1)
	REX_STORE_U8(ctx.r1.u32 + 90, ctx.r6.u8);
	// li r25,1
	r25.s64 = 1;
	// stb r4,91(r1)
	REX_STORE_U8(ctx.r1.u32 + 91, ctx.r4.u8);
	// stb r9,92(r1)
	REX_STORE_U8(ctx.r1.u32 + 92, ctx.r9.u8);
loc_822A41BC:
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822a41e0
	if (!ctx.cr0.eq) goto loc_822A41E0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822a41ec
	if (!ctx.cr6.eq) goto loc_822A41EC;
	// rlwinm. r9,r5,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822a41e0
	if (!ctx.cr0.eq) goto loc_822A41E0;
	// rlwinm. r9,r5,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822a41ec
	if (ctx.cr0.eq) goto loc_822A41EC;
loc_822A41E0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_822A41EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x822a41bc
	if (ctx.cr6.lt) goto loc_822A41BC;
	// clrlwi r29,r11,24
	r29.u64 = ctx.r11.u32 & 0xFF;
	// lis r10,5461
	ctx.r10.s64 = 357892096;
	// addi r11,r29,1
	ctx.r11.s64 = r29.s64 + 1;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// li r28,-1
	r28.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// mulli r3,r11,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// ble cr6,0x822a4220
	if (!ctx.cr6.gt) goto loc_822A4220;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_822A4220:
	// bl 0x822c80d0
	ctx.lr = 0x822A4224;
	sub_822C80D0(ctx, base);
	// mulli r29,r29,12
	r29.s64 = static_cast<int64_t>(r29.u64 * static_cast<uint64_t>(12));
	// addi r5,r29,12
	ctx.r5.s64 = r29.s64 + 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x822A4238;
	sub_822D5870(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = r29.u64 + r30.u64;
	// li r9,255
	ctx.r9.s64 = 255;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// sthx r9,r29,r30
	REX_STORE_U16(r29.u32 + r30.u32, ctx.r9.u16);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r28.u32);
	// stw r27,92(r31)
	REX_STORE_U32(r31.u32 + 92, r27.u32);
loc_822A4254:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// slw r8,r25,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r9.u8 & 0x3F));
	// and. r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822a42c4
	if (ctx.cr0.eq) goto loc_822A42C4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lbzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// stb r7,96(r8)
	REX_STORE_U8(ctx.r8.u32 + 96, ctx.r7.u8);
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwzx r5,r5,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	// lbzx r4,r9,r3
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r3.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r7.u32);
	// addi r10,r8,96
	ctx.r10.s64 = ctx.r8.s64 + 96;
	// lbz r8,96(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 96);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stb r4,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, ctx.r4.u8);
	// b 0x822a4354
	goto loc_822A4354;
loc_822A42C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822a4358
	if (!ctx.cr6.eq) goto loc_822A4358;
	// rlwinm. r8,r11,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x822a430c
	if (ctx.cr0.eq) goto loc_822A430C;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// mulli r11,r8,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r7,96(r31)
	REX_STORE_U8(r31.u32 + 96, ctx.r7.u8);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// clrlwi r10,r8,24
	ctx.r10.u64 = ctx.r8.u32 & 0xFF;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, r26.u32);
	// b 0x822a4350
	goto loc_822A4350;
loc_822A430C:
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4358
	if (ctx.cr0.eq) goto loc_822A4358;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lis r7,42
	ctx.r7.s64 = 2752512;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// stb r6,96(r31)
	REX_STORE_U8(r31.u32 + 96, ctx.r6.u8);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// ori r7,r7,9145
	ctx.r7.u64 = ctx.r7.u64 | 9145;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// clrlwi r6,r6,24
	ctx.r6.u64 = ctx.r6.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
loc_822A4350:
	// stb r27,9(r11)
	REX_STORE_U8(ctx.r11.u32 + 9, r27.u8);
loc_822A4354:
	// stb r27,8(r11)
	REX_STORE_U8(ctx.r11.u32 + 8, r27.u8);
loc_822A4358:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x822a4254
	if (ctx.cr6.lt) goto loc_822A4254;
	// lis r28,-32163
	r28.s64 = -2107834368;
	// lwz r26,24(r31)
	r26.u64 = REX_LOAD_U32(r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r29,31492(r28)
	r29.u64 = REX_LOAD_U32(r28.u32 + 31492);
	// bl 0x82225ff8
	ctx.lr = 0x822A437C;
	sub_82225FF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x822a98e0
	ctx.lr = 0x822A438C;
	sub_822A98E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r11.u32);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82226b10
	ctx.lr = 0x822A43A0;
	sub_82226B10(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x822a43b0
	if (ctx.cr6.eq) goto loc_822A43B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80a8
	ctx.lr = 0x822A43B0;
	sub_822C80A8(ctx, base);
loc_822A43B0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 36);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 92);
	// lwz r9,88(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 88);
	// mullw r30,r11,r10
	r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x822a43dc
	if (!ctx.cr6.eq) goto loc_822A43DC;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822c80c8
	ctx.lr = 0x822A43D4;
	sub_822C80C8(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// b 0x822a4450
	goto loc_822A4450;
loc_822A43DC:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x822c80d0
	ctx.lr = 0x822A43E4;
	sub_822C80D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// beq 0x822a4404
	if (ctx.cr0.eq) goto loc_822A4404;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822d5870
	ctx.lr = 0x822A43FC;
	sub_822D5870(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x822a4408
	goto loc_822A4408;
loc_822A4404:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_822A4408:
	// stw r7,28(r31)
	REX_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824047d8
	ctx.lr = 0x822A4420;
	sub_824047D8(ctx, base);
	// lis r11,-17408
	ctx.r11.s64 = -1140850688;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r5,r11,16384
	ctx.r5.u64 = ctx.r11.u64 | 16384;
	// stw r5,20(r31)
	REX_STORE_U32(r31.u32 + 20, ctx.r5.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r3,31492(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 31492);
	// bl 0x822a98e0
	ctx.lr = 0x822A443C;
	sub_822A98E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// bl 0x82404e00
	ctx.lr = 0x822A444C;
	sub_82404E00(ctx, base);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
loc_822A4450:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a4468
	if (!ctx.cr0.eq) goto loc_822A4468;
	// li r4,8
	ctx.r4.s64 = 8;
loc_822A4468:
	// bl 0x822ab508
	ctx.lr = 0x822A446C;
	sub_822AB508(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4488
	if (ctx.cr0.eq) goto loc_822A4488;
	// stb r27,114(r31)
	REX_STORE_U8(r31.u32 + 114, r27.u8);
	// stb r27,101(r31)
	REX_STORE_U8(r31.u32 + 101, r27.u8);
	// stb r27,102(r31)
	REX_STORE_U8(r31.u32 + 102, r27.u8);
	// b 0x822a4494
	goto loc_822A4494;
loc_822A4488:
	// stb r25,114(r31)
	REX_STORE_U8(r31.u32 + 114, r25.u8);
	// stb r25,101(r31)
	REX_STORE_U8(r31.u32 + 101, r25.u8);
	// stb r25,102(r31)
	REX_STORE_U8(r31.u32 + 102, r25.u8);
loc_822A4494:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_822B3448) {
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
	ctx.lr = 0x822B3450;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r4,12
	ctx.r4.s64 = ctx.r4.s64 + 12;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x822d6450
	ctx.lr = 0x822B346C;
	sub_822D6450(ctx, base);
	// li r5,259
	ctx.r5.s64 = 259;
	// addi r4,r28,44
	ctx.r4.s64 = r28.s64 + 44;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x822d6450
	ctx.lr = 0x822B347C;
	sub_822D6450(ctx, base);
	// lbz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 304);
	// stb r11,304(r31)
	REX_STORE_U8(r31.u32 + 304, ctx.r11.u8);
	// lbz r11,305(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 305);
	// stb r11,305(r31)
	REX_STORE_U8(r31.u32 + 305, ctx.r11.u8);
	// lbz r11,328(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 328);
	// stb r11,328(r31)
	REX_STORE_U8(r31.u32 + 328, ctx.r11.u8);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,332(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 332);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,332(r31)
	REX_STORE_U32(r31.u32 + 332, ctx.r10.u32);
	// lwz r10,336(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 336);
	// stw r10,336(r31)
	REX_STORE_U32(r31.u32 + 336, ctx.r10.u32);
	// lwz r11,340(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 340);
	// stw r11,340(r31)
	REX_STORE_U32(r31.u32 + 340, ctx.r11.u32);
	// lwz r11,344(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 344);
	// stw r11,344(r31)
	REX_STORE_U32(r31.u32 + 344, ctx.r11.u32);
	// lwz r11,348(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 348);
	// stw r11,348(r31)
	REX_STORE_U32(r31.u32 + 348, ctx.r11.u32);
	// lwz r11,352(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 352);
	// stw r11,352(r31)
	REX_STORE_U32(r31.u32 + 352, ctx.r11.u32);
	// ld r11,312(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 312);
	// std r11,312(r31)
	REX_STORE_U64(r31.u32 + 312, ctx.r11.u64);
	// ld r11,320(r28)
	ctx.r11.u64 = REX_LOAD_U64(r28.u32 + 320);
	// std r11,320(r31)
	REX_STORE_U64(r31.u32 + 320, ctx.r11.u64);
	// beq 0x822b35f4
	if (ctx.cr0.eq) goto loc_822B35F4;
	// lis r11,409
	ctx.r11.s64 = 26804224;
	// lwz r30,332(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r3,-1
	ctx.r3.s64 = -1;
	// ori r11,r11,39321
	ctx.r11.u64 = ctx.r11.u64 | 39321;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// mulli r11,r30,160
	ctx.r11.s64 = static_cast<int64_t>(r30.u64 * static_cast<uint64_t>(160));
	// ble cr6,0x822b3500
	if (!ctx.cr6.gt) goto loc_822B3500;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822B3500:
	// li r10,-17
	ctx.r10.s64 = -17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x822b3510
	if (ctx.cr6.gt) goto loc_822B3510;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
loc_822B3510:
	// bl 0x822c80d0
	ctx.lr = 0x822B3514;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b3544
	if (ctx.cr0.eq) goto loc_822B3544;
	// addi r27,r3,16
	r27.s64 = ctx.r3.s64 + 16;
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r29,r27
	r29.u64 = r27.u64;
	// b 0x822b3538
	goto loc_822B3538;
loc_822B352C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8229d5f8
	ctx.lr = 0x822B3534;
	sub_8229D5F8(ctx, base);
	// addi r29,r29,160
	r29.s64 = r29.s64 + 160;
loc_822B3538:
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x822b352c
	if (!ctx.cr0.lt) goto loc_822B352C;
	// b 0x822b3548
	goto loc_822B3548;
loc_822B3544:
	// li r27,0
	r27.s64 = 0;
loc_822B3548:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r29,0
	r29.s64 = 0;
	// stw r27,8(r31)
	REX_STORE_U32(r31.u32 + 8, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b35a0
	if (!ctx.cr6.gt) goto loc_822B35A0;
	// li r30,0
	r30.s64 = 0;
loc_822B3560:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// add r4,r10,r30
	ctx.r4.u64 = ctx.r10.u64 + r30.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + r30.u64;
	// bl 0x8229ecb8
	ctx.lr = 0x822B3574;
	sub_8229ECB8(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + r30.u64;
	// addi r30,r30,160
	r30.s64 = r30.s64 + 160;
	// lwz r10,144(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 144);
	// stw r10,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x822b3560
	if (ctx.cr6.lt) goto loc_822B3560;
loc_822B35A0:
	// lwz r11,332(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 332);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822b361c
	if (!ctx.cr6.gt) goto loc_822B361C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r8,336(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 336);
loc_822B35BC:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,144(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 144);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x822b35e4
	if (ctx.cr6.eq) goto loc_822B35E4;
	// lwz r7,332(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 332);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x822b35bc
	if (ctx.cr6.lt) goto loc_822B35BC;
	// b 0x822b361c
	goto loc_822B361C;
loc_822B35E4:
	// mulli r11,r9,160
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(160));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// b 0x822b361c
	goto loc_822B361C;
loc_822B35F4:
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x822c80d0
	ctx.lr = 0x822B35FC;
	sub_822C80D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822b360c
	if (ctx.cr0.eq) goto loc_822B360C;
	// bl 0x8229d5f8
	ctx.lr = 0x822B3608;
	sub_8229D5F8(ctx, base);
	// b 0x822b3610
	goto loc_822B3610;
loc_822B360C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822B3610:
	// stw r3,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(r28.u32 + 4);
	// bl 0x8229ecb8
	ctx.lr = 0x822B361C;
	sub_8229ECB8(ctx, base);
loc_822B361C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_822BA568) {
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
	// bl 0x822ba358
	ctx.lr = 0x822BA580;
	sub_822BA358(ctx, base);
	// lwz r3,72(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822ba590
	if (ctx.cr6.eq) goto loc_822BA590;
	// bl 0x822c80a8
	ctx.lr = 0x822BA590;
	sub_822C80A8(ctx, base);
loc_822BA590:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,72(r31)
	REX_STORE_U32(r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822BBBB8) {
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
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f20
	ctx.lr = 0x822BBBC8;
	// lfs f12,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f3,f0,f12
	ctx.f3.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f8,f11,f12
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// lfs f5,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f28,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	f28.f64 = double(temp.f32);
	// lfs f13,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f6,f28,f12
	ctx.f6.f64 = double(float(f28.f64 - ctx.f12.f64));
	// lfs f10,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f1,f13,f5
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fsubs f7,f10,f5
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// lfs f2,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f29,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f27,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	f27.f64 = double(temp.f32);
	// fsubs f9,f29,f2
	ctx.f9.f64 = double(float(f29.f64 - ctx.f2.f64));
	// lfs f12,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f5,f27,f5
	ctx.f5.f64 = double(float(f27.f64 - ctx.f5.f64));
	// fsubs f25,f12,f2
	f25.f64 = double(float(ctx.f12.f64 - ctx.f2.f64));
	// lfs f26,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	f26.f64 = double(temp.f32);
	// fsubs f4,f26,f2
	ctx.f4.f64 = double(float(f26.f64 - ctx.f2.f64));
	// lfs f30,24124(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24124);
	f30.f64 = double(temp.f32);
	// fmuls f31,f3,f8
	f31.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// fmuls f3,f3,f6
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64));
	// fmadds f31,f1,f7,f31
	f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f7.f64, f31.f64)));
	// fmadds f3,f1,f5,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f3.f64)));
	// fmadds f31,f25,f9,f31
	f31.f64 = double(float(std::fma(f25.f64, ctx.f9.f64, f31.f64)));
	// fmadds f25,f25,f4,f3
	f25.f64 = double(float(std::fma(f25.f64, ctx.f4.f64, ctx.f3.f64)));
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x822bbc6c
	if (ctx.cr6.gt) goto loc_822BBC6C;
	// fcmpu cr6,f25,f30
	ctx.cr6.compare(f25.f64, f30.f64);
	// bgt cr6,0x822bbc6c
	if (ctx.cr6.gt) goto loc_822BBC6C;
	// lfs f0,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f2,0(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822bbe58
	goto loc_822BBE58;
loc_822BBC6C:
	// fsubs f1,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f11.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f24,f13,f10
	f24.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f23,f12,f29
	f23.f64 = double(float(ctx.f12.f64 - f29.f64));
	// lfs f3,23044(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 23044);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f22,f1,f8
	f22.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f1,f1,f6
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// fmadds f22,f24,f7,f22
	f22.f64 = double(float(std::fma(f24.f64, ctx.f7.f64, f22.f64)));
	// fmadds f24,f24,f5,f1
	f24.f64 = double(float(std::fma(f24.f64, ctx.f5.f64, ctx.f1.f64)));
	// fmadds f1,f23,f9,f22
	ctx.f1.f64 = double(float(std::fma(f23.f64, ctx.f9.f64, f22.f64)));
	// fmadds f24,f23,f4,f24
	f24.f64 = double(float(std::fma(f23.f64, ctx.f4.f64, f24.f64)));
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// blt cr6,0x822bbcc0
	if (ctx.cr6.lt) goto loc_822BBCC0;
	// fcmpu cr6,f24,f1
	ctx.cr6.compare(f24.f64, ctx.f1.f64);
	// bgt cr6,0x822bbcc0
	if (ctx.cr6.gt) goto loc_822BBCC0;
	// lfs f0,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f29,0(r3)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_822BBCB8:
	// stfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x822bbe58
	goto loc_822BBE58;
loc_822BBCC0:
	// fmuls f11,f1,f25
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * f25.f64));
	// fmsubs f23,f24,f31,f11
	f23.f64 = double(float(std::fma(f24.f64, f31.f64, -ctx.f11.f64)));
	// fcmpu cr6,f23,f30
	ctx.cr6.compare(f23.f64, f30.f64);
	// bgt cr6,0x822bbd10
	if (ctx.cr6.gt) goto loc_822BBD10;
	// fcmpu cr6,f31,f3
	ctx.cr6.compare(f31.f64, ctx.f3.f64);
	// blt cr6,0x822bbd10
	if (ctx.cr6.lt) goto loc_822BBD10;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, f30.f64);
	// bgt cr6,0x822bbd10
	if (ctx.cr6.gt) goto loc_822BBD10;
	// fsubs f0,f31,f1
	ctx.f0.f64 = double(float(f31.f64 - ctx.f1.f64));
	// fdivs f0,f31,f0
	ctx.f0.f64 = double(float(f31.f64 / ctx.f0.f64));
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f10,f8,f0
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
loc_822BBCF4:
	// lfs f13,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// b 0x822bbe50
	goto loc_822BBE50;
loc_822BBD10:
	// fsubs f0,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - f28.f64));
	// fsubs f13,f13,f27
	ctx.f13.f64 = double(float(ctx.f13.f64 - f27.f64));
	// fsubs f12,f12,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 - f26.f64));
	// fmuls f11,f0,f6
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f6.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmadds f11,f13,f5,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f11.f64)));
	// fmadds f13,f13,f7,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f7.f64, ctx.f0.f64)));
	// fmadds f0,f12,f4,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f4.f64, ctx.f11.f64)));
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f13.f64)));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x822bbd58
	if (ctx.cr6.lt) goto loc_822BBD58;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x822bbd58
	if (ctx.cr6.gt) goto loc_822BBD58;
	// lfs f0,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f26,0(r3)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f28,4(r3)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f27,8(r3)
	temp.f32 = float(f27.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// b 0x822bbcb8
	goto loc_822BBCB8;
loc_822BBD58:
	// fmuls f12,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmsubs f11,f13,f25,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, f25.f64, -ctx.f12.f64)));
	// fcmpu cr6,f11,f30
	ctx.cr6.compare(ctx.f11.f64, f30.f64);
	// bgt cr6,0x822bbd90
	if (ctx.cr6.gt) goto loc_822BBD90;
	// fcmpu cr6,f25,f3
	ctx.cr6.compare(f25.f64, ctx.f3.f64);
	// blt cr6,0x822bbd90
	if (ctx.cr6.lt) goto loc_822BBD90;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, f30.f64);
	// bgt cr6,0x822bbd90
	if (ctx.cr6.gt) goto loc_822BBD90;
	// fsubs f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 - ctx.f0.f64));
	// fdivs f0,f25,f0
	ctx.f0.f64 = double(float(f25.f64 / ctx.f0.f64));
	// fmuls f11,f4,f0
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f10,f6,f0
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// b 0x822bbcf4
	goto loc_822BBCF4;
loc_822BBD90:
	// fmuls f12,f13,f24
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * f24.f64));
	// fmsubs f10,f0,f1,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f0.f64, ctx.f1.f64, -ctx.f12.f64)));
	// fcmpu cr6,f10,f30
	ctx.cr6.compare(ctx.f10.f64, f30.f64);
	// bgt cr6,0x822bbdf8
	if (ctx.cr6.gt) goto loc_822BBDF8;
	// fsubs f12,f24,f1
	ctx.f12.f64 = double(float(f24.f64 - ctx.f1.f64));
	// fcmpu cr6,f12,f3
	ctx.cr6.compare(ctx.f12.f64, ctx.f3.f64);
	// blt cr6,0x822bbdf8
	if (ctx.cr6.lt) goto loc_822BBDF8;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f3
	ctx.cr6.compare(ctx.f0.f64, ctx.f3.f64);
	// blt cr6,0x822bbdf8
	if (ctx.cr6.lt) goto loc_822BBDF8;
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f13,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f26,f29
	ctx.f10.f64 = double(float(f26.f64 - f29.f64));
	// fsubs f9,f28,f13
	ctx.f9.f64 = double(float(f28.f64 - ctx.f13.f64));
	// fsubs f8,f27,f11
	ctx.f8.f64 = double(float(f27.f64 - ctx.f11.f64));
	// fdivs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fmuls f12,f10,f0
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f10,f9,f0
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f12,f29,f12
	ctx.f12.f64 = double(float(f29.f64 + ctx.f12.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// b 0x822bbe54
	goto loc_822BBE54;
loc_822BBDF8:
	// fadds f13,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,1992(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f13,f23
	ctx.f13.f64 = double(float(ctx.f13.f64 + f23.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f0,f0,f23
	ctx.f0.f64 = double(float(ctx.f0.f64 * f23.f64));
	// fmuls f11,f9,f13
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fmuls f8,f4,f0
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f7,f6,f0
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fadds f11,f2,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fadds f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fadds f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f8.f64));
	// fadds f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
loc_822BBE50:
	// stfs f11,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
loc_822BBE54:
	// stfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
loc_822BBE58:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x822d4f6c
	ctx.lr = 0x822BBE60;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822CAB38) {
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
	ctx.lr = 0x822CAB40;
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
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f11,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x822a70e8
	ctx.lr = 0x822CAB98;
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
	ctx.lr = 0x822CABE0;
	sub_822A70E8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f31,f13
	ctx.f10.f64 = double(float(f31.f64 * ctx.f13.f64));
	// fmuls f9,f12,f29
	ctx.f9.f64 = double(float(ctx.f12.f64 * f29.f64));
	// stfs f12,32(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(r31.u32 + 32, temp.u32);
	// stfs f29,8(r31)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
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
	// stfs f31,24(r31)
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 24, temp.u32);
	// stfs f30,40(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f11,1992(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1992);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f9,f30,f13,f9
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f13.f64, -ctx.f9.f64)));
	// stfs f9,20(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r31.u32 + 20, temp.u32);
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
	// lfs f7,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f0,f5,f0
	ctx.f0.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f0,f7,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f0.f64)));
	// fnmadds f0,f12,f6,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f0.f64)));
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f0,f0,f8,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f12.f64)));
	// fnmadds f0,f10,f13,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f0.f64)));
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f13,0(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * f31.f64));
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, f29.f64, ctx.f0.f64)));
	// lfs f13,8(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fnmadds f0,f30,f13,f0
	ctx.f0.f64 = double(float(-std::fma(f30.f64, ctx.f13.f64, ctx.f0.f64)));
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

DEFINE_REX_FUNC(sub_822D1FA0) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lfs f0,-11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11768);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 8, temp.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// bl 0x822c88c0
	ctx.lr = 0x822D1FD8;
	sub_822C88C0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r31,16
	ctx.r11.s64 = r31.s64 + 16;
	// lfs f0,1996(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1996);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 72, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822D1FF0:
	// stw r30,-16(r11)
	REX_STORE_U32(ctx.r11.u32 + -16, r30.u32);
	// stw r30,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822d1ff0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D1FF0;
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// addi r10,r31,76
	ctx.r10.s64 = r31.s64 + 76;
	// stw r11,76(r31)
	REX_STORE_U32(r31.u32 + 76, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822D4198) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x822D41A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x822d41c8
	if (!ctx.cr6.lt) goto loc_822D41C8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r11,26364
	ctx.r3.s64 = ctx.r11.s64 + 26364;
	// bl 0x822d45c0
	ctx.lr = 0x822D41C8;
	sub_822D45C0(ctx, base);
loc_822D41C8:
	// subf r30,r28,r11
	r30.u64 = ctx.r11.u64 - r28.u64;
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, r30.u32, ctx.xer);
	// bge cr6,0x822d41d8
	if (!ctx.cr6.lt) goto loc_822D41D8;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
loc_822D41D8:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(r31.u32, r29.u32, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x822d4204
	if (!ctx.cr6.eq) goto loc_822D4204;
	// li r5,-1
	ctx.r5.s64 = -1;
	// add r4,r30,r28
	ctx.r4.u64 = r30.u64 + r28.u64;
	// bl 0x822d3180
	ctx.lr = 0x822D41F0;
	sub_822D3180(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822d3180
	ctx.lr = 0x822D4200;
	sub_822D3180(ctx, base);
	// b 0x822d4270
	goto loc_822D4270;
loc_822D4204:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d3fd0
	ctx.lr = 0x822D4210;
	sub_822D3FD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4270
	if (ctx.cr0.eq) goto loc_822D4270;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d4228
	if (ctx.cr6.lt) goto loc_822D4228;
	// lwz r29,0(r29)
	r29.u64 = REX_LOAD_U32(r29.u32 + 0);
loc_822D4228:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d423c
	if (ctx.cr6.lt) goto loc_822D423C;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d4240
	goto loc_822D4240;
loc_822D423C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_822D4240:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r29,r28
	ctx.r4.u64 = r29.u64 + r28.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x822D424C;
	sub_822D4FA0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// stw r30,16(r31)
	REX_STORE_U32(r31.u32 + 16, r30.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x822d4264
	if (ctx.cr6.lt) goto loc_822D4264;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 0);
	// b 0x822d4268
	goto loc_822D4268;
loc_822D4264:
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
loc_822D4268:
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r11,r30
	REX_STORE_U8(ctx.r11.u32 + r30.u32, ctx.r10.u8);
loc_822D4270:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_822D6948) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822D6950;
	// stwu r1,-2832(r1)
	ea = -2832 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822d696c
	if (ctx.cr6.eq) goto loc_822D696C;
	// bl 0x822dcaf8
	ctx.lr = 0x822D696C;
	sub_822DCAF8(ctx, base);
loc_822D696C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x822d5870
	ctx.lr = 0x822D6984;
	sub_822D5870(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r5,2624
	ctx.r5.s64 = 2624;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822d5870
	ctx.lr = 0x822D69A4;
	sub_822D5870(ctx, base);
	// lwz r11,2824(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 2824);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x8220bec0
	ctx.lr = 0x822D69BC;
	sub_8220BEC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8220bf90
	ctx.lr = 0x822D69C4;
	sub_8220BF90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d69dc
	if (!ctx.cr0.eq) goto loc_822D69DC;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(r31.s32, -1, ctx.xer);
	// beq cr6,0x822d69dc
	if (ctx.cr6.eq) goto loc_822D69DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dcaf8
	ctx.lr = 0x822D69DC;
	sub_822DCAF8(ctx, base);
loc_822D69DC:
	// addi r1,r1,2832
	ctx.r1.s64 = ctx.r1.s64 + 2832;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(__savevmx_65) {
	REX_FUNC_PROLOGUE();
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
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(__restvmx_127) {
	REX_FUNC_PROLOGUE();
	PPCVRegister v127{};
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D8D78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,31912(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32172
	ctx.r10.s64 = -2108424192;
	// addi r11,r11,26928
	ctx.r11.s64 = ctx.r11.s64 + 26928;
	// addi r9,r10,-2128
	ctx.r9.s64 = ctx.r10.s64 + -2128;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lfd f13,-2128(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -2128);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// fmul f4,f1,f0
	ctx.f4.f64 = ctx.f1.f64 * ctx.f0.f64;
	// lfd f12,8(r9)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// lfd f10,32(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lfd f11,27040(r8)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r8.u32 + 27040);
	// lfd f9,80(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f8,27032(r7)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r7.u32 + 27032);
	// lfd f7,27024(r10)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r10.u32 + 27024);
	// lfd f6,64(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f0,48(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f5,27016(r6)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r6.u32 + 27016);
	// fctid f4,f4
	ctx.f4.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f4.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f4.u64);
	// ld r10,-16(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// fnmsub f13,f13,f4,f1
	ctx.f13.f64 = -std::fma(ctx.f13.f64, ctx.f4.f64, -ctx.f1.f64);
	// fnmsub f13,f12,f4,f13
	ctx.f13.f64 = -std::fma(ctx.f12.f64, ctx.f4.f64, -ctx.f13.f64);
	// fmul f12,f13,f13
	ctx.f12.f64 = ctx.f13.f64 * ctx.f13.f64;
	// fnmsub f11,f12,f11,f10
	ctx.f11.f64 = -std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f10.f64);
	// fmsub f10,f12,f9,f8
	ctx.f10.f64 = std::fma(ctx.f12.f64, ctx.f9.f64, -ctx.f8.f64);
	// fmsub f11,f11,f12,f7
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, -ctx.f7.f64);
	// fmadd f10,f10,f12,f6
	ctx.f10.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f6.f64);
	// fmadd f11,f11,f12,f0
	ctx.f11.f64 = std::fma(ctx.f11.f64, ctx.f12.f64, ctx.f0.f64);
	// fmsub f10,f10,f12,f5
	ctx.f10.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, -ctx.f5.f64);
	// fmul f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 * ctx.f13.f64;
	// fmadd f0,f10,f12,f0
	ctx.f0.f64 = std::fma(ctx.f10.f64, ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x822d8e2c
	if (ctx.cr6.eq) goto loc_822D8E2C;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x822d8e30
	goto loc_822D8E30;
loc_822D8E2C:
	// fdiv f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64 / ctx.f0.f64;
loc_822D8E30:
	// fabs f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lfd f12,-2064(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -2064);
	// fsub f13,f11,f13
	ctx.f13.f64 = ctx.f11.f64 - ctx.f13.f64;
	// fsel f1,f13,f12,f0
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBE34) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DBE98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32210
	ctx.r11.s64 = -2110914560;
	// lis r10,-32163
	ctx.r10.s64 = -2107834368;
	// addi r11,r11,-16920
	ctx.r11.s64 = ctx.r11.s64 + -16920;
	// stw r11,32264(r10)
	REX_STORE_U32(ctx.r10.u32 + 32264, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822DC808) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x822DC810;
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfd f2,280(r1)
	REX_STORE_U64(ctx.r1.u32 + 280, ctx.f2.u64);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// stfd f1,272(r1)
	REX_STORE_U64(ctx.r1.u32 + 272, ctx.f1.u64);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x822dc310
	ctx.lr = 0x822DC840;
	sub_822DC310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822dc878
	if (!ctx.cr0.eq) goto loc_822DC878;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822dbf08
	ctx.lr = 0x822DC874;
	sub_822DBF08(ctx, base);
	// lwz r30,292(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
loc_822DC878:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822dc5b0
	ctx.lr = 0x822DC880;
	sub_822DC5B0(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// lwz r11,176(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822dc8b8
	if (!ctx.cr6.eq) goto loc_822DC8B8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x822dc8b8
	if (ctx.cr6.eq) goto loc_822DC8B8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f3,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfd f2,31912(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
	// bl 0x822dc5f8
	ctx.lr = 0x822DC8B4;
	sub_822DC5F8(ctx, base);
	// b 0x822dc8d0
	goto loc_822DC8D0;
loc_822DC8B8:
	// bl 0x822dc568
	ctx.lr = 0x822DC8BC;
	sub_822DC568(ctx, base);
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// bl 0x822dc9d0
	ctx.lr = 0x822DC8CC;
	sub_822DC9D0(ctx, base);
	// lfd f1,280(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 280);
loc_822DC8D0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_822E1818) {
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
	ctx.lr = 0x822E1820;
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	REX_STORE_U32(r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,84(r31)
	REX_STORE_U32(r31.u32 + 84, r26.u32);
	// stw r26,88(r31)
	REX_STORE_U32(r31.u32 + 88, r26.u32);
	// bgt cr6,0x822e18f4
	if (ctx.cr6.gt) goto loc_822E18F4;
	// beq cr6,0x822e1870
	if (ctx.cr6.eq) goto loc_822E1870;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x822e1888
	if (ctx.cr6.eq) goto loc_822E1888;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x822e1870
	if (ctx.cr6.eq) goto loc_822E1870;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x822e1920
	if (ctx.cr6.eq) goto loc_822E1920;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x822e190c
	if (!ctx.cr6.eq) goto loc_822E190C;
loc_822E1870:
	// bl 0x822d6f20
	ctx.lr = 0x822E1874;
	sub_822D6F20(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	REX_STORE_U32(r31.u32 + 88, r27.u32);
	// bne 0x822e1898
	if (!ctx.cr0.eq) goto loc_822E1898;
loc_822E1880:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x822e1a98
	goto loc_822E1A98;
loc_822E1888:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r30,r11,-30520
	r30.s64 = ctx.r11.s64 + -30520;
	// lwz r11,-30520(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30520);
	// b 0x822e1958
	goto loc_822E1958;
loc_822E1898:
	// lwz r10,92(r27)
	ctx.r10.u64 = REX_LOAD_U32(r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r8,30084(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 30084);
loc_822E18A8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, r29.s32, ctx.xer);
	// beq cr6,0x822e18c8
	if (ctx.cr6.eq) goto loc_822E18C8;
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822e18a8
	if (ctx.cr6.lt) goto loc_822E18A8;
loc_822E18C8:
	// mulli r9,r8,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e18e4
	if (!ctx.cr6.lt) goto loc_822E18E4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, r29.s32, ctx.xer);
	// beq cr6,0x822e18e8
	if (ctx.cr6.eq) goto loc_822E18E8;
loc_822E18E4:
	// mr r11,r26
	ctx.r11.u64 = r26.u64;
loc_822E18E8:
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e1960
	goto loc_822E1960;
loc_822E18F4:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(r29.s32, 15, ctx.xer);
	// beq cr6,0x822e1948
	if (ctx.cr6.eq) goto loc_822E1948;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(r29.s32, 21, ctx.xer);
	// beq cr6,0x822e1934
	if (ctx.cr6.eq) goto loc_822E1934;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(r29.s32, 22, ctx.xer);
	// beq cr6,0x822e1920
	if (ctx.cr6.eq) goto loc_822E1920;
loc_822E190C:
	// bl 0x822db6c0
	ctx.lr = 0x822E1910;
	sub_822DB6C0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x822d6910
	ctx.lr = 0x822E191C;
	sub_822D6910(ctx, base);
	// b 0x822e1880
	goto loc_822E1880;
loc_822E1920:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,-30520
	ctx.r11.s64 = ctx.r11.s64 + -30520;
	// addi r30,r11,8
	r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e1958
	goto loc_822E1958;
loc_822E1934:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,-30520
	ctx.r11.s64 = ctx.r11.s64 + -30520;
	// addi r30,r11,4
	r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822e1958
	goto loc_822E1958;
loc_822E1948:
	// lis r11,-32162
	ctx.r11.s64 = -2107768832;
	// addi r11,r11,-30520
	ctx.r11.s64 = ctx.r11.s64 + -30520;
	// addi r30,r11,12
	r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822E1958:
	// li r28,1
	r28.s64 = 1;
	// stw r28,84(r31)
	REX_STORE_U32(r31.u32 + 84, r28.u32);
loc_822E1960:
	// stw r11,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x822e1a94
	if (ctx.cr6.eq) goto loc_822E1A94;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e197c
	if (!ctx.cr6.eq) goto loc_822E197C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x822d6400
	ctx.lr = 0x822E197C;
	sub_822D6400(ctx, base);
loc_822E197C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// beq cr6,0x822e198c
	if (ctx.cr6.eq) goto loc_822E198C;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x822dbd80
	ctx.lr = 0x822E198C;
	sub_822DBD80(ctx, base);
loc_822E198C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// beq cr6,0x822e19ac
	if (ctx.cr6.eq) goto loc_822E19AC;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(r29.s32, 11, ctx.xer);
	// beq cr6,0x822e19ac
	if (ctx.cr6.eq) goto loc_822E19AC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(r29.s32, 4, ctx.xer);
	// bne cr6,0x822e19d0
	if (!ctx.cr6.eq) goto loc_822E19D0;
loc_822E19AC:
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	REX_STORE_U32(r27.u32 + 96, r26.u32);
	// bne cr6,0x822e1a20
	if (!ctx.cr6.eq) goto loc_822E1A20;
	// lwz r11,100(r27)
	ctx.r11.u64 = REX_LOAD_U32(r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	REX_STORE_U32(r27.u32 + 100, ctx.r10.u32);
loc_822E19D0:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(r29.s32, 8, ctx.xer);
	// bne cr6,0x822e1a20
	if (!ctx.cr6.eq) goto loc_822E1A20;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lwz r10,30072(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 30072);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r10.u32);
loc_822E19EC:
	// lwz r9,30076(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 30076);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x822e1a24
	if (!ctx.cr6.lt) goto loc_822E1A24;
	// lwz r9,92(r27)
	ctx.r9.u64 = REX_LOAD_U32(r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// lwz r10,30072(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 30072);
	// b 0x822e19ec
	goto loc_822E19EC;
loc_822E1A20:
	// stw r26,0(r30)
	REX_STORE_U32(r30.u32 + 0, r26.u32);
loc_822E1A24:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = r31.s64 + 160;
	// bl 0x822e1ac0
	ctx.lr = 0x822E1A30;
	ctx.r26 = r26;
	ctx.r27 = r27;
	ctx.r28 = r28;
	ctx.r29 = r29;
	ctx.r30 = r30;
	ctx.r31 = r31;
	sub_822E1AC0(ctx, base);
	r26 = ctx.r26;
	r27 = ctx.r27;
	r28 = ctx.r28;
	r29 = ctx.r29;
	r30 = ctx.r30;
	r31 = ctx.r31;
	// lwz r30,180(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x822e1a58
	if (!ctx.cr6.eq) goto loc_822E1A58;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = REX_LOAD_U32(r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x822E1A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x822e1a64
	goto loc_822E1A64;
loc_822E1A58:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bctrl 
	ctx.lr = 0x822E1A60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	r29.u64 = REX_LOAD_U32(r31.u32 + 88);
loc_822E1A64:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// beq cr6,0x822e1a7c
	if (ctx.cr6.eq) goto loc_822E1A7C;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(r30.s32, 11, ctx.xer);
	// beq cr6,0x822e1a7c
	if (ctx.cr6.eq) goto loc_822E1A7C;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(r30.s32, 4, ctx.xer);
	// bne cr6,0x822e1a94
	if (!ctx.cr6.eq) goto loc_822E1A94;
loc_822E1A7C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	REX_STORE_U32(r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x822e1a94
	if (!ctx.cr6.eq) goto loc_822E1A94;
	// lwz r11,100(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 100);
	// stw r11,100(r29)
	REX_STORE_U32(r29.u32 + 100, ctx.r11.u32);
loc_822E1A94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822E1A98:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822EEEE8) {
	REX_FUNC_PROLOGUE();
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EEF20) {
	REX_FUNC_PROLOGUE();
	// stw r4,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822EF108) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x82200758
	ctx.lr = 0x822EF11C;
	sub_82200758(ctx, base);
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

DEFINE_REX_FUNC(sub_822F0A10) {
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
	ctx.lr = 0x822F0A18;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f9490
	ctx.lr = 0x822F0A4C;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0b80
	if (ctx.cr6.lt) goto loc_822F0B80;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F0A68;
	sub_822D5870(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,0(r26)
	r30.u64 = REX_LOAD_U32(r26.u32 + 0);
	// stw r27,524(r30)
	REX_STORE_U32(r30.u32 + 524, r27.u32);
	// stw r28,528(r30)
	REX_STORE_U32(r30.u32 + 528, r28.u32);
	// bl 0x822f9490
	ctx.lr = 0x822F0A88;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0b80
	if (ctx.cr6.lt) goto loc_822F0B80;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822F0AA4:
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x822f0aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822F0AA4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f9490
	ctx.lr = 0x822F0AC0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0b80
	if (ctx.cr6.lt) goto loc_822F0B80;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F0ADC;
	sub_822D5870(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f9490
	ctx.lr = 0x822F0AF0;
	sub_822F9490(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0b80
	if (ctx.cr6.lt) goto loc_822F0B80;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x822F0B0C;
	sub_822D5870(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r10,2456
	ctx.r4.s64 = ctx.r10.s64 + 2456;
	// addi r7,r30,572
	ctx.r7.s64 = r30.s64 + 572;
	// stw r9,0(r30)
	REX_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r8,4(r30)
	REX_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r30)
	REX_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r11,532(r30)
	REX_STORE_U32(r30.u32 + 532, ctx.r11.u32);
	// stw r29,608(r30)
	REX_STORE_U32(r30.u32 + 608, r29.u32);
	// bl 0x822f9760
	ctx.lr = 0x822F0B4C;
	sub_822F9760(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f0b80
	if (ctx.cr6.lt) goto loc_822F0B80;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// addi r7,r30,568
	ctx.r7.s64 = r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,2504
	ctx.r4.s64 = ctx.r11.s64 + 2504;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f9760
	ctx.lr = 0x822F0B74;
	sub_822F9760(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x822f0bf0
	if (!ctx.cr6.lt) goto loc_822F0BF0;
loc_822F0B80:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0b9c
	if (ctx.cr6.eq) goto loc_822F0B9C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F0B9C;
	sub_822F94E8(ctx, base);
loc_822F0B9C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0bb8
	if (ctx.cr6.eq) goto loc_822F0BB8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F0BB8;
	sub_822F94E8(ctx, base);
loc_822F0BB8:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0bd4
	if (ctx.cr6.eq) goto loc_822F0BD4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F0BD4;
	sub_822F94E8(ctx, base);
loc_822F0BD4:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f0bf0
	if (ctx.cr6.eq) goto loc_822F0BF0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822f94e8
	ctx.lr = 0x822F0BF0;
	sub_822F94E8(ctx, base);
loc_822F0BF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_822F9080) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,127
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 127, ctx.xer);
	// blt cr6,0x822f90a8
	if (ctx.cr6.lt) goto loc_822F90A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_822F90A8:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F9C68) {
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
	ctx.lr = 0x822F9C70;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// std r27,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, r27.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + 16);
	// mr r30,r27
	r30.u64 = r27.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// mr r28,r27
	r28.u64 = r27.u64;
	// bl 0x822f9900
	ctx.lr = 0x822F9CA0;
	sub_822F9900(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9d94
	if (ctx.cr6.lt) goto loc_822F9D94;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9cc8
	if (!ctx.cr6.eq) goto loc_822F9CC8;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822F9CC8:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9d64
	if (ctx.cr6.eq) goto loc_822F9D64;
loc_822F9CD4:
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfe r8,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bne cr6,0x822f9d0c
	if (!ctx.cr6.eq) goto loc_822F9D0C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f9d0c
	if (!ctx.cr6.eq) goto loc_822F9D0C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822f9d0c
	if (!ctx.cr6.eq) goto loc_822F9D0C;
	// ld r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// li r30,1
	r30.s64 = 1;
	// std r10,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r10.u64);
loc_822F9D0C:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f9d38
	if (!ctx.cr6.eq) goto loc_822F9D38;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822f9d38
	if (!ctx.cr6.eq) goto loc_822F9D38;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822f9d48
	if (!ctx.cr6.eq) goto loc_822F9D48;
loc_822F9D38:
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f9cd4
	if (!ctx.cr6.eq) goto loc_822F9CD4;
	// b 0x822f9d4c
	goto loc_822F9D4C;
loc_822F9D48:
	// li r28,1
	r28.s64 = 1;
loc_822F9D4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x822f9d9c
	if (!ctx.cr6.eq) goto loc_822F9D9C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822f9d64
	if (!ctx.cr6.eq) goto loc_822F9D64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x822f9da4
	if (!ctx.cr6.eq) goto loc_822F9DA4;
loc_822F9D64:
	// ld r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U64(r29.u32 + 56);
	// std r11,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r11.u64);
loc_822F9D6C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x822F9D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822f9d94
	if (ctx.cr6.lt) goto loc_822F9D94;
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// std r11,56(r29)
	REX_STORE_U64(r29.u32 + 56, ctx.r11.u64);
loc_822F9D94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
loc_822F9D9C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(r28.s32, 0, ctx.xer);
	// bne cr6,0x822f9d6c
	if (!ctx.cr6.eq) goto loc_822F9D6C;
loc_822F9DA4:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// std r27,0(r31)
	REX_STORE_U64(r31.u32 + 0, r27.u64);
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82303208) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e58
	ctx.lr = 0x82303210;
	// stfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, f29.u64);
	// stfd f30,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, f30.u64);
	// stfd f31,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r25,0
	r25.s64 = 0;
	// lwz r31,0(r3)
	r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r17,r25
	r17.u64 = r25.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82303b60
	if (ctx.cr6.eq) goto loc_82303B60;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r30,96(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32764
	ctx.r9.s64 = -2147221504;
	// li r22,1
	r22.s64 = 1;
	// li r23,4
	r23.s64 = 4;
	// lfs f31,1996(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1996);
	f31.f64 = double(temp.f32);
	// li r18,2
	r18.s64 = 2;
	// lfs f29,2008(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2008);
	f29.f64 = double(temp.f32);
	// li r24,6
	r24.s64 = 6;
	// ori r20,r9,4
	r20.u64 = ctx.r9.u64 | 4;
	// li r16,5
	r16.s64 = 5;
	// li r19,8
	r19.s64 = 8;
	// li r21,-1
	r21.s64 = -1;
loc_82303278:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x82303b30
	if (ctx.cr6.gt) goto loc_82303B30;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82303410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82303410;
	// bdzf 4*cr6+eq,0x823035f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_823035F8;
	// bdzf 4*cr6+eq,0x82303b30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82303B30;
	// bdzf 4*cr6+eq,0x82303b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82303B18;
	// bne cr6,0x8230376c
	if (!ctx.cr6.eq) goto loc_8230376C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8231c018
	ctx.lr = 0x823032A8;
	sub_8231C018(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82303380
	if (!ctx.cr6.eq) goto loc_82303380;
	// lwz r3,296(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 296);
	// bl 0x8231ad48
	ctx.lr = 0x823032C8;
	sub_8231AD48(ctx, base);
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r31.u32 + 0, temp.u32);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303330
	if (!ctx.cr6.gt) goto loc_82303330;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823032E4:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,472(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 472);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bl 0x822d5870
	ctx.lr = 0x82303310;
	sub_822D5870(ctx, base);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823032e4
	if (ctx.cr6.lt) goto loc_823032E4;
loc_82303330:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r22,36(r29)
	REX_STORE_U32(r29.u32 + 36, r22.u32);
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r10)
	REX_STORE_U16(ctx.r10.u32 + 202, ctx.r11.u16);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 0);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// lwz r7,60(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bgt cr6,0x82303360
	if (ctx.cr6.gt) goto loc_82303360;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x82303b30
	goto loc_82303B30;
loc_82303360:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303b30
	if (ctx.cr6.eq) goto loc_82303B30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8230337C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82303b30
	goto loc_82303B30;
loc_82303380:
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// sth r10,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r10.u16);
	// bne cr6,0x823033b4
	if (!ctx.cr6.eq) goto loc_823033B4;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823033b4
	if (ctx.cr6.eq) goto loc_823033B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x82317f98
	ctx.lr = 0x823033A8;
	sub_82317F98(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
loc_823033B4:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823033e4
	if (!ctx.cr6.eq) goto loc_823033E4;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823033e4
	if (!ctx.cr6.eq) goto loc_823033E4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,320(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 320);
	// bl 0x82317f98
	ctx.lr = 0x823033D8;
	sub_82317F98(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
loc_823033E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stw r18,36(r29)
	REX_STORE_U32(r29.u32 + 36, r18.u32);
	// sth r25,150(r29)
	REX_STORE_U16(r29.u32 + 150, r25.u16);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// b 0x82303b30
	goto loc_82303B30;
loc_82303410:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8230359c
	if (!ctx.cr6.lt) goto loc_8230359C;
loc_82303428:
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// mulli r9,r6,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 36);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82303470
	if (!ctx.cr6.gt) goto loc_82303470;
loc_82303460:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82303460
	if (ctx.cr6.gt) goto loc_82303460;
loc_82303470:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,312(r29)
	REX_STORE_U16(r29.u32 + 312, ctx.r11.u16);
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x823034f8
	if (ctx.cr6.eq) goto loc_823034F8;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x823034e4
	if (ctx.cr6.lt) goto loc_823034E4;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823034b0
	if (!ctx.cr6.eq) goto loc_823034B0;
	// bl 0x82302e78
	ctx.lr = 0x823034AC;
	sub_82302E78(ctx, base);
	// b 0x823034b4
	goto loc_823034B4;
loc_823034B0:
	// bl 0x82303028
	ctx.lr = 0x823034B4;
	sub_82303028(ctx, base);
loc_823034B4:
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, r20.u32, ctx.xer);
	// bne cr6,0x823034f0
	if (!ctx.cr6.eq) goto loc_823034F0;
	// addi r3,r29,224
	ctx.r3.s64 = r29.s64 + 224;
	// bl 0x823193f0
	ctx.lr = 0x823034C8;
	sub_823193F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82303b3c
	if (ctx.cr6.eq) goto loc_82303B3C;
	// lwz r11,704(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82303b3c
	if (ctx.cr6.eq) goto loc_82303B3C;
	// mr r17,r22
	r17.u64 = r22.u64;
	// b 0x823034f8
	goto loc_823034F8;
loc_823034E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82302988
	ctx.lr = 0x823034EC;
	sub_82302988(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_823034F0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
loc_823034F8:
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 490);
	// lhz r10,730(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 730);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8230350c
	if (!ctx.cr6.gt) goto loc_8230350C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8230350C:
	// lwz r10,60(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 60);
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82303530
	if (!ctx.cr6.eq) goto loc_82303530;
	// lwz r10,264(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 264);
	// addi r11,r29,224
	ctx.r11.s64 = r29.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r29)
	REX_STORE_U32(r29.u32 + 264, ctx.r8.u32);
loc_82303530:
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 264);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,202(r31)
	REX_STORE_U16(r31.u32 + 202, ctx.r11.u16);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(r29.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bgt cr6,0x82303554
	if (ctx.cr6.gt) goto loc_82303554;
	// stw r25,56(r29)
	REX_STORE_U32(r29.u32 + 56, r25.u32);
	// b 0x82303570
	goto loc_82303570;
loc_82303554:
	// lwz r11,512(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 512);
	// stw r23,56(r29)
	REX_STORE_U32(r29.u32 + 56, r23.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82303570
	if (ctx.cr6.eq) goto loc_82303570;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82303570;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82303570:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// clrlwi r6,r9,16
	ctx.r6.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r9.u16);
	// lhz r8,580(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82303428
	if (ctx.cr6.lt) goto loc_82303428;
loc_8230359C:
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823035f0
	if (ctx.cr6.eq) goto loc_823035F0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x823035f0
	if (!ctx.cr6.gt) goto loc_823035F0;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lhz r11,730(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 730);
	// lhz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r9,r7,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r5,118(r6)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r6.u32 + 118);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// addze r10,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r10.s64 = temp.s64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823035ec
	if (ctx.cr6.lt) goto loc_823035EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823035EC:
	// sth r11,730(r31)
	REX_STORE_U16(r31.u32 + 730, ctx.r11.u16);
loc_823035F0:
	// stw r16,36(r29)
	REX_STORE_U32(r29.u32 + 36, r16.u32);
	// b 0x82303b30
	goto loc_82303B30;
loc_823035F8:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82303764
	if (!ctx.cr6.lt) goto loc_82303764;
loc_82303610:
	// lhz r11,150(r29)
	ctx.r11.u64 = REX_LOAD_U16(r29.u32 + 150);
	// lwz r10,584(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 584);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r10
	ctx.r7.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r10.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8230365c
	if (ctx.cr6.eq) goto loc_8230365C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8231fb48
	ctx.lr = 0x82303650;
	sub_8231FB48(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
loc_8230365C:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823036c4
	if (ctx.cr6.eq) goto loc_823036C4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823201f8
	ctx.lr = 0x82303678;
	sub_823201F8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823036f4
	if (!ctx.cr6.eq) goto loc_823036F4;
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823036a8
	if (ctx.cr6.eq) goto loc_823036A8;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x823036ac
	goto loc_823036AC;
loc_823036A8:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_823036AC:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82315a58
	ctx.lr = 0x823036C0;
	sub_82315A58(ctx, base);
	// b 0x823036f4
	goto loc_823036F4;
loc_823036C4:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823036d8
	if (ctx.cr6.eq) goto loc_823036D8;
	// lwz r3,328(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 328);
	// b 0x823036dc
	goto loc_823036DC;
loc_823036D8:
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
loc_823036DC:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823036F0;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_823036F4:
	// lwz r11,460(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82303718
	if (ctx.cr6.eq) goto loc_82303718;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lwz r4,328(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 328);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d4fa0
	ctx.lr = 0x82303718;
	sub_822D4FA0(ctx, base);
loc_82303718:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 0);
	// stb r25,145(r29)
	REX_STORE_U8(r29.u32 + 145, r25.u8);
	// stw r24,72(r29)
	REX_STORE_U32(r29.u32 + 72, r24.u32);
	// sth r25,148(r29)
	REX_STORE_U16(r29.u32 + 148, r25.u16);
	// sth r25,202(r11)
	REX_STORE_U16(ctx.r11.u32 + 202, r25.u16);
	// stw r25,76(r29)
	REX_STORE_U32(r29.u32 + 76, r25.u32);
	// stw r25,200(r29)
	REX_STORE_U32(r29.u32 + 200, r25.u32);
	// stw r25,208(r29)
	REX_STORE_U32(r29.u32 + 208, r25.u32);
	// lhz r10,150(r29)
	ctx.r10.u64 = REX_LOAD_U16(r29.u32 + 150);
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// clrlwi r6,r8,16
	ctx.r6.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,150(r29)
	REX_STORE_U16(r29.u32 + 150, ctx.r8.u16);
	// lhz r7,580(r31)
	ctx.r7.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r4,r7
	ctx.r4.s64 = ctx.r7.s16;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82303610
	if (ctx.cr6.lt) goto loc_82303610;
loc_82303764:
	// stw r23,36(r29)
	REX_STORE_U32(r29.u32 + 36, r23.u32);
	// b 0x82303b30
	goto loc_82303B30;
loc_8230376C:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303810
	if (!ctx.cr6.gt) goto loc_82303810;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82303784:
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
	// lwz r6,40(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823037d4
	if (ctx.cr6.eq) goto loc_823037D4;
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823037f0
	if (!ctx.cr6.eq) goto loc_823037F0;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// bl 0x82315a58
	ctx.lr = 0x823037D0;
	sub_82315A58(ctx, base);
	// b 0x823037f0
	goto loc_823037F0;
loc_823037D4:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x823037EC;
	sub_822D5870(ctx, base);
	// stw r25,48(r30)
	REX_STORE_U32(r30.u32 + 48, r25.u32);
loc_823037F0:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82303784
	if (ctx.cr6.lt) goto loc_82303784;
loc_82303810:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// mr r27,r22
	r27.u64 = r22.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303878
	if (!ctx.cr6.gt) goto loc_82303878;
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// mr r11,r25
	ctx.r11.u64 = r25.u64;
	// lwz r8,320(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 320);
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_82303834:
	// lhzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82303874
	if (!ctx.cr6.eq) goto loc_82303874;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82303834
	if (ctx.cr6.lt) goto loc_82303834;
	// b 0x82303878
	goto loc_82303878;
loc_82303874:
	// mr r27,r25
	r27.u64 = r25.u64;
loc_82303878:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82301ff0
	ctx.lr = 0x82303880;
	sub_82301FF0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x82303898;
	sub_8231AE30(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8231ae30
	ctx.lr = 0x823038A4;
	sub_8231AE30(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x8230396c
	if (!ctx.cr6.gt) goto loc_8230396C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82303974
	if (!ctx.cr6.eq) goto loc_82303974;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303980
	if (!ctx.cr6.gt) goto loc_82303980;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823038D0:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lhz r8,108(r31)
	ctx.r8.u64 = REX_LOAD_U16(r31.u32 + 108);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// lhzx r6,r11,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r7
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82303920
	if (!ctx.cr6.eq) goto loc_82303920;
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,312(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 312);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r9,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822d5870
	ctx.lr = 0x82303920;
	sub_822D5870(ctx, base);
loc_82303920:
	// sth r21,202(r31)
	REX_STORE_U16(r31.u32 + 202, r21.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,424(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 424);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82317070
	ctx.lr = 0x8230393C;
	sub_82317070(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x823038d0
	if (ctx.cr6.lt) goto loc_823038D0;
	// b 0x82303980
	goto loc_82303980;
loc_8230396C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// beq cr6,0x82303980
	if (ctx.cr6.eq) goto loc_82303980;
loc_82303974:
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82303b04
	if (ctx.cr6.eq) goto loc_82303B04;
loc_82303980:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82303994
	if (!ctx.cr6.eq) goto loc_82303994;
	// lfs f30,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r31.u32 + 300);
	f30.f64 = double(temp.f32);
	// b 0x823039b0
	goto loc_823039B0;
loc_82303994:
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f29,f12
	f30.f64 = double(float(f29.f64 / ctx.f12.f64));
loc_823039B0:
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82303b04
	if (!ctx.cr6.gt) goto loc_82303B04;
	// mr r28,r25
	r28.u64 = r25.u64;
	// rlwinm r11,r25,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
loc_823039C8:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 584);
	// lwz r10,320(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 320);
	// lwz r8,320(r29)
	ctx.r8.u64 = REX_LOAD_U32(r29.u32 + 320);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lhzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82303a48
	if (ctx.cr6.eq) goto loc_82303A48;
	// lhz r11,118(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 118);
	// lwz r10,332(r29)
	ctx.r10.u64 = REX_LOAD_U32(r29.u32 + 332);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r7,328(r29)
	ctx.r7.u64 = REX_LOAD_U32(r29.u32 + 328);
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 56);
	// srawi r6,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 1;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rotlwi r10,r5,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// divw r4,r5,r7
	ctx.r4.u64 = uint32_t((ctx.r7.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r5.s32 / ctx.r7.s32 : 0);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// andc r8,r7,r3
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subf. r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.s32 == -1 || ctx.r8.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ble 0x82303a48
	if (!ctx.cr0.gt) goto loc_82303A48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82303A38:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f31,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(f31.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82303a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82303A38;
loc_82303A48:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82303a60
	if (!ctx.cr6.eq) goto loc_82303A60;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82303ae4
	if (!ctx.cr6.gt) goto loc_82303AE4;
loc_82303A60:
	// lhz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U16(r30.u32 + 120);
	// lhz r10,118(r30)
	ctx.r10.u64 = REX_LOAD_U16(r30.u32 + 118);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82303a9c
	if (!ctx.cr6.gt) goto loc_82303A9C;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// subf r7,r8,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r8.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x822d5870
	ctx.lr = 0x82303A9C;
	sub_822D5870(ctx, base);
loc_82303A9C:
	// lwz r9,464(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 464);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,496(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 496);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 140);
	// lhz r6,114(r30)
	ctx.r6.u64 = REX_LOAD_U16(r30.u32 + 114);
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(r30.u32 + 120);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// extsh r6,r4
	ctx.r6.s64 = ctx.r4.s16;
	// stw r8,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwz r9,440(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 440);
	// lwz r8,532(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 532);
	// lwz r7,516(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 516);
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 56);
	// bctrl 
	ctx.lr = 0x82303AE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82303AE4:
	// lhz r10,580(r31)
	ctx.r10.u64 = REX_LOAD_U16(r31.u32 + 580);
	// addi r11,r28,1
	ctx.r11.s64 = r28.s64 + 1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x823039c8
	if (ctx.cr6.lt) goto loc_823039C8;
loc_82303B04:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82303b24
	if (!ctx.cr6.gt) goto loc_82303B24;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(r27.s32, 0, ctx.xer);
	// bne cr6,0x82303b24
	if (!ctx.cr6.eq) goto loc_82303B24;
loc_82303B18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82246ca8
	ctx.lr = 0x82303B20;
	sub_82246CA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_82303B24:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(r26.s32, 0, ctx.xer);
	// blt cr6,0x82303b3c
	if (ctx.cr6.lt) goto loc_82303B3C;
	// stw r19,36(r29)
	REX_STORE_U32(r29.u32 + 36, r19.u32);
loc_82303B30:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(r29.u32 + 36);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82303278
	if (!ctx.cr6.eq) goto loc_82303278;
loc_82303B3C:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(r17.s32, 0, ctx.xer);
	// beq cr6,0x82303b60
	if (ctx.cr6.eq) goto loc_82303B60;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
loc_82303B60:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f29,-160(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f30,-152(r1)
	f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// lfd f31,-144(r1)
	f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// b 0x822d4ea8
	return;
}

DEFINE_REX_FUNC(sub_8232EB88) {
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
	// beq cr6,0x8232ebd8
	if (ctx.cr6.eq) goto loc_8232EBD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232ebd8
	if (ctx.cr6.lt) goto loc_8232EBD8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8232ebd8
	if (!ctx.cr6.lt) goto loc_8232EBD8;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8229a710
	ctx.lr = 0x8232EBC4;
	sub_8229A710(ctx, base);
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
loc_8232EBD8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8229a710
	ctx.lr = 0x8232EBE4;
	sub_8229A710(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8220a088
	ctx.lr = 0x8232EBEC;
	sub_8220A088(ctx, base);
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

DEFINE_REX_FUNC(sub_82331EB0) {
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
	ctx.lr = 0x82331EB8;
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// stw r4,3376(r3)
	REX_STORE_U32(ctx.r3.u32 + 3376, ctx.r4.u32);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fctiwz f0,f1
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
	// stw r30,22132(r3)
	REX_STORE_U32(ctx.r3.u32 + 22132, r30.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// bl 0x8233d798
	ctx.lr = 0x82331F04;
	sub_8233D798(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82332008
	if (!ctx.cr6.eq) goto loc_82332008;
	// stfs f31,3704(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	REX_STORE_U32(r31.u32 + 3704, temp.u32);
	// stw r29,3696(r31)
	REX_STORE_U32(r31.u32 + 3696, r29.u32);
	// stfs f30,3708(r31)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r31.u32 + 3708, temp.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(r28.s32, 4, ctx.xer);
	// sth r30,3740(r31)
	REX_STORE_U16(r31.u32 + 3740, r30.u16);
	// stw r28,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, r28.u32);
	// ble cr6,0x82331f30
	if (!ctx.cr6.gt) goto loc_82331F30;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82331f3c
	goto loc_82331F3C;
loc_82331F30:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(r28.s32, -1, ctx.xer);
	// bge cr6,0x82331f40
	if (!ctx.cr6.lt) goto loc_82331F40;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82331F3C:
	// stw r11,3700(r31)
	REX_STORE_U32(r31.u32 + 3700, ctx.r11.u32);
loc_82331F40:
	// lwz r11,228(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, ctx.r11.u32);
	// beq cr6,0x82331f5c
	if (ctx.cr6.eq) goto loc_82331F5C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82331f5c
	if (ctx.cr6.eq) goto loc_82331F5C;
	// stw r30,15568(r31)
	REX_STORE_U32(r31.u32 + 15568, r30.u32);
loc_82331F5C:
	// lwz r9,204(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 204);
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 156);
	// lwz r7,208(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 208);
	// rlwinm r6,r9,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 160);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 212);
	// rlwinm r5,r7,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,216(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 216);
	// stw r8,88(r31)
	REX_STORE_U32(r31.u32 + 88, ctx.r8.u32);
	// stw r9,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r9.u32);
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// stw r7,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r7.u32);
	// stw r10,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r10.u32);
	// stw r4,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// stw r6,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r6.u32);
	// stw r5,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r5.u32);
	// bne cr6,0x82331fb0
	if (!ctx.cr6.eq) goto loc_82331FB0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq cr6,0x82331fb4
	if (ctx.cr6.eq) goto loc_82331FB4;
loc_82331FB0:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_82331FB4:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 180);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lwz r8,188(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 188);
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r10,120(r31)
	REX_STORE_U32(r31.u32 + 120, ctx.r10.u32);
	// srawi r10,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 4;
	// stw r30,3496(r31)
	REX_STORE_U32(r31.u32 + 3496, r30.u32);
	// addi r9,r9,-25656
	ctx.r9.s64 = ctx.r9.s64 + -25656;
	// stw r11,128(r31)
	REX_STORE_U32(r31.u32 + 128, ctx.r11.u32);
	// addi r8,r7,-24632
	ctx.r8.s64 = ctx.r7.s64 + -24632;
	// stw r10,132(r31)
	REX_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r30,3500(r31)
	REX_STORE_U32(r31.u32 + 3500, r30.u32);
	// stw r30,3504(r31)
	REX_STORE_U32(r31.u32 + 3504, r30.u32);
	// stw r6,124(r31)
	REX_STORE_U32(r31.u32 + 124, ctx.r6.u32);
	// addi r5,r9,384
	ctx.r5.s64 = ctx.r9.s64 + 384;
	// addi r4,r8,40
	ctx.r4.s64 = ctx.r8.s64 + 40;
	// stw r5,256(r31)
	REX_STORE_U32(r31.u32 + 256, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,260(r31)
	REX_STORE_U32(r31.u32 + 260, ctx.r4.u32);
loc_82332008:
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

DEFINE_REX_FUNC(sub_8233D0F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8233D0F8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,15536(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15536);
	// li r29,1
	r29.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r29,15584(r3)
	REX_STORE_U32(ctx.r3.u32 + 15584, r29.u32);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x8233d120
	if (ctx.cr6.eq) goto loc_8233D120;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x8233d190
	if (ctx.cr6.lt) goto loc_8233D190;
loc_8233D120:
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r9,-26864
	ctx.r4.s64 = ctx.r9.s64 + -26864;
	// addi r3,r8,-26828
	ctx.r3.s64 = ctx.r8.s64 + -26828;
	// addi r9,r7,-26792
	ctx.r9.s64 = ctx.r7.s64 + -26792;
	// stw r4,1840(r31)
	REX_STORE_U32(r31.u32 + 1840, ctx.r4.u32);
	// addi r8,r6,-26756
	ctx.r8.s64 = ctx.r6.s64 + -26756;
	// stw r3,1844(r31)
	REX_STORE_U32(r31.u32 + 1844, ctx.r3.u32);
	// addi r7,r5,-26720
	ctx.r7.s64 = ctx.r5.s64 + -26720;
	// stw r9,1848(r31)
	REX_STORE_U32(r31.u32 + 1848, ctx.r9.u32);
	// addi r11,r11,-26700
	ctx.r11.s64 = ctx.r11.s64 + -26700;
	// stw r8,1852(r31)
	REX_STORE_U32(r31.u32 + 1852, ctx.r8.u32);
	// stw r7,1868(r31)
	REX_STORE_U32(r31.u32 + 1868, ctx.r7.u32);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// stw r11,1872(r31)
	REX_STORE_U32(r31.u32 + 1872, ctx.r11.u32);
	// bne cr6,0x8233d174
	if (!ctx.cr6.eq) goto loc_8233D174;
	// stw r11,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r11.u32);
loc_8233D174:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x8233d188
	if (!ctx.cr6.eq) goto loc_8233D188;
	// stw r29,436(r31)
	REX_STORE_U32(r31.u32 + 436, r29.u32);
	// stw r29,444(r31)
	REX_STORE_U32(r31.u32 + 444, r29.u32);
	// b 0x8233d190
	goto loc_8233D190;
loc_8233D188:
	// stw r30,436(r31)
	REX_STORE_U32(r31.u32 + 436, r30.u32);
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
loc_8233D190:
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8233d210
	if (ctx.cr6.lt) goto loc_8233D210;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r3,-32198
	ctx.r3.s64 = -2110128128;
	// addi r11,r11,-27584
	ctx.r11.s64 = ctx.r11.s64 + -27584;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r11,1804(r31)
	REX_STORE_U32(r31.u32 + 1804, ctx.r11.u32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// lis r5,-32252
	ctx.r5.s64 = -2113667072;
	// lis r4,-32252
	ctx.r4.s64 = -2113667072;
	// addi r11,r3,-14600
	ctx.r11.s64 = ctx.r3.s64 + -14600;
	// addi r10,r10,-27856
	ctx.r10.s64 = ctx.r10.s64 + -27856;
	// addi r9,r9,-27480
	ctx.r9.s64 = ctx.r9.s64 + -27480;
	// stw r11,3104(r31)
	REX_STORE_U32(r31.u32 + 3104, ctx.r11.u32);
	// addi r8,r8,-27416
	ctx.r8.s64 = ctx.r8.s64 + -27416;
	// stw r10,1816(r31)
	REX_STORE_U32(r31.u32 + 1816, ctx.r10.u32);
	// addi r7,r7,-27984
	ctx.r7.s64 = ctx.r7.s64 + -27984;
	// stw r9,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r9.u32);
	// addi r6,r6,-27920
	ctx.r6.s64 = ctx.r6.s64 + -27920;
	// stw r8,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r8.u32);
	// addi r5,r5,-27752
	ctx.r5.s64 = ctx.r5.s64 + -27752;
	// stw r7,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r7.u32);
	// addi r4,r4,-27688
	ctx.r4.s64 = ctx.r4.s64 + -27688;
	// stw r6,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r6.u32);
	// stw r5,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r5.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r4,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r4.u32);
	// bl 0x82347c68
	ctx.lr = 0x8233D20C;
	sub_82347C68(ctx, base);
	// b 0x8233d25c
	goto loc_8233D25C;
loc_8233D210:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32203
	ctx.r7.s64 = -2110455808;
	// addi r6,r11,-26616
	ctx.r6.s64 = ctx.r11.s64 + -26616;
	// addi r5,r10,-26680
	ctx.r5.s64 = ctx.r10.s64 + -26680;
	// addi r4,r9,-26496
	ctx.r4.s64 = ctx.r9.s64 + -26496;
	// stw r6,1804(r31)
	REX_STORE_U32(r31.u32 + 1804, ctx.r6.u32);
	// addi r3,r8,-26432
	ctx.r3.s64 = ctx.r8.s64 + -26432;
	// stw r5,1816(r31)
	REX_STORE_U32(r31.u32 + 1816, ctx.r5.u32);
	// addi r11,r7,10552
	ctx.r11.s64 = ctx.r7.s64 + 10552;
	// stw r4,1808(r31)
	REX_STORE_U32(r31.u32 + 1808, ctx.r4.u32);
	// stw r3,1812(r31)
	REX_STORE_U32(r31.u32 + 1812, ctx.r3.u32);
	// stw r3,1820(r31)
	REX_STORE_U32(r31.u32 + 1820, ctx.r3.u32);
	// stw r4,1824(r31)
	REX_STORE_U32(r31.u32 + 1824, ctx.r4.u32);
	// stw r5,1828(r31)
	REX_STORE_U32(r31.u32 + 1828, ctx.r5.u32);
	// stw r6,1832(r31)
	REX_STORE_U32(r31.u32 + 1832, ctx.r6.u32);
	// stw r11,3104(r31)
	REX_STORE_U32(r31.u32 + 3104, ctx.r11.u32);
loc_8233D25C:
	// lwz r11,15536(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15536);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8233d2dc
	if (!ctx.cr6.eq) goto loc_8233D2DC;
	// lwz r10,1840(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1840);
	// lwz r9,1844(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1844);
	// lwz r8,1868(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1868);
	// lwz r7,1832(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1832);
	// lwz r6,1808(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1808);
	// lwz r5,1812(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1812);
	// lwz r4,1792(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 1792);
	// stw r10,1856(r31)
	REX_STORE_U32(r31.u32 + 1856, ctx.r10.u32);
	// stw r9,1860(r31)
	REX_STORE_U32(r31.u32 + 1860, ctx.r9.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r8,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r8.u32);
	// stw r30,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, r30.u32);
	// stw r7,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r7.u32);
	// stw r6,20752(r31)
	REX_STORE_U32(r31.u32 + 20752, ctx.r6.u32);
	// stw r5,20756(r31)
	REX_STORE_U32(r31.u32 + 20756, ctx.r5.u32);
	// beq cr6,0x8233d2dc
	if (ctx.cr6.eq) goto loc_8233D2DC;
	// lwz r10,1828(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 1828);
	// lwz r9,1848(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 1848);
	// lwz r8,1852(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 1852);
	// lwz r7,1872(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 1872);
	// lwz r6,1820(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 1820);
	// lwz r5,1824(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 1824);
	// stw r29,1800(r31)
	REX_STORE_U32(r31.u32 + 1800, r29.u32);
	// stw r10,1836(r31)
	REX_STORE_U32(r31.u32 + 1836, ctx.r10.u32);
	// stw r9,1856(r31)
	REX_STORE_U32(r31.u32 + 1856, ctx.r9.u32);
	// stw r8,1860(r31)
	REX_STORE_U32(r31.u32 + 1860, ctx.r8.u32);
	// stw r7,1864(r31)
	REX_STORE_U32(r31.u32 + 1864, ctx.r7.u32);
	// stw r6,20752(r31)
	REX_STORE_U32(r31.u32 + 20752, ctx.r6.u32);
	// stw r5,20756(r31)
	REX_STORE_U32(r31.u32 + 20756, ctx.r5.u32);
loc_8233D2DC:
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// addi r7,r10,-32456
	ctx.r7.s64 = ctx.r10.s64 + -32456;
	// addi r6,r9,-29688
	ctx.r6.s64 = ctx.r9.s64 + -29688;
	// addi r5,r8,-20152
	ctx.r5.s64 = ctx.r8.s64 + -20152;
	// stw r7,15836(r31)
	REX_STORE_U32(r31.u32 + 15836, ctx.r7.u32);
	// stw r6,15840(r31)
	REX_STORE_U32(r31.u32 + 15840, ctx.r6.u32);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r5,3096(r31)
	REX_STORE_U32(r31.u32 + 3096, ctx.r5.u32);
	// blt cr6,0x8233d330
	if (ctx.cr6.lt) goto loc_8233D330;
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r9,-32200
	ctx.r9.s64 = -2110259200;
	// lis r8,-32200
	ctx.r8.s64 = -2110259200;
	// addi r7,r10,17504
	ctx.r7.s64 = ctx.r10.s64 + 17504;
	// addi r6,r9,-17352
	ctx.r6.s64 = ctx.r9.s64 + -17352;
	// addi r5,r8,-24640
	ctx.r5.s64 = ctx.r8.s64 + -24640;
	// stw r7,15840(r31)
	REX_STORE_U32(r31.u32 + 15840, ctx.r7.u32);
	// stw r6,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r6.u32);
	// stw r5,3100(r31)
	REX_STORE_U32(r31.u32 + 3100, ctx.r5.u32);
	// b 0x8233d33c
	goto loc_8233D33C;
loc_8233D330:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r9,r10,-28696
	ctx.r9.s64 = ctx.r10.s64 + -28696;
	// stw r9,3092(r31)
	REX_STORE_U32(r31.u32 + 3092, ctx.r9.u32);
loc_8233D33C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d400
	if (ctx.cr6.eq) goto loc_8233D400;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r8,3200(r31)
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + 3200);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r5,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r5.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// adde r9,r6,r7
	temp.u8 = (ctx.r6.u32 + ctx.r7.u32 < ctx.r6.u32) | (ctx.r6.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 31;
	// rlwinm r3,r10,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// stw r9,1936(r31)
	REX_STORE_U32(r31.u32 + 1936, ctx.r9.u32);
	// subfc r10,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r9,-32202
	ctx.r9.s64 = -2110390272;
	// adde r10,r3,r4
	temp.u8 = (ctx.r3.u32 + ctx.r4.u32 < ctx.r3.u32) | (ctx.r3.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r7,r9,18040
	ctx.r7.s64 = ctx.r9.s64 + 18040;
	// stw r10,1940(r31)
	REX_STORE_U32(r31.u32 + 1940, ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8233d394
	if (!ctx.cr6.eq) goto loc_8233D394;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r10,-23400
	ctx.r9.s64 = ctx.r10.s64 + -23400;
	// b 0x8233d39c
	goto loc_8233D39C;
loc_8233D394:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r10,-8752
	ctx.r9.s64 = ctx.r10.s64 + -8752;
loc_8233D39C:
	// stw r9,3192(r31)
	REX_STORE_U32(r31.u32 + 3192, ctx.r9.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8233d3d4
	if (ctx.cr6.lt) goto loc_8233D3D4;
	// lis r11,-32199
	ctx.r11.s64 = -2110193664;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r9,r11,6440
	ctx.r9.s64 = ctx.r11.s64 + 6440;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r8,r10,-4512
	ctx.r8.s64 = ctx.r10.s64 + -4512;
	// stw r9,3108(r31)
	REX_STORE_U32(r31.u32 + 3108, ctx.r9.u32);
	// addi r10,r11,-4512
	ctx.r10.s64 = ctx.r11.s64 + -4512;
	// stw r8,3112(r31)
	REX_STORE_U32(r31.u32 + 3112, ctx.r8.u32);
	// stw r10,20724(r31)
	REX_STORE_U32(r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8233D3D4:
	// lis r11,-32203
	ctx.r11.s64 = -2110455808;
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// addi r9,r11,-5232
	ctx.r9.s64 = ctx.r11.s64 + -5232;
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r8,r10,-4864
	ctx.r8.s64 = ctx.r10.s64 + -4864;
	// stw r9,3108(r31)
	REX_STORE_U32(r31.u32 + 3108, ctx.r9.u32);
	// addi r10,r11,-4512
	ctx.r10.s64 = ctx.r11.s64 + -4512;
	// stw r8,3112(r31)
	REX_STORE_U32(r31.u32 + 3112, ctx.r8.u32);
	// stw r10,20724(r31)
	REX_STORE_U32(r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8233D400:
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 140);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// stw r29,1940(r31)
	REX_STORE_U32(r31.u32 + 1940, r29.u32);
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// addi r7,r10,2960
	ctx.r7.s64 = ctx.r10.s64 + 2960;
	// addi r6,r9,-4136
	ctx.r6.s64 = ctx.r9.s64 + -4136;
	// stw r11,15532(r31)
	REX_STORE_U32(r31.u32 + 15532, ctx.r11.u32);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r5,r8,-3768
	ctx.r5.s64 = ctx.r8.s64 + -3768;
	// stw r7,3192(r31)
	REX_STORE_U32(r31.u32 + 3192, ctx.r7.u32);
	// addi r10,r11,-4512
	ctx.r10.s64 = ctx.r11.s64 + -4512;
	// stw r6,3108(r31)
	REX_STORE_U32(r31.u32 + 3108, ctx.r6.u32);
	// stw r5,3112(r31)
	REX_STORE_U32(r31.u32 + 3112, ctx.r5.u32);
	// stw r10,20724(r31)
	REX_STORE_U32(r31.u32 + 20724, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82358768) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// stb r7,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r7.u8);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// srawi. r10,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r6,28
	ctx.r9.u64 = ctx.r6.u32 & 0xF;
	// lvx128 v0,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltb v0,v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_set1_epi8(char(0xF))));
	// ble 0x823587b0
	if (!ctx.cr0.gt) goto loc_823587B0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235878C:
	// lvx128 v13,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// lvx128 v12,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// vaddubs v11,v12,v13
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8)));
	// vaddubs v10,v11,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_adds_epu8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bdnz 0x8235878c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235878C;
loc_823587B0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r8,r11,r4
	ctx.r8.u64 = ctx.r4.u64 - ctx.r11.u64;
	// subf r6,r11,r3
	ctx.r6.u64 = ctx.r3.u64 - ctx.r11.u64;
loc_823587C4:
	// lbzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x823587e0
	if (!ctx.cr6.gt) goto loc_823587E0;
	// li r10,255
	ctx.r10.s64 = 255;
loc_823587E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stbx r10,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x823587c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823587C4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359670) {
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
	// beq cr6,0x82359728
	if (ctx.cr6.eq) goto loc_82359728;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823596a8
	if (ctx.cr6.eq) goto loc_823596A8;
	// bl 0x8233d4c0
	ctx.lr = 0x823596A4;
	sub_8233D4C0(ctx, base);
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
loc_823596A8:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823596bc
	if (ctx.cr6.eq) goto loc_823596BC;
	// bl 0x8233d4c0
	ctx.lr = 0x823596B8;
	sub_8233D4C0(ctx, base);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
loc_823596BC:
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823596d0
	if (ctx.cr6.eq) goto loc_823596D0;
	// bl 0x8233d4c0
	ctx.lr = 0x823596CC;
	sub_8233D4C0(ctx, base);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
loc_823596D0:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823596e4
	if (ctx.cr6.eq) goto loc_823596E4;
	// bl 0x8233d4c0
	ctx.lr = 0x823596E0;
	sub_8233D4C0(ctx, base);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
loc_823596E4:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823596f8
	if (ctx.cr6.eq) goto loc_823596F8;
	// bl 0x8233d4c0
	ctx.lr = 0x823596F4;
	sub_8233D4C0(ctx, base);
	// stw r30,60(r31)
	REX_STORE_U32(r31.u32 + 60, r30.u32);
loc_823596F8:
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235970c
	if (ctx.cr6.eq) goto loc_8235970C;
	// bl 0x8233d4c0
	ctx.lr = 0x82359708;
	sub_8233D4C0(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(r31.u32 + 64, r30.u32);
loc_8235970C:
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82359720
	if (ctx.cr6.eq) goto loc_82359720;
	// bl 0x8233d4c0
	ctx.lr = 0x8235971C;
	sub_8233D4C0(ctx, base);
	// stw r30,68(r31)
	REX_STORE_U32(r31.u32 + 68, r30.u32);
loc_82359720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x82359728;
	sub_8233D4C0(ctx, base);
loc_82359728:
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

DEFINE_REX_FUNC(sub_8235DE90) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8235DE98;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24688(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24688);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,15436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 15436);
	// addi r29,r11,8
	r29.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235def0
	if (!ctx.cr6.eq) goto loc_8235DEF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x8233d448
	ctx.lr = 0x8235DEC0;
	sub_8233D448(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235ded8
	if (ctx.cr6.eq) goto loc_8235DED8;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8235DED8;
	sub_822D5870(ctx, base);
loc_8235DED8:
	// stw r30,15436(r31)
	REX_STORE_U32(r31.u32 + 15436, r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// bne cr6,0x8235def0
	if (!ctx.cr6.eq) goto loc_8235DEF0;
loc_8235DEE4:
	// li r3,-9
	ctx.r3.s64 = -9;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8235DEF0:
	// lwz r10,15448(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 15448);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,15387
	r30.s64 = ctx.r11.s64 + 15387;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8235df20
	if (!ctx.cr6.eq) goto loc_8235DF20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8235DF14;
	sub_8233FEB8(ctx, base);
	// stw r3,15448(r31)
	REX_STORE_U32(r31.u32 + 15448, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8235dee4
	if (ctx.cr6.eq) goto loc_8235DEE4;
loc_8235DF20:
	// lwz r11,15456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 15456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235df4c
	if (!ctx.cr6.eq) goto loc_8235DF4C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,400
	ctx.r4.s64 = 400;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233feb8
	ctx.lr = 0x8235DF3C;
	sub_8233FEB8(ctx, base);
	// stw r3,15456(r31)
	REX_STORE_U32(r31.u32 + 15456, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,-9
	ctx.r3.s64 = -9;
	// beq cr6,0x8235df50
	if (ctx.cr6.eq) goto loc_8235DF50;
loc_8235DF4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235DF50:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8235F200) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235F210:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235f210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F210;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8235F258:
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235f258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F258;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F298) {
	REX_FUNC_PROLOGUE();
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e88
	ctx.lr = 0x8235F2A0;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,1244(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1244);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8235f344
	if (ctx.cr6.lt) goto loc_8235F344;
	// lwz r11,1308(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235f2c8
	if (ctx.cr6.eq) goto loc_8235F2C8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8235f2d4
	if (!ctx.cr6.eq) goto loc_8235F2D4;
loc_8235F2C8:
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8235f2e0
	if (!ctx.cr6.eq) goto loc_8235F2E0;
loc_8235F2D4:
	// lbz r11,27(r28)
	ctx.r11.u64 = REX_LOAD_U8(r28.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f344
	if (!ctx.cr6.eq) goto loc_8235F344;
loc_8235F2E0:
	// li r30,0
	r30.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235F2E8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235f330
	if (!ctx.cr6.eq) goto loc_8235F330;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge 0x8235f318
	if (!ctx.cr0.lt) goto loc_8235F318;
	// bl 0x823380c8
	ctx.lr = 0x8235F318;
	sub_823380C8(ctx, base);
loc_8235F318:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r11,r31
	ctx.r11.u64 = r31.u64;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(r30.s32, 6, ctx.xer);
	// blt cr6,0x8235f2e8
	if (ctx.cr6.lt) goto loc_8235F2E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8235f338
	if (ctx.cr6.eq) goto loc_8235F338;
loc_8235F330:
	// addi r11,r30,1
	ctx.r11.s64 = r30.s64 + 1;
	// b 0x8235f4ec
	goto loc_8235F4EC;
loc_8235F338:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
	// b 0x8235f4f0
	goto loc_8235F4F0;
loc_8235F344:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge cr6,0x8235f3b8
	if (!ctx.cr6.lt) goto loc_8235F3B8;
loc_8235F360:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f3b8
	if (ctx.cr6.eq) goto loc_8235F3B8;
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
	// bge 0x8235f3a8
	if (!ctx.cr0.lt) goto loc_8235F3A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F3A8;
	sub_823380C8(ctx, base);
loc_8235F3A8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8235f360
	if (ctx.cr6.gt) goto loc_8235F360;
loc_8235F3B8:
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
	// bge 0x8235f3f0
	if (!ctx.cr0.lt) goto loc_8235F3F0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F3F0;
	sub_823380C8(ctx, base);
loc_8235F3F0:
	// clrlwi r11,r30,24
	ctx.r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
	// bne cr6,0x8235f4f0
	if (!ctx.cr6.eq) goto loc_8235F4F0;
	// lwz r11,1168(r28)
	ctx.r11.u64 = REX_LOAD_U32(r28.u32 + 1168);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8235f4c0
	if (ctx.cr6.lt) goto loc_8235F4C0;
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge cr6,0x8235f480
	if (!ctx.cr6.lt) goto loc_8235F480;
loc_8235F428:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f480
	if (ctx.cr6.eq) goto loc_8235F480;
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
	// bge 0x8235f470
	if (!ctx.cr0.lt) goto loc_8235F470;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F470;
	sub_823380C8(ctx, base);
loc_8235F470:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8235f428
	if (ctx.cr6.gt) goto loc_8235F428;
loc_8235F480:
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
	// bge 0x8235f4b8
	if (!ctx.cr0.lt) goto loc_8235F4B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F4B8;
	sub_823380C8(ctx, base);
loc_8235F4B8:
	// addi r11,r30,8
	ctx.r11.s64 = r30.s64 + 8;
	// b 0x8235f4ec
	goto loc_8235F4EC;
loc_8235F4C0:
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge 0x8235f4e8
	if (!ctx.cr0.lt) goto loc_8235F4E8;
	// bl 0x823380c8
	ctx.lr = 0x8235F4E8;
	sub_823380C8(ctx, base);
loc_8235F4E8:
	// addi r11,r31,8
	ctx.r11.s64 = r31.s64 + 8;
loc_8235F4EC:
	// stb r11,1247(r28)
	REX_STORE_U8(r28.u32 + 1247, ctx.r11.u8);
loc_8235F4F0:
	// lwz r31,0(r28)
	r31.u64 = REX_LOAD_U32(r28.u32 + 0);
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
	// bge cr6,0x8235f564
	if (!ctx.cr6.lt) goto loc_8235F564;
loc_8235F50C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235f564
	if (ctx.cr6.eq) goto loc_8235F564;
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
	// bge 0x8235f554
	if (!ctx.cr0.lt) goto loc_8235F554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F554;
	sub_823380C8(ctx, base);
loc_8235F554:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8235f50c
	if (ctx.cr6.gt) goto loc_8235F50C;
loc_8235F564:
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
	// bge 0x8235f59c
	if (!ctx.cr0.lt) goto loc_8235F59C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8235F59C;
	sub_823380C8(ctx, base);
loc_8235F59C:
	// addi r11,r30,3
	ctx.r11.s64 = r30.s64 + 3;
	// stb r11,1248(r28)
	REX_STORE_U8(r28.u32 + 1248, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_82369988) {
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
	// bne cr6,0x823699bc
	if (!ctx.cr6.eq) goto loc_823699BC;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_823699BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823695e0
	ctx.lr = 0x823699C4;
	sub_823695E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8233d4c0
	ctx.lr = 0x823699CC;
	sub_8233D4C0(ctx, base);
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

DEFINE_REX_FUNC(sub_8236B1E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8236B1E8;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,304(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 304);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b208
	if (ctx.cr6.eq) goto loc_8236B208;
	// bl 0x8233d4c0
	ctx.lr = 0x8236B204;
	sub_8233D4C0(ctx, base);
	// stw r30,304(r31)
	REX_STORE_U32(r31.u32 + 304, r30.u32);
loc_8236B208:
	// lwz r3,308(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 308);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236b21c
	if (ctx.cr6.eq) goto loc_8236B21C;
	// bl 0x8233d4c0
	ctx.lr = 0x8236B218;
	sub_8233D4C0(ctx, base);
	// stw r30,308(r31)
	REX_STORE_U32(r31.u32 + 308, r30.u32);
loc_8236B21C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 40);
	// lwz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 36);
	// bl 0x8236a048
	ctx.lr = 0x8236B22C;
	sub_8236A048(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,48(r31)
	ctx.r5.u64 = REX_LOAD_U32(r31.u32 + 48);
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 44);
	// bl 0x8236a048
	ctx.lr = 0x8236B240;
	sub_8236A048(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8233d448
	ctx.lr = 0x8236B250;
	sub_8233D448(ctx, base);
	// stw r3,304(r31)
	REX_STORE_U32(r31.u32 + 304, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236b264
	if (!ctx.cr6.eq) goto loc_8236B264;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
loc_8236B264:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8233d448
	ctx.lr = 0x8236B270;
	sub_8233D448(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,308(r31)
	REX_STORE_U32(r31.u32 + 308, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_8236DEF0) {
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
	ctx.lr = 0x8236DEF8;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// li r28,1
	r28.s64 = 1;
	// stw r27,17356(r3)
	REX_STORE_U32(ctx.r3.u32 + 17356, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,19564(r3)
	REX_STORE_U32(ctx.r3.u32 + 19564, r28.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r28,1948(r3)
	REX_STORE_U32(ctx.r3.u32 + 1948, r28.u32);
	// mr r26,r27
	r26.u64 = r27.u64;
	// bl 0x8236dd68
	ctx.lr = 0x8236DF20;
	sub_8236DD68(ctx, base);
	// lwz r3,24688(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 24688);
	// lwz r11,712(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236df40
	if (ctx.cr6.eq) goto loc_8236DF40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8232ec60
	ctx.lr = 0x8236DF38;
	sub_8232EC60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236ee40
	if (!ctx.cr6.eq) goto loc_8236EE40;
loc_8236DF40:
	// ld r11,3632(r30)
	ctx.r11.u64 = REX_LOAD_U64(r30.u32 + 3632);
	// stw r27,21704(r30)
	REX_STORE_U32(r30.u32 + 21704, r27.u32);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// bne cr6,0x8236df6c
	if (!ctx.cr6.eq) goto loc_8236DF6C;
	// lwz r11,21540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236df64
	if (ctx.cr6.eq) goto loc_8236DF64;
	// stw r28,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, r28.u32);
	// b 0x8236df78
	goto loc_8236DF78;
loc_8236DF64:
	// stw r27,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, r27.u32);
	// b 0x8236df78
	goto loc_8236DF78;
loc_8236DF6C:
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r10,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, ctx.r10.u32);
loc_8236DF78:
	// lwz r11,21540(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236df8c
	if (ctx.cr6.eq) goto loc_8236DF8C;
	// stw r27,20688(r30)
	REX_STORE_U32(r30.u32 + 20688, r27.u32);
	// b 0x8236df90
	goto loc_8236DF90;
loc_8236DF8C:
	// stw r28,20688(r30)
	REX_STORE_U32(r30.u32 + 20688, r28.u32);
loc_8236DF90:
	// lwz r11,21776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21776);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,288(r30)
	REX_STORE_U32(r30.u32 + 288, ctx.r11.u32);
	// bl 0x823a8930
	ctx.lr = 0x8236DFA0;
	sub_823A8930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dfd0
	if (!ctx.cr6.eq) goto loc_8236DFD0;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236dff0
	if (!ctx.cr6.eq) goto loc_8236DFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,21784(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21784);
	// bl 0x823ab630
	ctx.lr = 0x8236DFC4;
	sub_823AB630(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236e06c
	if (ctx.cr6.eq) goto loc_8236E06C;
loc_8236DFD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392200
	ctx.lr = 0x8236DFDC;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236DFE4;
	sub_823952D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236DFF0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236e06c
	if (!ctx.cr6.eq) goto loc_8236E06C;
	// lwz r11,14840(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14840);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,3428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3428);
	// lwz r9,21784(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 21784);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r29,r6,r11
	r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x823ab630
	ctx.lr = 0x8236E02C;
	sub_823AB630(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x8236e058
	if (ctx.cr6.eq) goto loc_8236E058;
loc_8236E03C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82392200
	ctx.lr = 0x8236E044;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236E04C;
	sub_823952D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236E058:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823ab740
	ctx.lr = 0x8236E060;
	sub_823AB740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236e46c
	if (!ctx.cr6.eq) goto loc_8236E46C;
loc_8236E06C:
	// lwz r10,288(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8236e07c
	if (!ctx.cr6.eq) goto loc_8236E07C;
	// stw r27,3416(r30)
	REX_STORE_U32(r30.u32 + 3416, r27.u32);
loc_8236E07C:
	// lwz r11,21776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21776);
	// stw r28,1948(r30)
	REX_STORE_U32(r30.u32 + 1948, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e094
	if (ctx.cr6.eq) goto loc_8236E094;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8236e198
	if (!ctx.cr6.eq) goto loc_8236E198;
loc_8236E094:
	// lwz r11,14852(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e198
	if (ctx.cr6.eq) goto loc_8236E198;
	// lwz r11,14836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236e188
	if (!ctx.cr6.gt) goto loc_8236E188;
	// lwz r11,3412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3412);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x8236e0f0
	if (!ctx.cr6.eq) goto loc_8236E0F0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// lwz r11,22072(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22072);
	// lwz r10,3432(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3432);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r8,r9,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r8,3412(r30)
	REX_STORE_U32(r30.u32 + 3412, ctx.r8.u32);
	// beq cr6,0x8236e0e4
	if (ctx.cr6.eq) goto loc_8236E0E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237ba78
	ctx.lr = 0x8236E0E4;
	sub_8237BA78(ctx, base);
loc_8236E0E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237bb78
	ctx.lr = 0x8236E0EC;
	sub_8237BB78(ctx, base);
	// b 0x8236e198
	goto loc_8236E198;
loc_8236E0F0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e158
	if (!ctx.cr6.eq) goto loc_8236E158;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8236e134
	if (!ctx.cr6.eq) goto loc_8236E134;
	// lwz r11,21708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21708);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3444(r30)
	REX_STORE_U32(r30.u32 + 3444, r28.u32);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21704(r30)
	REX_STORE_U32(r30.u32 + 21704, r28.u32);
	// stw r10,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, ctx.r10.u32);
	// bl 0x82392200
	ctx.lr = 0x8236E120;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236E128;
	sub_823952D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236E134:
	// stw r27,3412(r30)
	REX_STORE_U32(r30.u32 + 3412, r27.u32);
	// bl 0x8237ba78
	ctx.lr = 0x8236E13C;
	sub_8237BA78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237bb78
	ctx.lr = 0x8236E144;
	sub_8237BB78(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20688(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x8236E150;
	sub_8238B010(ctx, base);
	// stw r27,3420(r30)
	REX_STORE_U32(r30.u32 + 3420, r27.u32);
	// b 0x8236e198
	goto loc_8236E198;
loc_8236E158:
	// lwz r11,3432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e16c
	if (ctx.cr6.eq) goto loc_8236E16C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237ba78
	ctx.lr = 0x8236E16C;
	sub_8237BA78(ctx, base);
loc_8236E16C:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8236e180
	if (ctx.cr6.eq) goto loc_8236E180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237bb78
	ctx.lr = 0x8236E180;
	sub_8237BB78(ctx, base);
loc_8236E180:
	// stw r27,3420(r30)
	REX_STORE_U32(r30.u32 + 3420, r27.u32);
	// b 0x8236e198
	goto loc_8236E198;
loc_8236E188:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82349598
	ctx.lr = 0x8236E198;
	sub_82349598(ctx, base);
loc_8236E198:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e414
	if (ctx.cr6.eq) goto loc_8236E414;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8236e414
	if (ctx.cr6.eq) goto loc_8236E414;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823400b0
	ctx.lr = 0x8236E1B4;
	sub_823400B0(ctx, base);
	// lwz r11,14852(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e238
	if (ctx.cr6.eq) goto loc_8236E238;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8236e238
	if (ctx.cr6.eq) goto loc_8236E238;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236e288
	if (!ctx.cr6.eq) goto loc_8236E288;
	// lwz r11,3412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e220
	if (!ctx.cr6.eq) goto loc_8236E220;
	// lwz r11,22072(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22072);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e220
	if (!ctx.cr6.eq) goto loc_8236E220;
	// lwz r11,21708(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21708);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,3444(r30)
	REX_STORE_U32(r30.u32 + 3444, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// stw r28,21704(r30)
	REX_STORE_U32(r30.u32 + 21704, r28.u32);
	// stw r10,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, ctx.r10.u32);
	// bl 0x82392200
	ctx.lr = 0x8236E20C;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236E214;
	sub_823952D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236E220:
	// lwz r11,3432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e288
	if (ctx.cr6.eq) goto loc_8236E288;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237ba78
	ctx.lr = 0x8236E234;
	sub_8237BA78(ctx, base);
	// b 0x8236e288
	goto loc_8236E288;
loc_8236E238:
	// lwz r11,14836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e254
	if (!ctx.cr6.eq) goto loc_8236E254;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82349598
	ctx.lr = 0x8236E250;
	sub_82349598(ctx, base);
	// b 0x8236e284
	goto loc_8236E284;
loc_8236E254:
	// lwz r11,3412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3412);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e268
	if (!ctx.cr6.eq) goto loc_8236E268;
	// stw r27,3412(r30)
	REX_STORE_U32(r30.u32 + 3412, r27.u32);
	// b 0x8236e274
	goto loc_8236E274;
loc_8236E268:
	// lwz r11,3432(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3432);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e27c
	if (ctx.cr6.eq) goto loc_8236E27C;
loc_8236E274:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237ba78
	ctx.lr = 0x8236E27C;
	sub_8237BA78(ctx, base);
loc_8236E27C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8237bb78
	ctx.lr = 0x8236E284;
	sub_8237BB78(ctx, base);
loc_8236E284:
	// stw r27,3420(r30)
	REX_STORE_U32(r30.u32 + 3420, r27.u32);
loc_8236E288:
	// lwz r11,4020(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e38c
	if (ctx.cr6.eq) goto loc_8236E38C;
	// lwz r11,14836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e2a8
	if (ctx.cr6.eq) goto loc_8236E2A8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82347f10
	ctx.lr = 0x8236E2A8;
	sub_82347F10(ctx, base);
loc_8236E2A8:
	// lwz r11,20728(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e2c8
	if (ctx.cr6.eq) goto loc_8236E2C8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20740(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20740);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20736(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20736);
	// bl 0x82377978
	ctx.lr = 0x8236E2C8;
	sub_82377978(ctx, base);
loc_8236E2C8:
	// lwz r11,20732(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e2e8
	if (ctx.cr6.eq) goto loc_8236E2E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20748(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20748);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20744(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20744);
	// bl 0x82377978
	ctx.lr = 0x8236E2E8;
	sub_82377978(ctx, base);
loc_8236E2E8:
	// lwz r11,22224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e38c
	if (!ctx.cr6.eq) goto loc_8236E38C;
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r31,184(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 184);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r29,15920(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15920);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// lwz r7,172(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,164(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 164);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,220(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 220);
	// lwz r4,3788(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3788);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bctrl 
	ctx.lr = 0x8236E33C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,208(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 208);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r31,196(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 196);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r29,168(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,15916(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15916);
	// lwz r25,176(r30)
	r25.u64 = REX_LOAD_U32(r30.u32 + 176);
	// lwz r5,3796(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3796);
	// rlwinm r7,r25,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,3792(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3792);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// bctrl 
	ctx.lr = 0x8236E38C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236E38C:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236e3a4
	if (!ctx.cr6.eq) goto loc_8236E3A4;
	// bl 0x8248a3c8
	ctx.lr = 0x8236E3A0;
	sub_8248A3C8(ctx, base);
	// b 0x8236e3a8
	goto loc_8236E3A8;
loc_8236E3A4:
	// bl 0x8248a220
	ctx.lr = 0x8236E3A8;
	sub_8248A220(ctx, base);
loc_8236E3A8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8236e464
	if (!ctx.cr6.eq) goto loc_8236E464;
loc_8236E3B4:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_8236E3B8:
	// lwz r11,21776(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e49c
	if (ctx.cr6.eq) goto loc_8236E49C;
	// lwz r11,21780(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 21780);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e49c
	if (!ctx.cr6.eq) goto loc_8236E49C;
	// lwz r11,14852(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e49c
	if (ctx.cr6.eq) goto loc_8236E49C;
	// lwz r11,14836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8236e49c
	if (!ctx.cr6.gt) goto loc_8236E49C;
	// lwz r11,3412(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 3412);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x8236e48c
	if (!ctx.cr6.eq) goto loc_8236E48C;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// lwz r11,22072(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22072);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,3412(r30)
	REX_STORE_U32(r30.u32 + 3412, ctx.r9.u32);
	// b 0x8236e49c
	goto loc_8236E49C;
loc_8236E414:
	// lwz r11,15572(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15572);
	// stw r28,3724(r30)
	REX_STORE_U32(r30.u32 + 3724, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236e434
	if (!ctx.cr6.eq) goto loc_8236E434;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne cr6,0x8236e438
	if (!ctx.cr6.eq) goto loc_8236E438;
loc_8236E434:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8236E438:
	// lwz r10,14884(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14884);
	// stw r11,15540(r30)
	REX_STORE_U32(r30.u32 + 15540, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236e450
	if (ctx.cr6.eq) goto loc_8236E450;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234c7c0
	ctx.lr = 0x8236E450;
	sub_8234C7C0(ctx, base);
loc_8236E450:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489e58
	ctx.lr = 0x8236E458;
	sub_82489E58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8236e3b4
	if (ctx.cr6.eq) goto loc_8236E3B4;
loc_8236E464:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8236e3b8
	if (ctx.cr6.eq) goto loc_8236E3B8;
loc_8236E46C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392200
	ctx.lr = 0x8236E478;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236E480;
	sub_823952D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236E48C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e498
	if (!ctx.cr6.eq) goto loc_8236E498;
	// stw r27,3412(r30)
	REX_STORE_U32(r30.u32 + 3412, r27.u32);
loc_8236E498:
	// stw r27,3420(r30)
	REX_STORE_U32(r30.u32 + 3420, r27.u32);
loc_8236E49C:
	// lwz r11,20680(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// lwz r11,20684(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20688(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x8236E4C0;
	sub_8238B010(ctx, base);
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// stw r28,21704(r30)
	REX_STORE_U32(r30.u32 + 21704, r28.u32);
	// xori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 ^ 1;
	// lwz r10,21708(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 21708);
	// lwz r9,21780(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 21780);
	// stw r8,20688(r30)
	REX_STORE_U32(r30.u32 + 20688, ctx.r8.u32);
	// xori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 ^ 1;
	// stw r7,21708(r30)
	REX_STORE_U32(r30.u32 + 21708, ctx.r7.u32);
	// stw r9,288(r30)
	REX_STORE_U32(r30.u32 + 288, ctx.r9.u32);
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r6,28(r31)
	ctx.r6.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8236e588
	if (ctx.cr6.eq) goto loc_8236E588;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x8236e578
	if (!ctx.cr6.lt) goto loc_8236E578;
loc_8236E508:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236e550
	if (ctx.cr6.gt) goto loc_8236E550;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8236e680
	if (ctx.cr6.gt) goto loc_8236E680;
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
	// b 0x8236e568
	goto loc_8236E568;
loc_8236E550:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e578
	if (!ctx.cr6.eq) goto loc_8236E578;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x8236E564;
	sub_82337BD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8236E568:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8236e508
	if (ctx.cr6.lt) goto loc_8236E508;
loc_8236E578:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
loc_8236E580:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
loc_8236E588:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236e610
	if (ctx.cr6.eq) goto loc_8236E610;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r29,r28
	r29.u64 = r28.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8236e5ec
	if (!ctx.cr6.lt) goto loc_8236E5EC;
loc_8236E5AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e5ec
	if (ctx.cr6.eq) goto loc_8236E5EC;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236e5dc
	if (!ctx.cr0.lt) goto loc_8236E5DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E5DC;
	sub_823380C8(ctx, base);
loc_8236E5DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236e5ac
	if (ctx.cr6.gt) goto loc_8236E5AC;
loc_8236E5EC:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236e610
	if (!ctx.cr0.lt) goto loc_8236E610;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E610;
	sub_823380C8(ctx, base);
loc_8236E610:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82337f50
	ctx.lr = 0x8236E620;
	sub_82337F50(ctx, base);
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8236e6d8
	if (!ctx.cr6.lt) goto loc_8236E6D8;
loc_8236E638:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236e6b0
	if (ctx.cr6.gt) goto loc_8236E6B0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8236e7d0
	if (ctx.cr6.gt) goto loc_8236E7D0;
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
	// b 0x8236e6c8
	goto loc_8236E6C8;
loc_8236E680:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bge cr6,0x8236e578
	if (!ctx.cr6.lt) goto loc_8236E578;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,33,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 33) & 0x1FFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8236e580
	goto loc_8236E580;
loc_8236E6B0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e6d8
	if (!ctx.cr6.eq) goto loc_8236E6D8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x8236E6C4;
	sub_82337BD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8236E6C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8236e638
	if (ctx.cr6.lt) goto loc_8236E638;
loc_8236E6D8:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8236E6DC:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236eacc
	if (!ctx.cr6.eq) goto loc_8236EACC;
loc_8236E6E8:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236e87c
	if (!ctx.cr6.eq) goto loc_8236E87C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,16
	r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8236e74c
	if (!ctx.cr6.lt) goto loc_8236E74C;
loc_8236E70C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e74c
	if (ctx.cr6.eq) goto loc_8236E74C;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236e73c
	if (!ctx.cr0.lt) goto loc_8236E73C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E73C;
	sub_823380C8(ctx, base);
loc_8236E73C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236e70c
	if (ctx.cr6.gt) goto loc_8236E70C;
loc_8236E74C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236e770
	if (!ctx.cr0.lt) goto loc_8236E770;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E770;
	sub_823380C8(ctx, base);
loc_8236E770:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8236e828
	if (!ctx.cr6.lt) goto loc_8236E828;
loc_8236E788:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236e800
	if (ctx.cr6.gt) goto loc_8236E800;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8236e84c
	if (ctx.cr6.gt) goto loc_8236E84C;
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
	// b 0x8236e818
	goto loc_8236E818;
loc_8236E7D0:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8236e6d8
	if (!ctx.cr6.lt) goto loc_8236E6D8;
	// addi r10,r10,248
	ctx.r10.s64 = ctx.r10.s64 + 248;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// srd r10,r9,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rldicl r5,r6,48,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// b 0x8236e6dc
	goto loc_8236E6DC;
loc_8236E800:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236e828
	if (!ctx.cr6.eq) goto loc_8236E828;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x8236E814;
	sub_82337BD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8236E818:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8236e788
	if (ctx.cr6.lt) goto loc_8236E788;
loc_8236E828:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8236E82C:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236ee40
	if (!ctx.cr6.eq) goto loc_8236EE40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e6e8
	if (ctx.cr6.eq) goto loc_8236E6E8;
	// b 0x8236e884
	goto loc_8236E884;
loc_8236E84C:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8236e828
	if (!ctx.cr6.lt) goto loc_8236E828;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8236e82c
	goto loc_8236E82C;
loc_8236E87C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8236eacc
	if (ctx.cr6.eq) goto loc_8236EACC;
loc_8236E884:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8236e908
	if (!ctx.cr6.eq) goto loc_8236E908;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,16
	r29.s64 = 16;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8236e8e0
	if (!ctx.cr6.lt) goto loc_8236E8E0;
loc_8236E8A0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e8e0
	if (ctx.cr6.eq) goto loc_8236E8E0;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236e8d0
	if (!ctx.cr0.lt) goto loc_8236E8D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E8D0;
	sub_823380C8(ctx, base);
loc_8236E8D0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236e8a0
	if (ctx.cr6.gt) goto loc_8236E8A0;
loc_8236E8E0:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236eae4
	if (!ctx.cr0.lt) goto loc_8236EAE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E904;
	sub_823380C8(ctx, base);
	// b 0x8236eae4
	goto loc_8236EAE4;
loc_8236E908:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8236eae4
	if (!ctx.cr6.eq) goto loc_8236EAE4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// li r29,8
	r29.s64 = 8;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8236e964
	if (!ctx.cr6.lt) goto loc_8236E964;
loc_8236E924:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236e964
	if (ctx.cr6.eq) goto loc_8236E964;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236e954
	if (!ctx.cr0.lt) goto loc_8236E954;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E954;
	sub_823380C8(ctx, base);
loc_8236E954:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236e924
	if (ctx.cr6.gt) goto loc_8236E924;
loc_8236E964:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236e988
	if (!ctx.cr0.lt) goto loc_8236E988;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236E988;
	sub_823380C8(ctx, base);
loc_8236E988:
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bge cr6,0x8236ea10
	if (!ctx.cr6.lt) goto loc_8236EA10;
loc_8236E9A0:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8236e9e8
	if (ctx.cr6.gt) goto loc_8236E9E8;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bgt cr6,0x8236ea9c
	if (ctx.cr6.gt) goto loc_8236EA9C;
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
	// b 0x8236ea00
	goto loc_8236EA00;
loc_8236E9E8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236ea10
	if (!ctx.cr6.eq) goto loc_8236EA10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82337bd8
	ctx.lr = 0x8236E9FC;
	sub_82337BD8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 12);
loc_8236EA00:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8236e9a0
	if (ctx.cr6.lt) goto loc_8236E9A0;
loc_8236EA10:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(r31.u32 + 0);
loc_8236EA14:
	// cmplwi cr6,r11,268
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 268, ctx.xer);
	// bne cr6,0x8236eae4
	if (!ctx.cr6.eq) goto loc_8236EAE4;
	// lwz r31,84(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 84);
	// li r29,16
	r29.s64 = 16;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8236ea74
	if (!ctx.cr6.lt) goto loc_8236EA74;
loc_8236EA34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236ea74
	if (ctx.cr6.eq) goto loc_8236EA74;
	// ld r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sld r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// subf r29,r11,r29
	r29.u64 = r29.u64 - ctx.r11.u64;
	// std r6,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r6.u64);
	// stw r7,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// bge 0x8236ea64
	if (!ctx.cr0.lt) goto loc_8236EA64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236EA64;
	sub_823380C8(ctx, base);
loc_8236EA64:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8236ea34
	if (ctx.cr6.gt) goto loc_8236EA34;
loc_8236EA74:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrldi r9,r29,32
	ctx.r9.u64 = r29.u64 & 0xFFFFFFFF;
	// subf. r8,r29,r10
	ctx.r8.u64 = ctx.r10.u64 - r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	REX_STORE_U64(r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// bge 0x8236eae4
	if (!ctx.cr0.lt) goto loc_8236EAE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823380c8
	ctx.lr = 0x8236EA98;
	sub_823380C8(ctx, base);
	// b 0x8236eae4
	goto loc_8236EAE4;
loc_8236EA9C:
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bge cr6,0x8236ea10
	if (!ctx.cr6.lt) goto loc_8236EA10;
	// addi r9,r10,248
	ctx.r9.s64 = ctx.r10.s64 + 248;
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U64(r31.u32 + 0);
	// clrlwi r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	// srd r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rldicl r4,r5,48,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFFFFFFFFFF;
	// rotlwi r11,r4,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// b 0x8236ea14
	goto loc_8236EA14;
loc_8236EACC:
	// lwz r11,22184(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236eae4
	if (ctx.cr6.eq) goto loc_8236EAE4;
	// lwz r11,22048(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22048);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
loc_8236EAE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a8930
	ctx.lr = 0x8236EAEC;
	sub_823A8930(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dfd0
	if (!ctx.cr6.eq) goto loc_8236DFD0;
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236eb3c
	if (!ctx.cr6.eq) goto loc_8236EB3C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,21784(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 21784);
	// bl 0x823ab630
	ctx.lr = 0x8236EB10;
	sub_823AB630(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8236eb9c
	if (ctx.cr6.eq) goto loc_8236EB9C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392200
	ctx.lr = 0x8236EB28;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236EB30;
	sub_823952D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236EB3C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236eb9c
	if (!ctx.cr6.eq) goto loc_8236EB9C;
	// lwz r11,14840(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14840);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,3428(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 3428);
	// lwz r9,21784(r30)
	ctx.r9.u64 = REX_LOAD_U32(r30.u32 + 21784);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r8,r9
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// subf r11,r4,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// and r29,r6,r11
	r29.u64 = ctx.r6.u64 & ctx.r11.u64;
	// bl 0x823ab630
	ctx.lr = 0x8236EB78;
	sub_823AB630(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x8236e03c
	if (!ctx.cr6.eq) goto loc_8236E03C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823ab740
	ctx.lr = 0x8236EB90;
	sub_823AB740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8236dfd0
	if (!ctx.cr6.eq) goto loc_8236DFD0;
loc_8236EB9C:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236ebac
	if (!ctx.cr6.eq) goto loc_8236EBAC;
	// stw r27,3416(r30)
	REX_STORE_U32(r30.u32 + 3416, r27.u32);
loc_8236EBAC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,1948(r30)
	REX_STORE_U32(r30.u32 + 1948, r28.u32);
	// beq cr6,0x8236edc8
	if (ctx.cr6.eq) goto loc_8236EDC8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8236edc8
	if (ctx.cr6.eq) goto loc_8236EDC8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823400b0
	ctx.lr = 0x8236EBC8;
	sub_823400B0(ctx, base);
	// lwz r11,4020(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 4020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ed34
	if (ctx.cr6.eq) goto loc_8236ED34;
	// lwz r11,14836(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 14836);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ebe8
	if (ctx.cr6.eq) goto loc_8236EBE8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82347f10
	ctx.lr = 0x8236EBE8;
	sub_82347F10(ctx, base);
loc_8236EBE8:
	// lwz r11,20728(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ec24
	if (ctx.cr6.eq) goto loc_8236EC24;
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236ec10
	if (!ctx.cr6.eq) goto loc_8236EC10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238b280
	ctx.lr = 0x8236EC0C;
	sub_8238B280(ctx, base);
	// stw r28,15628(r30)
	REX_STORE_U32(r30.u32 + 15628, r28.u32);
loc_8236EC10:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,20740(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20740);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20736(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20736);
	// bl 0x82377978
	ctx.lr = 0x8236EC24;
	sub_82377978(ctx, base);
loc_8236EC24:
	// lwz r11,20732(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ec60
	if (ctx.cr6.eq) goto loc_8236EC60;
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236ec4c
	if (!ctx.cr6.eq) goto loc_8236EC4C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238b280
	ctx.lr = 0x8236EC48;
	sub_8238B280(ctx, base);
	// stw r28,15628(r30)
	REX_STORE_U32(r30.u32 + 15628, r28.u32);
loc_8236EC4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,20748(r30)
	ctx.r6.u64 = REX_LOAD_U32(r30.u32 + 20748);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,20744(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 20744);
	// bl 0x82377978
	ctx.lr = 0x8236EC60;
	sub_82377978(ctx, base);
loc_8236EC60:
	// lwz r11,22224(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 22224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236ed34
	if (!ctx.cr6.eq) goto loc_8236ED34;
	// lwz r11,20728(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ec84
	if (ctx.cr6.eq) goto loc_8236EC84;
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ec9c
	if (ctx.cr6.eq) goto loc_8236EC9C;
loc_8236EC84:
	// lwz r11,20732(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20732);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ed34
	if (ctx.cr6.eq) goto loc_8236ED34;
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236ed34
	if (!ctx.cr6.eq) goto loc_8236ED34;
loc_8236EC9C:
	// lwz r11,204(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 204);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,184(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 184);
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// lwz r4,15920(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 15920);
	// lwz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 172);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,220(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 220);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r10,164(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 164);
	// lwz r4,3788(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3788);
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// bctrl 
	ctx.lr = 0x8236ECE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,208(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 208);
	// lwz r11,196(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 196);
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// stw r7,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// lwz r31,168(r30)
	r31.u64 = REX_LOAD_U32(r30.u32 + 168);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r29,15916(r30)
	r29.u64 = REX_LOAD_U32(r30.u32 + 15916);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,176(r30)
	ctx.r7.u64 = REX_LOAD_U32(r30.u32 + 176);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r8,224(r30)
	ctx.r8.u64 = REX_LOAD_U32(r30.u32 + 224);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,3796(r30)
	ctx.r5.u64 = REX_LOAD_U32(r30.u32 + 3796);
	// lwz r4,3792(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 3792);
	// stw r28,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// mtctr r29
	ctx.ctr.u64 = r29.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// bctrl 
	ctx.lr = 0x8236ED34;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236ED34:
	// lwz r11,288(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 288);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8236ed4c
	if (!ctx.cr6.eq) goto loc_8236ED4C;
	// bl 0x8248a3c8
	ctx.lr = 0x8236ED48;
	sub_8248A3C8(ctx, base);
	// b 0x8236ed50
	goto loc_8236ED50;
loc_8236ED4C:
	// bl 0x8248a220
	ctx.lr = 0x8236ED50;
	sub_8248A220(ctx, base);
loc_8236ED50:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8236ee18
	if (!ctx.cr6.eq) goto loc_8236EE18;
loc_8236ED5C:
	// mr r26,r28
	r26.u64 = r28.u64;
loc_8236ED60:
	// lwz r11,15628(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ed78
	if (ctx.cr6.eq) goto loc_8236ED78;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20688(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// bl 0x8238b280
	ctx.lr = 0x8236ED78;
	sub_8238B280(ctx, base);
loc_8236ED78:
	// lwz r11,20680(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// lwz r11,20684(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20684);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236ee40
	if (ctx.cr6.eq) goto loc_8236EE40;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20688(r30)
	ctx.r4.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// bl 0x8238b010
	ctx.lr = 0x8236ED9C;
	sub_8238B010(ctx, base);
	// lwz r11,20688(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 20688);
	// li r4,0
	ctx.r4.s64 = 0;
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,20688(r30)
	REX_STORE_U32(r30.u32 + 20688, ctx.r10.u32);
	// bl 0x82392200
	ctx.lr = 0x8236EDB4;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236EDBC;
	sub_823952D8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236EDC8:
	// lwz r11,15572(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 15572);
	// stw r28,3724(r30)
	REX_STORE_U32(r30.u32 + 3724, r28.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236ede8
	if (!ctx.cr6.eq) goto loc_8236EDE8;
	// lwz r11,152(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = r28.u64;
	// bne cr6,0x8236edec
	if (!ctx.cr6.eq) goto loc_8236EDEC;
loc_8236EDE8:
	// mr r11,r27
	ctx.r11.u64 = r27.u64;
loc_8236EDEC:
	// lwz r10,14884(r30)
	ctx.r10.u64 = REX_LOAD_U32(r30.u32 + 14884);
	// stw r11,15540(r30)
	REX_STORE_U32(r30.u32 + 15540, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8236ee04
	if (ctx.cr6.eq) goto loc_8236EE04;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8234c7c0
	ctx.lr = 0x8236EE04;
	sub_8234C7C0(ctx, base);
loc_8236EE04:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82489e58
	ctx.lr = 0x8236EE0C;
	sub_82489E58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8236ed5c
	if (ctx.cr6.eq) goto loc_8236ED5C;
loc_8236EE18:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(r31.s32, 0, ctx.xer);
	// beq cr6,0x8236ed60
	if (ctx.cr6.eq) goto loc_8236ED60;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392200
	ctx.lr = 0x8236EE2C;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236EE34;
	sub_823952D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
loc_8236EE40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82392200
	ctx.lr = 0x8236EE4C;
	sub_82392200(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823952d8
	ctx.lr = 0x8236EE54;
	sub_823952D8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_823ABFB8) {
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
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e50
	ctx.lr = 0x823ABFC0;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f2c
	ctx.lr = 0x823ABFC8;
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r10,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r10.u32);
	// lwz r10,412(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 412);
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r14,r9
	r14.u64 = ctx.r9.u64;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r9,420(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 420);
	// mr r16,r5
	r16.u64 = ctx.r5.u64;
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// fcfid f30,f13
	f30.f64 = double(ctx.f13.s64);
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// srawi r29,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	r29.s64 = ctx.r3.s32 >> 1;
	// li r27,0
	r27.s64 = 0;
	// fsub f25,f10,f11
	f25.f64 = ctx.f10.f64 - ctx.f11.f64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x823ac1f0
	if (!ctx.cr6.gt) goto loc_823AC1F0;
	// lwz r11,388(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r21,404(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r26,r11
	r26.u64 = ctx.r11.u64;
	// lwz r20,396(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// subf r17,r11,r8
	r17.u64 = ctx.r8.u64 - ctx.r11.u64;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r24,80(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfd f28,-9416(r10)
	f28.u64 = REX_LOAD_U64(ctx.r10.u32 + -9416);
	// fneg f26,f30
	f26.u64 = f30.u64 ^ 0x8000000000000000;
	// lfd f29,4000(r9)
	f29.u64 = REX_LOAD_U64(ctx.r9.u32 + 4000);
	// li r25,0
	r25.s64 = 0;
	// subf r15,r8,r16
	r15.u64 = r16.u64 - ctx.r8.u64;
	// lfd f27,31912(r11)
	f27.u64 = REX_LOAD_U64(ctx.r11.u32 + 31912);
loc_823AC078:
	// extsw r11,r27
	ctx.r11.s64 = r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fsub f31,f13,f25
	f31.f64 = ctx.f13.f64 - f25.f64;
	// fcmpu cr6,f31,f26
	ctx.cr6.compare(f31.f64, f26.f64);
	// bge cr6,0x823ac0a4
	if (!ctx.cr6.lt) goto loc_823AC0A4;
loc_823AC094:
	// add r11,r17,r15
	ctx.r11.u64 = r17.u64 + r15.u64;
	// li r30,0
	r30.s64 = 0;
	// add r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 + r26.u64;
	// b 0x823ac0b4
	goto loc_823AC0B4;
loc_823AC0A4:
	// fcmpu cr6,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f30.f64);
	// ble cr6,0x823ac10c
	if (!ctx.cr6.gt) goto loc_823AC10C;
loc_823AC0AC:
	// li r30,2
	r30.s64 = 2;
	// add r4,r17,r26
	ctx.r4.u64 = r17.u64 + r26.u64;
loc_823AC0B4:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC0C0;
	sub_822D4FA0(ctx, base);
	// clrlwi r11,r27,31
	ctx.r11.u64 = r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823ac1dc
	if (!ctx.cr6.eq) goto loc_823AC1DC;
	// srawi r11,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	ctx.r11.s64 = r27.s32 >> 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(r30.s32, 1, ctx.xer);
	// mullw r31,r11,r29
	r31.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// bne cr6,0x823ac190
	if (!ctx.cr6.eq) goto loc_823AC190;
	// add r11,r24,r27
	ctx.r11.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x823ac188
	if (!ctx.cr6.lt) goto loc_823AC188;
	// srawi r11,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	ctx.r11.s64 = r24.s32 >> 1;
loc_823AC0EC:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(r29.s32);
	// add r30,r11,r31
	r30.u64 = ctx.r11.u64 + r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r30,r19
	ctx.r4.u64 = r30.u64 + r19.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC104;
	sub_822D4FA0(ctx, base);
	// add r4,r30,r18
	ctx.r4.u64 = r30.u64 + r18.u64;
	// b 0x823ac1d0
	goto loc_823AC1D0;
loc_823AC10C:
	// fdiv f1,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64 / f30.f64;
	// bl 0x822d6768
	ctx.lr = 0x823AC114;
	sub_822D6768(ctx, base);
	// fsub f0,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = f28.f64 - ctx.f1.f64;
	// fmsub f13,f1,f30,f31
	ctx.f13.f64 = std::fma(ctx.f1.f64, f30.f64, -f31.f64);
	// fmsub f12,f0,f30,f31
	ctx.f12.f64 = std::fma(ctx.f0.f64, f30.f64, -f31.f64);
	// fadd f11,f13,f29
	ctx.f11.f64 = ctx.f13.f64 + f29.f64;
	// fadd f10,f12,f29
	ctx.f10.f64 = ctx.f12.f64 + f29.f64;
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r22,92(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f8,f10
	ctx.f8.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f8,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f8.u64);
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r24,r27
	ctx.r11.u64 = r24.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x823ac160
	if (!ctx.cr6.lt) goto loc_823AC160;
	// mullw r11,r24,r28
	ctx.r11.s64 = int64_t(r24.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + r16.u64;
	// b 0x823ac0b4
	goto loc_823AC0B4;
loc_823AC160:
	// add r11,r22,r27
	ctx.r11.u64 = r22.u64 + r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, r23.s32, ctx.xer);
	// bge cr6,0x823ac0ac
	if (!ctx.cr6.lt) goto loc_823AC0AC;
	// fcmpu cr6,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(f31.f64, f27.f64);
	// ble cr6,0x823ac094
	if (!ctx.cr6.gt) goto loc_823AC094;
	// mullw r11,r22,r28
	ctx.r11.s64 = int64_t(r22.s32) * int64_t(r28.s32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + r25.u64;
	// li r30,1
	r30.s64 = 1;
	// add r4,r11,r16
	ctx.r4.u64 = ctx.r11.u64 + r16.u64;
	// b 0x823ac0b4
	goto loc_823AC0B4;
loc_823AC188:
	// srawi r11,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	ctx.r11.s64 = r22.s32 >> 1;
	// b 0x823ac0ec
	goto loc_823AC0EC;
loc_823AC190:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bne cr6,0x823ac1b0
	if (!ctx.cr6.eq) goto loc_823AC1B0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r19
	ctx.r4.u64 = r31.u64 + r19.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC1A8;
	sub_822D4FA0(ctx, base);
	// add r4,r31,r18
	ctx.r4.u64 = r31.u64 + r18.u64;
	// b 0x823ac1d0
	goto loc_823AC1D0;
loc_823AC1B0:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(r30.s32, 2, ctx.xer);
	// bne cr6,0x823ac1dc
	if (!ctx.cr6.eq) goto loc_823AC1DC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r4,r31,r14
	ctx.r4.u64 = r31.u64 + r14.u64;
	// add r3,r31,r20
	ctx.r3.u64 = r31.u64 + r20.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC1C8;
	sub_822D4FA0(ctx, base);
	// lwz r11,380(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + ctx.r11.u64;
loc_823AC1D0:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r3,r31,r21
	ctx.r3.u64 = r31.u64 + r21.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x823AC1DC;
	sub_822D4FA0(ctx, base);
loc_823AC1DC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// add r25,r25,r28
	r25.u64 = r25.u64 + r28.u64;
	// add r26,r26,r28
	r26.u64 = r26.u64 + r28.u64;
	// cmpw cr6,r27,r23
	ctx.cr6.compare<int32_t>(r27.s32, r23.s32, ctx.xer);
	// blt cr6,0x823ac078
	if (ctx.cr6.lt) goto loc_823AC078;
loc_823AC1F0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f78
	ctx.lr = 0x823AC1FC;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_823B64B0) {
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
	ctx.lr = 0x823B64B8;
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x823b64e8
	if (ctx.cr6.eq) goto loc_823B64E8;
	// lwz r10,112(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,100(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// addi r30,r11,3
	r30.s64 = ctx.r11.s64 + 3;
	// stw r8,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r8.u32);
	// b 0x823b650c
	goto loc_823B650C;
loc_823B64E8:
	// lwz r5,100(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// stw r10,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// addi r30,r5,2
	r30.s64 = ctx.r5.s64 + 2;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r9,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r9.u32);
	// stw r11,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r11.u32);
loc_823B650C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r9,92(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,-256(r1)
	REX_STORE_U32(ctx.r1.u32 + -256, r30.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// stw r5,-252(r1)
	REX_STORE_U32(ctx.r1.u32 + -252, ctx.r5.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfd f8,-28728(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + -28728);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lfd f5,31912(r8)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r8.u32 + 31912);
	// stw r28,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r28.u32);
	// lfd f7,4000(r7)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r7.u32 + 4000);
	// lfd f6,26664(r6)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r6.u32 + 26664);
	// ble cr6,0x823b6f08
	if (!ctx.cr6.gt) goto loc_823B6F08;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// fsub f11,f2,f1
	ctx.f11.f64 = ctx.f2.f64 - ctx.f1.f64;
	// li r29,16
	r29.s64 = 16;
	// stw r11,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_823B6558:
	// extsw r10,r28
	ctx.r10.s64 = r28.s32;
	// lwz r9,96(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// std r10,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.r10.u64);
	// lfd f13,-280(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x823b6588
	if (ctx.cr6.eq) goto loc_823B6588;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x823b658c
	goto loc_823B658C;
loc_823B6588:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_823B658C:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// lwz r7,100(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stw r9,-10300(r8)
	REX_STORE_U32(ctx.r8.u32 + -10300, ctx.r9.u32);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// std r4,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.r4.u64);
	// lfd f10,-264(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// fmsub f13,f13,f8,f9
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f9.f64);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r7,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r7.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r9,r9
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// mullw r6,r8,r9
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// stw r8,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, ctx.r8.u32);
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stw r4,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r4.u32);
	// ble cr6,0x823b6c70
	if (!ctx.cr6.gt) goto loc_823B6C70;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6c6c
	if (!ctx.cr6.lt) goto loc_823B6C6C;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	r31.s64 = 0;
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6ef4
	if (!ctx.cr6.gt) goto loc_823B6EF4;
loc_823B6624:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f13.u64);
	// lwz r9,-292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b6b2c
	if (!ctx.cr6.gt) goto loc_823B6B2C;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r8,r10,-2
	ctx.r8.s64 = ctx.r10.s64 + -2;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b6b28
	if (!ctx.cr6.lt) goto loc_823B6B28;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r5,r8
	r28.u64 = ctx.r8.u64 - ctx.r5.u64;
	// stw r11,-10300(r9)
	REX_STORE_U32(ctx.r9.u32 + -10300, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lbz r9,-2(r8)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + -2);
	// add r26,r11,r8
	r26.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// addi r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 2;
	// lbz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r6,-2(r28)
	ctx.r6.u64 = REX_LOAD_U8(r28.u32 + -2);
	// rotlwi r4,r11,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U8(r28.u32 + 0);
	// rotlwi r19,r11,2
	r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// rlwinm r25,r3,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r27,-2(r7)
	r27.u64 = REX_LOAD_U8(ctx.r7.u32 + -2);
	// lbz r31,2(r26)
	r31.u64 = REX_LOAD_U8(r26.u32 + 2);
	// add r24,r9,r10
	r24.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r30,-2(r26)
	r30.u64 = REX_LOAD_U8(r26.u32 + -2);
	// add r21,r11,r19
	r21.u64 = ctx.r11.u64 + r19.u64;
	// add r23,r31,r6
	r23.u64 = r31.u64 + ctx.r6.u64;
	// lbz r29,2(r28)
	r29.u64 = REX_LOAD_U8(r28.u32 + 2);
	// add r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 + r30.u64;
	// lbz r4,0(r7)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r22,r23,1,0,30
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r28)
	r28.u64 = REX_LOAD_U8(r28.u32 + 4);
	// rlwinm r20,r24,1,0,30
	r20.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r23,2(r7)
	r23.u64 = REX_LOAD_U8(ctx.r7.u32 + 2);
	// subf r19,r27,r22
	r19.u64 = r22.u64 - r27.u64;
	// lbz r24,4(r7)
	r24.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// add r18,r3,r29
	r18.u64 = ctx.r3.u64 + r29.u64;
	// lbz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U8(r26.u32 + 0);
	// subf r3,r20,r4
	ctx.r3.u64 = ctx.r4.u64 - r20.u64;
	// lbzx r22,r25,r8
	r22.u64 = REX_LOAD_U8(r25.u32 + ctx.r8.u32);
	// lfd f13,-200(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// subf r26,r28,r19
	r26.u64 = r19.u64 - r28.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r20,r18,1,0,30
	r20.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// stw r21,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r21.u32);
	// subf r19,r29,r10
	r19.u64 = ctx.r10.u64 - r29.u64;
	// lbz r8,2(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// rlwinm r25,r26,1,0,30
	r25.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r23,r20
	r26.u64 = r20.u64 - r23.u64;
	// rlwinm r21,r3,3,0,28
	r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r19,1,0,30
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r25,r24
	r19.u64 = r25.u64 + r24.u64;
	// subf r26,r22,r26
	r26.u64 = r26.u64 - r22.u64;
	// subf r25,r3,r21
	r25.u64 = r21.u64 - ctx.r3.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// subf r20,r4,r20
	r20.u64 = r20.u64 - ctx.r4.u64;
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r21,r26,2,0,29
	r21.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r20,r6,r20
	r20.u64 = r20.u64 - ctx.r6.u64;
	// add r25,r25,r3
	r25.u64 = r25.u64 + ctx.r3.u64;
	// add r3,r26,r21
	ctx.r3.u64 = r26.u64 + r21.u64;
	// add r21,r20,r23
	r21.u64 = r20.u64 + r23.u64;
	// add r20,r7,r8
	r20.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r3,r25,r3
	ctx.r3.u64 = r25.u64 + ctx.r3.u64;
	// add r25,r21,r28
	r25.u64 = r21.u64 + r28.u64;
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f9.u64);
	// lwz r15,-292(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -292);
	// mullw r26,r15,r15
	r26.s64 = int64_t(r15.s32) * int64_t(r15.s32);
	// srawi r26,r26,8
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0xFF) != 0);
	r26.s64 = r26.s32 >> 8;
	// mulli r21,r20,13
	r21.s64 = static_cast<int64_t>(r20.u64 * static_cast<uint64_t>(13));
	// mullw r20,r26,r15
	r20.s64 = int64_t(r26.s32) * int64_t(r15.s32);
	// subf r21,r21,r3
	r21.u64 = ctx.r3.u64 - r21.u64;
	// rlwinm r3,r25,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r25,r20,8
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xFF) != 0);
	r25.s64 = r20.s32 >> 8;
	// srawi r14,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r14.s64 = r21.s32 >> 1;
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// subf r21,r7,r31
	r21.u64 = r31.u64 - ctx.r7.u64;
	// subf r20,r30,r22
	r20.u64 = r22.u64 - r30.u64;
	// subf r18,r11,r10
	r18.u64 = ctx.r10.u64 - ctx.r11.u64;
	// std r27,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, r27.u64);
	// rlwinm r17,r20,2,0,29
	r17.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,-272(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// subf r18,r6,r18
	r18.u64 = r18.u64 - ctx.r6.u64;
	// stw r17,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r17.u32);
	// subf r16,r31,r7
	r16.u64 = ctx.r7.u64 - r31.u64;
	// stw r3,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// rlwinm r18,r18,1,0,30
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r30,r9
	r17.u64 = ctx.r9.u64 - r30.u64;
	// stw r19,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r19.u32);
	// subf r3,r5,r16
	ctx.r3.u64 = r16.u64 - ctx.r5.u64;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r4,r18
	r18.u64 = r18.u64 - ctx.r4.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// subf r17,r5,r17
	r17.u64 = r17.u64 - ctx.r5.u64;
	// add r18,r18,r27
	r18.u64 = r18.u64 + r27.u64;
	// rlwinm r16,r3,3,0,28
	r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r17,r6,r17
	r17.u64 = r17.u64 - ctx.r6.u64;
	// add r18,r18,r7
	r18.u64 = r18.u64 + ctx.r7.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = r16.u64 - ctx.r3.u64;
	// lwz r16,-320(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// add r17,r17,r27
	r17.u64 = r17.u64 + r27.u64;
	// stw r18,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r18.u32);
	// lwz r27,-320(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r16,r3
	r18.u64 = r16.u64 + ctx.r3.u64;
	// add r3,r17,r22
	ctx.r3.u64 = r17.u64 + r22.u64;
	// lwz r17,-300(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r8,r31
	r19.u64 = r31.u64 - ctx.r8.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r4,r8
	r16.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r3,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, ctx.r3.u32);
	// add r3,r20,r17
	ctx.r3.u64 = r20.u64 + r17.u64;
	// rlwinm r20,r19,1,0,30
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r17,-320(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// subf r17,r24,r17
	r17.u64 = r17.u64 - r24.u64;
	// add r19,r19,r20
	r19.u64 = r19.u64 + r20.u64;
	// stw r17,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r17.u32);
	// subf r20,r31,r16
	r20.u64 = r16.u64 - r31.u64;
	// mullw r17,r14,r26
	r17.s64 = int64_t(r14.s32) * int64_t(r26.s32);
	// stw r17,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r17.u32);
	// add r20,r20,r10
	r20.u64 = r20.u64 + ctx.r10.u64;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r20,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, r20.u32);
	// rotlwi r20,r30,2
	r20.u64 = __builtin_rotateleft32(r30.u32, 2);
	// rotlwi r14,r27,0
	r14.u64 = __builtin_rotateleft32(r27.u32, 0);
	// stw r27,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, r27.u32);
	// add r20,r30,r20
	r20.u64 = r30.u64 + r20.u64;
	// std r26,-248(r1)
	REX_STORE_U64(ctx.r1.u32 + -248, r26.u64);
	// add r19,r14,r19
	r19.u64 = r14.u64 + r19.u64;
	// rotlwi r14,r9,3
	r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r16,r11,r8
	r16.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r19,r20,r19
	r19.u64 = r19.u64 - r20.u64;
	// add r18,r18,r3
	r18.u64 = r18.u64 + ctx.r3.u64;
	// subf r20,r9,r14
	r20.u64 = r14.u64 - ctx.r9.u64;
	// mulli r3,r16,11
	ctx.r3.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(11));
	// lwz r16,-320(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// lwz r27,-316(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r3
	r18.u64 = r18.u64 + ctx.r3.u64;
	// subf r26,r23,r4
	r26.u64 = ctx.r4.u64 - r23.u64;
	// rotlwi r17,r7,1
	r17.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// lwz r14,-300(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// add r16,r16,r28
	r16.u64 = r16.u64 + r28.u64;
	// add r17,r17,r10
	r17.u64 = r17.u64 + ctx.r10.u64;
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// subf r3,r29,r23
	ctx.r3.u64 = r23.u64 - r29.u64;
	// rlwinm r23,r14,3,0,28
	r23.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r14.u32);
	// subf r14,r22,r26
	r14.u64 = r26.u64 - r22.u64;
	// lwz r26,-316(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// subf r23,r26,r23
	r23.u64 = r23.u64 - r26.u64;
	// lwz r26,-296(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// rlwinm r22,r16,1,0,30
	r22.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r20
	r19.u64 = r19.u64 + r20.u64;
	// subf r17,r26,r17
	r17.u64 = r17.u64 - r26.u64;
	// subf r16,r11,r7
	r16.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mullw r20,r18,r25
	r20.s64 = int64_t(r18.s32) * int64_t(r25.s32);
	// subf r18,r9,r14
	r18.u64 = r14.u64 - ctx.r9.u64;
	// add r22,r22,r23
	r22.u64 = r22.u64 + r23.u64;
	// mulli r23,r16,11
	r23.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(11));
	// subf r18,r10,r18
	r18.u64 = r18.u64 - ctx.r10.u64;
	// add r23,r22,r23
	r23.u64 = r22.u64 + r23.u64;
	// add r22,r18,r30
	r22.u64 = r18.u64 + r30.u64;
	// lwz r18,-324(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r30,r9,r30
	r30.u64 = r30.u64 - ctx.r9.u64;
	// srawi r26,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r26.s64 = r19.s32 >> 1;
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r3,2,0,29
	r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r30.u32);
	// subf r14,r4,r17
	r14.u64 = r17.u64 - ctx.r4.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + r19.u64;
	// add r17,r27,r20
	r17.u64 = r27.u64 + r20.u64;
	// ld r27,-288(r1)
	r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// add r3,r23,r3
	ctx.r3.u64 = r23.u64 + ctx.r3.u64;
	// subf r23,r11,r9
	r23.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r3,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, ctx.r3.u32);
	// add r3,r22,r5
	ctx.r3.u64 = r22.u64 + ctx.r5.u64;
	// subf r23,r6,r23
	r23.u64 = r23.u64 - ctx.r6.u64;
	// add r22,r3,r29
	r22.u64 = ctx.r3.u64 + r29.u64;
	// subf r3,r8,r21
	ctx.r3.u64 = r21.u64 - ctx.r8.u64;
	// mullw r20,r26,r15
	r20.s64 = int64_t(r26.s32) * int64_t(r15.s32);
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// subf r19,r10,r29
	r19.u64 = r29.u64 - ctx.r10.u64;
	// lwz r26,-296(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r23,r23,1,0,30
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r3,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r26,r27,r26
	r26.u64 = r26.u64 - r27.u64;
	// subf r23,r5,r23
	r23.u64 = r23.u64 - ctx.r5.u64;
	// subf r19,r31,r19
	r19.u64 = r19.u64 - r31.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// subf r30,r31,r26
	r30.u64 = r26.u64 - r31.u64;
	// ld r26,-248(r1)
	r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -248);
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r23,r8
	r31.u64 = r23.u64 + ctx.r8.u64;
	// subf r23,r8,r19
	r23.u64 = r19.u64 - ctx.r8.u64;
	// add r22,r22,r3
	r22.u64 = r22.u64 + ctx.r3.u64;
	// add r31,r31,r28
	r31.u64 = r31.u64 + r28.u64;
	// rlwinm r3,r21,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r7,r30
	r19.u64 = r30.u64 - ctx.r7.u64;
	// subf r23,r9,r23
	r23.u64 = r23.u64 - ctx.r9.u64;
	// rlwinm r30,r31,1,0,30
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r21,r3
	ctx.r3.u64 = r21.u64 + ctx.r3.u64;
	// subf r22,r27,r22
	r22.u64 = r22.u64 - r27.u64;
	// subf r23,r28,r23
	r23.u64 = r23.u64 - r28.u64;
	// subf r31,r10,r19
	r31.u64 = r19.u64 - ctx.r10.u64;
	// srawi r16,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r16.s64 = r14.s32 >> 1;
	// lwz r14,-272(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// rotlwi r27,r29,2
	r27.u64 = __builtin_rotateleft32(r29.u32, 2);
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// subf r28,r28,r22
	r28.u64 = r22.u64 - r28.u64;
	// add r19,r17,r20
	r19.u64 = r17.u64 + r20.u64;
	// add r30,r23,r7
	r30.u64 = r23.u64 + ctx.r7.u64;
	// add r31,r31,r4
	r31.u64 = r31.u64 + ctx.r4.u64;
	// add r27,r29,r27
	r27.u64 = r29.u64 + r27.u64;
	// rlwinm r20,r16,8,0,23
	r20.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-316(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// rotlwi r22,r10,3
	r22.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// add r28,r28,r24
	r28.u64 = r28.u64 + r24.u64;
	// add r31,r31,r8
	r31.u64 = r31.u64 + ctx.r8.u64;
	// add r30,r30,r5
	r30.u64 = r30.u64 + ctx.r5.u64;
	// subf r24,r27,r3
	r24.u64 = ctx.r3.u64 - r27.u64;
	// rotlwi r29,r8,1
	r29.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// subf r27,r10,r22
	r27.u64 = r22.u64 - ctx.r10.u64;
	// srawi r23,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r23.s64 = r16.s32 >> 1;
	// subf r3,r8,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r28,r28,r6
	r28.u64 = r28.u64 + ctx.r6.u64;
	// add r31,r31,r11
	r31.u64 = r31.u64 + ctx.r11.u64;
	// add r30,r30,r11
	r30.u64 = r30.u64 + ctx.r11.u64;
	// add r21,r19,r20
	r21.u64 = r19.u64 + r20.u64;
	// add r22,r29,r9
	r22.u64 = r29.u64 + ctx.r9.u64;
	// add r27,r24,r27
	r27.u64 = r24.u64 + r27.u64;
	// mullw r20,r23,r26
	r20.s64 = int64_t(r23.s32) * int64_t(r26.s32);
	// subf r24,r9,r11
	r24.u64 = ctx.r11.u64 - ctx.r9.u64;
	// rlwinm r29,r3,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r31,r6
	r19.u64 = r31.u64 + ctx.r6.u64;
	// mullw r28,r28,r25
	r28.s64 = int64_t(r28.s32) * int64_t(r25.s32);
	// add r23,r30,r6
	r23.u64 = r30.u64 + ctx.r6.u64;
	// subf r31,r10,r24
	r31.u64 = r24.u64 - ctx.r10.u64;
	// rlwinm r24,r22,1,0,30
	r24.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r30,r20,r28
	r30.u64 = r20.u64 + r28.u64;
	// add r20,r31,r6
	r20.u64 = r31.u64 + ctx.r6.u64;
	// srawi r27,r27,1
	ctx.xer.ca = (r27.s32 < 0) & ((r27.u32 & 0x1) != 0);
	r27.s64 = r27.s32 >> 1;
	// subf r6,r14,r24
	ctx.r6.u64 = r24.u64 - r14.u64;
	// add r22,r3,r29
	r22.u64 = ctx.r3.u64 + r29.u64;
	// mullw r3,r19,r15
	ctx.r3.s64 = int64_t(r19.s32) * int64_t(r15.s32);
	// mullw r29,r23,r25
	r29.s64 = int64_t(r23.s32) * int64_t(r25.s32);
	// subf r23,r5,r6
	r23.u64 = ctx.r6.u64 - ctx.r5.u64;
	// mullw r28,r27,r26
	r28.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// lwz r27,-344(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r6,r7,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r24,r30,r3
	r24.u64 = r30.u64 + ctx.r3.u64;
	// add r30,r28,r29
	r30.u64 = r28.u64 + r29.u64;
	// rlwinm r28,r6,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r22
	r31.u64 = r22.u64 - ctx.r9.u64;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// subf r8,r9,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r9.u64;
	// subf r9,r10,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r5,r31,r5
	ctx.r5.u64 = r31.u64 + ctx.r5.u64;
	// srawi r6,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	ctx.r6.s64 = r23.s32 >> 1;
	// mullw r3,r20,r15
	ctx.r3.s64 = int64_t(r20.s32) * int64_t(r15.s32);
	// srawi r5,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 1;
	// add r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r3,r30,r3
	ctx.r3.u64 = r30.u64 + ctx.r3.u64;
	// mullw r30,r5,r25
	r30.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// mullw r29,r6,r26
	r29.s64 = int64_t(ctx.r6.s32) * int64_t(r26.s32);
	// rotlwi r9,r11,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r11,r4,r27
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r6,r29,r30
	ctx.r6.u64 = r29.u64 + r30.u64;
	// mullw r5,r24,r27
	ctx.r5.s64 = int64_t(r24.s32) * int64_t(r27.s32);
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// mullw r19,r21,r18
	r19.s64 = int64_t(r21.s32) * int64_t(r18.s32);
	// subf r7,r10,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r31,r19,r5
	r31.u64 = r19.u64 + ctx.r5.u64;
	// lwz r5,-308(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r11,r8,r15
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(r15.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r11,r6,r5
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mullw r3,r3,r5
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r5.s32);
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r31,r3
	ctx.r3.u64 = r31.u64 + ctx.r3.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r3,r11
	ctx.r4.u64 = ctx.r3.u64 + ctx.r11.u64;
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b6af0
	if (!ctx.cr6.gt) goto loc_823B6AF0;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b6afc
	goto loc_823B6AFC;
loc_823B6AF0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B6AFC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// li r29,16
	r29.s64 = 16;
	// lwz r5,-252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r31,-304(r1)
	r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r28,-268(r1)
	r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r7,-352(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// stb r10,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
	// b 0x823b6c4c
	goto loc_823B6C4C;
loc_823B6B28:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_823B6B2C:
	// beq cr6,0x823b6bb8
	if (ctx.cr6.eq) goto loc_823B6BB8;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6bb8
	if (ctx.cr6.lt) goto loc_823B6BB8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b6bb0
	if (!ctx.cr6.gt) goto loc_823B6BB0;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b6bb0
	if (!ctx.cr6.lt) goto loc_823B6BB0;
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// std r4,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, ctx.r4.u64);
	// lfd f13,-240(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-10300(r9)
	REX_STORE_U32(ctx.r9.u32 + -10300, ctx.r10.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r9,r6,r9
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x823b6c4c
	goto loc_823B6C4C;
loc_823B6BB0:
	// stb r29,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r29.u8);
	// b 0x823b6c4c
	goto loc_823B6C4C;
loc_823B6BB8:
	// rlwinm r10,r9,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// lis r9,-32162
	ctx.r9.s64 = -2107768832;
	// std r4,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r4.u64);
	// lfd f13,-232(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// stw r10,-10300(r9)
	REX_STORE_U32(ctx.r9.u32 + -10300, ctx.r10.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// subf r6,r6,r27
	ctx.r6.u64 = r27.u64 - ctx.r6.u64;
	// lwz r27,-284(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// mullw r4,r4,r27
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r27.s32);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mullw r6,r6,r27
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r27.s32);
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 8;
	// subfic r26,r27,256
	ctx.xer.ca = r27.u32 <= 256;
	r26.u64 = static_cast<uint64_t>(256) - r27.u64;
	// subf r10,r10,r26
	ctx.r10.u64 = r26.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
loc_823B6C4C:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r31,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r31.u32);
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
	// blt cr6,0x823b6624
	if (ctx.cr6.lt) goto loc_823B6624;
	// b 0x823b6ef4
	goto loc_823B6EF4;
loc_823B6C6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823B6C70:
	// blt cr6,0x823b6de4
	if (ctx.cr6.lt) goto loc_823B6DE4;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6de4
	if (!ctx.cr6.lt) goto loc_823B6DE4;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6ef4
	if (!ctx.cr6.gt) goto loc_823B6EF4;
loc_823B6C94:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b6dc8
	if (ctx.cr6.lt) goto loc_823B6DC8;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6d54
	if (!ctx.cr6.lt) goto loc_823B6D54;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r4,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r4.u64);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r4,2(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r27,2(r9)
	r27.u64 = REX_LOAD_U8(ctx.r9.u32 + 2);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// lfd f13,-336(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// subf r6,r6,r27
	ctx.r6.u64 = r27.u64 - ctx.r6.u64;
	// subf r6,r4,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r4.u64;
	// add r27,r6,r8
	r27.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r26,-284(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// mullw r6,r4,r26
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r26.s32);
	// mullw r4,r27,r26
	ctx.r4.s64 = int64_t(r27.s32) * int64_t(r26.s32);
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// subfic r27,r26,256
	ctx.xer.ca = r26.u32 <= 256;
	r27.u64 = static_cast<uint64_t>(256) - r26.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = r27.u64 - ctx.r10.u64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r8,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 8;
	// clrlwi r6,r8,24
	ctx.r6.u64 = ctx.r8.u32 & 0xFF;
	// stb r6,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// b 0x823b6dcc
	goto loc_823B6DCC;
loc_823B6D54:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6dc8
	if (!ctx.cr6.gt) goto loc_823B6DC8;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b6dc8
	if (!ctx.cr6.lt) goto loc_823B6DC8;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r4,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r4.u64);
	// lfd f13,-224(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// lbzx r4,r8,r7
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// lbzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f9.u64);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r10,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x823b6dcc
	goto loc_823B6DCC;
loc_823B6DC8:
	// stb r29,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r29.u8);
loc_823B6DCC:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6c94
	if (ctx.cr6.lt) goto loc_823B6C94;
	// b 0x823b6ef0
	goto loc_823B6EF0;
loc_823B6DE4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6ecc
	if (!ctx.cr6.gt) goto loc_823B6ECC;
	// lwz r9,84(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6ecc
	if (!ctx.cr6.lt) goto loc_823B6ECC;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6ef4
	if (!ctx.cr6.gt) goto loc_823B6EF4;
loc_823B6E08:
	// fadd f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f13.u64);
	// lwz r10,-284(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b6eb0
	if (ctx.cr6.lt) goto loc_823B6EB0;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6e8c
	if (!ctx.cr6.lt) goto loc_823B6E8C;
	// rlwinm r9,r10,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// std r4,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r4.u64);
	// lfd f13,-216(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmsub f10,f0,f8,f12
	ctx.f10.f64 = std::fma(ctx.f0.f64, ctx.f8.f64, -ctx.f12.f64);
	// stw r9,-10300(r10)
	REX_STORE_U32(ctx.r10.u32 + -10300, ctx.r9.u32);
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lbzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// lbz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 2);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f9.u64);
	// lwz r4,-284(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// subfic r31,r4,256
	ctx.xer.ca = ctx.r4.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r4.u64;
	// mullw r10,r8,r4
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r9,r31,r9
	ctx.r9.s64 = int64_t(r31.s32) * int64_t(ctx.r9.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// stb r8,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r8.u8);
	// b 0x823b6eb4
	goto loc_823B6EB4;
loc_823B6E8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b6eb0
	if (!ctx.cr6.gt) goto loc_823B6EB0;
	// lwz r9,80(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823b6eb0
	if (!ctx.cr6.lt) goto loc_823B6EB0;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r9,r10,r7
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// b 0x823b6eb4
	goto loc_823B6EB4;
loc_823B6EB0:
	// stb r29,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, r29.u8);
loc_823B6EB4:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpw cr6,r6,r10
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6e08
	if (ctx.cr6.lt) goto loc_823B6E08;
	// b 0x823b6ef0
	goto loc_823B6EF0;
loc_823B6ECC:
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x823b6ef4
	if (!ctx.cr6.gt) goto loc_823B6EF4;
loc_823B6EDC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r29,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, r29.u8);
	ctx.r11.u32 = ea;
	// lwz r9,88(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823b6edc
	if (ctx.cr6.lt) goto loc_823B6EDC;
loc_823B6EF0:
	// stw r11,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, ctx.r11.u32);
loc_823B6EF4:
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r28,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r28.u32);
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6558
	if (ctx.cr6.lt) goto loc_823B6558;
loc_823B6F08:
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r27,0
	r27.s64 = 0;
	// stw r27,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823b807c
	if (!ctx.cr6.gt) goto loc_823B807C;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,-328(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r8,-340(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// li r28,128
	r28.s64 = 128;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// addi r9,r8,-4
	ctx.r9.s64 = ctx.r8.s64 + -4;
	// stw r11,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// lfd f0,-25040(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + -25040);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmul f10,f1,f0
	ctx.f10.f64 = ctx.f1.f64 * ctx.f0.f64;
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
	// lfd f11,26904(r10)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r10.u32 + 26904);
	// fsub f9,f2,f10
	ctx.f9.f64 = ctx.f2.f64 - ctx.f10.f64;
loc_823B6F50:
	// extsw r10,r27
	ctx.r10.s64 = r27.s32;
	// lwz r8,96(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// std r10,-216(r1)
	REX_STORE_U64(ctx.r1.u32 + -216, ctx.r10.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfd f13,-216(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -216);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fmadd f12,f12,f3,f4
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f3.f64, ctx.f4.f64);
	// beq cr6,0x823b6f80
	if (ctx.cr6.eq) goto loc_823B6F80;
	// fsub f13,f3,f6
	ctx.f13.f64 = ctx.f3.f64 - ctx.f6.f64;
	// fmul f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64;
	// b 0x823b6f84
	goto loc_823B6F84;
loc_823B6F80:
	// fmr f13,f5
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f5.f64;
loc_823B6F84:
	// fadd f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 + ctx.f12.f64;
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f12.u64);
	// lwz r10,-308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r6,r8
	ctx.r6.s64 = ctx.r8.s32;
	// stw r8,-10300(r7)
	REX_STORE_U32(ctx.r7.u32 + -10300, ctx.r8.u32);
	// std r6,-224(r1)
	REX_STORE_U64(ctx.r1.u32 + -224, ctx.r6.u64);
	// lfd f2,-224(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -224);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// fmsub f13,f13,f8,f1
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f1.f64);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r25,-332(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// mullw r4,r25,r25
	ctx.r4.s64 = int64_t(r25.s32) * int64_t(r25.s32);
	// srawi r8,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r8,r25
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(r25.s32);
	// stw r8,-300(r1)
	REX_STORE_U32(ctx.r1.u32 + -300, ctx.r8.u32);
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stw r6,-248(r1)
	REX_STORE_U32(ctx.r1.u32 + -248, ctx.r6.u32);
	// ble cr6,0x823b7c84
	if (!ctx.cr6.gt) goto loc_823B7C84;
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b7c80
	if (!ctx.cr6.lt) goto loc_823B7C80;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b8068
	if (!ctx.cr6.gt) goto loc_823B8068;
loc_823B7004:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b7a64
	if (!ctx.cr6.gt) goto loc_823B7A64;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r8,-2
	ctx.r6.s64 = ctx.r8.s64 + -2;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7a60
	if (!ctx.cr6.lt) goto loc_823B7A60;
	// rlwinm r11,r10,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r9,-308(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// std r6,-232(r1)
	REX_STORE_U64(ctx.r1.u32 + -232, ctx.r6.u64);
	// stw r11,-10300(r8)
	REX_STORE_U32(ctx.r8.u32 + -10300, ctx.r11.u32);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r7,2
	ctx.r4.s64 = ctx.r7.s64 + 2;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r6,r7,-2
	ctx.r6.s64 = ctx.r7.s64 + -2;
	// add r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, ctx.r11.u32);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r10,r8
	r30.u64 = ctx.r8.u64 - ctx.r10.u64;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f13,-232(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -232);
	// rotlwi r3,r11,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r26,r9,r8
	r26.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r5,-4(r30)
	ctx.r5.u64 = REX_LOAD_U8(r30.u32 + -4);
	// lbzx r27,r31,r8
	r27.u64 = REX_LOAD_U8(r31.u32 + ctx.r8.u32);
	// rlwinm r29,r4,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r10,-4(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + -4);
	// add r23,r26,r5
	r23.u64 = r26.u64 + ctx.r5.u64;
	// lbz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U8(r30.u32 + 0);
	// add r4,r3,r27
	ctx.r4.u64 = ctx.r3.u64 + r27.u64;
	// rlwinm r3,r23,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r28,4(r30)
	r28.u64 = REX_LOAD_U8(r30.u32 + 4);
	// lbz r24,-4(r6)
	r24.u64 = REX_LOAD_U8(ctx.r6.u32 + -4);
	// add r21,r10,r9
	r21.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r22,r7,4
	r22.s64 = ctx.r7.s64 + 4;
	// lbz r31,0(r6)
	r31.u64 = REX_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r23,8(r30)
	r23.u64 = REX_LOAD_U8(r30.u32 + 8);
	// subf r3,r24,r3
	ctx.r3.u64 = ctx.r3.u64 - r24.u64;
	// rlwinm r20,r21,1,0,30
	r20.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r21,4(r6)
	r21.u64 = REX_LOAD_U8(ctx.r6.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// add r19,r4,r28
	r19.u64 = ctx.r4.u64 + r28.u64;
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r30,8(r8)
	r30.u64 = REX_LOAD_U8(ctx.r8.u32 + 8);
	// subf r6,r23,r3
	ctx.r6.u64 = ctx.r3.u64 - r23.u64;
	// subf r4,r20,r31
	ctx.r4.u64 = r31.u64 - r20.u64;
	// lbzx r20,r29,r8
	r20.u64 = REX_LOAD_U8(r29.u32 + ctx.r8.u32);
	// rlwinm r3,r19,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r7,1,0,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// add r4,r4,r30
	ctx.r4.u64 = ctx.r4.u64 + r30.u64;
	// lbzx r22,r22,r8
	r22.u64 = REX_LOAD_U8(r22.u32 + ctx.r8.u32);
	// subf r3,r21,r3
	ctx.r3.u64 = ctx.r3.u64 - r21.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r4,3,0,28
	r19.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// subf r3,r22,r3
	ctx.r3.u64 = ctx.r3.u64 - r22.u64;
	// add r18,r6,r20
	r18.u64 = ctx.r6.u64 + r20.u64;
	// lbzx r6,r29,r8
	ctx.r6.u64 = REX_LOAD_U8(r29.u32 + ctx.r8.u32);
	// subf r8,r4,r19
	ctx.r8.u64 = r19.u64 - ctx.r4.u64;
	// rlwinm r4,r3,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r18,1,0,30
	r29.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + r29.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mulli r4,r3,13
	ctx.r4.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(13));
	// subf r19,r4,r8
	r19.u64 = ctx.r8.u64 - ctx.r4.u64;
	// rotlwi r3,r11,2
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r8,-332(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 1;
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r8,r8
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r29,r4,r8
	r29.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// srawi r29,r29,8
	ctx.xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xFF) != 0);
	r29.s64 = r29.s32 >> 8;
	// srawi r14,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r14.s64 = r19.s32 >> 1;
	// subf r19,r28,r9
	r19.u64 = ctx.r9.u64 - r28.u64;
	// subf r18,r11,r9
	r18.u64 = ctx.r9.u64 - ctx.r11.u64;
	// std r25,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r25.u64);
	// add r17,r11,r3
	r17.u64 = ctx.r11.u64 + ctx.r3.u64;
	// std r24,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r24.u64);
	// subf r18,r5,r18
	r18.u64 = r18.u64 - ctx.r5.u64;
	// stw r17,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r17.u32);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r18,1,0,30
	r16.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r27,r22
	r18.u64 = r22.u64 - r27.u64;
	// subf r17,r31,r16
	r17.u64 = r16.u64 - r31.u64;
	// subf r19,r31,r19
	r19.u64 = r19.u64 - r31.u64;
	// add r15,r17,r24
	r15.u64 = r17.u64 + r24.u64;
	// rlwinm r17,r18,2,0,29
	r17.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r3,r5,r19
	ctx.r3.u64 = r19.u64 - ctx.r5.u64;
	// stw r17,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r17.u32);
	// subf r17,r11,r7
	r17.u64 = ctx.r7.u64 - ctx.r11.u64;
	// add r19,r3,r21
	r19.u64 = ctx.r3.u64 + r21.u64;
	// mulli r17,r17,11
	r17.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(11));
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// add r3,r19,r23
	ctx.r3.u64 = r19.u64 + r23.u64;
	// subf r19,r7,r26
	r19.u64 = r26.u64 - ctx.r7.u64;
	// add r16,r15,r6
	r16.u64 = r15.u64 + ctx.r6.u64;
	// rlwinm r15,r19,1,0,30
	r15.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r19,r19,r15
	r19.u64 = r19.u64 + r15.u64;
	// lwz r15,-348(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// subf r25,r31,r7
	r25.u64 = ctx.r7.u64 - r31.u64;
	// stw r17,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r17.u32);
	// stw r19,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r19.u32);
	// subf r19,r26,r6
	r19.u64 = ctx.r6.u64 - r26.u64;
	// subf r16,r26,r25
	r16.u64 = r25.u64 - r26.u64;
	// rlwinm r17,r3,1,0,30
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r30,r19
	ctx.r3.u64 = r19.u64 - r30.u64;
	// stw r16,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r16.u32);
	// subf r16,r20,r17
	r16.u64 = r17.u64 - r20.u64;
	// lwz r25,-352(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r17,r16,r24
	r17.u64 = r16.u64 + r24.u64;
	// rlwinm r16,r3,3,0,28
	r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r19,r27,r10
	r19.u64 = ctx.r10.u64 - r27.u64;
	// subf r3,r3,r16
	ctx.r3.u64 = r16.u64 - ctx.r3.u64;
	// lwz r16,-344(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r30,r19
	r19.u64 = r19.u64 - r30.u64;
	// add r3,r17,r3
	ctx.r3.u64 = r17.u64 + ctx.r3.u64;
	// stw r16,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r16.u32);
	// subf r16,r5,r19
	r16.u64 = r19.u64 - ctx.r5.u64;
	// add r17,r18,r25
	r17.u64 = r18.u64 + r25.u64;
	// add r16,r16,r24
	r16.u64 = r16.u64 + r24.u64;
	// add r3,r3,r17
	ctx.r3.u64 = ctx.r3.u64 + r17.u64;
	// rotlwi r19,r6,1
	r19.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwz r25,-296(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// add r16,r16,r22
	r16.u64 = r16.u64 + r22.u64;
	// lwz r17,-324(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// rotlwi r18,r27,2
	r18.u64 = __builtin_rotateleft32(r27.u32, 2);
	// add r19,r19,r9
	r19.u64 = r19.u64 + ctx.r9.u64;
	// add r17,r25,r17
	r17.u64 = r25.u64 + r17.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r18,r27,r18
	r18.u64 = r27.u64 + r18.u64;
	// rotlwi r25,r10,3
	r25.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r18,r18,r17
	r18.u64 = r17.u64 - r18.u64;
	// subf r17,r10,r25
	r17.u64 = r25.u64 - ctx.r10.u64;
	// mullw r14,r14,r4
	r14.s64 = int64_t(r14.s32) * int64_t(ctx.r4.s32);
	// stw r14,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r14.u32);
	// lwz r24,-352(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + r24.u64;
	// lwz r24,-316(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r18,r18,r17
	r18.u64 = r18.u64 + r17.u64;
	// stw r3,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// add r3,r24,r9
	ctx.r3.u64 = r24.u64 + ctx.r9.u64;
	// lwz r24,-352(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// srawi r24,r24,1
	ctx.xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x1) != 0);
	r24.s64 = r24.s32 >> 1;
	// stw r19,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r19.u32);
	// subf r19,r20,r16
	r19.u64 = r16.u64 - r20.u64;
	// lwz r16,-352(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r16
	r17.u64 = r16.u64 - r31.u64;
	// rlwinm r25,r3,3,0,28
	r25.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r19,r19,r23
	r19.u64 = r19.u64 + r23.u64;
	// mullw r16,r24,r29
	r16.s64 = int64_t(r24.s32) * int64_t(r29.s32);
	// stw r19,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r19.u32);
	// subf r14,r15,r17
	r14.u64 = r17.u64 - r15.u64;
	// stw r16,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r16.u32);
	// subf r3,r3,r25
	ctx.r3.u64 = r25.u64 - ctx.r3.u64;
	// lwz r15,-300(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// subf r19,r28,r21
	r19.u64 = r21.u64 - r28.u64;
	// stw r3,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, ctx.r3.u32);
	// rotlwi r3,r3,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// subf r17,r11,r6
	r17.u64 = ctx.r6.u64 - ctx.r11.u64;
	// lwz r25,-324(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r21,r21,r31
	r21.u64 = r31.u64 - r21.u64;
	// srawi r18,r18,1
	ctx.xer.ca = (r18.s32 < 0) & ((r18.u32 & 0x1) != 0);
	r18.s64 = r18.s32 >> 1;
	// stw r15,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r15.u32);
	// mulli r15,r17,11
	r15.s64 = static_cast<int64_t>(r17.u64 * static_cast<uint64_t>(11));
	// subf r22,r22,r21
	r22.u64 = r21.u64 - r22.u64;
	// mullw r17,r18,r8
	r17.s64 = int64_t(r18.s32) * int64_t(ctx.r8.s32);
	// lwz r16,-352(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r24,-296(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r10,r22
	r22.u64 = r22.u64 - ctx.r10.u64;
	// add r3,r16,r3
	ctx.r3.u64 = r16.u64 + ctx.r3.u64;
	// rlwinm r16,r19,2,0,29
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r3,r15
	ctx.r3.u64 = ctx.r3.u64 + r15.u64;
	// add r19,r19,r16
	r19.u64 = r19.u64 + r16.u64;
	// subf r15,r10,r27
	r15.u64 = r27.u64 - ctx.r10.u64;
	// add r19,r3,r19
	r19.u64 = ctx.r3.u64 + r19.u64;
	// subf r3,r9,r22
	ctx.r3.u64 = r22.u64 - ctx.r9.u64;
	// add r18,r25,r24
	r18.u64 = r25.u64 + r24.u64;
	// ld r24,-336(r1)
	r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// add r22,r3,r27
	r22.u64 = ctx.r3.u64 + r27.u64;
	// subf r27,r9,r28
	r27.u64 = r28.u64 - ctx.r9.u64;
	// stw r27,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r27.u32);
	// srawi r14,r14,1
	ctx.xer.ca = (r14.s32 < 0) & ((r14.u32 & 0x1) != 0);
	r14.s64 = r14.s32 >> 1;
	// subf r16,r11,r10
	r16.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r3,r6,r26
	ctx.r3.u64 = r26.u64 - ctx.r6.u64;
	// subf r21,r7,r11
	r21.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r18,r18,r17
	r18.u64 = r18.u64 + r17.u64;
	// subf r16,r5,r16
	r16.u64 = r16.u64 - ctx.r5.u64;
	// rlwinm r17,r14,8,0,23
	r17.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 8) & 0xFFFFFF00;
	// add r27,r21,r3
	r27.u64 = r21.u64 + ctx.r3.u64;
	// add r22,r22,r30
	r22.u64 = r22.u64 + r30.u64;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r22,r28
	r22.u64 = r22.u64 + r28.u64;
	// rlwinm r21,r27,1,0,30
	r21.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r15,r24,r15
	r15.u64 = r15.u64 - r24.u64;
	// add r17,r18,r17
	r17.u64 = r18.u64 + r17.u64;
	// subf r18,r30,r16
	r18.u64 = r16.u64 - r30.u64;
	// add r21,r27,r21
	r21.u64 = r27.u64 + r21.u64;
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r27,r18,r7
	r27.u64 = r18.u64 + ctx.r7.u64;
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r22,r22,r21
	r22.u64 = r22.u64 + r21.u64;
	// rlwinm r14,r14,1,0,30
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r24,r24,r22
	r24.u64 = r22.u64 - r24.u64;
	// subf r16,r26,r14
	r16.u64 = r14.u64 - r26.u64;
	// subf r26,r26,r15
	r26.u64 = r15.u64 - r26.u64;
	// subf r18,r7,r16
	r18.u64 = r16.u64 - ctx.r7.u64;
	// subf r21,r6,r26
	r21.u64 = r26.u64 - ctx.r6.u64;
	// add r16,r27,r23
	r16.u64 = r27.u64 + r23.u64;
	// rotlwi r26,r28,2
	r26.u64 = __builtin_rotateleft32(r28.u32, 2);
	// subf r27,r9,r21
	r27.u64 = r21.u64 - ctx.r9.u64;
	// add r28,r28,r26
	r28.u64 = r28.u64 + r26.u64;
	// rlwinm r22,r16,1,0,30
	r22.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r18,r10,r18
	r18.u64 = r18.u64 - ctx.r10.u64;
	// rotlwi r16,r9,3
	r16.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r21,r23,r18
	r21.u64 = r18.u64 - r23.u64;
	// add r26,r27,r31
	r26.u64 = r27.u64 + r31.u64;
	// subf r28,r28,r22
	r28.u64 = r22.u64 - r28.u64;
	// subf r24,r23,r24
	r24.u64 = r24.u64 - r23.u64;
	// rlwinm r27,r3,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r9,r16
	r22.u64 = r16.u64 - ctx.r9.u64;
	// add r23,r21,r6
	r23.u64 = r21.u64 + ctx.r6.u64;
	// add r27,r3,r27
	r27.u64 = ctx.r3.u64 + r27.u64;
	// add r28,r28,r22
	r28.u64 = r28.u64 + r22.u64;
	// add r24,r24,r20
	r24.u64 = r24.u64 + r20.u64;
	// add r3,r23,r30
	ctx.r3.u64 = r23.u64 + r30.u64;
	// add r26,r26,r7
	r26.u64 = r26.u64 + ctx.r7.u64;
	// add r23,r24,r5
	r23.u64 = r24.u64 + ctx.r5.u64;
	// srawi r22,r19,1
	ctx.xer.ca = (r19.s32 < 0) & ((r19.u32 & 0x1) != 0);
	r22.s64 = r19.s32 >> 1;
	// add r21,r28,r27
	r21.u64 = r28.u64 + r27.u64;
	// add r24,r26,r11
	r24.u64 = r26.u64 + ctx.r11.u64;
	// lwz r14,-344(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// add r26,r3,r11
	r26.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r18,-248(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// subf r20,r10,r11
	r20.u64 = ctx.r11.u64 - ctx.r10.u64;
	// ld r25,-240(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// mullw r28,r23,r29
	r28.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// rotlwi r27,r7,1
	r27.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// add r23,r24,r5
	r23.u64 = r24.u64 + ctx.r5.u64;
	// mullw r3,r22,r4
	ctx.r3.s64 = int64_t(r22.s32) * int64_t(ctx.r4.s32);
	// mullw r19,r17,r14
	r19.s64 = int64_t(r17.s32) * int64_t(r14.s32);
	// add r17,r26,r5
	r17.u64 = r26.u64 + ctx.r5.u64;
	// add r22,r27,r10
	r22.u64 = r27.u64 + ctx.r10.u64;
	// subf r24,r9,r20
	r24.u64 = r20.u64 - ctx.r9.u64;
	// srawi r21,r21,1
	ctx.xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1) != 0);
	r21.s64 = r21.s32 >> 1;
	// add r27,r3,r28
	r27.u64 = ctx.r3.u64 + r28.u64;
	// mullw r26,r23,r8
	r26.s64 = int64_t(r23.s32) * int64_t(ctx.r8.s32);
	// lwz r23,-348(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r5,r24,r5
	ctx.r5.u64 = r24.u64 + ctx.r5.u64;
	// mullw r3,r21,r4
	ctx.r3.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// mullw r28,r17,r29
	r28.s64 = int64_t(r17.s32) * int64_t(r29.s32);
	// add r26,r27,r26
	r26.u64 = r27.u64 + r26.u64;
	// add r28,r3,r28
	r28.u64 = ctx.r3.u64 + r28.u64;
	// mullw r27,r5,r8
	r27.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// mullw r5,r26,r18
	ctx.r5.s64 = int64_t(r26.s32) * int64_t(r18.s32);
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// add r27,r28,r27
	r27.u64 = r28.u64 + r27.u64;
	// add r28,r19,r5
	r28.u64 = r19.u64 + ctx.r5.u64;
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r24,r3,1,0,30
	r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r5,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r22,1,0,30
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + r24.u64;
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + r26.u64;
	// subf r24,r30,r22
	r24.u64 = r22.u64 - r30.u64;
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// subf r5,r9,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r9.u64;
	// subf r26,r23,r24
	r26.u64 = r24.u64 - r23.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// mullw r27,r27,r25
	r27.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// srawi r30,r26,1
	ctx.xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r30.s64 = r26.s32 >> 1;
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// srawi r31,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	r31.s64 = ctx.r5.s32 >> 1;
	// add r28,r28,r27
	r28.u64 = r28.u64 + r27.u64;
	// mullw r5,r3,r29
	ctx.r5.s64 = int64_t(ctx.r3.s32) * int64_t(r29.s32);
	// mullw r27,r30,r4
	r27.s64 = int64_t(r30.s32) * int64_t(ctx.r4.s32);
	// subf r3,r9,r6
	ctx.r3.u64 = ctx.r6.u64 - ctx.r9.u64;
	// add r9,r27,r5
	ctx.r9.u64 = r27.u64 + ctx.r5.u64;
	// mullw r6,r31,r18
	ctx.r6.s64 = int64_t(r31.s32) * int64_t(r18.s32);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// subf r3,r10,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r10.u64;
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// mullw r9,r5,r25
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// srawi r7,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r28,r11
	ctx.r5.u64 = r28.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b7510
	if (!ctx.cr6.gt) goto loc_823B7510;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b751c
	goto loc_823B751C;
loc_823B7510:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B751C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r9,-304(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// lwz r5,-256(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stw r6,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r6.u32);
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// lwz r11,20(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// lbz r10,-4(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + -4);
	// lbz r6,4(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 4);
	// lwz r22,80(r11)
	r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r3,r22,2
	ctx.r3.s64 = r22.s64 + 2;
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// addi r31,r22,-2
	r31.s64 = r22.s64 + -2;
	// lbz r30,8(r7)
	r30.u64 = REX_LOAD_U8(ctx.r7.u32 + 8);
	// rlwinm r9,r22,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r3,2,0,29
	r20.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r19,r9,r7
	r19.u64 = ctx.r7.u64 - ctx.r9.u64;
	// lbzx r26,r5,r7
	r26.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r22,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r22,4
	r23.s64 = r22.s64 + 4;
	// add r21,r9,r7
	r21.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbzx r20,r20,r7
	r20.u64 = REX_LOAD_U8(r20.u32 + ctx.r7.u32);
	// lbz r9,0(r19)
	ctx.r9.u64 = REX_LOAD_U8(r19.u32 + 0);
	// rlwinm r17,r23,1,0,30
	r17.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r27,r5,r7
	r27.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// rlwinm r16,r22,1,0,30
	r16.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r10,r9
	r22.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r5,-4(r19)
	ctx.r5.u64 = REX_LOAD_U8(r19.u32 + -4);
	// lbz r28,4(r19)
	r28.u64 = REX_LOAD_U8(r19.u32 + 4);
	// lbz r24,-4(r21)
	r24.u64 = REX_LOAD_U8(r21.u32 + -4);
	// rlwinm r15,r22,1,0,30
	r15.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r22,r17,r7
	r22.u64 = REX_LOAD_U8(r17.u32 + ctx.r7.u32);
	// lbzx r7,r16,r7
	ctx.r7.u64 = REX_LOAD_U8(r16.u32 + ctx.r7.u32);
	// lbz r23,8(r19)
	r23.u64 = REX_LOAD_U8(r19.u32 + 8);
	// subf r19,r28,r9
	r19.u64 = ctx.r9.u64 - r28.u64;
	// rotlwi r31,r11,1
	r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r17,r26,r5
	r17.u64 = r26.u64 + ctx.r5.u64;
	// add r3,r31,r27
	ctx.r3.u64 = r31.u64 + r27.u64;
	// lbz r31,0(r21)
	r31.u64 = REX_LOAD_U8(r21.u32 + 0);
	// lbz r21,4(r21)
	r21.u64 = REX_LOAD_U8(r21.u32 + 4);
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + r28.u64;
	// subf r17,r24,r17
	r17.u64 = r17.u64 - r24.u64;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r19,1,0,30
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r23,r17
	r17.u64 = r17.u64 - r23.u64;
	// subf r19,r31,r19
	r19.u64 = r19.u64 - r31.u64;
	// subf r14,r21,r3
	r14.u64 = ctx.r3.u64 - r21.u64;
	// subf r3,r15,r31
	ctx.r3.u64 = r31.u64 - r15.u64;
	// rlwinm r16,r17,1,0,30
	r16.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// subf r17,r5,r19
	r17.u64 = r19.u64 - ctx.r5.u64;
	// rlwinm r19,r3,3,0,28
	r19.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// add r16,r16,r20
	r16.u64 = r16.u64 + r20.u64;
	// stw r19,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r19.u32);
	// subf r19,r22,r14
	r19.u64 = r14.u64 - r22.u64;
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// add r15,r17,r21
	r15.u64 = r17.u64 + r21.u64;
	// subf r17,r3,r14
	r17.u64 = r14.u64 - ctx.r3.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r19,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r17,r16
	r17.u64 = r17.u64 + r16.u64;
	// add r15,r15,r23
	r15.u64 = r15.u64 + r23.u64;
	// add r19,r19,r3
	r19.u64 = r19.u64 + ctx.r3.u64;
	// subf r14,r26,r7
	r14.u64 = ctx.r7.u64 - r26.u64;
	// add r16,r7,r6
	r16.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r15,r15,1,0,30
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// add r17,r17,r19
	r17.u64 = r17.u64 + r19.u64;
	// subf r3,r30,r14
	ctx.r3.u64 = r14.u64 - r30.u64;
	// mulli r16,r16,13
	r16.s64 = static_cast<int64_t>(r16.u64 * static_cast<uint64_t>(13));
	// subf r19,r20,r15
	r19.u64 = r15.u64 - r20.u64;
	// subf r17,r16,r17
	r17.u64 = r17.u64 - r16.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r15,r19,r24
	r15.u64 = r19.u64 + r24.u64;
	// rlwinm r16,r3,3,0,28
	r16.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r19,r11,2
	r19.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// srawi r14,r17,1
	ctx.xer.ca = (r17.s32 < 0) & ((r17.u32 & 0x1) != 0);
	r14.s64 = r17.s32 >> 1;
	// subf r3,r3,r16
	ctx.r3.u64 = r16.u64 - ctx.r3.u64;
	// std r25,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, r25.u64);
	// rlwinm r17,r15,1,0,30
	r17.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r27,r10
	r16.u64 = ctx.r10.u64 - r27.u64;
	// add r17,r17,r3
	r17.u64 = r17.u64 + ctx.r3.u64;
	// subf r3,r27,r22
	ctx.r3.u64 = r22.u64 - r27.u64;
	// stw r17,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r17.u32);
	// subf r15,r11,r9
	r15.u64 = ctx.r9.u64 - ctx.r11.u64;
	// rlwinm r17,r3,2,0,29
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r25,r11,r6
	r25.u64 = ctx.r6.u64 - ctx.r11.u64;
	// stw r17,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r17.u32);
	// rlwinm r17,r16,1,0,30
	r17.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r16,r5,r15
	r16.u64 = r15.u64 - ctx.r5.u64;
	// subf r17,r30,r17
	r17.u64 = r17.u64 - r30.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r5,r17
	r17.u64 = r17.u64 - ctx.r5.u64;
	// subf r16,r31,r16
	r16.u64 = r16.u64 - r31.u64;
	// add r17,r17,r24
	r17.u64 = r17.u64 + r24.u64;
	// add r16,r16,r24
	r16.u64 = r16.u64 + r24.u64;
	// subf r15,r21,r31
	r15.u64 = r31.u64 - r21.u64;
	// add r16,r16,r7
	r16.u64 = r16.u64 + ctx.r7.u64;
	// add r17,r17,r22
	r17.u64 = r17.u64 + r22.u64;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r22,r22,r15
	r22.u64 = r15.u64 - r22.u64;
	// stw r16,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r16.u32);
	// mulli r16,r25,11
	r16.s64 = static_cast<int64_t>(r25.u64 * static_cast<uint64_t>(11));
	// stw r16,-296(r1)
	REX_STORE_U32(ctx.r1.u32 + -296, r16.u32);
	// lwz r25,-352(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r16,-344(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// subf r22,r10,r22
	r22.u64 = r22.u64 - ctx.r10.u64;
	// add r16,r3,r16
	r16.u64 = ctx.r3.u64 + r16.u64;
	// stw r22,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r22.u32);
	// rlwinm r17,r17,1,0,30
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r16,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r16.u32);
	// subf r3,r6,r26
	ctx.r3.u64 = r26.u64 - ctx.r6.u64;
	// subf r17,r20,r17
	r17.u64 = r17.u64 - r20.u64;
	// rlwinm r22,r3,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r17,-316(r1)
	REX_STORE_U32(ctx.r1.u32 + -316, r17.u32);
	// subf r21,r28,r21
	r21.u64 = r21.u64 - r28.u64;
	// add r3,r3,r22
	ctx.r3.u64 = ctx.r3.u64 + r22.u64;
	// stw r21,-272(r1)
	REX_STORE_U32(ctx.r1.u32 + -272, r21.u32);
	// subf r15,r31,r6
	r15.u64 = ctx.r6.u64 - r31.u64;
	// stw r3,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, ctx.r3.u32);
	// rotlwi r16,r10,3
	r16.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// subf r22,r26,r15
	r22.u64 = r15.u64 - r26.u64;
	// add r15,r11,r19
	r15.u64 = ctx.r11.u64 + r19.u64;
	// add r22,r22,r9
	r22.u64 = r22.u64 + ctx.r9.u64;
	// stw r15,-348(r1)
	REX_STORE_U32(ctx.r1.u32 + -348, r15.u32);
	// mullw r15,r14,r4
	r15.s64 = int64_t(r14.s32) * int64_t(ctx.r4.s32);
	// stw r22,-304(r1)
	REX_STORE_U32(ctx.r1.u32 + -304, r22.u32);
	// lwz r17,-352(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r21,-344(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// rotlwi r22,r27,2
	r22.u64 = __builtin_rotateleft32(r27.u32, 2);
	// subf r3,r9,r17
	ctx.r3.u64 = r17.u64 - ctx.r9.u64;
	// add r21,r25,r21
	r21.u64 = r25.u64 + r21.u64;
	// stw r3,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, ctx.r3.u32);
	// subf r17,r10,r16
	r17.u64 = r16.u64 - ctx.r10.u64;
	// lwz r25,-352(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r17,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r17.u32);
	// add r22,r27,r22
	r22.u64 = r27.u64 + r22.u64;
	// lwz r14,-264(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r17,-324(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// subf r19,r7,r26
	r19.u64 = r26.u64 - ctx.r7.u64;
	// stw r15,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r15.u32);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r15,-316(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// add r17,r17,r14
	r17.u64 = r17.u64 + r14.u64;
	// lwz r16,-296(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -296);
	// stw r21,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r21.u32);
	// add r21,r15,r23
	r21.u64 = r15.u64 + r23.u64;
	// lwz r15,-264(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r22,r22,r17
	r22.u64 = r17.u64 - r22.u64;
	// lwz r17,-280(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r16,r15,r16
	r16.u64 = r15.u64 + r16.u64;
	// lwz r15,-304(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// add r14,r25,r27
	r14.u64 = r25.u64 + r27.u64;
	// stw r3,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r3,r6,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r6.u64;
	// rlwinm r15,r15,3,0,28
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r14,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r14.u32);
	// add r22,r22,r17
	r22.u64 = r22.u64 + r17.u64;
	// lwz r14,-304(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// srawi r16,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r16.s64 = r16.s32 >> 1;
	// lwz r17,-280(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// srawi r22,r22,1
	ctx.xer.ca = (r22.s32 < 0) & ((r22.u32 & 0x1) != 0);
	r22.s64 = r22.s32 >> 1;
	// subf r15,r14,r15
	r15.u64 = r15.u64 - r14.u64;
	// lwz r14,-348(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// mullw r22,r22,r8
	r22.s64 = int64_t(r22.s32) * int64_t(ctx.r8.s32);
	// std r8,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.r8.u64);
	// stw r15,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, r15.u32);
	// lwz r15,-272(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// lwz r8,-324(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -324);
	// std r18,-240(r1)
	REX_STORE_U64(ctx.r1.u32 + -240, r18.u64);
	// std r20,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, r20.u64);
	// lwz r20,-300(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -300);
	// stw r15,-324(r1)
	REX_STORE_U32(ctx.r1.u32 + -324, r15.u32);
	// rlwinm r21,r21,1,0,30
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r17,r31,r17
	r17.u64 = r17.u64 - r31.u64;
	// add r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 + r19.u64;
	// subf r27,r10,r27
	r27.u64 = r27.u64 - ctx.r10.u64;
	// subf r18,r11,r7
	r18.u64 = ctx.r7.u64 - ctx.r11.u64;
	// rlwinm r27,r27,1,0,30
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r25,-264(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// mulli r18,r18,11
	r18.s64 = static_cast<int64_t>(r18.u64 * static_cast<uint64_t>(11));
	// stw r22,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r22.u32);
	// stw r18,-344(r1)
	REX_STORE_U32(ctx.r1.u32 + -344, r18.u32);
	// mr r22,r15
	r22.u64 = r15.u64;
	// mullw r22,r16,r29
	r22.s64 = int64_t(r16.s32) * int64_t(r29.s32);
	// lwz r16,-280(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r25,r25,r30
	r25.u64 = r25.u64 + r30.u64;
	// add r21,r21,r16
	r21.u64 = r21.u64 + r16.u64;
	// stw r25,-352(r1)
	REX_STORE_U32(ctx.r1.u32 + -352, r25.u32);
	// subf r16,r14,r17
	r16.u64 = r17.u64 - r14.u64;
	// lwz r25,-264(r1)
	r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// rlwinm r17,r3,1,0,30
	r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r21,-264(r1)
	REX_STORE_U32(ctx.r1.u32 + -264, r21.u32);
	// subf r21,r11,r10
	r21.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// lwz r14,-352(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// subf r3,r5,r21
	ctx.r3.u64 = r21.u64 - ctx.r5.u64;
	// add r22,r8,r22
	r22.u64 = ctx.r8.u64 + r22.u64;
	// srawi r16,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r16.s64 = r16.s32 >> 1;
	// stw r3,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// add r3,r22,r25
	ctx.r3.u64 = r22.u64 + r25.u64;
	// rlwinm r22,r16,8,0,23
	r22.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r16,-280(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// rlwinm r21,r15,2,0,29
	r21.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r15,r15,0
	r15.u64 = __builtin_rotateleft32(r15.u32, 0);
	// add r14,r14,r28
	r14.u64 = r14.u64 + r28.u64;
	// subf r25,r9,r28
	r25.u64 = r28.u64 - ctx.r9.u64;
	// add r15,r15,r21
	r15.u64 = r15.u64 + r21.u64;
	// rlwinm r21,r14,1,0,30
	r21.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r14,r25,1,0,30
	r14.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r16,r16,1,0,30
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 1) & 0xFFFFFFFE;
	// add r22,r3,r22
	r22.u64 = ctx.r3.u64 + r22.u64;
	// subf r27,r24,r27
	r27.u64 = r27.u64 - r24.u64;
	// subf r3,r30,r16
	ctx.r3.u64 = r16.u64 - r30.u64;
	// subf r16,r26,r14
	r16.u64 = r14.u64 - r26.u64;
	// add r21,r21,r17
	r21.u64 = r21.u64 + r17.u64;
	// lwz r17,-264(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// subf r27,r26,r27
	r27.u64 = r27.u64 - r26.u64;
	// rotlwi r8,r18,0
	ctx.r8.u64 = __builtin_rotateleft32(r18.u32, 0);
	// subf r26,r6,r16
	r26.u64 = r16.u64 - ctx.r6.u64;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// subf r21,r24,r21
	r21.u64 = r21.u64 - r24.u64;
	// subf r27,r7,r27
	r27.u64 = r27.u64 - ctx.r7.u64;
	// add r16,r17,r8
	r16.u64 = r17.u64 + ctx.r8.u64;
	// rotlwi r24,r28,2
	r24.u64 = __builtin_rotateleft32(r28.u32, 2);
	// add r14,r3,r23
	r14.u64 = ctx.r3.u64 + r23.u64;
	// subf r17,r10,r26
	r17.u64 = r26.u64 - ctx.r10.u64;
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// subf r26,r9,r27
	r26.u64 = r27.u64 - ctx.r9.u64;
	// add r8,r28,r24
	ctx.r8.u64 = r28.u64 + r24.u64;
	// add r16,r16,r15
	r16.u64 = r16.u64 + r15.u64;
	// rlwinm r15,r14,1,0,30
	r15.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r28,r23,r17
	r28.u64 = r17.u64 - r23.u64;
	// rotlwi r14,r9,3
	r14.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// subf r17,r23,r21
	r17.u64 = r21.u64 - r23.u64;
	// add r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 + ctx.r10.u64;
	// add r24,r26,r31
	r24.u64 = r26.u64 + r31.u64;
	// stw r3,-280(r1)
	REX_STORE_U32(ctx.r1.u32 + -280, ctx.r3.u32);
	// subf r27,r6,r11
	r27.u64 = ctx.r11.u64 - ctx.r6.u64;
	// add r26,r28,r7
	r26.u64 = r28.u64 + ctx.r7.u64;
	// ld r18,-240(r1)
	r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -240);
	// subf r23,r8,r15
	r23.u64 = r15.u64 - ctx.r8.u64;
	// ld r8,-288(r1)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// subf r15,r9,r14
	r15.u64 = r14.u64 - ctx.r9.u64;
	// ld r25,-200(r1)
	r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// rlwinm r28,r27,1,0,30
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r3,r7,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r7.u64;
	// mullw r22,r22,r20
	r22.s64 = int64_t(r22.s32) * int64_t(r20.s32);
	// ld r20,-336(r1)
	r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// srawi r21,r16,1
	ctx.xer.ca = (r16.s32 < 0) & ((r16.u32 & 0x1) != 0);
	r21.s64 = r16.s32 >> 1;
	// add r28,r27,r28
	r28.u64 = r27.u64 + r28.u64;
	// rlwinm r16,r19,1,0,30
	r16.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r3,1,0,30
	r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,-280(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// add r24,r24,r6
	r24.u64 = r24.u64 + ctx.r6.u64;
	// add r17,r17,r20
	r17.u64 = r17.u64 + r20.u64;
	// rlwinm r14,r14,1,0,30
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 1) & 0xFFFFFFFE;
	// add r20,r19,r16
	r20.u64 = r19.u64 + r16.u64;
	// add r23,r23,r15
	r23.u64 = r23.u64 + r15.u64;
	// lwz r15,-348(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + r27.u64;
	// subf r19,r30,r14
	r19.u64 = r14.u64 - r30.u64;
	// add r24,r24,r11
	r24.u64 = r24.u64 + ctx.r11.u64;
	// subf r28,r10,r28
	r28.u64 = r28.u64 - ctx.r10.u64;
	// subf r27,r10,r11
	r27.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r26,r26,r30
	r26.u64 = r26.u64 + r30.u64;
	// add r23,r23,r20
	r23.u64 = r23.u64 + r20.u64;
	// subf r3,r9,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r9.u64;
	// subf r20,r15,r19
	r20.u64 = r19.u64 - r15.u64;
	// add r19,r24,r5
	r19.u64 = r24.u64 + ctx.r5.u64;
	// add r30,r28,r30
	r30.u64 = r28.u64 + r30.u64;
	// subf r24,r9,r27
	r24.u64 = r27.u64 - ctx.r9.u64;
	// add r26,r26,r11
	r26.u64 = r26.u64 + ctx.r11.u64;
	// srawi r28,r23,1
	ctx.xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x1) != 0);
	r28.s64 = r23.s32 >> 1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
	// srawi r27,r20,1
	ctx.xer.ca = (r20.s32 < 0) & ((r20.u32 & 0x1) != 0);
	r27.s64 = r20.s32 >> 1;
	// srawi r31,r30,1
	ctx.xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r31.s64 = r30.s32 >> 1;
	// add r26,r26,r5
	r26.u64 = r26.u64 + ctx.r5.u64;
	// add r23,r17,r5
	r23.u64 = r17.u64 + ctx.r5.u64;
	// add r24,r24,r5
	r24.u64 = r24.u64 + ctx.r5.u64;
	// mullw r5,r27,r4
	ctx.r5.s64 = int64_t(r27.s32) * int64_t(ctx.r4.s32);
	// mullw r30,r28,r4
	r30.s64 = int64_t(r28.s32) * int64_t(ctx.r4.s32);
	// mullw r21,r21,r4
	r21.s64 = int64_t(r21.s32) * int64_t(ctx.r4.s32);
	// srawi r3,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 1;
	// mullw r4,r31,r29
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(r29.s32);
	// subf r31,r9,r7
	r31.u64 = ctx.r7.u64 - ctx.r9.u64;
	// add r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mullw r7,r3,r18
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(r18.s32);
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// srawi r5,r31,1
	ctx.xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1) != 0);
	ctx.r5.s64 = r31.s32 >> 1;
	// mullw r27,r23,r29
	r27.s64 = int64_t(r23.s32) * int64_t(r29.s32);
	// mullw r28,r26,r29
	r28.s64 = int64_t(r26.s32) * int64_t(r29.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// mullw r7,r5,r25
	ctx.r7.s64 = int64_t(ctx.r5.s32) * int64_t(r25.s32);
	// mullw r26,r19,r8
	r26.s64 = int64_t(r19.s32) * int64_t(ctx.r8.s32);
	// add r27,r21,r27
	r27.u64 = r21.u64 + r27.u64;
	// add r31,r30,r28
	r31.u64 = r30.u64 + r28.u64;
	// mullw r30,r24,r8
	r30.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// add r10,r27,r26
	ctx.r10.u64 = r27.u64 + r26.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r8,r3,r8
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// mullw r3,r10,r18
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r18.s32);
	// add r7,r31,r30
	ctx.r7.u64 = r31.u64 + r30.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r5,r22,r3
	ctx.r5.u64 = r22.u64 + ctx.r3.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// mullw r4,r7,r25
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 16;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// ble cr6,0x823b7a28
	if (!ctx.cr6.gt) goto loc_823B7A28;
	// li r11,255
	ctx.r11.s64 = 255;
	// b 0x823b7a34
	goto loc_823B7A34;
loc_823B7A28:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_823B7A34:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,-328(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -328);
	// lwz r29,-320(r1)
	r29.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// li r28,128
	r28.s64 = 128;
	// lwz r27,-268(r1)
	r27.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// lwz r5,-252(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r30,-256(r1)
	r30.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// lwz r9,-340(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r3,20(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// stb r10,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x823b7c60
	goto loc_823B7C60;
loc_823B7A60:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823B7A64:
	// blt cr6,0x823b7b88
	if (ctx.cr6.lt) goto loc_823B7B88;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7b88
	if (!ctx.cr6.lt) goto loc_823B7B88;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, r31.u64);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r6,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lis r6,-32162
	ctx.r6.s64 = -2107768832;
	// lbzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lfd f13,-192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// lbzx r31,r31,r10
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r26,4(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r10,r4,r31
	ctx.r10.u64 = r31.u64 - ctx.r4.u64;
	// stw r7,-10300(r6)
	REX_STORE_U32(ctx.r6.u32 + -10300, ctx.r7.u32);
	// lbzx r7,r8,r5
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r4,r25
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// subf r10,r26,r10
	ctx.r10.u64 = ctx.r10.u64 - r26.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r10,-332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r4,r4,r10
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r4,r4,r25
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// subf r24,r25,r31
	r24.u64 = r31.u64 - r25.u64;
	// srawi r31,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	r31.s64 = ctx.r4.s32 >> 8;
	// mullw r7,r24,r7
	ctx.r7.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// mullw r4,r26,r10
	ctx.r4.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r26,4(r8)
	r26.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lbz r7,0(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r31,r4,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r24,r7
	ctx.r4.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// lbzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U8(r31.u32 + ctx.r8.u32);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r31,r26,r8
	r31.u64 = ctx.r8.u64 - r26.u64;
	// mullw r8,r26,r10
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x823b7c58
	goto loc_823B7C58;
loc_823B7B88:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b7c50
	if (!ctx.cr6.gt) goto loc_823B7C50;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7c50
	if (!ctx.cr6.lt) goto loc_823B7C50;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, r31.u64);
	// lis r6,-32162
	ctx.r6.s64 = -2107768832;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-10300(r6)
	REX_STORE_U32(ctx.r6.u32 + -10300, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = r31.u64 - r25.u64;
	// add r31,r7,r10
	r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lwz r4,80(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r10,r4,r25
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(r25.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r8,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 8;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// stb r7,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r7.u8);
	// b 0x823b7c58
	goto loc_823B7C58;
loc_823B7C50:
	// stb r28,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, r28.u8);
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
loc_823B7C58:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_823B7C60:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r29,-320(r1)
	REX_STORE_U32(ctx.r1.u32 + -320, r29.u32);
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// stw r11,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// blt cr6,0x823b7004
	if (ctx.cr6.lt) goto loc_823B7004;
	// b 0x823b8068
	goto loc_823B8068;
loc_823B7C80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_823B7C84:
	// blt cr6,0x823b7ed0
	if (ctx.cr6.lt) goto loc_823B7ED0;
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b7ed0
	if (!ctx.cr6.lt) goto loc_823B7ED0;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b8068
	if (!ctx.cr6.gt) goto loc_823B8068;
loc_823B7CA8:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b7eac
	if (ctx.cr6.lt) goto loc_823B7EAC;
	// lwz r8,80(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r7,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7de4
	if (!ctx.cr6.lt) goto loc_823B7DE4;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r7
	r31.s64 = ctx.r7.s32;
	// mullw r4,r8,r6
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// std r31,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, r31.u64);
	// lis r6,-32162
	ctx.r6.s64 = -2107768832;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// rlwinm r31,r8,1,0,30
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,-10300(r6)
	REX_STORE_U32(ctx.r6.u32 + -10300, ctx.r7.u32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r8,r7,r5
	ctx.r8.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// lfd f13,-176(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r6,r4,r10
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// lbzx r31,r31,r10
	r31.u64 = REX_LOAD_U8(r31.u32 + ctx.r10.u32);
	// lbz r26,4(r10)
	r26.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// subf r4,r31,r6
	ctx.r4.u64 = ctx.r6.u64 - r31.u64;
	// subf r6,r26,r4
	ctx.r6.u64 = ctx.r4.u64 - r26.u64;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r4,-332(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r4,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	ctx.r4.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// subf r24,r25,r4
	r24.u64 = ctx.r4.u64 - r25.u64;
	// mullw r4,r6,r25
	ctx.r4.s64 = int64_t(ctx.r6.s32) * int64_t(r25.s32);
	// srawi r4,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 8;
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(r24.s32) * int64_t(ctx.r8.s32);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// mullw r6,r26,r10
	ctx.r6.s64 = int64_t(r26.s32) * int64_t(ctx.r10.s32);
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r4,r31,r25
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(r25.s32);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r8,r7,r30
	ctx.r8.u64 = ctx.r7.u64 + r30.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lbzx r7,r7,r30
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + r30.u32);
	// lbz r31,4(r8)
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r4,r6,2
	ctx.r4.s64 = ctx.r6.s64 + 2;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r26,r4,1,0,30
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r4,r31,r10
	ctx.r4.s64 = int64_t(r31.s32) * int64_t(ctx.r10.s32);
	// lbzx r23,r6,r8
	r23.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// lbzx r8,r26,r8
	ctx.r8.u64 = REX_LOAD_U8(r26.u32 + ctx.r8.u32);
	// subf r6,r23,r8
	ctx.r6.u64 = ctx.r8.u64 - r23.u64;
	// subf r31,r31,r6
	r31.u64 = ctx.r6.u64 - r31.u64;
	// mullw r6,r24,r7
	ctx.r6.s64 = int64_t(r24.s32) * int64_t(ctx.r7.s32);
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
	// mullw r8,r23,r25
	ctx.r8.s64 = int64_t(r23.s32) * int64_t(r25.s32);
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r7,r10,r25
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// srawi r10,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 8;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x823b7eb4
	goto loc_823B7EB4;
loc_823B7DE4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b7eac
	if (!ctx.cr6.gt) goto loc_823B7EAC;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b7eac
	if (!ctx.cr6.lt) goto loc_823B7EAC;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r6,-308(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	r31.s64 = ctx.r8.s32;
	// mullw r4,r7,r6
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// std r31,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, r31.u64);
	// lis r6,-32162
	ctx.r6.s64 = -2107768832;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r8,-10300(r6)
	REX_STORE_U32(ctx.r6.u32 + -10300, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lfd f13,-184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r4,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 1;
	// mullw r6,r7,r25
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(r25.s32);
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// lbzx r4,r8,r5
	ctx.r4.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// subfic r31,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	r31.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// subf r7,r25,r31
	ctx.r7.u64 = r31.u64 - r25.u64;
	// add r31,r7,r10
	r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r10,r31,r4
	ctx.r10.s64 = int64_t(r31.s32) * int64_t(ctx.r4.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// stb r4,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r4.u8);
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r4,r6,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r10,r4,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r25.s32);
	// lbz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// clrlwi r4,r6,24
	ctx.r4.u64 = ctx.r6.u32 & 0xFF;
	// stb r4,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r4.u8);
	// b 0x823b7eb4
	goto loc_823B7EB4;
loc_823B7EAC:
	// stb r28,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, r28.u8);
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
loc_823B7EB4:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(r29.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b7ca8
	if (ctx.cr6.lt) goto loc_823B7CA8;
	// b 0x823b8060
	goto loc_823B8060;
loc_823B7ED0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b8038
	if (!ctx.cr6.gt) goto loc_823B8038;
	// lwz r8,84(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x823b8038
	if (!ctx.cr6.lt) goto loc_823B8038;
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b8068
	if (!ctx.cr6.gt) goto loc_823B8068;
loc_823B7EF4:
	// fadd f0,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f10.f64 + ctx.f0.f64;
	// fmul f13,f0,f7
	ctx.f13.f64 = ctx.f0.f64 * ctx.f7.f64;
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f12.u64);
	// lwz r10,-332(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x823b8014
	if (ctx.cr6.lt) goto loc_823B8014;
	// lwz r6,80(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x823b7fc4
	if (!ctx.cr6.lt) goto loc_823B7FC4;
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r7,-308(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsw r31,r8
	r31.s64 = ctx.r8.s32;
	// mullw r6,r6,r7
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// std r31,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, r31.u64);
	// lis r7,-32162
	ctx.r7.s64 = -2107768832;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stw r8,-10300(r7)
	REX_STORE_U32(ctx.r7.u32 + -10300, ctx.r8.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lbzx r31,r8,r5
	r31.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// lfd f13,-208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lbz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// fmsub f2,f0,f11,f12
	ctx.f2.f64 = std::fma(ctx.f0.f64, ctx.f11.f64, -ctx.f12.f64);
	// fctiwz f1,f2
	ctx.f1.s64 = std::isnan(ctx.f2.f64) ? int64_t(0x80000000U) : (ctx.f2.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f1.u64);
	// lwz r6,-332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -332);
	// srawi r10,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subfic r29,r10,256
	ctx.xer.ca = ctx.r10.u32 <= 256;
	r29.u64 = static_cast<uint64_t>(256) - ctx.r10.u64;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r7,r25,r29
	ctx.r7.u64 = r29.u64 - r25.u64;
	// add r29,r7,r25
	r29.u64 = ctx.r7.u64 + r25.u64;
	// add r26,r7,r25
	r26.u64 = ctx.r7.u64 + r25.u64;
	// mullw r7,r29,r31
	ctx.r7.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r6.u8);
	// lbz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r26,r6
	ctx.r8.s64 = int64_t(r26.s32) * int64_t(ctx.r6.s32);
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r6,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 8;
	// stb r6,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// b 0x823b801c
	goto loc_823B801C;
loc_823B7FC4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x823b8014
	if (!ctx.cr6.gt) goto loc_823B8014;
	// lwz r7,80(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// srawi r8,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 1;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x823b8014
	if (!ctx.cr6.lt) goto loc_823B8014;
	// lwz r8,-308(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,-10300(r8)
	REX_STORE_U32(ctx.r8.u32 + -10300, ctx.r10.u32);
	// lbzx r10,r6,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// stb r10,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, ctx.r10.u8);
	// lbzx r8,r6,r30
	ctx.r8.u64 = REX_LOAD_U8(ctx.r6.u32 + r30.u32);
	// stb r8,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, ctx.r8.u8);
	// b 0x823b801c
	goto loc_823B801C;
loc_823B8014:
	// stb r28,4(r9)
	REX_STORE_U8(ctx.r9.u32 + 4, r28.u8);
	// stb r28,4(r11)
	REX_STORE_U8(ctx.r11.u32 + 4, r28.u8);
loc_823B801C:
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b7ef4
	if (ctx.cr6.lt) goto loc_823B7EF4;
	// b 0x823b8060
	goto loc_823B8060;
loc_823B8038:
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x823b8068
	if (!ctx.cr6.gt) goto loc_823B8068;
loc_823B8048:
	// stbu r28,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U8(ea, r28.u8);
	ctx.r9.u32 = ea;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stbu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U8(ea, r28.u8);
	ctx.r11.u32 = ea;
	// lwz r8,88(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x823b8048
	if (ctx.cr6.lt) goto loc_823B8048;
loc_823B8060:
	// stw r11,-328(r1)
	REX_STORE_U32(ctx.r1.u32 + -328, ctx.r11.u32);
	// stw r9,-340(r1)
	REX_STORE_U32(ctx.r1.u32 + -340, ctx.r9.u32);
loc_823B8068:
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// stw r27,-268(r1)
	REX_STORE_U32(ctx.r1.u32 + -268, r27.u32);
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823b6f50
	if (ctx.cr6.lt) goto loc_823B6F50;
loc_823B807C:
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_8241E628) {
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
	ctx.lr = 0x8241E630;
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
	// bne cr6,0x8241e66c
	if (!ctx.cr6.eq) goto loc_8241E66C;
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
	// li r7,817
	ctx.r7.s64 = 817;
	// bl 0x8240e308
	ctx.lr = 0x8241E66C;
	sub_8240E308(ctx, base);
loc_8241E66C:
	// li r4,163
	ctx.r4.s64 = 163;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241E678;
	sub_8240E810(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x8241E688;
	sub_8240E810(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x8241e6f4
	if (ctx.cr6.eq) goto loc_8241E6F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8241e6f4
	if (!ctx.cr6.eq) goto loc_8241E6F4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241e6b4
	if (ctx.cr6.eq) goto loc_8241E6B4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241E6B4;
	sub_8240E930(ctx, base);
loc_8241E6B4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241e6ec
	if (ctx.cr6.eq) goto loc_8241E6EC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241e6ec
	if (ctx.cr6.eq) goto loc_8241E6EC;
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
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bctrl 
	ctx.lr = 0x8241E6EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E6EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8241e74c
	goto loc_8241E74C;
loc_8241E6F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x8241e710
	if (ctx.cr6.eq) goto loc_8241E710;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e930
	ctx.lr = 0x8241E710;
	sub_8240E930(ctx, base);
loc_8241E710:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// beq cr6,0x8241e748
	if (ctx.cr6.eq) goto loc_8241E748;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x8241e748
	if (ctx.cr6.eq) goto loc_8241E748;
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
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bctrl 
	ctx.lr = 0x8241E748;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8241E748:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8241E74C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x822d4ed4
	return;
}

DEFINE_REX_FUNC(sub_82420E60) {
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
	ctx.lr = 0x82420E68;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82420ea4
	if (!ctx.cr6.eq) goto loc_82420EA4;
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
	// li r7,3379
	ctx.r7.s64 = 3379;
	// bl 0x8240e308
	ctx.lr = 0x82420EA4;
	sub_8240E308(ctx, base);
loc_82420EA4:
	// li r4,130
	ctx.r4.s64 = 130;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82412bf8
	ctx.lr = 0x82420EB0;
	sub_82412BF8(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82420ef4
	if (ctx.cr6.eq) goto loc_82420EF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(r28.u32, 0, ctx.xer);
	// beq cr6,0x82420ef4
	if (ctx.cr6.eq) goto loc_82420EF4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8241e418
	ctx.lr = 0x82420ECC;
	sub_8241E418(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addi r11,r11,11440
	ctx.r11.s64 = ctx.r11.s64 + 11440;
	// addi r4,r10,-18752
	ctx.r4.s64 = ctx.r10.s64 + -18752;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,412(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 412);
	// bctrl 
	ctx.lr = 0x82420EF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82420EF4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x822d4ed8
	return;
}

DEFINE_REX_FUNC(sub_824223D0) {
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
	ctx.lr = 0x824223D8;
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
	// bne cr6,0x82422424
	if (!ctx.cr6.eq) goto loc_82422424;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,16968
	ctx.r5.s64 = ctx.r11.s64 + 16968;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82422424;
	sub_8240E308(ctx, base);
loc_82422424:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(r30.s32, 16, ctx.xer);
	// blt cr6,0x82422448
	if (ctx.cr6.lt) goto loc_82422448;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18404
	ctx.r5.s64 = ctx.r11.s64 + -18404;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,562
	ctx.r7.s64 = 562;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x82422448;
	sub_8240E308(ctx, base);
loc_82422448:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge cr6,0x8242246c
	if (!ctx.cr6.lt) goto loc_8242246C;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-18416
	ctx.r5.s64 = ctx.r11.s64 + -18416;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8240e308
	ctx.lr = 0x8242246C;
	sub_8240E308(ctx, base);
loc_8242246C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8240e810
	ctx.lr = 0x82422478;
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
	ctx.lr = 0x8242248C;
	sub_8240E880(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x824224fc
	if (!ctx.cr6.eq) goto loc_824224FC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(r29.u32, 0, ctx.xer);
	// bne cr6,0x824224fc
	if (!ctx.cr6.eq) goto loc_824224FC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x824224b8
	if (ctx.cr6.eq) goto loc_824224B8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x824224B8;
	sub_8240E930(ctx, base);
loc_824224B8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x824224f4
	if (ctx.cr6.eq) goto loc_824224F4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x824224f4
	if (ctx.cr6.eq) goto loc_824224F4;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x824224F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_824224F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82422558
	goto loc_82422558;
loc_824224FC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82422518
	if (ctx.cr6.eq) goto loc_82422518;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8240e930
	ctx.lr = 0x82422518;
	sub_8240E930(ctx, base);
loc_82422518:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(r26.u32, 0, ctx.xer);
	// beq cr6,0x82422554
	if (ctx.cr6.eq) goto loc_82422554;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(r25.u32, 0, ctx.xer);
	// beq cr6,0x82422554
	if (ctx.cr6.eq) goto loc_82422554;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bctrl 
	ctx.lr = 0x82422554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82422554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82422558:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_82428E48) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82428a88
	ctx.lr = 0x82428E68;
	sub_82428A88(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-3152
	ctx.r11.s64 = ctx.r11.s64 + -3152;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824299D8) {
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
	ctx.lr = 0x82429A00;
	sub_82412D18(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, r30.u32);
	// beq 0x82429a2c
	if (ctx.cr0.eq) goto loc_82429A2C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,144
	ctx.r4.s64 = 144;
	// bl 0x82428f58
	ctx.lr = 0x82429A1C;
	sub_82428F58(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,-2216
	ctx.r11.s64 = ctx.r11.s64 + -2216;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82429a30
	goto loc_82429A30;
loc_82429A2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82429A30:
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

DEFINE_REX_FUNC(sub_8242BB40) {
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
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242BB68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242bba0
	if (ctx.cr0.lt) goto loc_8242BBA0;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242BB84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8242bba0
	if (ctx.cr0.lt) goto loc_8242BBA0;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8242BBA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8242BBA0:
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

DEFINE_REX_FUNC(sub_8242D2C8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,204(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8242d31c
	if (ctx.cr6.eq) goto loc_8242D31C;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r9,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r9.u32);
	// beq cr6,0x8242d2f8
	if (ctx.cr6.eq) goto loc_8242D2F8;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r8.u32);
	// b 0x8242d300
	goto loc_8242D300;
loc_8242D2F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,208(r11)
	REX_STORE_U32(ctx.r11.u32 + 208, ctx.r9.u32);
loc_8242D300:
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
loc_8242D31C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8242E9D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x822d4e8c
	ctx.lr = 0x8242E9E0;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,9644
	ctx.r11.s64 = ctx.r11.s64 + 9644;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r29,1
	r29.s64 = 1;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r10,9712
	ctx.r10.s64 = ctx.r10.s64 + 9712;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32246
	ctx.r7.s64 = -2113273856;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r9,9692
	ctx.r11.s64 = ctx.r9.s64 + 9692;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r8,9676
	ctx.r9.s64 = ctx.r8.s64 + 9676;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r10,r7,9620
	ctx.r10.s64 = ctx.r7.s64 + 9620;
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// stw r30,20(r31)
	REX_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(r31.u32 + 24, r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(r31.u32 + 28, r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r30,36(r31)
	REX_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r30,40(r31)
	REX_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r10,44(r31)
	REX_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// stw r30,76(r31)
	REX_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r10,80(r31)
	REX_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r30,112(r31)
	REX_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r10,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r10.u32);
	// stw r30,148(r31)
	REX_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,152(r31)
	REX_STORE_U32(r31.u32 + 152, r30.u32);
	// stw r30,156(r31)
	REX_STORE_U32(r31.u32 + 156, r30.u32);
	// stw r30,160(r31)
	REX_STORE_U32(r31.u32 + 160, r30.u32);
	// stw r30,164(r31)
	REX_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(r31.u32 + 168, r30.u32);
	// stw r30,172(r31)
	REX_STORE_U32(r31.u32 + 172, r30.u32);
	// stw r30,176(r31)
	REX_STORE_U32(r31.u32 + 176, r30.u32);
	// stw r30,180(r31)
	REX_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r30,184(r31)
	REX_STORE_U32(r31.u32 + 184, r30.u32);
	// stw r30,188(r31)
	REX_STORE_U32(r31.u32 + 188, r30.u32);
	// bl 0x8242d278
	ctx.lr = 0x8242EA90;
	sub_8242D278(ctx, base);
	// addi r11,r31,412
	ctx.r11.s64 = r31.s64 + 412;
	// stw r30,412(r31)
	REX_STORE_U32(r31.u32 + 412, r30.u32);
	// addi r10,r31,452
	ctx.r10.s64 = r31.s64 + 452;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r30,436(r31)
	REX_STORE_U32(r31.u32 + 436, r30.u32);
	// stw r30,440(r31)
	REX_STORE_U32(r31.u32 + 440, r30.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,416(r31)
	REX_STORE_U32(r31.u32 + 416, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,444(r31)
	REX_STORE_U32(r31.u32 + 444, r30.u32);
	// addi r9,r31,500
	ctx.r9.s64 = r31.s64 + 500;
	// stw r29,448(r31)
	REX_STORE_U32(r31.u32 + 448, r29.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// stw r30,420(r31)
	REX_STORE_U32(r31.u32 + 420, r30.u32);
	// addi r3,r31,604
	ctx.r3.s64 = r31.s64 + 604;
	// lwz r7,412(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 412);
	// lfs f0,1992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 1992);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,416(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 416);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,412(r31)
	REX_STORE_U32(r31.u32 + 412, ctx.r11.u32);
	// stw r30,452(r31)
	REX_STORE_U32(r31.u32 + 452, r30.u32);
	// stw r10,456(r31)
	REX_STORE_U32(r31.u32 + 456, ctx.r10.u32);
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// stw r30,476(r31)
	REX_STORE_U32(r31.u32 + 476, r30.u32);
	// addi r9,r31,548
	ctx.r9.s64 = r31.s64 + 548;
	// stw r30,480(r31)
	REX_STORE_U32(r31.u32 + 480, r30.u32);
	// stw r30,484(r31)
	REX_STORE_U32(r31.u32 + 484, r30.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stw r29,488(r31)
	REX_STORE_U32(r31.u32 + 488, r29.u32);
	// stw r30,460(r31)
	REX_STORE_U32(r31.u32 + 460, r30.u32);
	// lwz r7,452(r31)
	ctx.r7.u64 = REX_LOAD_U32(r31.u32 + 452);
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 456);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r11,452(r31)
	REX_STORE_U32(r31.u32 + 452, ctx.r11.u32);
	// stw r30,492(r31)
	REX_STORE_U32(r31.u32 + 492, r30.u32);
	// stw r30,496(r31)
	REX_STORE_U32(r31.u32 + 496, r30.u32);
	// stw r30,500(r31)
	REX_STORE_U32(r31.u32 + 500, r30.u32);
	// stw r10,504(r31)
	REX_STORE_U32(r31.u32 + 504, ctx.r10.u32);
	// stw r30,524(r31)
	REX_STORE_U32(r31.u32 + 524, r30.u32);
	// stw r30,528(r31)
	REX_STORE_U32(r31.u32 + 528, r30.u32);
	// stw r30,532(r31)
	REX_STORE_U32(r31.u32 + 532, r30.u32);
	// stw r29,536(r31)
	REX_STORE_U32(r31.u32 + 536, r29.u32);
	// stw r30,508(r31)
	REX_STORE_U32(r31.u32 + 508, r30.u32);
	// lwz r11,504(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 504);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,500(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 500);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,500(r31)
	REX_STORE_U32(r31.u32 + 500, ctx.r11.u32);
	// stfs f0,540(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r31.u32 + 540, temp.u32);
	// stw r8,544(r31)
	REX_STORE_U32(r31.u32 + 544, ctx.r8.u32);
	// stw r30,548(r31)
	REX_STORE_U32(r31.u32 + 548, r30.u32);
	// stw r9,552(r31)
	REX_STORE_U32(r31.u32 + 552, ctx.r9.u32);
	// stw r30,572(r31)
	REX_STORE_U32(r31.u32 + 572, r30.u32);
	// stw r30,576(r31)
	REX_STORE_U32(r31.u32 + 576, r30.u32);
	// stw r30,580(r31)
	REX_STORE_U32(r31.u32 + 580, r30.u32);
	// stw r29,584(r31)
	REX_STORE_U32(r31.u32 + 584, r29.u32);
	// stw r30,556(r31)
	REX_STORE_U32(r31.u32 + 556, r30.u32);
	// lwz r10,548(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 548);
	// lwz r11,552(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 552);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,548(r31)
	REX_STORE_U32(r31.u32 + 548, ctx.r11.u32);
	// bl 0x8242e600
	ctx.lr = 0x8242EB94;
	sub_8242E600(ctx, base);
	// stw r30,16044(r31)
	REX_STORE_U32(r31.u32 + 16044, r30.u32);
	// stw r30,16048(r31)
	REX_STORE_U32(r31.u32 + 16048, r30.u32);
	// addi r3,r31,16052
	ctx.r3.s64 = r31.s64 + 16052;
	// bl 0x8242d278
	ctx.lr = 0x8242EBA4;
	sub_8242D278(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-22633
	ctx.r10.s64 = -1483276288;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r10,16272(r31)
	REX_STORE_U32(r31.u32 + 16272, ctx.r10.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r11,16276(r31)
	REX_STORE_U32(r31.u32 + 16276, ctx.r11.u32);
	// addi r3,r10,7712
	ctx.r3.s64 = ctx.r10.s64 + 7712;
	// bl 0x8242c298
	ctx.lr = 0x8242EBC4;
	sub_8242C298(ctx, base);
	// addi r11,r31,588
	ctx.r11.s64 = r31.s64 + 588;
	// stw r30,588(r31)
	REX_STORE_U32(r31.u32 + 588, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,600(r31)
	REX_STORE_U32(r31.u32 + 600, ctx.r11.u32);
	// stw r30,592(r31)
	REX_STORE_U32(r31.u32 + 592, r30.u32);
	// stw r29,596(r31)
	REX_STORE_U32(r31.u32 + 596, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_82437A80) {
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
	// bl 0x82437a08
	ctx.lr = 0x82437AA0;
	sub_82437A08(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82437ab0
	if (ctx.cr0.eq) goto loc_82437AB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x82437AB0;
	sub_82473600(ctx, base);
loc_82437AB0:
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

DEFINE_REX_FUNC(sub_824388C8) {
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
	ctx.lr = 0x824388D0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824388ec
	if (ctx.cr6.eq) goto loc_824388EC;
	// lwz r31,0(r11)
	r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x824388f0
	goto loc_824388F0;
loc_824388EC:
	// li r31,0
	r31.s64 = 0;
loc_824388F0:
	// addi r26,r30,500
	r26.s64 = r30.s64 + 500;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823cd980
	ctx.lr = 0x82438904;
	sub_823CD980(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// li r27,0
	r27.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82438984
	if (ctx.cr6.eq) goto loc_82438984;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// rlwinm. r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r27,r11,23,9,31
	r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,509(r30)
	REX_STORE_U8(r30.u32 + 509, ctx.r10.u8);
	// bne 0x82438940
	if (!ctx.cr0.eq) goto loc_82438940;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(r27.u32, 0, ctx.xer);
	// beq cr6,0x82438940
	if (ctx.cr6.eq) goto loc_82438940;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// stb r11,509(r30)
	REX_STORE_U8(r30.u32 + 509, ctx.r11.u8);
loc_82438940:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82438968
	if (ctx.cr6.eq) goto loc_82438968;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// rlwinm r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// rlwinm r28,r11,23,9,31
	r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,508(r30)
	REX_STORE_U8(r30.u32 + 508, ctx.r10.u8);
	// b 0x82438970
	goto loc_82438970;
loc_82438968:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,508(r30)
	REX_STORE_U8(r30.u32 + 508, ctx.r11.u8);
loc_82438970:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82438980
	if (!ctx.cr6.eq) goto loc_82438980;
	// li r11,254
	ctx.r11.s64 = 254;
loc_82438980:
	// stb r11,510(r30)
	REX_STORE_U8(r30.u32 + 510, ctx.r11.u8);
loc_82438984:
	// lwz r11,492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 492);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82438a04
	if (!ctx.cr6.gt) goto loc_82438A04;
loc_82438994:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x824389e4
	if (ctx.cr6.eq) goto loc_824389E4;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// bl 0x82437df0
	ctx.lr = 0x824389B4;
	sub_82437DF0(ctx, base);
	// stw r3,0(r26)
	REX_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 8);
	// beq cr6,0x824389dc
	if (ctx.cr6.eq) goto loc_824389DC;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x82437df0
	ctx.lr = 0x824389D8;
	sub_82437DF0(ctx, base);
	// b 0x824389e0
	goto loc_824389E0;
loc_824389DC:
	// bl 0x82437ed0
	ctx.lr = 0x824389E0;
	sub_82437ED0(ctx, base);
loc_824389E0:
	// stw r3,504(r30)
	REX_STORE_U32(r30.u32 + 504, ctx.r3.u32);
loc_824389E4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,516(r30)
	ctx.r3.u64 = REX_LOAD_U32(r30.u32 + 516);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8243bdf8
	ctx.lr = 0x824389F4;
	sub_8243BDF8(ctx, base);
	// lwz r11,492(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 492);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82438994
	if (ctx.cr6.lt) goto loc_82438994;
loc_82438A04:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ed0
	return;
}

DEFINE_REX_FUNC(sub_8243C8F8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82435d68
	sub_82435D68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8243CA88) {
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
	// bl 0x8243ca30
	ctx.lr = 0x8243CAA8;
	sub_8243CA30(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8243cab8
	if (ctx.cr0.eq) goto loc_8243CAB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82473600
	ctx.lr = 0x8243CAB8;
	sub_82473600(ctx, base);
loc_8243CAB8:
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

DEFINE_REX_FUNC(sub_8243DB18) {
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
	// addi r4,r11,23448
	ctx.r4.s64 = ctx.r11.s64 + 23448;
	// bl 0x8242bb10
	ctx.lr = 0x8243DB38;
	sub_8242BB10(ctx, base);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,11248
	ctx.r10.s64 = ctx.r10.s64 + 11248;
	// addi r9,r9,11228
	ctx.r9.s64 = ctx.r9.s64 + 11228;
	// stw r11,96(r31)
	REX_STORE_U32(r31.u32 + 96, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32162
	ctx.r10.s64 = -2107768832;
	// stw r9,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// addi r3,r10,7712
	ctx.r3.s64 = ctx.r10.s64 + 7712;
	// stw r11,104(r31)
	REX_STORE_U32(r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	REX_STORE_U32(r31.u32 + 108, ctx.r11.u32);
	// stw r11,112(r31)
	REX_STORE_U32(r31.u32 + 112, ctx.r11.u32);
	// stw r11,116(r31)
	REX_STORE_U32(r31.u32 + 116, ctx.r11.u32);
	// bl 0x8242c298
	ctx.lr = 0x8243DB78;
	sub_8242C298(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8243DB88;
	sub_822D5870(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822d5870
	ctx.lr = 0x8243DB98;
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

DEFINE_REX_FUNC(sub_824405E0) {
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
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82440630
	if (!ctx.cr6.eq) goto loc_82440630;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r3,180
	ctx.r8.s64 = ctx.r3.s64 + 180;
loc_82440610:
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
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82440610
	if (!ctx.cr0.eq) goto loc_82440610;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,184(r31)
	REX_STORE_U32(r31.u32 + 184, ctx.r10.u32);
loc_82440630:
	// li r5,56
	ctx.r5.s64 = 56;
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(r31.u32 + 184);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x822d4fa0
	ctx.lr = 0x82440640;
	sub_822D4FA0(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x822d4fa0
	ctx.lr = 0x82440650;
	sub_822D4FA0(ctx, base);
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

DEFINE_REX_FUNC(sub_82442238) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82442230
	sub_82442230(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824426B8) {
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
	ctx.lr = 0x824426C0;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r26,r3,28
	r26.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824426F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,380(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 380);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82442740
	if (!ctx.cr6.eq) goto loc_82442740;
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
	// li r4,112
	ctx.r4.s64 = 112;
	// bl 0x8242c3b0
	ctx.lr = 0x82442718;
	sub_8242C3B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82442734
	if (ctx.cr0.eq) goto loc_82442734;
	// addi r5,r30,12
	ctx.r5.s64 = r30.s64 + 12;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82460740
	ctx.lr = 0x8244272C;
	sub_82460740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82442738
	goto loc_82442738;
loc_82442734:
	// li r31,0
	r31.s64 = 0;
loc_82442738:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(r31.u32, 0, ctx.xer);
	// bne cr6,0x8244274c
	if (!ctx.cr6.eq) goto loc_8244274C;
loc_82442740:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x824427e8
	goto loc_824427E8;
loc_8244274C:
	// lwz r11,72(r30)
	ctx.r11.u64 = REX_LOAD_U32(r30.u32 + 72);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,136(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r7,140(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rldicl r10,r7,63,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0x7FFFFFFFFFFFFFFF;
	// mulli r11,r11,1000
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1000));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// divdu r11,r11,r7
	ctx.r11.u64 = ctx.r7.u64 ? ctx.r11.u64 / ctx.r7.u64 : 0;
	// tdllei r7,0
	if (ctx.r7.s64 == 0ll || ctx.r7.u64 < 0ull) ppc_trap(ctx, base, 0);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bctrl 
	ctx.lr = 0x8244279C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(r29.s32, 0, ctx.xer);
	// blt 0x824427cc
	if (ctx.cr0.lt) goto loc_824427CC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,340
	ctx.r3.s64 = r30.s64 + 340;
	// bl 0x8245c5a8
	ctx.lr = 0x824427B0;
	sub_8245C5A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x824427c4
	if (ctx.cr0.eq) goto loc_824427C4;
	// li r29,0
	r29.s64 = 0;
	// stw r31,0(r25)
	REX_STORE_U32(r25.u32 + 0, r31.u32);
	// b 0x824427e8
	goto loc_824427E8;
loc_824427C4:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
loc_824427CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824427E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82473600
	ctx.lr = 0x824427E8;
	sub_82473600(ctx, base);
loc_824427E8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x824427FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x822d4ecc
	return;
}

DEFINE_REX_FUNC(sub_8244AB88) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,220(r31)
	ctx.r11.u64 = REX_LOAD_U32(r31.u32 + 220);
	// lwz r30,212(r31)
	r30.u64 = REX_LOAD_U32(r31.u32 + 212);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x8244a870
	ctx.lr = 0x8244ABC0;
	sub_8244A870(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8244abd0
	goto loc_8244ABD0;
loc_8244ABD0:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

DEFINE_REX_FUNC(sub_8244C7A8) {
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
	// li r5,116
	ctx.r5.s64 = 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x822d5870
	ctx.lr = 0x8244C7C8;
	sub_822D5870(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,60
	ctx.r8.s64 = r31.s64 + 60;
	// stw r11,0(r31)
	REX_STORE_U32(r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(r31.u32 + 4, ctx.r11.u32);
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
	// stw r11,8(r31)
	REX_STORE_U32(r31.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,12(r31)
	REX_STORE_U32(r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(r31.u32 + 16, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(r31.u32 + 56, ctx.r11.u32);
loc_8244C7F4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8244c7f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8244C7F4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r31)
	REX_STORE_U32(r31.u32 + 84, ctx.r11.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,92(r31)
	REX_STORE_U32(r31.u32 + 92, ctx.r11.u32);
	// sth r10,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r10.u16);
	// stw r11,100(r31)
	REX_STORE_U32(r31.u32 + 100, ctx.r11.u32);
	// stw r9,24(r31)
	REX_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// stw r10,32(r31)
	REX_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// stw r11,36(r31)
	REX_STORE_U32(r31.u32 + 36, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824512C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister r31{};
	PPCRegister temp{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f11,28452(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 28452);
	ctx.f11.f64 = double(temp.f32);
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f12,1992(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 1992);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,27540(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 27540);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,2024(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2024);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x824513f4
	if (ctx.cr6.lt) goto loc_824513F4;
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// addi r6,r3,2
	ctx.r6.s64 = ctx.r3.s64 + 2;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
loc_82451304:
	// lfs f0,-8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451318
	if (!ctx.cr6.lt) goto loc_82451318;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451324
	goto loc_82451324;
loc_82451318:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82451324
	if (!ctx.cr6.gt) goto loc_82451324;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82451324:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, r31.u8);
	// bge cr6,0x82451350
	if (!ctx.cr6.lt) goto loc_82451350;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8245135c
	goto loc_8245135C;
loc_82451350:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8245135c
	if (!ctx.cr6.gt) goto loc_8245135C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8245135C:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, r31.u8);
	// bge cr6,0x82451388
	if (!ctx.cr6.lt) goto loc_82451388;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x82451394
	goto loc_82451394;
loc_82451388:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82451394
	if (!ctx.cr6.gt) goto loc_82451394;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_82451394:
	// fadds f9,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// lfs f0,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f8,f9,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = std::isnan(ctx.f8.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f8.f64));
	// stfd f7,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f7.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r6,r11
	REX_STORE_U8(ctx.r6.u32 + ctx.r11.u32, r31.u8);
	// bge cr6,0x824513c0
	if (!ctx.cr6.lt) goto loc_824513C0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x824513cc
	goto loc_824513CC;
loc_824513C0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x824513cc
	if (!ctx.cr6.gt) goto loc_824513CC;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_824513CC:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r31,-9(r1)
	r31.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r31,r9,r11
	REX_STORE_U8(ctx.r9.u32 + ctx.r11.u32, r31.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82451304
	if (ctx.cr6.lt) goto loc_82451304;
loc_824513F4:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82451450
	if (!ctx.cr6.lt) goto loc_82451450;
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8245140C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82451420
	if (!ctx.cr6.lt) goto loc_82451420;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8245142c
	goto loc_8245142C;
loc_82451420:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x8245142c
	if (!ctx.cr6.gt) goto loc_8245142C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
loc_8245142C:
	// fadds f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctidz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f9.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f8.u64);
	// lbz r9,-9(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + -9);
	// stbx r9,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8245140c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8245140C;
loc_82451450:
	// ld r31,-8(r1)
	r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82457AC0) {
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
	ctx.lr = 0x82457AC8;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f28
	ctx.lr = 0x82457AD0;
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82453d80
	ctx.lr = 0x82457AFC;
	sub_82453D80(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = r31.s64 + 65536;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x824537a8
	ctx.lr = 0x82457B10;
	sub_824537A8(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// ori r9,r11,23232
	ctx.r9.u64 = ctx.r11.u64 | 23232;
	// lfs f12,1996(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 1996);
	ctx.f12.f64 = double(temp.f32);
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(r31.u32 + ctx.r9.u32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(f31.f64, ctx.f12.f64);
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f10,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// ble cr6,0x82457b38
	if (!ctx.cr6.gt) goto loc_82457B38;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
loc_82457B38:
	// fmr f6,f12
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f12.f64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(r30.u32, 0, ctx.xer);
	// beq cr6,0x82458a0c
	if (ctx.cr6.eq) goto loc_82458A0C;
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// mtctr r30
	ctx.ctr.u64 = r30.u64;
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// addi r11,r11,10988
	ctx.r11.s64 = ctx.r11.s64 + 10988;
	// addi r10,r10,10992
	ctx.r10.s64 = ctx.r10.s64 + 10992;
	// addi r9,r9,12052
	ctx.r9.s64 = ctx.r9.s64 + 12052;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r8,14132
	ctx.r8.s64 = ctx.r8.s64 + 14132;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addis r5,r31,1
	ctx.r5.s64 = r31.s64 + 65536;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// addi r7,r7,80
	ctx.r7.s64 = ctx.r7.s64 + 80;
	// addi r5,r5,18260
	ctx.r5.s64 = ctx.r5.s64 + 18260;
	// addi r4,r4,18264
	ctx.r4.s64 = ctx.r4.s64 + 18264;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// stw r5,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addis r11,r31,3
	ctx.r11.s64 = r31.s64 + 196608;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = r31.s64 + 196608;
	// addis r8,r31,3
	ctx.r8.s64 = r31.s64 + 196608;
	// addi r6,r6,84
	ctx.r6.s64 = ctx.r6.s64 + 84;
	// addi r11,r11,23240
	ctx.r11.s64 = ctx.r11.s64 + 23240;
	// addi r10,r10,24308
	ctx.r10.s64 = ctx.r10.s64 + 24308;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// addi r9,r9,21140
	ctx.r9.s64 = ctx.r9.s64 + 21140;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r8,r8,23220
	ctx.r8.s64 = ctx.r8.s64 + 23220;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// addi r7,r29,-4
	ctx.r7.s64 = r29.s64 + -4;
	// stw r9,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// addis r3,r31,3
	ctx.r3.s64 = r31.s64 + 196608;
	// stw r8,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// addis r20,r31,1
	r20.s64 = r31.s64 + 65536;
	// stw r7,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r7.u32);
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// addis r18,r31,1
	r18.s64 = r31.s64 + 65536;
	// addis r17,r31,1
	r17.s64 = r31.s64 + 65536;
	// addis r16,r31,1
	r16.s64 = r31.s64 + 65536;
	// addis r23,r31,3
	r23.s64 = r31.s64 + 196608;
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addis r4,r31,3
	ctx.r4.s64 = r31.s64 + 196608;
	// addi r3,r3,23236
	ctx.r3.s64 = ctx.r3.s64 + 23236;
	// addi r20,r20,2184
	r20.s64 = r20.s64 + 2184;
	// addi r19,r19,2188
	r19.s64 = r19.s64 + 2188;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// addi r18,r18,2192
	r18.s64 = r18.s64 + 2192;
	// stw r20,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, r20.u32);
	// addi r17,r17,2740
	r17.s64 = r17.s64 + 2740;
	// stw r19,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, r19.u32);
	// addi r16,r16,10984
	r16.s64 = r16.s64 + 10984;
	// stw r18,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, r18.u32);
	// addi r23,r23,23248
	r23.s64 = r23.s64 + 23248;
	// stw r17,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, r17.u32);
	// addi r5,r5,19072
	ctx.r5.s64 = ctx.r5.s64 + 19072;
	// stw r16,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, r16.u32);
	// addi r4,r4,21152
	ctx.r4.s64 = ctx.r4.s64 + 21152;
	// stw r23,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, r23.u32);
	// addis r11,r31,1
	ctx.r11.s64 = r31.s64 + 65536;
	// stw r5,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r5.u32);
	// addis r10,r31,1
	ctx.r10.s64 = r31.s64 + 65536;
	// stw r4,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addis r9,r31,1
	ctx.r9.s64 = r31.s64 + 65536;
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// addis r7,r31,1
	ctx.r7.s64 = r31.s64 + 65536;
	// addis r6,r31,1
	ctx.r6.s64 = r31.s64 + 65536;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// addi r10,r10,2752
	ctx.r10.s64 = ctx.r10.s64 + 2752;
	// addi r9,r9,14144
	ctx.r9.s64 = ctx.r9.s64 + 14144;
	// addi r8,r8,2208
	ctx.r8.s64 = ctx.r8.s64 + 2208;
	// addi r7,r7,11008
	ctx.r7.s64 = ctx.r7.s64 + 11008;
	// addi r6,r6,12064
	ctx.r6.s64 = ctx.r6.s64 + 12064;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lfs f3,31452(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 31452);
	ctx.f3.f64 = double(temp.f32);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lfs f7,1992(r30)
	temp.u32 = REX_LOAD_U32(r30.u32 + 1992);
	ctx.f7.f64 = double(temp.f32);
	// lis r3,1
	ctx.r3.s64 = 65536;
	// lis r27,3
	r27.s64 = 196608;
	// lis r25,1
	r25.s64 = 65536;
	// lis r30,1
	r30.s64 = 65536;
	// lfs f5,2008(r29)
	temp.u32 = REX_LOAD_U32(r29.u32 + 2008);
	ctx.f5.f64 = double(temp.f32);
	// lis r24,2
	r24.s64 = 131072;
	// lfs f4,2332(r28)
	temp.u32 = REX_LOAD_U32(r28.u32 + 2332);
	ctx.f4.f64 = double(temp.f32);
	// ori r29,r3,38960
	r29.u64 = ctx.r3.u64 | 38960;
	// ori r27,r27,19032
	r27.u64 = r27.u64 | 19032;
	// ori r28,r25,18272
	r28.u64 = r25.u64 | 18272;
	// ori r30,r30,59648
	r30.u64 = r30.u64 | 59648;
	// ori r3,r24,39360
	ctx.r3.u64 = r24.u64 | 39360;
loc_82457CC8:
	// lwz r25,2048(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// lfs f8,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lwz r24,2064(r11)
	r24.u64 = REX_LOAD_U32(ctx.r11.u32 + 2064);
	// lfs f9,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lwz r21,2068(r11)
	r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 2068);
	// rlwinm r15,r25,2,0,29
	r15.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r24,r25
	r24.u64 = r25.u64 - r24.u64;
	// lwz r14,2072(r11)
	r14.u64 = REX_LOAD_U32(ctx.r11.u32 + 2072);
	// subf r21,r21,r25
	r21.u64 = r25.u64 - r21.u64;
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// subf r25,r14,r25
	r25.u64 = r25.u64 - r14.u64;
	// lfs f0,2076(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2076);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r24,r24,2,21,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x7FC;
	// lfs f13,2080(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2080);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r25,r25,2,21,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x7FC;
	// lfs f11,2084(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2084);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r21,r21,2,21,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0x7FC;
	// lfs f2,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r14,84(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// std r5,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r5.u64);
	// lfsx f8,r24,r11
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfsx f8,r25,r11
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f30,r21,r11
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r11.u32);
	f30.f64 = double(temp.f32);
	// fmuls f11,f11,f8
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// fmuls f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 * f30.f64));
	// stfs f0,2088(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 2088, temp.u32);
	// stfs f11,2096(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 2096, temp.u32);
	// stfs f13,2092(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 2092, temp.u32);
	// stfsx f1,r15,r11
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r15.u32 + ctx.r11.u32, temp.u32);
	// lwz r25,2048(r11)
	r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 2048);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// stw r25,2048(r11)
	REX_STORE_U32(ctx.r11.u32 + 2048, r25.u32);
	// lfs f8,524(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 524);
	ctx.f8.f64 = double(temp.f32);
	// lwz r25,512(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 512);
	// lfs f1,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r24,516(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 516);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r24,r8
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,528(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 528);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f11,f0,f8,f9
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfsx f11,r25,r8
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r25.u32 + ctx.r8.u32, temp.u32);
	// lwz r24,512(r8)
	r24.u64 = REX_LOAD_U32(ctx.r8.u32 + 512);
	// lwz r25,516(r8)
	r25.u64 = REX_LOAD_U32(ctx.r8.u32 + 516);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// fmadds f9,f13,f11,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// clrlwi r25,r25,25
	r25.u64 = r25.u32 & 0x7F;
	// stfs f9,532(r8)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r8.u32 + 532, temp.u32);
	// clrlwi r24,r24,25
	r24.u64 = r24.u32 & 0x7F;
	// stw r25,516(r8)
	REX_STORE_U32(ctx.r8.u32 + 516, r25.u32);
	// stw r24,512(r8)
	REX_STORE_U32(ctx.r8.u32 + 512, r24.u32);
	// lfs f11,0(r14)
	temp.u32 = REX_LOAD_U32(r14.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r25,8208(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 8208);
	// lfs f0,0(r16)
	temp.u32 = REX_LOAD_U32(r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lwz r24,8216(r10)
	r24.u64 = REX_LOAD_U32(ctx.r10.u32 + 8216);
	// lfs f8,8224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8224);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,8220(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8220);
	ctx.f9.f64 = double(temp.f32);
	// lwz r21,8192(r10)
	r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// lwz r15,8212(r10)
	r15.u64 = REX_LOAD_U32(ctx.r10.u32 + 8212);
	// subf r15,r15,r21
	r15.u64 = r21.u64 - r15.u64;
	// subf r25,r25,r21
	r25.u64 = r21.u64 - r25.u64;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// rlwinm r15,r15,2,19,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x1FFC;
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// subf r24,r24,r21
	r24.u64 = r21.u64 - r24.u64;
	// lfs f30,8228(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8228);
	f30.f64 = double(temp.f32);
	// rlwinm r25,r25,2,19,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x1FFC;
	// rlwinm r24,r24,2,19,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0x1FFC;
	// lfsx f11,r15,r10
	temp.u32 = REX_LOAD_U32(r15.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f11,f8
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f8.f64));
	// lfsx f11,r25,r10
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f11,f9
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfsx f29,r24,r10
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r10.u32);
	f29.f64 = double(temp.f32);
	// rlwinm r25,r21,2,0,29
	r25.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f8,8236(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8236, temp.u32);
	// stfs f9,8232(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 8232, temp.u32);
	// fmuls f8,f30,f29
	ctx.f8.f64 = double(float(f30.f64 * f29.f64));
	// stfs f8,8240(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 8240, temp.u32);
	// stfsx f1,r25,r10
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + ctx.r10.u32, temp.u32);
	// lwz r25,8192(r10)
	r25.u64 = REX_LOAD_U32(ctx.r10.u32 + 8192);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// clrlwi r25,r25,21
	r25.u64 = r25.u32 & 0x7FF;
	// lwz r24,92(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r21,96(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,8192(r10)
	REX_STORE_U32(ctx.r10.u32 + 8192, r25.u32);
	// lfs f11,1036(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1036);
	ctx.f11.f64 = double(temp.f32);
	// lwz r25,1024(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 1024);
	// lfs f9,1040(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 1040);
	ctx.f9.f64 = double(temp.f32);
	// lwz r11,1028(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 1028);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r11,r7
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f0,f8,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f8.f64, ctx.f11.f64, ctx.f0.f64)));
	// lfs f30,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfsx f0,r25,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r25.u32 + ctx.r7.u32, temp.u32);
	// lwz r25,1028(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 1028);
	// addi r24,r25,1
	r24.s64 = r25.s64 + 1;
	// lwz r25,1024(r7)
	r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 1024);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// fmadds f11,f9,f0,f8
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f8.f64)));
	// clrlwi r24,r24,24
	r24.u64 = r24.u32 & 0xFF;
	// stfs f11,1044(r7)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + 1044, temp.u32);
	// clrlwi r25,r25,24
	r25.u64 = r25.u32 & 0xFF;
	// lwz r14,104(r1)
	r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r24,1028(r7)
	REX_STORE_U32(ctx.r7.u32 + 1028, r24.u32);
	// stw r25,1024(r7)
	REX_STORE_U32(ctx.r7.u32 + 1024, r25.u32);
	// lfs f29,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	f29.f64 = double(temp.f32);
	// lfs f8,2064(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2064);
	ctx.f8.f64 = double(temp.f32);
	// lwz r15,100(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f9,2060(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2060);
	ctx.f9.f64 = double(temp.f32);
	// lwz r25,2048(r6)
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + 2048);
	// lwz r24,2052(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 2052);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r24,r6
	temp.u32 = REX_LOAD_U32(r24.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f11,f9,f0,f30
	ctx.f11.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, f30.f64)));
	// stfsx f11,r25,r6
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(r25.u32 + ctx.r6.u32, temp.u32);
	// lwz r25,2052(r6)
	r25.u64 = REX_LOAD_U32(ctx.r6.u32 + 2052);
	// fmadds f9,f11,f8,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f8.f64, ctx.f0.f64)));
	// lwz r24,2048(r6)
	r24.u64 = REX_LOAD_U32(ctx.r6.u32 + 2048);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stfs f9,2068(r6)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r6.u32 + 2068, temp.u32);
	// clrlwi r24,r24,23
	r24.u64 = r24.u32 & 0x1FF;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// stw r24,2048(r6)
	REX_STORE_U32(ctx.r6.u32 + 2048, r24.u32);
	// stw r25,2052(r6)
	REX_STORE_U32(ctx.r6.u32 + 2052, r25.u32);
	// lwz r21,4100(r9)
	r21.u64 = REX_LOAD_U32(ctx.r9.u32 + 4100);
	// lwz r15,0(r15)
	r15.u64 = REX_LOAD_U32(r15.u32 + 0);
	// stw r15,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, r15.u32);
	// lfs f8,4108(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4108);
	ctx.f8.f64 = double(temp.f32);
	// lwz r24,0(r14)
	r24.u64 = REX_LOAD_U32(r14.u32 + 0);
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// lfs f9,4112(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4112);
	ctx.f9.f64 = double(temp.f32);
	// lfs f28,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	f28.f64 = double(temp.f32);
	// lwz r24,4096(r9)
	r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4096);
	// fmuls f1,f28,f1
	ctx.f1.f64 = double(float(f28.f64 * ctx.f1.f64));
	// lfs f28,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	f28.f64 = double(temp.f32);
	// fmuls f30,f28,f30
	f30.f64 = double(float(f28.f64 * f30.f64));
	// subf r21,r21,r24
	r21.u64 = r24.u64 - r21.u64;
	// lwz r25,4104(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4104);
	// subf r25,r25,r24
	r25.u64 = r24.u64 - r25.u64;
	// rlwinm r21,r21,2,20,29
	r21.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFC;
	// fadds f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 + ctx.f1.f64));
	// rlwinm r25,r25,2,20,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFC;
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r15,128(r1)
	r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f28,r21,r9
	temp.u32 = REX_LOAD_U32(r21.u32 + ctx.r9.u32);
	f28.f64 = double(temp.f32);
	// fmuls f28,f28,f8
	f28.f64 = double(float(f28.f64 * ctx.f8.f64));
	// lwz r21,124(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lfsx f30,r25,r9
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r9.u32);
	f30.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f9,f30,f9
	ctx.f9.f64 = double(float(f30.f64 * ctx.f9.f64));
	// stfs f9,4120(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 4120, temp.u32);
	// stfs f28,4116(r9)
	temp.f32 = float(f28.f64);
	REX_STORE_U32(ctx.r9.u32 + 4116, temp.u32);
	// fadds f2,f1,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 + ctx.f2.f64));
	// stfsx f29,r24,r9
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r24.u32 + ctx.r9.u32, temp.u32);
	// ld r5,184(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// ld r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// lwz r25,4096(r9)
	r25.u64 = REX_LOAD_U32(ctx.r9.u32 + 4096);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// clrlwi r25,r25,22
	r25.u64 = r25.u32 & 0x3FF;
	// stw r25,4096(r9)
	REX_STORE_U32(ctx.r9.u32 + 4096, r25.u32);
	// lwz r25,0(r15)
	r25.u64 = REX_LOAD_U32(r15.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(r25.s32, 0, ctx.xer);
	// lwz r25,0(r21)
	r25.u64 = REX_LOAD_U32(r21.u32 + 0);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, r25.u32);
	// lfs f1,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f2,f1
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f1.f64));
	// bne cr6,0x82458874
	if (!ctx.cr6.eq) goto loc_82458874;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r4,20352
	ctx.r4.s64 = ctx.r4.s64 + 20352;
	// lis r26,1
	r26.s64 = 65536;
	// ori r5,r5,20340
	ctx.r5.u64 = ctx.r5.u64 | 20340;
	// ori r26,r26,22420
	r26.u64 = r26.u64 | 22420;
	// addis r23,r31,1
	r23.s64 = r31.s64 + 65536;
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// lfs f8,2060(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2060);
	ctx.f8.f64 = double(temp.f32);
	// lwz r24,2048(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// lfs f6,2064(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2064);
	ctx.f6.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// addis r26,r31,1
	r26.s64 = r31.s64 + 65536;
	// addi r23,r23,22452
	r23.s64 = r23.s64 + 22452;
	// lfsx f30,r25,r4
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r4.u32);
	f30.f64 = double(temp.f32);
	// ori r25,r5,22448
	r25.u64 = ctx.r5.u64 | 22448;
	// fmadds f8,f8,f30,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f8.f64, f30.f64, ctx.f2.f64)));
	// stfsx f8,r24,r4
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r24.u32 + ctx.r4.u32, temp.u32);
	// addi r26,r26,22432
	r26.s64 = r26.s64 + 22432;
	// lis r22,1
	r22.s64 = 65536;
	// addis r21,r31,2
	r21.s64 = r31.s64 + 131072;
	// lis r20,1
	r20.s64 = 65536;
	// addi r21,r21,-26608
	r21.s64 = r21.s64 + -26608;
	// ori r22,r22,38916
	r22.u64 = r22.u64 | 38916;
	// ori r20,r20,38944
	r20.u64 = r20.u64 | 38944;
	// fmadds f6,f6,f8,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, ctx.f8.f64, f30.f64)));
	// stfs f6,2068(r4)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + 2068, temp.u32);
	// lwz r5,2048(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// addi r24,r5,1
	r24.s64 = ctx.r5.s64 + 1;
	// lwz r5,2052(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// clrlwi r24,r24,23
	r24.u64 = r24.u32 & 0x1FF;
	// stw r5,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, ctx.r5.u32);
	// stw r24,2048(r4)
	REX_STORE_U32(ctx.r4.u32 + 2048, r24.u32);
	// lis r24,1
	r24.s64 = 65536;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// ori r5,r24,22476
	ctx.r5.u64 = r24.u64 | 22476;
	// addi r4,r4,22480
	ctx.r4.s64 = ctx.r4.s64 + 22480;
	// lis r24,1
	r24.s64 = 65536;
	// ori r24,r24,22500
	r24.u64 = r24.u64 | 22500;
	// lfs f6,0(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwz r19,8(r26)
	r19.u64 = REX_LOAD_U32(r26.u32 + 8);
	// lfsx f8,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfs f2,12(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r25,r19,2,0,29
	r25.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r25,r26
	temp.u32 = REX_LOAD_U32(r25.u32 + r26.u32);
	f30.f64 = double(temp.f32);
	// fmadds f2,f30,f2,f1
	ctx.f2.f64 = double(float(std::fma(f30.f64, ctx.f2.f64, ctx.f1.f64)));
	// stfs f1,0(r26)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// stfs f6,4(r26)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r26.u32 + 4, temp.u32);
	// stfs f2,16(r26)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r26.u32 + 16, temp.u32);
	// lfs f2,16(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f6,0(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lfs f1,20(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lwz r26,8(r23)
	r26.u64 = REX_LOAD_U32(r23.u32 + 8);
	// rlwinm r26,r26,2,0,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r26,r23
	temp.u32 = REX_LOAD_U32(r26.u32 + r23.u32);
	f30.f64 = double(temp.f32);
	// fmadds f8,f2,f30,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, f30.f64, ctx.f8.f64)));
	// fmuls f2,f1,f30
	ctx.f2.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lfs f1,12(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f30,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	f30.f64 = double(temp.f32);
	// stfs f8,0(r23)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f6,4(r23)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r23.u32 + 4, temp.u32);
	// fmadds f8,f1,f8,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfs f8,24(r23)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r23.u32 + 24, temp.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f2,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f2,f6,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f6.f64, f30.f64)));
	// lfsx f6,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f6,f6,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f4.f64));
	// lfs f2,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,4(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// stfs f1,0(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// fmuls f2,f8,f1
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f1.f64));
	// stfs f2,20(r4)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lfsx f1,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,8(r21)
	ctx.r4.u64 = REX_LOAD_U32(r21.u32 + 8);
	// lfs f8,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r4,r31,1
	ctx.r4.s64 = r31.s64 + 65536;
	// lfsx f29,r5,r21
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r21.u32);
	f29.f64 = double(temp.f32);
	// lfsx f2,r31,r20
	temp.u32 = REX_LOAD_U32(r31.u32 + r20.u32);
	ctx.f2.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// addi r4,r4,22512
	ctx.r4.s64 = ctx.r4.s64 + 22512;
	// lfs f30,12(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 12);
	f30.f64 = double(temp.f32);
	// stfs f1,0(r21)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r21.u32 + 0, temp.u32);
	// fmuls f1,f30,f29
	ctx.f1.f64 = double(float(f30.f64 * f29.f64));
	// stfs f1,16(r21)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r21.u32 + 16, temp.u32);
	// ori r23,r5,41028
	r23.u64 = ctx.r5.u64 | 41028;
	// stfs f8,4(r21)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r21.u32 + 4, temp.u32);
	// lwz r14,16388(r4)
	r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 16388);
	// lfs f1,16396(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16396);
	ctx.f1.f64 = double(temp.f32);
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r26,1
	r26.s64 = 65536;
	// lwz r16,16384(r4)
	r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// ori r20,r5,43136
	r20.u64 = ctx.r5.u64 | 43136;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r26,r26,38920
	r26.u64 = r26.u64 | 38920;
	// ori r18,r5,43188
	r18.u64 = ctx.r5.u64 | 43188;
	// rlwinm r15,r16,2,0,29
	r15.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16392(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16392);
	// subf r5,r5,r16
	ctx.r5.u64 = r16.u64 - ctx.r5.u64;
	// subf r16,r14,r16
	r16.u64 = r16.u64 - r14.u64;
	// lfsx f8,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r5,r5,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFC;
	// lfs f30,16400(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16400);
	f30.f64 = double(temp.f32);
	// rlwinm r26,r16,2,18,29
	r26.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0x3FFC;
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// lis r24,1
	r24.s64 = 65536;
	// addi r25,r25,-24496
	r25.s64 = r25.s64 + -24496;
	// lfsx f29,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	f29.f64 = double(temp.f32);
	// fmuls f30,f29,f30
	f30.f64 = double(float(f29.f64 * f30.f64));
	// lfsx f28,r26,r4
	temp.u32 = REX_LOAD_U32(r26.u32 + ctx.r4.u32);
	f28.f64 = double(temp.f32);
	// ori r24,r24,43108
	r24.u64 = r24.u64 | 43108;
	// fmuls f1,f28,f1
	ctx.f1.f64 = double(float(f28.f64 * ctx.f1.f64));
	// stfs f1,16404(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 16404, temp.u32);
	// stfs f30,16408(r4)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r4.u32 + 16408, temp.u32);
	// addis r22,r31,2
	r22.s64 = r31.s64 + 131072;
	// stfsx f6,r15,r4
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r15.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,16384(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,20
	ctx.r5.u64 = ctx.r5.u32 & 0xFFF;
	// addi r22,r22,-22416
	r22.s64 = r22.s64 + -22416;
	// stw r5,16384(r4)
	REX_STORE_U32(ctx.r4.u32 + 16384, ctx.r5.u32);
	// lfsx f6,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r4,2052(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// lfs f1,2060(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,2064(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 2064);
	f29.f64 = double(temp.f32);
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
	// lwz r5,2048(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	f30.f64 = double(temp.f32);
	// fadds f30,f30,f13
	f30.f64 = double(float(f30.f64 + ctx.f13.f64));
	// lfsx f28,r4,r25
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	f28.f64 = double(temp.f32);
	// fmadds f6,f1,f28,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, f28.f64, ctx.f6.f64)));
	// stfsx f6,r5,r25
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + r25.u32, temp.u32);
	// lwz r5,2048(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 2048);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// fmadds f1,f29,f6,f28
	ctx.f1.f64 = double(float(std::fma(f29.f64, ctx.f6.f64, f28.f64)));
	// lwz r5,2052(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 2052);
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// stfs f1,2068(r25)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 2068, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,2048(r25)
	REX_STORE_U32(r25.u32 + 2048, ctx.r4.u32);
	// clrlwi r4,r5,23
	ctx.r4.u64 = ctx.r5.u32 & 0x1FF;
	// stw r4,2052(r25)
	REX_STORE_U32(r25.u32 + 2052, ctx.r4.u32);
	// lfs f6,12(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,8(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 8);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r31,r20
	temp.u32 = REX_LOAD_U32(r31.u32 + r20.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f29,0(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 0);
	f29.f64 = double(temp.f32);
	// lis r26,1
	r26.s64 = 65536;
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// lis r23,2
	r23.s64 = 131072;
	// addi r25,r25,-5920
	r25.s64 = r25.s64 + -5920;
	// lfsx f28,r4,r22
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r22.u32);
	f28.f64 = double(temp.f32);
	// addis r4,r31,2
	ctx.r4.s64 = r31.s64 + 131072;
	// fmadds f6,f28,f6,f30
	ctx.f6.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, f30.f64)));
	// stfs f6,16(r22)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r22.u32 + 16, temp.u32);
	// stfs f30,0(r22)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r22.u32 + 0, temp.u32);
	// addi r4,r4,-22336
	ctx.r4.s64 = ctx.r4.s64 + -22336;
	// stfs f29,4(r22)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r22.u32 + 4, temp.u32);
	// addis r24,r31,2
	r24.s64 = r31.s64 + 131072;
	// ori r23,r23,2324
	r23.u64 = r23.u64 | 2324;
	// addi r24,r24,2336
	r24.s64 = r24.s64 + 2336;
	// lis r22,2
	r22.s64 = 131072;
	// addis r20,r31,2
	r20.s64 = r31.s64 + 131072;
	// ori r22,r22,10552
	r22.u64 = r22.u64 | 10552;
	// addi r20,r20,10560
	r20.s64 = r20.s64 + 10560;
	// lfs f27,20(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 20);
	f27.f64 = double(temp.f32);
	// lfs f30,12(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 12);
	f30.f64 = double(temp.f32);
	// lwz r5,8(r19)
	ctx.r5.u64 = REX_LOAD_U32(r19.u32 + 8);
	// lfs f6,16(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfs f29,0(r19)
	temp.u32 = REX_LOAD_U32(r19.u32 + 0);
	f29.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f28,r5,r19
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r19.u32);
	f28.f64 = double(temp.f32);
	// fmadds f1,f6,f28,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f6.f64, f28.f64, ctx.f1.f64)));
	// fmuls f6,f27,f28
	ctx.f6.f64 = double(float(f27.f64 * f28.f64));
	// lfsx f28,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f28.f64 = double(temp.f32);
	// stfs f29,4(r19)
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r19.u32 + 4, temp.u32);
	// ori r5,r26,59604
	ctx.r5.u64 = r26.u64 | 59604;
	// fmadds f6,f30,f1,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, ctx.f6.f64)));
	// stfs f6,24(r19)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r19.u32 + 24, temp.u32);
	// stfs f1,0(r19)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r19.u32 + 0, temp.u32);
	// lwz r19,8(r17)
	r19.u64 = REX_LOAD_U32(r17.u32 + 8);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,16(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lis r26,1
	r26.s64 = 65536;
	// lfsx f27,r19,r17
	temp.u32 = REX_LOAD_U32(r19.u32 + r17.u32);
	f27.f64 = double(temp.f32);
	// lis r21,2
	r21.s64 = 131072;
	// lfs f6,12(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// ori r26,r26,59632
	r26.u64 = r26.u64 | 59632;
	// lfsx f29,r31,r18
	temp.u32 = REX_LOAD_U32(r31.u32 + r18.u32);
	f29.f64 = double(temp.f32);
	// ori r21,r21,18772
	r21.u64 = r21.u64 | 18772;
	// lfs f30,0(r17)
	temp.u32 = REX_LOAD_U32(r17.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmuls f29,f29,f4
	f29.f64 = double(float(f29.f64 * ctx.f4.f64));
	// stfs f30,4(r17)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r17.u32 + 4, temp.u32);
	// fmadds f1,f1,f27,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, f28.f64)));
	// stfs f1,0(r17)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r17.u32 + 0, temp.u32);
	// fmuls f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f1.f64));
	// stfs f6,20(r17)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r17.u32 + 20, temp.u32);
	// lfs f1,16396(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16396);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f6,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,16388(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16388);
	// lwz r19,16384(r4)
	r19.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// rlwinm r18,r19,2,0,29
	r18.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r5,r19
	ctx.r5.u64 = r19.u64 - ctx.r5.u64;
	// rlwinm r5,r5,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFC;
	// lfsx f30,r5,r4
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r4.u32);
	f30.f64 = double(temp.f32);
	// fmuls f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 * ctx.f1.f64));
	// stfs f1,16404(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 16404, temp.u32);
	// stfsx f29,r18,r4
	temp.f32 = float(f29.f64);
	REX_STORE_U32(r18.u32 + ctx.r4.u32, temp.u32);
	// lwz r5,16384(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r5,r5,20
	ctx.r5.u64 = ctx.r5.u32 & 0xFFF;
	// stw r5,16384(r4)
	REX_STORE_U32(ctx.r4.u32 + 16384, ctx.r5.u32);
	// lwz r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r5,r25
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f30,12(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 12);
	f30.f64 = double(temp.f32);
	// fmuls f1,f30,f1
	ctx.f1.f64 = double(float(f30.f64 * ctx.f1.f64));
	// lfsx f29,r31,r26
	temp.u32 = REX_LOAD_U32(r31.u32 + r26.u32);
	f29.f64 = double(temp.f32);
	// lfs f30,0(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 0);
	f30.f64 = double(temp.f32);
	// stfs f1,16(r25)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 16, temp.u32);
	// stfs f30,4(r25)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r25.u32 + 4, temp.u32);
	// stfs f6,0(r25)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r25.u32 + 0, temp.u32);
	// lwz r4,8196(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// lfsx f6,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f1,f6,f0
	ctx.f1.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,8192(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// lfs f30,8204(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8204);
	f30.f64 = double(temp.f32);
	// addis r26,r31,2
	r26.s64 = r31.s64 + 131072;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfs f28,8212(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8212);
	f28.f64 = double(temp.f32);
	// addi r26,r26,18784
	r26.s64 = r26.s64 + 18784;
	// lfs f27,8208(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8208);
	f27.f64 = double(temp.f32);
	// addis r25,r31,2
	r25.s64 = r31.s64 + 131072;
	// lfsx f26,r4,r24
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r24.u32);
	f26.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// fmadds f30,f30,f26,f1
	f30.f64 = double(float(std::fma(f30.f64, f26.f64, ctx.f1.f64)));
	// addi r25,r25,22912
	r25.s64 = r25.s64 + 22912;
	// stfsx f30,r5,r24
	temp.f32 = float(f30.f64);
	REX_STORE_U32(ctx.r5.u32 + r24.u32, temp.u32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// fmuls f30,f28,f26
	f30.f64 = double(float(f28.f64 * f26.f64));
	// ori r22,r4,39316
	r22.u64 = ctx.r4.u64 | 39316;
	// ori r23,r5,22900
	r23.u64 = ctx.r5.u64 | 22900;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// addis r18,r31,3
	r18.s64 = r31.s64 + 196608;
	// ori r19,r5,39348
	r19.u64 = ctx.r5.u64 | 39348;
	// lwz r5,8196(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r4,8192(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// fmadds f1,f27,f1,f30
	ctx.f1.f64 = double(float(std::fma(f27.f64, ctx.f1.f64, f30.f64)));
	// stfs f1,8216(r24)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r24.u32 + 8216, temp.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r5,8196(r24)
	REX_STORE_U32(r24.u32 + 8196, ctx.r5.u32);
	// addi r18,r18,-26208
	r18.s64 = r18.s64 + -26208;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stw r4,8192(r24)
	REX_STORE_U32(r24.u32 + 8192, ctx.r4.u32);
	// lfsx f30,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f30.f64 = double(temp.f32);
	// lwz r4,8196(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 8196);
	// lfs f1,8204(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 8204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8192(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 8192);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f28,8208(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 8208);
	f28.f64 = double(temp.f32);
	// lfsx f27,r4,r20
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r20.u32);
	f27.f64 = double(temp.f32);
	// fmadds f6,f1,f27,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f1.f64, f27.f64, ctx.f6.f64)));
	// stfsx f6,r5,r20
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + r20.u32, temp.u32);
	// lwz r5,8196(r20)
	ctx.r5.u64 = REX_LOAD_U32(r20.u32 + 8196);
	// lwz r4,8192(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 8192);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// fmadds f1,f28,f6,f27
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, f27.f64)));
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stfs f1,8212(r20)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r20.u32 + 8212, temp.u32);
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stw r4,8192(r20)
	REX_STORE_U32(r20.u32 + 8192, ctx.r4.u32);
	// stw r5,8196(r20)
	REX_STORE_U32(r20.u32 + 8196, ctx.r5.u32);
	// lfsx f1,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// lwz r4,4100(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4100);
	// lfs f6,4108(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4108);
	ctx.f6.f64 = double(temp.f32);
	// lwz r5,4096(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4096);
	// lfs f28,4112(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 4112);
	f28.f64 = double(temp.f32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f27,r4,r26
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	f27.f64 = double(temp.f32);
	// fmadds f6,f6,f27,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f6.f64, f27.f64, f30.f64)));
	// fadds f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfsx f6,r5,r26
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r5.u32 + r26.u32, temp.u32);
	// fmadds f6,f28,f6,f27
	ctx.f6.f64 = double(float(std::fma(f28.f64, ctx.f6.f64, f27.f64)));
	// stfs f6,4116(r26)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r26.u32 + 4116, temp.u32);
	// lwz r5,4100(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 4100);
	// lwz r4,4096(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 4096);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// stw r4,4096(r26)
	REX_STORE_U32(r26.u32 + 4096, ctx.r4.u32);
	// stw r5,4100(r26)
	REX_STORE_U32(r26.u32 + 4100, ctx.r5.u32);
	// lfs f6,16396(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 16396);
	ctx.f6.f64 = double(temp.f32);
	// lwz r4,16388(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 16388);
	// lfsx f30,r31,r22
	temp.u32 = REX_LOAD_U32(r31.u32 + r22.u32);
	f30.f64 = double(temp.f32);
	// lwz r5,16384(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// rlwinm r26,r5,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r4,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r4.u64;
	// rlwinm r5,r5,2,18,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x3FFC;
	// lis r24,2
	r24.s64 = 131072;
	// lis r23,3
	r23.s64 = 196608;
	// ori r24,r24,64020
	r24.u64 = r24.u64 | 64020;
	// addis r22,r31,3
	r22.s64 = r31.s64 + 196608;
	// lfsx f28,r5,r25
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	f28.f64 = double(temp.f32);
	// lis r21,3
	r21.s64 = 196608;
	// fmuls f6,f28,f6
	ctx.f6.f64 = double(float(f28.f64 * ctx.f6.f64));
	// stfs f6,16404(r25)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r25.u32 + 16404, temp.u32);
	// stfsx f1,r26,r25
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r26.u32 + r25.u32, temp.u32);
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// addis r20,r31,3
	r20.s64 = r31.s64 + 196608;
	// addi r26,r26,-17952
	r26.s64 = r26.s64 + -17952;
	// addi r22,r22,-1504
	r22.s64 = r22.s64 + -1504;
	// ori r23,r23,2612
	r23.u64 = r23.u64 | 2612;
	// addi r20,r20,19040
	r20.s64 = r20.s64 + 19040;
	// ori r21,r21,19028
	r21.u64 = r21.u64 | 19028;
	// lwz r5,16384(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 16384);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// clrlwi r4,r4,20
	ctx.r4.u64 = ctx.r4.u32 & 0xFFF;
	// ori r5,r5,47572
	ctx.r5.u64 = ctx.r5.u64 | 47572;
	// stw r4,16384(r25)
	REX_STORE_U32(r25.u32 + 16384, ctx.r4.u32);
	// lfs f28,12(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 12);
	f28.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// ori r4,r4,55800
	ctx.r4.u64 = ctx.r4.u64 | 55800;
	// addi r25,r25,-9728
	r25.s64 = r25.s64 + -9728;
	// lfs f1,0(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r17,8(r18)
	r17.u64 = REX_LOAD_U32(r18.u32 + 8);
	// rlwinm r17,r17,2,0,29
	r17.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f6,16(r18)
	temp.u32 = REX_LOAD_U32(r18.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f26,r17,r18
	temp.u32 = REX_LOAD_U32(r17.u32 + r18.u32);
	f26.f64 = double(temp.f32);
	// fmuls f6,f6,f26
	ctx.f6.f64 = double(float(ctx.f6.f64 * f26.f64));
	// lfsx f27,r31,r19
	temp.u32 = REX_LOAD_U32(r31.u32 + r19.u32);
	f27.f64 = double(temp.f32);
	// fmadds f6,f28,f30,f6
	ctx.f6.f64 = double(float(std::fma(f28.f64, f30.f64, ctx.f6.f64)));
	// stfs f1,4(r18)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f6,20(r18)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r18.u32 + 20, temp.u32);
	// stfs f30,0(r18)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r18.u32 + 0, temp.u32);
	// lfsx f1,r31,r5
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r5.u32);
	ctx.f1.f64 = double(temp.f32);
	// fadds f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lwz r19,8192(r26)
	r19.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// lfs f28,8212(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8212);
	f28.f64 = double(temp.f32);
	// lfs f26,8208(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8208);
	f26.f64 = double(temp.f32);
	// lwz r5,8196(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,8204(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 8204);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f25,r5,r26
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r26.u32);
	f25.f64 = double(temp.f32);
	// lfsx f30,r31,r4
	temp.u32 = REX_LOAD_U32(r31.u32 + ctx.r4.u32);
	f30.f64 = double(temp.f32);
	// fmadds f1,f1,f25,f6
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f25.f64, ctx.f6.f64)));
	// stfsx f1,r19,r26
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r19.u32 + r26.u32, temp.u32);
	// fmuls f28,f28,f25
	f28.f64 = double(float(f28.f64 * f25.f64));
	// lwz r5,8196(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 8196);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r4,8192(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 8192);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// fmadds f6,f26,f6,f28
	ctx.f6.f64 = double(float(std::fma(f26.f64, ctx.f6.f64, f28.f64)));
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stfs f6,8216(r26)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r26.u32 + 8216, temp.u32);
	// stw r5,8196(r26)
	REX_STORE_U32(r26.u32 + 8196, ctx.r5.u32);
	// stw r4,8192(r26)
	REX_STORE_U32(r26.u32 + 8192, ctx.r4.u32);
	// lwz r4,8192(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// lfs f1,8204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8204);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8196(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f26,r5,r25
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r25.u32);
	f26.f64 = double(temp.f32);
	// lfsx f6,r31,r24
	temp.u32 = REX_LOAD_U32(r31.u32 + r24.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmadds f1,f1,f26,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, f30.f64)));
	// lfs f28,8208(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8208);
	f28.f64 = double(temp.f32);
	// stfsx f1,r4,r25
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + r25.u32, temp.u32);
	// fmadds f1,f28,f1,f26
	ctx.f1.f64 = double(float(std::fma(f28.f64, ctx.f1.f64, f26.f64)));
	// stfs f1,8212(r25)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 8212, temp.u32);
	// lwz r5,8196(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lwz r4,8192(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// stw r4,8192(r25)
	REX_STORE_U32(r25.u32 + 8192, ctx.r4.u32);
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// stw r5,8196(r25)
	REX_STORE_U32(r25.u32 + 8196, ctx.r5.u32);
	// add r24,r31,r28
	r24.u64 = r31.u64 + r28.u64;
	// addi r26,r26,2624
	r26.s64 = r26.s64 + 2624;
	// add r15,r31,r29
	r15.u64 = r31.u64 + r29.u64;
	// lwz r5,4100(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 4100);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f28,r5,r22
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r22.u32);
	f28.f64 = double(temp.f32);
	// lwz r4,4096(r22)
	ctx.r4.u64 = REX_LOAD_U32(r22.u32 + 4096);
	// lfs f30,4108(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4108);
	f30.f64 = double(temp.f32);
	// lis r5,3
	ctx.r5.s64 = 196608;
	// fmadds f6,f30,f28,f6
	ctx.f6.f64 = double(float(std::fma(f30.f64, f28.f64, ctx.f6.f64)));
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r31,r23
	temp.u32 = REX_LOAD_U32(r31.u32 + r23.u32);
	ctx.f1.f64 = double(temp.f32);
	// ori r25,r5,19060
	r25.u64 = ctx.r5.u64 | 19060;
	// lfs f30,4112(r22)
	temp.u32 = REX_LOAD_U32(r22.u32 + 4112);
	f30.f64 = double(temp.f32);
	// fadds f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// stfsx f6,r4,r22
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r4.u32 + r22.u32, temp.u32);
	// fmadds f6,f30,f6,f28
	ctx.f6.f64 = double(float(std::fma(f30.f64, ctx.f6.f64, f28.f64)));
	// stfs f6,4116(r22)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r22.u32 + 4116, temp.u32);
	// lwz r5,4100(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 4100);
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// lwz r5,4096(r22)
	ctx.r5.u64 = REX_LOAD_U32(r22.u32 + 4096);
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// fadds f1,f1,f13
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,4100(r22)
	REX_STORE_U32(r22.u32 + 4100, ctx.r4.u32);
	// fadds f13,f29,f2
	ctx.f13.f64 = double(float(f29.f64 + ctx.f2.f64));
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// stw r5,4096(r22)
	REX_STORE_U32(r22.u32 + 4096, ctx.r5.u32);
	// lfsx f6,r31,r25
	temp.u32 = REX_LOAD_U32(r31.u32 + r25.u32);
	ctx.f6.f64 = double(temp.f32);
	// fadds f28,f6,f27
	f28.f64 = double(float(ctx.f6.f64 + f27.f64));
	// lfsx f30,r31,r21
	temp.u32 = REX_LOAD_U32(r31.u32 + r21.u32);
	f30.f64 = double(temp.f32);
	// fsubs f27,f6,f27
	f27.f64 = double(float(ctx.f6.f64 - f27.f64));
	// lfs f25,12(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 12);
	f25.f64 = double(temp.f32);
	// lwz r4,8(r20)
	ctx.r4.u64 = REX_LOAD_U32(r20.u32 + 8);
	// fmuls f6,f25,f30
	ctx.f6.f64 = double(float(f25.f64 * f30.f64));
	// lfs f25,16(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 16);
	f25.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f26,0(r20)
	temp.u32 = REX_LOAD_U32(r20.u32 + 0);
	f26.f64 = double(temp.f32);
	// lfsx f24,r5,r20
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r20.u32);
	f24.f64 = double(temp.f32);
	// stfs f26,4(r20)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r20.u32 + 4, temp.u32);
	// stfs f30,0(r20)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r20.u32 + 0, temp.u32);
	// fmadds f6,f25,f24,f6
	ctx.f6.f64 = double(float(std::fma(f25.f64, f24.f64, ctx.f6.f64)));
	// stfs f6,20(r20)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(r20.u32 + 20, temp.u32);
	// lwz r23,16392(r26)
	r23.u64 = REX_LOAD_U32(r26.u32 + 16392);
	// lfs f26,16400(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16400);
	f26.f64 = double(temp.f32);
	// lwz r25,16388(r26)
	r25.u64 = REX_LOAD_U32(r26.u32 + 16388);
	// lfs f30,16396(r26)
	temp.u32 = REX_LOAD_U32(r26.u32 + 16396);
	f30.f64 = double(temp.f32);
	// lwz r4,16384(r26)
	ctx.r4.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r23,r23,r4
	r23.u64 = ctx.r4.u64 - r23.u64;
	// lfsx f6,r31,r27
	temp.u32 = REX_LOAD_U32(r31.u32 + r27.u32);
	ctx.f6.f64 = double(temp.f32);
	// subf r4,r25,r4
	ctx.r4.u64 = ctx.r4.u64 - r25.u64;
	// fadds f6,f6,f8
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// rlwinm r25,r23,2,18,29
	r25.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FFC;
	// rlwinm r4,r4,2,18,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x3FFC;
	// lfsx f25,r25,r26
	temp.u32 = REX_LOAD_U32(r25.u32 + r26.u32);
	f25.f64 = double(temp.f32);
	// lfsx f24,r4,r26
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r26.u32);
	f24.f64 = double(temp.f32);
	// fmuls f26,f25,f26
	f26.f64 = double(float(f25.f64 * f26.f64));
	// fmuls f30,f24,f30
	f30.f64 = double(float(f24.f64 * f30.f64));
	// stfs f30,16404(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 16404, temp.u32);
	// stfs f26,16408(r26)
	temp.f32 = float(f26.f64);
	REX_STORE_U32(r26.u32 + 16408, temp.u32);
	// stfsx f1,r5,r26
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r5.u32 + r26.u32, temp.u32);
	// lwz r5,16384(r26)
	ctx.r5.u64 = REX_LOAD_U32(r26.u32 + 16384);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// clrlwi r4,r5,20
	ctx.r4.u64 = ctx.r5.u32 & 0xFFF;
	// stw r4,16384(r26)
	REX_STORE_U32(r26.u32 + 16384, ctx.r4.u32);
	// lfs f30,2064(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2064);
	f30.f64 = double(temp.f32);
	// lwz r4,2048(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// lwz r5,2052(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f26,r5,r24
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r24.u32);
	f26.f64 = double(temp.f32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,2060(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// fmadds f1,f1,f26,f28
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f26.f64, f28.f64)));
	// fadds f1,f1,f11
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfsx f1,r4,r24
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + r24.u32, temp.u32);
	// fmadds f1,f30,f1,f26
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f1.f64, f26.f64)));
	// stfs f1,2068(r24)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r24.u32 + 2068, temp.u32);
	// lwz r5,2052(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 2052);
	// fsubs f2,f29,f2
	ctx.f2.f64 = double(float(f29.f64 - ctx.f2.f64));
	// lwz r4,2048(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 2048);
	// add r25,r31,r30
	r25.u64 = r31.u64 + r30.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r22,80(r1)
	r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r16,136(r1)
	r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// lwz r17,140(r1)
	r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// lwz r18,144(r1)
	r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// stw r5,2052(r24)
	REX_STORE_U32(r24.u32 + 2052, ctx.r5.u32);
	// stw r4,2048(r24)
	REX_STORE_U32(r24.u32 + 2048, ctx.r4.u32);
	// add r24,r31,r3
	r24.u64 = r31.u64 + ctx.r3.u64;
	// lwz r19,148(r1)
	r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r20,152(r1)
	r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r23,156(r1)
	r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r26,452(r1)
	r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r5,2052(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 2052);
	// lfs f1,2060(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 2060);
	ctx.f1.f64 = double(temp.f32);
	// lwz r4,2048(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 2048);
	// lfs f30,2064(r15)
	temp.u32 = REX_LOAD_U32(r15.u32 + 2064);
	f30.f64 = double(temp.f32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f29,r5,r15
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r15.u32);
	f29.f64 = double(temp.f32);
	// fmadds f1,f1,f29,f27
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, f29.f64, f27.f64)));
	// fadds f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f11.f64));
	// stfsx f11,r4,r15
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r4.u32 + r15.u32, temp.u32);
	// lwz r5,2048(r15)
	ctx.r5.u64 = REX_LOAD_U32(r15.u32 + 2048);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lwz r4,2052(r15)
	ctx.r4.u64 = REX_LOAD_U32(r15.u32 + 2052);
	// clrlwi r5,r5,23
	ctx.r5.u64 = ctx.r5.u32 & 0x1FF;
	// fmadds f1,f30,f11,f29
	ctx.f1.f64 = double(float(std::fma(f30.f64, ctx.f11.f64, f29.f64)));
	// stfs f1,2068(r15)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r15.u32 + 2068, temp.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r5,2048(r15)
	REX_STORE_U32(r15.u32 + 2048, ctx.r5.u32);
	// clrlwi r4,r4,23
	ctx.r4.u64 = ctx.r4.u32 & 0x1FF;
	// stw r4,2052(r15)
	REX_STORE_U32(r15.u32 + 2052, ctx.r4.u32);
	// lwz r4,8196(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// lfs f11,8204(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8204);
	ctx.f11.f64 = double(temp.f32);
	// lfs f1,8208(r25)
	temp.u32 = REX_LOAD_U32(r25.u32 + 8208);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,8192(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r4,r25
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + r25.u32);
	f30.f64 = double(temp.f32);
	// fmadds f13,f11,f30,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f11.f64, f30.f64, ctx.f13.f64)));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfsx f11,r5,r25
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r5.u32 + r25.u32, temp.u32);
	// lwz r4,8196(r25)
	ctx.r4.u64 = REX_LOAD_U32(r25.u32 + 8196);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r5,8192(r25)
	ctx.r5.u64 = REX_LOAD_U32(r25.u32 + 8192);
	// clrlwi r4,r4,21
	ctx.r4.u64 = ctx.r4.u32 & 0x7FF;
	// fmadds f1,f1,f11,f30
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f11.f64, f30.f64)));
	// stfs f1,8212(r25)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(r25.u32 + 8212, temp.u32);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,8196(r25)
	REX_STORE_U32(r25.u32 + 8196, ctx.r4.u32);
	// clrlwi r5,r5,21
	ctx.r5.u64 = ctx.r5.u32 & 0x7FF;
	// stw r5,8192(r25)
	REX_STORE_U32(r25.u32 + 8192, ctx.r5.u32);
	// lwz r4,8196(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// lfs f13,8204(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8204);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,8208(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 8208);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8192(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// lfsx f11,r5,r24
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + r24.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f2,f13,f11,f2
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f2.f64)));
	// fadds f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// stfsx f0,r5,r24
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + r24.u32, temp.u32);
	// lwz r5,8196(r24)
	ctx.r5.u64 = REX_LOAD_U32(r24.u32 + 8196);
	// addi r25,r5,1
	r25.s64 = ctx.r5.s64 + 1;
	// lwz r4,8192(r24)
	ctx.r4.u64 = REX_LOAD_U32(r24.u32 + 8192);
	// clrlwi r25,r25,21
	r25.u64 = r25.u32 & 0x7FF;
	// fmadds f13,f1,f0,f11
	ctx.f13.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f11.f64)));
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r21,r4,1
	r21.s64 = ctx.r4.s64 + 1;
	// lwz r4,164(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f13,8212(r24)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(r24.u32 + 8212, temp.u32);
	// stw r25,8196(r24)
	REX_STORE_U32(r24.u32 + 8196, r25.u32);
	// clrlwi r21,r21,21
	r21.u64 = r21.u32 & 0x7FF;
	// stw r21,8192(r24)
	REX_STORE_U32(r24.u32 + 8192, r21.u32);
loc_82458874:
	// lwz r25,1024(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 1024);
	// fadds f1,f9,f6
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// lwz r21,1044(r23)
	r21.u64 = REX_LOAD_U32(r23.u32 + 1044);
	// lfs f0,1056(r23)
	temp.u32 = REX_LOAD_U32(r23.u32 + 1056);
	ctx.f0.f64 = double(temp.f32);
	// lwz r24,1040(r23)
	r24.u64 = REX_LOAD_U32(r23.u32 + 1040);
	// fsubs f2,f7,f0
	ctx.f2.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// subf r15,r21,r25
	r15.u64 = r25.u64 - r21.u64;
	// lwz r21,444(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// subf r14,r24,r25
	r14.u64 = r25.u64 - r24.u64;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// rlwinm r15,r15,2,22,29
	r15.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0x3FC;
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r14,r14,2,22,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0x3FC;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfsu f13,4(r21)
	ea = 4 + r21.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	r21.u32 = ea;
	// lfsx f9,r15,r23
	temp.u32 = REX_LOAD_U32(r15.u32 + r23.u32);
	ctx.f9.f64 = double(temp.f32);
	// stw r21,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, r21.u32);
	// fmuls f30,f9,f0
	f30.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfsx f29,r14,r23
	temp.u32 = REX_LOAD_U32(r14.u32 + r23.u32);
	f29.f64 = double(temp.f32);
	// lfs f11,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// ld r11,192(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fmuls f11,f11,f5
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f5.f64));
	// fmuls f9,f1,f5
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f5.f64));
	// fmadds f2,f29,f2,f30
	ctx.f2.f64 = double(float(std::fma(f29.f64, ctx.f2.f64, f30.f64)));
	// stfs f2,1060(r23)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(r23.u32 + 1060, temp.u32);
	// ble cr6,0x824588e4
	if (!ctx.cr6.gt) goto loc_824588E4;
	// fsubs f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f3.f64));
	// b 0x82458904
	goto loc_82458904;
loc_824588E4:
	// lwz r21,1048(r23)
	r21.u64 = REX_LOAD_U32(r23.u32 + 1048);
	// cmplw cr6,r21,r24
	ctx.cr6.compare<uint32_t>(r21.u32, r24.u32, ctx.xer);
	// beq cr6,0x824588f8
	if (ctx.cr6.eq) goto loc_824588F8;
	// fmr f0,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f7.f64;
	// b 0x824588fc
	goto loc_824588FC;
loc_824588F8:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_824588FC:
	// stw r24,1044(r23)
	REX_STORE_U32(r23.u32 + 1044, r24.u32);
	// stw r21,1040(r23)
	REX_STORE_U32(r23.u32 + 1040, r21.u32);
loc_82458904:
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,1056(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(r23.u32 + 1056, temp.u32);
	// lwz r24,172(r1)
	r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// fsubs f0,f7,f10
	ctx.f0.f64 = double(float(ctx.f7.f64 - ctx.f10.f64));
	// lwz r21,176(r1)
	r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// stfsx f8,r25,r23
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(r25.u32 + r23.u32, temp.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// lwz r25,1024(r23)
	r25.u64 = REX_LOAD_U32(r23.u32 + 1024);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// clrlwi r25,r25,24
	r25.u64 = r25.u32 & 0xFF;
	// stw r25,1024(r23)
	REX_STORE_U32(r23.u32 + 1024, r25.u32);
	// lfs f1,2064(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2064);
	ctx.f1.f64 = double(temp.f32);
	// lwz r25,2052(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 2052);
	// lwz r15,2048(r5)
	r15.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// lfs f2,0(r24)
	temp.u32 = REX_LOAD_U32(r24.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,2060(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2060);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r15,2,0,29
	r24.u64 = __builtin_rotateleft64(r15.u32 | (r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f30,r25,r5
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r5.u32);
	f30.f64 = double(temp.f32);
	// fmadds f9,f30,f8,f9
	ctx.f9.f64 = double(float(std::fma(f30.f64, ctx.f8.f64, ctx.f9.f64)));
	// stfsx f9,r24,r5
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r24.u32 + ctx.r5.u32, temp.u32);
	// lwz r25,2052(r5)
	r25.u64 = REX_LOAD_U32(ctx.r5.u32 + 2052);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r24,2048(r5)
	r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 2048);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// fmadds f8,f9,f1,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, f30.f64)));
	// clrlwi r24,r24,23
	r24.u64 = r24.u32 & 0x1FF;
	// stfs f8,2068(r5)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r5.u32 + 2068, temp.u32);
	// stw r25,2052(r5)
	REX_STORE_U32(ctx.r5.u32 + 2052, r25.u32);
	// stw r24,2048(r5)
	REX_STORE_U32(ctx.r5.u32 + 2048, r24.u32);
	// lfs f1,0(r21)
	temp.u32 = REX_LOAD_U32(r21.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lwz r24,2048(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// rlwinm r25,r25,2,0,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,2060(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2060);
	ctx.f8.f64 = double(temp.f32);
	// lfs f1,2064(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2064);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r24,r24,2,0,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 + f31.f64));
	// fmadds f30,f13,f0,f9
	f30.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f30,0(r26)
	temp.f32 = float(f30.f64);
	REX_STORE_U32(r26.u32 + 0, temp.u32);
	// fmadds f0,f13,f0,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f9.f64)));
	// lfsx f13,r25,r4
	temp.u32 = REX_LOAD_U32(r25.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f13,f8,f2
	ctx.f9.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, ctx.f2.f64)));
	// stfsx f9,r24,r4
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(r24.u32 + ctx.r4.u32, temp.u32);
	// stfsu f0,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// lwz r24,2048(r4)
	r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 2048);
	// stfsu f12,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// lwz r25,2052(r4)
	r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 2052);
	// stfsu f12,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stfsu f11,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// stfsu f11,4(r26)
	ea = 4 + r26.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	r26.u32 = ea;
	// clrlwi r25,r25,23
	r25.u64 = r25.u32 & 0x1FF;
	// clrlwi r24,r24,23
	r24.u64 = r24.u32 & 0x1FF;
	// fmadds f8,f9,f1,f13
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f1.f64, ctx.f13.f64)));
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// stfs f8,2068(r4)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r4.u32 + 2068, temp.u32);
	// stw r25,2052(r4)
	REX_STORE_U32(ctx.r4.u32 + 2052, r25.u32);
	// stw r26,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, r26.u32);
	// stw r24,2048(r4)
	REX_STORE_U32(ctx.r4.u32 + 2048, r24.u32);
	// bdnz 0x82457cc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82457CC8;
loc_82458A0C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x822d4f74
	ctx.lr = 0x82458A18;
	// b 0x822d4ea0
	return;
}

DEFINE_REX_FUNC(sub_824AFD60) {
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
	ctx.lr = 0x824AFD68;
	// vspltish v13,2
	simde_mm_store_si128((simde__m128i*)ctx.v13.s16, simde_mm_set1_epi16(short(0x2)));
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_set1_epi8(char(0x0)));
	// vspltish v12,1
	simde_mm_store_si128((simde__m128i*)ctx.v12.s16, simde_mm_set1_epi16(short(0x1)));
	// add r31,r9,r5
	r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// rlwinm r30,r4,1,0,30
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r4,r11
	r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// vsrah v11,v1,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v11.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x824afed8
	if (ctx.cr6.gt) goto loc_824AFED8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b0008
	if (!ctx.cr6.gt) goto loc_824B0008;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824AFDB8:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v63,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lvlx128 v61,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v58,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v57,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v63,v58
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvrx128 v56,r29,r11
	temp.u32 = r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v62,v57
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// lvrx128 v55,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v61,v56
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v56.u8)));
	// lvrx128 v54,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v60,v55
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// vor128 v6,v59,v54
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v54.u8)));
	// vmrghb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v6
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v3,v10,v9
	simde_mm_store_si128((simde__m128i*)ctx.v3.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v2,v9,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v1,v5,v10
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vaddshs v31,v8,v4
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vslh v30,v3,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v3.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v29,v2,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v2.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v28,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v27,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v26,v30,v11
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v25,v29,v11
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v29.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v24,v28,v11
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v23,v27,v11
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v27.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
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
	// vpkshus128 v63,v20,v22
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)v20.s16)));
	// vpkshus128 v62,v21,v19
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)v21.s16)));
	// bne cr6,0x824afea4
	if (!ctx.cr6.eq) goto loc_824AFEA4;
	// vspltw128 v53,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// vspltw128 v52,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v51,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v51.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v50,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v50.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vspltw128 v49,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v49.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v48,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v48.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v47,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v46,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v46.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// stvewx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r5,r8
	ea = (ctx.r5.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r31,r8
	ea = (r31.u32 + ctx.r8.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v46,r11,r31
	ea = (ctx.r11.u32 + r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x824afec4
	goto loc_824AFEC4;
loc_824AFEA4:
	// vspltw128 v45,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v45.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v44,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v44.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v43,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v42,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v42.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// stvewx128 v45,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r31
	ea = (r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r31,r6
	ea = (r31.u32 + ctx.r6.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
loc_824AFEC4:
	// add r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// bdnz 0x824afdb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AFDB8;
	// b 0x822d4edc
	return;
loc_824AFED8:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x824b0008
	if (!ctx.cr6.gt) goto loc_824B0008;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_824AFEF0:
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lvlx128 v41,r4,r3
	temp.u32 = ctx.r4.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v40,r30,r3
	temp.u32 = r30.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v39,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v38,r29,r3
	temp.u32 = r29.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v37,r10,r3
	temp.u32 = ctx.r10.u32 + ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvrx128 v36,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// lvrx128 v35,r30,r11
	temp.u32 = r30.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v10,v41,v36
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)ctx.v36.u8)));
	// lvrx128 v34,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v9,v40,v35
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v40.u8), simde_mm_load_si128((simde__m128i*)ctx.v35.u8)));
	// lvrx128 v33,r29,r11
	temp.u32 = r29.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v8,v39,v34
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)ctx.v34.u8)));
	// lvrx128 v32,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v7,v38,v33
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v38.u8), simde_mm_load_si128((simde__m128i*)ctx.v33.u8)));
	// vor128 v6,v37,v32
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)ctx.v32.u8)));
	// vmrghb v5,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// add r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vmrglb v3,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v2,v0,v8
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v10,v0,v10
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v1,v5,v4
	simde_mm_store_si128((simde__m128i*)ctx.v1.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v4.s16)));
	// vmrglb v9,v0,v9
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vmrglb v7,v0,v7
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v29,v2,v5
	simde_mm_store_si128((simde__m128i*)v29.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16)));
	// vmrglb v30,v0,v6
	simde_mm_store_si128((simde__m128i*)v30.u8, simde_mm_unpacklo_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v31,v3,v10
	simde_mm_store_si128((simde__m128i*)v31.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v3.s16), simde_mm_load_si128((simde__m128i*)ctx.v10.s16)));
	// vmrghb v28,v0,v6
	simde_mm_store_si128((simde__m128i*)v28.u8, simde_mm_unpackhi_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vaddshs v27,v4,v8
	simde_mm_store_si128((simde__m128i*)v27.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v4.s16), simde_mm_load_si128((simde__m128i*)ctx.v8.s16)));
	// vaddshs v26,v10,v9
	simde_mm_store_si128((simde__m128i*)v26.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v10.s16), simde_mm_load_si128((simde__m128i*)ctx.v9.s16)));
	// vaddshs v25,v9,v7
	simde_mm_store_si128((simde__m128i*)v25.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v9.s16), simde_mm_load_si128((simde__m128i*)ctx.v7.s16)));
	// vaddshs v24,v7,v30
	simde_mm_store_si128((simde__m128i*)v24.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v7.s16), simde_mm_load_si128((simde__m128i*)v30.s16)));
	// vaddshs v23,v8,v28
	simde_mm_store_si128((simde__m128i*)v23.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)ctx.v8.s16), simde_mm_load_si128((simde__m128i*)v28.s16)));
	// vslh v22,v29,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v29.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v22.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v21,v31,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v31.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v21.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v20,v1,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v1.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v20.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v19,v26,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v26.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v19.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v17,v27,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v27.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v17.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v18,v25,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v25.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v18.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v16,v24,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v24.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v16.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vslh v15,v23,v12
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v23.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v12.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v15.u8, rex::ppc::simde_mm_sllv_epi16(a, shift));
	}
	// vaddshs v14,v22,v11
	simde_mm_store_si128((simde__m128i*)v14.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v22.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v10,v21,v11
	simde_mm_store_si128((simde__m128i*)ctx.v10.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v21.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v9,v20,v11
	simde_mm_store_si128((simde__m128i*)ctx.v9.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v20.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v8,v19,v11
	simde_mm_store_si128((simde__m128i*)ctx.v8.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v19.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v7,v18,v11
	simde_mm_store_si128((simde__m128i*)ctx.v7.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v18.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v6,v17,v11
	simde_mm_store_si128((simde__m128i*)ctx.v6.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v17.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v5,v16,v11
	simde_mm_store_si128((simde__m128i*)ctx.v5.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v16.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vaddshs v4,v15,v11
	simde_mm_store_si128((simde__m128i*)ctx.v4.s16, simde_mm_adds_epi16(simde_mm_load_si128((simde__m128i*)v15.s16), simde_mm_load_si128((simde__m128i*)ctx.v11.s16)));
	// vsrah v3,v14,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)v14.u8);
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
	// vsrah v1,v9,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v9.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)ctx.v1.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v31,v8,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v8.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v31.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v30,v7,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v7.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v30.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v29,v6,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v6.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v29.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v63,v3,v2
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)ctx.v2.s16), simde_mm_load_si128((simde__m128i*)ctx.v3.s16)));
	// vsrah v28,v5,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v5.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v28.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vsrah v27,v4,v13
	{
		simde__m128i a = simde_mm_load_si128((simde__m128i*)ctx.v4.u8);
		simde__m128i b = simde_mm_load_si128((simde__m128i*)ctx.v13.u8);
		simde__m128i shift = simde_mm_and_si128(b, simde_mm_set1_epi16(0xF));
		simde_mm_store_si128((simde__m128i*)v27.u8, rex::ppc::simde_mm_srav_epi16(a, shift));
	}
	// vpkshus128 v62,v1,v31
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v31.s16), simde_mm_load_si128((simde__m128i*)ctx.v1.s16)));
	// vpkshus128 v61,v29,v30
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v30.s16), simde_mm_load_si128((simde__m128i*)v29.s16)));
	// vpkshus128 v60,v27,v28
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_packus_epi16(simde_mm_load_si128((simde__m128i*)v28.s16), simde_mm_load_si128((simde__m128i*)v27.s16)));
	// stvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r5
	ea = (ctx.r9.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stvx128 v60,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// bdnz 0x824afef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_824AFEF0;
loc_824B0008:
	// b 0x822d4edc
	return;
}

DEFINE_REX_FUNC(sub_824D1C40) {
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
	// addi r11,r31,8844
	ctx.r11.s64 = r31.s64 + 8844;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x823d7748
	ctx.lr = 0x824D1C60;
	sub_823D7748(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r11,r11,21740
	ctx.r11.s64 = ctx.r11.s64 + 21740;
	// stw r11,8844(r31)
	REX_STORE_U32(r31.u32 + 8844, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_824D1E18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-27032
	ctx.r9.s64 = ctx.r11.s64 + -27032;
	// addi r11,r10,-23012
	ctx.r11.s64 = ctx.r10.s64 + -23012;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D1FF8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// lis r10,-32176
	ctx.r10.s64 = -2108686336;
	// addi r9,r11,-26680
	ctx.r9.s64 = ctx.r11.s64 + -26680;
	// addi r11,r10,-22388
	ctx.r11.s64 = ctx.r10.s64 + -22388;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r8,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_824D2298) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32176
	ctx.r9.s64 = -2108686336;
	// lis r11,-32176
	ctx.r11.s64 = -2108686336;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-20048
	ctx.r11.s64 = ctx.r11.s64 + -20048;
	// lis r5,512
	ctx.r5.s64 = 33554432;
	// lwz r9,-29316(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -29316);
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r5,r5,201
	ctx.r5.u64 = ctx.r5.u64 | 201;
	// ori r4,r4,202
	ctx.r4.u64 = ctx.r4.u64 | 202;
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

DEFINE_REX_FUNC(sub_824D2F40) {
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
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,-23184
	r31.s64 = ctx.r11.s64 + -23184;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x822d5870
	ctx.lr = 0x824D2F68;
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
	ctx.lr = 0x824D2F7C;
	sub_822D4FA0(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = r31.s64 + 600;
	// bl 0x822d5870
	ctx.lr = 0x824D2F8C;
	sub_822D5870(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
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

DEFINE_REX_FUNC(sub_824D3888) {
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
	// li r30,3
	r30.s64 = 3;
	// addi r11,r11,-9448
	ctx.r11.s64 = ctx.r11.s64 + -9448;
	// addi r31,r11,544
	r31.s64 = ctx.r11.s64 + 544;
loc_824D38AC:
	// addi r31,r31,-120
	r31.s64 = r31.s64 + -120;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821f5538
	ctx.lr = 0x824D38B8;
	sub_821F5538(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	ctx.cr0.compare<int32_t>(r30.s32, 0, ctx.xer);
	// bge 0x824d38ac
	if (!ctx.cr0.lt) goto loc_824D38AC;
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

DEFINE_REX_FUNC(sub_824D3C18) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,26252
	ctx.r3.s64 = ctx.r11.s64 + 26252;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3D70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32163
	ctx.r11.s64 = -2107834368;
	// addi r3,r11,29760
	ctx.r3.s64 = ctx.r11.s64 + 29760;
	// b 0x8227b2c8
	sub_8227B2C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_824D3EC0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20003cc
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4000) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000259
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4160) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010010
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D42E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20101a1
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4460) {
	REX_FUNC_PROLOGUE();
	// .long 0x201009d
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D45E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010015
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4760) {
	REX_FUNC_PROLOGUE();
	// .long 0x2000049
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D48E0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20001f8
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4A60) {
	REX_FUNC_PROLOGUE();
	// .long 0x2010192
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_824D4BE0) {
	REX_FUNC_PROLOGUE();
	// .long 0x20100af
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

